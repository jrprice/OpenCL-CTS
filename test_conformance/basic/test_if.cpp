//
// Copyright (c) 2017 The Khronos Group Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#include "harness/compat.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>


#include "procs.h"

const char *conditional_kernel_code =
"__kernel void test_if(__global int *src, __global int *dst)\n"
"{\n"
"    int  tid = get_global_id(0);\n"
"\n"
"    if (src[tid] == 0)\n"
"        dst[tid] = 0x12345678;\n"
"    else if (src[tid] == 1)\n"
"        dst[tid] = 0x23456781;\n"
"    else if (src[tid] == 2)\n"
"        dst[tid] = 0x34567812;\n"
"    else if (src[tid] == 3)\n"
"        dst[tid] = 0x45678123;\n"
"    else if (src[tid] == 4)\n"
"        dst[tid] = 0x56781234;\n"
"    else if (src[tid] == 5)\n"
"        dst[tid] = 0x67812345;\n"
"    else if (src[tid] == 6)\n"
"        dst[tid] = 0x78123456;\n"
"    else if (src[tid] == 7)\n"
"        dst[tid] = 0x81234567;\n"
"    else\n"
"        dst[tid] = 0x7FFFFFFF;\n"
"\n"
"}\n";

const int results[] = {
    0x12345678, 0x23456781, 0x34567812, 0x45678123,
    0x56781234, 0x67812345, 0x78123456, 0x81234567,
};

int verify_if(int *inptr, int *outptr, int n)
{
    int r, i;

    for (i = 0; i < n; i++)
    {
        if (inptr[i] <= 7)
            r = results[inptr[i]];
        else
            r = 0x7FFFFFFF;

        if (r != outptr[i])
        {
            log_error("IF test failed\n");
            return -1;
        }
    }

    log_info("IF test passed\n");
    return 0;
}

int test_if(cl_device_id device, cl_context context, cl_command_queue queue,
            int num_elements)
{
    cl_mem streams[2];
    cl_int *input_ptr, *output_ptr;
    cl_program program;
    cl_kernel kernel;
    size_t threads[1];
    int err, i;
    MTdata d = init_genrand(gRandomSeed);

    size_t length = sizeof(cl_int) * num_elements;
    input_ptr = (cl_int *)malloc(length);
    output_ptr = (cl_int *)malloc(length);

    streams[0] = clCreateBuffer(context, CL_MEM_READ_WRITE, length, NULL, NULL);
    if (!streams[0])
    {
        log_error("clCreateBuffer failed\n");
        return -1;
    }
    streams[1] = clCreateBuffer(context, CL_MEM_READ_WRITE, length, NULL, NULL);
    if (!streams[1])
    {
        log_error("clCreateBuffer failed\n");
        return -1;
    }

    for (i = 0; i < num_elements; i++)
        input_ptr[i] = (int)get_random_float(0, 32, d);

    free_mtdata(d);
    d = NULL;

    err = clEnqueueWriteBuffer(queue, streams[0], CL_TRUE, 0, length, input_ptr,
                               0, NULL, NULL);
    if (err != CL_SUCCESS)
    {
        log_error("clEnqueueWriteBuffer failed\n");
        return -1;
    }

    err = create_single_kernel_helper(context, &program, &kernel, 1,
                                      &conditional_kernel_code, "test_if");
    if (err) return -1;

    err = clSetKernelArg(kernel, 0, sizeof streams[0], &streams[0]);
    err |= clSetKernelArg(kernel, 1, sizeof streams[1], &streams[1]);
    if (err != CL_SUCCESS)
    {
        log_error("clSetKernelArgs failed\n");
        return -1;
    }

    threads[0] = (unsigned int)num_elements;
    err = clEnqueueNDRangeKernel(queue, kernel, 1, NULL, threads, NULL, 0, NULL,
                                 NULL);
    if (err != CL_SUCCESS)
    {
        log_error("clEnqueueNDRangeKernel failed\n");
        return -1;
    }

    err = clEnqueueReadBuffer(queue, streams[1], CL_TRUE, 0, length, output_ptr,
                              0, NULL, NULL);
    if (err != CL_SUCCESS)
    {
        log_error("clReadArray failed\n");
        return -1;
    }

    err = verify_if(input_ptr, output_ptr, num_elements);

    // cleanup
    clReleaseMemObject(streams[0]);
    clReleaseMemObject(streams[1]);
    clReleaseKernel(kernel);
    clReleaseProgram(program);
    free(input_ptr);
    free(output_ptr);

    return err;
}
