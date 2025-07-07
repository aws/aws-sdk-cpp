# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#

add_project(performance-tests
        "A suite of AWS C++ SDK performance tests"
        aws-cpp-sdk-core
        aws-cpp-sdk-s3
        aws-cpp-sdk-dynamodb
)

# Add cxxopts dependency
include(FetchContent)
FetchContent_Declare(
        cxxopts
        GIT_REPOSITORY https://github.com/jarro2783/cxxopts.git
        GIT_TAG v3.1.1
)
FetchContent_MakeAvailable(cxxopts)

function(add_service_test SERVICE SDK_LIB PERF_TEST_FILE)
    add_executable(${SERVICE}-performance-test
            src/services/${SERVICE}/main.cpp
            src/reporting/JsonReportingMetrics.cpp
            src/services/${SERVICE}/${PERF_TEST_FILE}
            src/services/${SERVICE}/${SERVICE}TestConfig.cpp
    )
    set_compiler_flags(${SERVICE}-performance-test)
    set_compiler_warnings(${SERVICE}-performance-test)
    target_include_directories(${SERVICE}-performance-test PRIVATE include)
    target_link_libraries(${SERVICE}-performance-test PRIVATE aws-cpp-sdk-core ${SDK_LIB} cxxopts::cxxopts)
    set_property(TARGET ${SERVICE}-performance-test PROPERTY CXX_STANDARD 20)
    set_property(TARGET ${SERVICE}-performance-test PROPERTY COMPILE_OPTIONS "-fexceptions")
endfunction()

add_service_test(s3 aws-cpp-sdk-s3 S3PerformanceTest.cpp)
add_service_test(dynamodb aws-cpp-sdk-dynamodb DynamoDBPerformanceTest.cpp)
