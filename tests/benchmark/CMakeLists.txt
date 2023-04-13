# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#

add_project(benchmark
        "A Cli for running benchmark tests"
        aws-cpp-sdk-s3
        aws-cpp-sdk-monitoring
        aws-cpp-sdk-core)

add_executable(${PROJECT_NAME} benchmark.cpp
        src/Configuration.cpp
        src/TestDelegator.cpp
        src/service/S3PutObject.cpp
        src/service/S3GetObject.cpp
        src/metric/Metrics.cpp
        src/metric/PrintMetrics.cpp
        src/metric/CloudWatchMetrics.cpp)
set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PRIVATE include)
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

