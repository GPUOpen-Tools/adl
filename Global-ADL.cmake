## Copyright (c) 2018-2026 Advanced Micro Devices, Inc. All rights reserved.
cmake_minimum_required(VERSION 3.10)

## Define AMD ADL directory
set(ADL_DIR ${COMMON_DIR}/Lib/AMD/ADL)

## Include directory
set(ADDITIONAL_INCLUDE_DIRECTORIES ${ADDITIONAL_INCLUDE_DIRECTORIES}
                                   ${ADL_DIR}/include)

message(WARNING "This repository has been deprecated and will not receive more updates!")
