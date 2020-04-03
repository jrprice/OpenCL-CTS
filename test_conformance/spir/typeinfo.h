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
TYPE_HNDL("_Bool", false, 0, 1, false, true, KernelArgGeneratorT<bool>)
TYPE_HNDL("_Bool*", true, 0, 16, false, true, KernelArgGeneratorT<bool>)
TYPE_HNDL("bool", false, 0, 1, false, true, KernelArgGeneratorT<bool>)
TYPE_HNDL("bool*", true, 0, 16, false, true, KernelArgGeneratorT<bool>)
TYPE_HNDL("char", false, 0, 1, 0x0, 0x7f, KernelArgGeneratorT<cl_char>)
TYPE_HNDL("char*", true, 0, 16, 0x0, 0x7f, KernelArgGeneratorT<cl_char>)
TYPE_HNDL("char16", false, 0, 16, 0x0, 0x7f, KernelArgGeneratorT<cl_char>)
TYPE_HNDL("char16*", true, 0, 16, 0x0, 0x7f, KernelArgGeneratorT<cl_char>)
TYPE_HNDL("char2", false, 0, 2, 0x0, 0x7f, KernelArgGeneratorT<cl_char>)
TYPE_HNDL("char2*", true, 0, 2, 0x0, 0x7f, KernelArgGeneratorT<cl_char>)
TYPE_HNDL("char3", false, 0, 3, 0x0, 0x7f, KernelArgGeneratorT<cl_char>)
TYPE_HNDL("char3*", true, 0, 3, 0x0, 0x7f, KernelArgGeneratorT<cl_char>)
TYPE_HNDL("char4", false, 0, 4, 0x0, 0x7f, KernelArgGeneratorT<cl_char>)
TYPE_HNDL("char4*", true, 0, 4, 0x0, 0x7f, KernelArgGeneratorT<cl_char>)
TYPE_HNDL("char8", false, 0, 8, 0x0, 0x7f, KernelArgGeneratorT<cl_char>)
TYPE_HNDL("char8*", true, 0, 8, 0x0, 0x7f, KernelArgGeneratorT<cl_char>)
TYPE_HNDL("double", false, 0, 1, -0x40000000, 0x40000000,
          KernelArgGeneratorT<cl_double>)
TYPE_HNDL("double*", true, 0, 16, -0x40000000, 0x40000000,
          KernelArgGeneratorT<cl_double>)
TYPE_HNDL("double16", false, 0, 16, -0x40000000, 0x40000000,
          KernelArgGeneratorT<cl_double>)
TYPE_HNDL("double16*", true, 0, 16, -0x40000000, 0x40000000,
          KernelArgGeneratorT<cl_double>)
TYPE_HNDL("double2", false, 0, 2, -0x40000000, 0x40000000,
          KernelArgGeneratorT<cl_double>)
TYPE_HNDL("double2*", true, 0, 2, -0x40000000, 0x40000000,
          KernelArgGeneratorT<cl_double>)
TYPE_HNDL("double3", false, 0, 3, -0x40000000, 0x40000000,
          KernelArgGeneratorT<cl_double>)
TYPE_HNDL("double3*", true, 0, 3, -0x40000000, 0x40000000,
          KernelArgGeneratorT<cl_double>)
TYPE_HNDL("double4", false, 0, 4, -0x40000000, 0x40000000,
          KernelArgGeneratorT<cl_double>)
TYPE_HNDL("double4*", true, 0, 4, -0x40000000, 0x40000000,
          KernelArgGeneratorT<cl_double>)
TYPE_HNDL("double8", false, 0, 8, -0x40000000, 0x40000000,
          KernelArgGeneratorT<cl_double>)
TYPE_HNDL("double8*", true, 0, 8, -0x40000000, 0x40000000,
          KernelArgGeneratorT<cl_double>)
TYPE_HNDL("enum enum_type", false, 0, 1, 0, 2,
          KernelArgGeneratorT<cl_int>) // enum defines 0..2
TYPE_HNDL("enum enum_type*", true, 0, 1, 0, 2,
          KernelArgGeneratorT<cl_int>) // enum defines 0..2
TYPE_HNDL("float", false, 0, 1, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>)
TYPE_HNDL("float*", true, 0, 16, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>)
TYPE_HNDL("float16", false, 0, 16, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>)
TYPE_HNDL("float16*", true, 0, 16, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>)
TYPE_HNDL("float2", false, 0, 2, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>)
TYPE_HNDL("float2*", true, 0, 2, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>)
TYPE_HNDL("float3", false, 0, 3, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>)
TYPE_HNDL("float3*", true, 0, 3, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>)
TYPE_HNDL("float4", false, 0, 4, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>)
TYPE_HNDL("float4*", true, 0, 4, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>)
TYPE_HNDL("float8", false, 0, 8, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>)
TYPE_HNDL("float8*", true, 0, 8, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>)
TYPE_HNDL("half", false, 0, 1, 0x0, 0x7fff, KernelArgGeneratorT<cl_half>)
TYPE_HNDL("half*", true, 0, 16, 0x0, 0x7fff, KernelArgGeneratorT<cl_half>)
TYPE_HNDL("half16", false, 0, 16, 0x0, 0x7fff, KernelArgGeneratorT<cl_half>)
TYPE_HNDL("half16*", true, 0, 16, 0x0, 0x7fff, KernelArgGeneratorT<cl_half>)
TYPE_HNDL("half2", false, 0, 2, 0x0, 0x7fff, KernelArgGeneratorT<cl_half>)
TYPE_HNDL("half2*", true, 0, 2, 0x0, 0x7fff, KernelArgGeneratorT<cl_half>)
TYPE_HNDL("half3", false, 0, 3, 0x0, 0x7fff, KernelArgGeneratorT<cl_half>)
TYPE_HNDL("half3*", true, 0, 3, 0x0, 0x7fff, KernelArgGeneratorT<cl_half>)
TYPE_HNDL("half4", false, 0, 4, 0x0, 0x7fff, KernelArgGeneratorT<cl_half>)
TYPE_HNDL("half4*", true, 0, 4, 0x0, 0x7fff, KernelArgGeneratorT<cl_half>)
TYPE_HNDL("half8", false, 0, 8, 0x0, 0x7fff, KernelArgGeneratorT<cl_half>)
TYPE_HNDL("half8*", true, 0, 8, 0x0, 0x7fff, KernelArgGeneratorT<cl_half>)
TYPE_HNDL("image1d_array_t", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dArray<CL_SIGNED_INT32>)
TYPE_HNDL("image1d_buffer_t", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dBuffer<CL_SIGNED_INT32>)
TYPE_HNDL("image1d_t", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1d<CL_SIGNED_INT32>)
TYPE_HNDL("image2d_array_t", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2dArray<CL_SIGNED_INT32>)
TYPE_HNDL("image2d_t", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2d<CL_SIGNED_INT32>)
TYPE_HNDL("image3d_t", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage3d<CL_SIGNED_INT32>)
TYPE_HNDL("image1d_array_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dArray<CL_FLOAT>)
TYPE_HNDL("image1d_array_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dArray<CL_SIGNED_INT32>)
TYPE_HNDL("image1d_array_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dArray<CL_UNSIGNED_INT32>)
TYPE_HNDL("image1d_buffer_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dBuffer<CL_FLOAT>)
TYPE_HNDL("image1d_buffer_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dBuffer<CL_SIGNED_INT32>)
TYPE_HNDL("image1d_buffer_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dBuffer<CL_UNSIGNED_INT32>)
TYPE_HNDL("image1d_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1d<CL_FLOAT>)
TYPE_HNDL("image1d_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1d<CL_SIGNED_INT32>)
TYPE_HNDL("image1d_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1d<CL_UNSIGNED_INT32>)
TYPE_HNDL("image2d_array_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2dArray<CL_FLOAT>)
TYPE_HNDL("image2d_array_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2dArray<CL_SIGNED_INT32>)
TYPE_HNDL("image2d_array_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2dArray<CL_UNSIGNED_INT32>)
TYPE_HNDL("image2d_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2d<CL_FLOAT>)
TYPE_HNDL("image2d_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2d<CL_SIGNED_INT32>)
TYPE_HNDL("image2d_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2d<CL_UNSIGNED_INT32>)
TYPE_HNDL("image3d_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage3d<CL_FLOAT>)
TYPE_HNDL("image3d_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage3d<CL_SIGNED_INT32>)
TYPE_HNDL("image3d_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage3d<CL_UNSIGNED_INT32>)
TYPE_HNDL("image_kernel_data", false, 0, 1, 0x0, 0xffffffff,
          KernelStructTypeArgGenerator<image_kernel_data>) // image_kernel_data
                                                           // defines as 5 X int
TYPE_HNDL("image_kernel_data*", true, 0, 1, 0x0, 0xffffffff,
          KernelStructTypeArgGenerator<image_kernel_data>) // image_kernel_data
                                                           // defines as 5 X int
TYPE_HNDL("read_only_image1d_array_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dArray<CL_FLOAT>)
TYPE_HNDL("read_only_image1d_array_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dArray<CL_SIGNED_INT32>)
TYPE_HNDL("read_only_image1d_array_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dArray<CL_UNSIGNED_INT32>)
TYPE_HNDL("read_only_image1d_buffer_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dBuffer<CL_FLOAT>)
TYPE_HNDL("read_only_image1d_buffer_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dBuffer<CL_SIGNED_INT32>)
TYPE_HNDL("read_only_image1d_buffer_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dBuffer<CL_UNSIGNED_INT32>)
TYPE_HNDL("read_only_image1d_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1d<CL_FLOAT>)
TYPE_HNDL("read_only_image1d_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1d<CL_SIGNED_INT32>)
TYPE_HNDL("read_only_image1d_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1d<CL_UNSIGNED_INT32>)
TYPE_HNDL("read_only_image2d_array_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2dArray<CL_FLOAT>)
TYPE_HNDL("read_only_image2d_array_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2dArray<CL_SIGNED_INT32>)
TYPE_HNDL("read_only_image2d_array_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2dArray<CL_UNSIGNED_INT32>)
TYPE_HNDL("read_only_image2d_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2d<CL_FLOAT>)
TYPE_HNDL("read_only_image2d_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2d<CL_SIGNED_INT32>)
TYPE_HNDL("read_only_image2d_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2d<CL_UNSIGNED_INT32>)
TYPE_HNDL("read_only_image3d_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage3d<CL_FLOAT>)
TYPE_HNDL("read_only_image3d_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage3d<CL_SIGNED_INT32>)
TYPE_HNDL("read_only_image3d_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage3d<CL_UNSIGNED_INT32>)
TYPE_HNDL("write_only_image1d_array_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dArray<CL_FLOAT>)
TYPE_HNDL("write_only_image1d_array_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dArray<CL_SIGNED_INT32>)
TYPE_HNDL("write_only_image1d_array_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dArray<CL_UNSIGNED_INT32>)
TYPE_HNDL("write_only_image1d_buffer_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dBuffer<CL_FLOAT>)
TYPE_HNDL("write_only_image1d_buffer_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dBuffer<CL_SIGNED_INT32>)
TYPE_HNDL("write_only_image1d_buffer_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1dBuffer<CL_UNSIGNED_INT32>)
TYPE_HNDL("write_only_image1d_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1d<CL_FLOAT>)
TYPE_HNDL("write_only_image1d_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1d<CL_SIGNED_INT32>)
TYPE_HNDL("write_only_image1d_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage1d<CL_UNSIGNED_INT32>)
TYPE_HNDL("write_only_image2d_array_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2dArray<CL_FLOAT>)
TYPE_HNDL("write_only_image2d_array_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2dArray<CL_SIGNED_INT32>)
TYPE_HNDL("write_only_image2d_array_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2dArray<CL_UNSIGNED_INT32>)
TYPE_HNDL("write_only_image2d_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2d<CL_FLOAT>)
TYPE_HNDL("write_only_image2d_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2d<CL_SIGNED_INT32>)
TYPE_HNDL("write_only_image2d_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage2d<CL_UNSIGNED_INT32>)
TYPE_HNDL("write_only_image3d_float", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage3d<CL_FLOAT>)
TYPE_HNDL("write_only_image3d_int", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage3d<CL_SIGNED_INT32>)
TYPE_HNDL("write_only_image3d_uint", false, 0, 1, 0x0, 0x7f,
          KernelArgGeneratorImage3d<CL_UNSIGNED_INT32>)
TYPE_HNDL("int", false, 0, 1, 0x0, 0x7fffffff, KernelArgGeneratorT<cl_int>)
TYPE_HNDL("int*", true, 0, 16, 0x0, 0x7fffffff, KernelArgGeneratorT<cl_int>)
TYPE_HNDL("int16", false, 0, 16, 0x0, 0x7fffffff, KernelArgGeneratorT<cl_int>)
TYPE_HNDL("int16*", true, 0, 16, 0x0, 0x7fffffff, KernelArgGeneratorT<cl_int>)
TYPE_HNDL("int2", false, 0, 2, 0x0, 0x7fffffff, KernelArgGeneratorT<cl_int>)
TYPE_HNDL("int2*", true, 0, 2, 0x0, 0x7fffffff, KernelArgGeneratorT<cl_int>)
TYPE_HNDL("int3", false, 0, 3, 0x0, 0x7fffffff, KernelArgGeneratorT<cl_int>)
TYPE_HNDL("int3*", true, 0, 3, 0x0, 0x7fffffff, KernelArgGeneratorT<cl_int>)
TYPE_HNDL("int4", false, 0, 4, 0x0, 0x7fffffff, KernelArgGeneratorT<cl_int>)
TYPE_HNDL("int4*", true, 0, 4, 0x0, 0x7fffffff, KernelArgGeneratorT<cl_int>)
TYPE_HNDL("int8", false, 0, 8, 0x0, 0x7fffffff, KernelArgGeneratorT<cl_int>)
TYPE_HNDL("int8*", true, 0, 8, 0x0, 0x7fffffff, KernelArgGeneratorT<cl_int>)
TYPE_HNDL("intptr_t", false, 0, 1, 0x0, 0xffffffff, KernelArgGeneratorT<size_t>)
TYPE_HNDL("intptr_t*", true, 0, 1, 0x0, 0xffffffff, KernelArgGeneratorT<size_t>)
TYPE_HNDL("long", false, 0, 1, 0x0, 0x7fffffffffffffff,
          KernelArgGeneratorT<cl_long>)
TYPE_HNDL("long*", true, 0, 16, 0x0, 0x7fffffffffffffff,
          KernelArgGeneratorT<cl_long>)
TYPE_HNDL("long16", false, 0, 16, 0x0, 0x7fffffffffffffff,
          KernelArgGeneratorT<cl_long>)
TYPE_HNDL("long16*", true, 0, 16, 0x0, 0x7fffffffffffffff,
          KernelArgGeneratorT<cl_long>)
TYPE_HNDL("long2", false, 0, 2, 0x0, 0x7fffffffffffffff,
          KernelArgGeneratorT<cl_long>)
TYPE_HNDL("long2*", true, 0, 2, 0x0, 0x7fffffffffffffff,
          KernelArgGeneratorT<cl_long>)
TYPE_HNDL("long3", false, 0, 3, 0x0, 0x7fffffffffffffff,
          KernelArgGeneratorT<cl_long>)
TYPE_HNDL("long3*", true, 0, 3, 0x0, 0x7fffffffffffffff,
          KernelArgGeneratorT<cl_long>)
TYPE_HNDL("long4", false, 0, 4, 0x0, 0x7fffffffffffffff,
          KernelArgGeneratorT<cl_long>)
TYPE_HNDL("long4*", true, 0, 4, 0x0, 0x7fffffffffffffff,
          KernelArgGeneratorT<cl_long>)
TYPE_HNDL("long8", false, 0, 8, 0x0, 0x7fffffffffffffff,
          KernelArgGeneratorT<cl_long>)
TYPE_HNDL("long8*", true, 0, 8, 0x0, 0x7fffffffffffffff,
          KernelArgGeneratorT<cl_long>)
TYPE_HNDL("ptrdiff_t", false, 0, 1, 0x0, 0xffffffff,
          KernelArgGeneratorT<size_t>)
TYPE_HNDL("ptrdiff_t*", true, 0, 1, 0x0, 0xffffffff,
          KernelArgGeneratorT<size_t>)
TYPE_HNDL("sampler_t", false, 0, 1, 0x0, 0x7f, KernelArgGeneratorSampler)
TYPE_HNDL("short", false, 0, 1, 0x0, 0x7fff, KernelArgGeneratorT<cl_short>)
TYPE_HNDL("short*", true, 0, 16, 0x0, 0x7fff, KernelArgGeneratorT<cl_short>)
TYPE_HNDL("short16", false, 0, 16, 0x0, 0x7fff, KernelArgGeneratorT<cl_short>)
TYPE_HNDL("short16*", true, 0, 16, 0x0, 0x7fff, KernelArgGeneratorT<cl_short>)
TYPE_HNDL("short2", false, 0, 2, 0x0, 0x7fff, KernelArgGeneratorT<cl_short>)
TYPE_HNDL("short2*", true, 0, 2, 0x0, 0x7fff, KernelArgGeneratorT<cl_short>)
TYPE_HNDL("short3", false, 0, 3, 0x0, 0x7fff, KernelArgGeneratorT<cl_short>)
TYPE_HNDL("short3*", true, 0, 3, 0x0, 0x7fff, KernelArgGeneratorT<cl_short>)
TYPE_HNDL("short4", false, 0, 4, 0x0, 0x7fff, KernelArgGeneratorT<cl_short>)
TYPE_HNDL("short4*", true, 0, 4, 0x0, 0x7fff, KernelArgGeneratorT<cl_short>)
TYPE_HNDL("short8", false, 0, 8, 0x0, 0x7fff, KernelArgGeneratorT<cl_short>)
TYPE_HNDL("short8*", true, 0, 8, 0x0, 0x7fff, KernelArgGeneratorT<cl_short>)
TYPE_HNDL("size_t", false, 0, 1, 0x0, 0xffffffff, KernelArgGeneratorT<size_t>)
TYPE_HNDL("size_t*", true, 0, 1, 0x0, 0xffffffff, KernelArgGeneratorT<size_t>)
TYPE_HNDL("struct", false, 0, 1, -0x01000000, 0x01000000, KernelArgGeneratorNI)
TYPE_HNDL("struct struct_type", false, 0, 1, -0x01000000, 0x01000000,
          KernelStructTypeArgGenerator<
          typedef_struct_type>) // struct_type defines as {float4, int}
TYPE_HNDL("struct struct_type*", true, 0, 1, -0x01000000, 0x01000000,
          KernelStructTypeArgGenerator<
          typedef_struct_type>) // struct_type defines as {float4, int}
TYPE_HNDL("testStruct", false, 0, 1, 0x0, 0xffffffff,
          KernelStructTypeArgGenerator<testStruct>) // testStruct
TYPE_HNDL("testStruct*", true, 0, 1, 0x0, 0xffffffff,
          KernelStructTypeArgGenerator<testStruct>) // testStruct
TYPE_HNDL("typedef_enum_type", false, 0, 1, 0, 2, KernelArgGeneratorT<cl_int>)
TYPE_HNDL("typedef_enum_type*", true, 0, 1, 0, 2, KernelArgGeneratorT<cl_int>)
TYPE_HNDL("typedef_struct_type", false, 0, 1, -0x01000000, 0x01000000,
          KernelStructTypeArgGenerator<
          typedef_struct_type>) // typedef_struct_type defines as {float4, int}
TYPE_HNDL("typedef_struct_type*", true, 0, 1, -0x01000000, 0x01000000,
          KernelStructTypeArgGenerator<
          typedef_struct_type>) // typedef_struct_type defines as {float4, int}
TYPE_HNDL("typedef_type", false, 0, 4, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>) // typeded_type defines as float4
TYPE_HNDL("typedef_type*", true, 0, 4, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>) // typeded_type defines as float4
TYPE_HNDL(
"typedef_union_type", false, 0, 4, -0x01000000, 0x01000000,
KernelArgGeneratorT<cl_float>) // typedef_union_type defines as float4/int4
TYPE_HNDL(
"typedef_union_type*", true, 0, 4, -0x01000000, 0x01000000,
KernelArgGeneratorT<cl_float>) // typedef_union_type defines as float4/int4
TYPE_HNDL("uchar", false, 0, 1, 0x0, 0xff, KernelArgGeneratorT<cl_uchar>)
TYPE_HNDL("uchar*", true, 0, 16, 0x0, 0xff, KernelArgGeneratorT<cl_uchar>)
TYPE_HNDL("uchar16", false, 0, 16, 0x0, 0xff, KernelArgGeneratorT<cl_uchar>)
TYPE_HNDL("uchar16*", true, 0, 16, 0x0, 0xff, KernelArgGeneratorT<cl_uchar>)
TYPE_HNDL("uchar2", false, 0, 2, 0x0, 0xff, KernelArgGeneratorT<cl_uchar>)
TYPE_HNDL("uchar2*", true, 0, 2, 0x0, 0xff, KernelArgGeneratorT<cl_uchar>)
TYPE_HNDL("uchar3", false, 0, 3, 0x0, 0xff, KernelArgGeneratorT<cl_uchar>)
TYPE_HNDL("uchar3*", true, 0, 3, 0x0, 0xff, KernelArgGeneratorT<cl_uchar>)
TYPE_HNDL("uchar4", false, 0, 4, 0x0, 0xff, KernelArgGeneratorT<cl_uchar>)
TYPE_HNDL("uchar4*", true, 0, 4, 0x0, 0xff, KernelArgGeneratorT<cl_uchar>)
TYPE_HNDL("uchar8", false, 0, 8, 0x0, 0xff, KernelArgGeneratorT<cl_uchar>)
TYPE_HNDL("uchar8*", true, 0, 8, 0x0, 0xff, KernelArgGeneratorT<cl_uchar>)
TYPE_HNDL("uint", false, 0, 1, 0x0, 0xffffffff, KernelArgGeneratorT<cl_uint>)
TYPE_HNDL("uint*", true, 0, 16, 0x0, 0xffffffff, KernelArgGeneratorT<cl_uint>)
TYPE_HNDL("uint16", false, 0, 16, 0x0, 0xffffffff, KernelArgGeneratorT<cl_uint>)
TYPE_HNDL("uint16*", true, 0, 16, 0x0, 0xffffffff, KernelArgGeneratorT<cl_uint>)
TYPE_HNDL("uint2", false, 0, 2, 0x0, 0xffffffff, KernelArgGeneratorT<cl_uint>)
TYPE_HNDL("uint2*", true, 0, 2, 0x0, 0xffffffff, KernelArgGeneratorT<cl_uint>)
TYPE_HNDL("uint3", false, 0, 3, 0x0, 0xffffffff, KernelArgGeneratorT<cl_uint>)
TYPE_HNDL("uint3*", true, 0, 3, 0x0, 0xffffffff, KernelArgGeneratorT<cl_uint>)
TYPE_HNDL("uint4", false, 0, 4, 0x0, 0xffffffff, KernelArgGeneratorT<cl_uint>)
TYPE_HNDL("uint4*", true, 0, 4, 0x0, 0xffffffff, KernelArgGeneratorT<cl_uint>)
TYPE_HNDL("uint8", false, 0, 8, 0x0, 0xffffffff, KernelArgGeneratorT<cl_uint>)
TYPE_HNDL("uint8*", true, 0, 8, 0x0, 0xffffffff, KernelArgGeneratorT<cl_uint>)
TYPE_HNDL("uintptr_t", false, 0, 1, 0x0, 0xffffffff,
          KernelArgGeneratorT<size_t>)
TYPE_HNDL("uintptr_t*", true, 0, 1, 0x0, 0xffffffff,
          KernelArgGeneratorT<size_t>)
TYPE_HNDL("ulong", false, 0, 1, 0x0, 0xffffffffffffffff,
          KernelArgGeneratorT<cl_ulong>)
TYPE_HNDL("ulong*", true, 0, 16, 0x0, 0xffffffffffffffff,
          KernelArgGeneratorT<cl_ulong>)
TYPE_HNDL("ulong16", false, 0, 16, 0x0, 0xffffffffffffffff,
          KernelArgGeneratorT<cl_ulong>)
TYPE_HNDL("ulong16*", true, 0, 16, 0x0, 0xffffffffffffffff,
          KernelArgGeneratorT<cl_ulong>)
TYPE_HNDL("ulong2", false, 0, 2, 0x0, 0xffffffffffffffff,
          KernelArgGeneratorT<cl_ulong>)
TYPE_HNDL("ulong2*", true, 0, 2, 0x0, 0xffffffffffffffff,
          KernelArgGeneratorT<cl_ulong>)
TYPE_HNDL("ulong3", false, 0, 3, 0x0, 0xffffffffffffffff,
          KernelArgGeneratorT<cl_ulong>)
TYPE_HNDL("ulong3*", true, 0, 3, 0x0, 0xffffffffffffffff,
          KernelArgGeneratorT<cl_ulong>)
TYPE_HNDL("ulong4", false, 0, 4, 0x0, 0xffffffffffffffff,
          KernelArgGeneratorT<cl_ulong>)
TYPE_HNDL("ulong4*", true, 0, 4, 0x0, 0xffffffffffffffff,
          KernelArgGeneratorT<cl_ulong>)
TYPE_HNDL("ulong8", false, 0, 8, 0x0, 0xffffffffffffffff,
          KernelArgGeneratorT<cl_ulong>)
TYPE_HNDL("ulong8*", true, 0, 8, 0x0, 0xffffffffffffffff,
          KernelArgGeneratorT<cl_ulong>)
TYPE_HNDL(
"union union_type", false, 0, 4, -0x01000000, 0x01000000,
KernelArgGeneratorT<cl_float>) // union union_type defines as float4/int4
TYPE_HNDL(
"union union_type*", true, 0, 4, -0x01000000, 0x01000000,
KernelArgGeneratorT<cl_float>) // union union_type defines as float4/int4
TYPE_HNDL("union_type", false, 0, 4, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>) // union_type defines as float4/int4
TYPE_HNDL("union_type*", true, 0, 4, -0x01000000, 0x01000000,
          KernelArgGeneratorT<cl_float>) // union_type defines as float4/int4
TYPE_HNDL("ushort", false, 0, 1, 0x0, 0xffff, KernelArgGeneratorT<cl_ushort>)
TYPE_HNDL("ushort*", true, 0, 16, 0x0, 0xffff, KernelArgGeneratorT<cl_ushort>)
TYPE_HNDL("ushort16", false, 0, 16, 0x0, 0xffff, KernelArgGeneratorT<cl_ushort>)
TYPE_HNDL("ushort16*", true, 0, 16, 0x0, 0xffff, KernelArgGeneratorT<cl_ushort>)
TYPE_HNDL("ushort2", false, 0, 2, 0x0, 0xffff, KernelArgGeneratorT<cl_ushort>)
TYPE_HNDL("ushort2*", true, 0, 2, 0x0, 0xffff, KernelArgGeneratorT<cl_ushort>)
TYPE_HNDL("ushort3", false, 0, 3, 0x0, 0xffff, KernelArgGeneratorT<cl_ushort>)
TYPE_HNDL("ushort3*", true, 0, 3, 0x0, 0xffff, KernelArgGeneratorT<cl_ushort>)
TYPE_HNDL("ushort4", false, 0, 4, 0x0, 0xffff, KernelArgGeneratorT<cl_ushort>)
TYPE_HNDL("ushort4*", true, 0, 4, 0x0, 0xffff, KernelArgGeneratorT<cl_ushort>)
TYPE_HNDL("ushort8", false, 0, 8, 0x0, 0xffff, KernelArgGeneratorT<cl_ushort>)
TYPE_HNDL("ushort8*", true, 0, 8, 0x0, 0xffff, KernelArgGeneratorT<cl_ushort>)
TYPE_HNDL("void*", true, 0, 16, 0x0, 0xff, KernelArgGeneratorT<cl_char>)
TYPE_HNDL("work_item_data", false, 0, 1, 0x0, 0xffffffff,
          KernelStructTypeArgGenerator<
          work_item_data>) // work_item_data defines as uint, 6 X uint[3]
TYPE_HNDL("work_item_data*", true, 0, 1, 0x0, 0xffffffff,
          KernelStructTypeArgGenerator<
          work_item_data>) // work_item_data defines as uint, 6 X uint[3]
