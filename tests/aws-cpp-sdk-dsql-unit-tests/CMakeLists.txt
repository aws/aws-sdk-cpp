# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#
add_project(aws-cpp-sdk-dsql-unit-tests
        "Unit Tests for the dsql SDK Client"
        aws-cpp-sdk-dsql
        testing-resources
        aws_test_main
        aws-cpp-sdk-core)

add_definitions(-DRESOURCES_DIR="${CMAKE_CURRENT_SOURCE_DIR}/resources")

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/DsqlUnitTests.cpp)
else()
    add_executable(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/DsqlUnitTests.cpp)
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

if(MSVC AND BUILD_SHARED_LIBS)
    set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "/DELAYLOAD:aws-cpp-sdk-dsql.dll /DELAYLOAD:aws-cpp-sdk-core.dll")
    target_link_libraries(${PROJECT_NAME} delayimp.lib)
endif()

include(GoogleTest)
gtest_add_tests(TARGET ${PROJECT_NAME})
