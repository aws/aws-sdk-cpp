# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#

cmake_minimum_required (VERSION 3.1)

option(STANDALONE "If enabled, the integration tests will be configured for a standalone custom client." ON)
if(STANDALONE)
    add_definitions(-DSTANDALONE)
    set(CUSTOME_SERVICE "custom-service")
else()
    set(CUSTOME_SERVICE "petstore")
endif()

project(aws-cpp-sdk-custom-service-integration-tests)

find_package(AWSSDK REQUIRED COMPONENTS core)
find_package(testing-resources)
find_package(aws-cpp-sdk-${CUSTOME_SERVICE})

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

file(GLOB AWS_CUSTOM_SERVICE_INTEGRATION_TESTS_SRC "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
    list(APPEND LINKING_LIBRARIES ${CUSTOME_SERVICE} testing-resources)
    AWSSDK_CPY_DYN_LIBS(LINKING_LIBRARIES "" ${CMAKE_CURRENT_BINARY_DIR}/Debug)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${AWS_CUSTOM_SERVICE_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_CUSTOM_SERVICE_INTEGRATION_TESTS_SRC})
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} aws-cpp-sdk-${CUSTOME_SERVICE} testing-resources)
