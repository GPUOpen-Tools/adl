## Copyright (c) 2025-2026 Advanced Micro Devices, Inc. All rights reserved.
cmake_minimum_required(VERSION 3.25)

project(ADL LANGUAGES C)

add_library(adl INTERFACE)
add_library(AMD::adl ALIAS adl)
target_sources(adl PUBLIC
    FILE_SET public_headers
    TYPE "HEADERS"
    BASE_DIRS "include"
    FILES
        "include/adl_defines.h"
        "include/adl_sdk.h"
        "include/adl_structures.h"
)

message(WARNING "This repository has been deprecated and will not receive more updates!")
