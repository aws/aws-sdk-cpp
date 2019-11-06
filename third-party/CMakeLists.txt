cmake_minimum_required(VERSION 3.1)

if(POLICY CMP0054)
    cmake_policy(SET CMP0054 NEW)
endif()

project(AWSSDK_DEPS)

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

include(ExternalProject)

set(AWS_DEPS_INSTALL_DIR "${CMAKE_INSTALL_PREFIX}" CACHE PATH "Dependencies install directory.")
set(AWS_DEPS_BUILD_DIR "${CMAKE_BINARY_DIR}/build" CACHE PATH "Dependencies build directory.")
set(AWS_DEPS_DOWNLOAD_DIR "${AWS_DEPS_BUILD_DIR}/downloads" CACHE PATH "Dependencies download directory.")

set(AWS_C_COMMON_URL "https://github.com/awslabs/aws-c-common.git")
set(AWS_C_COMMON_TAG "v0.4.15")
include(BuildAwsCCommon)

set(AWS_CHECKSUMS_URL "https://github.com/awslabs/aws-checksums.git")
set(AWS_CHECKSUMS_TAG "v0.1.5")
include(BuildAwsChecksums)

set(AWS_EVENT_STREAM_URL "https://github.com/awslabs/aws-c-event-stream.git")
set(AWS_EVENT_STREAM_TAG "v0.1.4")
include(BuildAwsEventStream)

add_dependencies(AwsCEventStream AwsCCommon AwsChecksums)