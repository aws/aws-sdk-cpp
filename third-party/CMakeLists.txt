cmake_minimum_required(VERSION 3.1)

if(POLICY CMP0054)
    cmake_policy(SET CMP0054 NEW)
endif()

project(AWSSDK_DEPS)

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

if(CMAKE_INSTALL_LIBDIR STREQUAL "")
    unset(CMAKE_INSTALL_LIBDIR CACHE)
endif()

if(CMAKE_INSTALL_BINDIR STREQUAL "")
    unset(CMAKE_INSTALL_BINDIR CACHE)
endif()

if (UNIX AND NOT APPLE)
    include(GNUInstallDirs)
endif()

if(NOT DEFINED CMAKE_INSTALL_LIBDIR)
    set(CMAKE_INSTALL_LIBDIR "lib")
endif()

if(NOT DEFINED CMAKE_INSTALL_BINDIR)
    set(CMAKE_INSTALL_BINDIR "bin")
endif()

include(ExternalProject)

set(AWS_DEPS_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}" CACHE PATH "Dependencies install directory.")
set(AWS_DEPS_LIB_DIR "${CMAKE_INSTALL_LIBDIR}" CACHE PATH "Dependencies library install directory.")
set(AWS_DEPS_BIN_DIR "${CMAKE_INSTALL_BINDIR}" CACHE PATH "Dependencies binary install directory.")
set(AWS_DEPS_BUILD_DIR "${CMAKE_BINARY_DIR}/build" CACHE PATH "Dependencies build directory.")
set(AWS_DEPS_DOWNLOAD_DIR "${AWS_DEPS_BUILD_DIR}/downloads" CACHE PATH "Dependencies download directory.")

set(AWS_C_COMMON_URL "https://github.com/awslabs/aws-c-common.git")
set(AWS_C_COMMON_TAG "29a7375a")
include(BuildAwsCCommon)

set(AWS_CHECKSUMS_URL "https://github.com/awslabs/aws-checksums.git")
set(AWS_CHECKSUMS_TAG "v0.1.1")
include(BuildAwsChecksums)

set(AWS_EVENT_STREAM_URL "https://github.com/awslabs/aws-c-event-stream.git")
set(AWS_EVENT_STREAM_TAG "v0.1.1")
include(BuildAwsEventStream)

add_dependencies(AwsCEventStream AwsCCommon AwsChecksums)



