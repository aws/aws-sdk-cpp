# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#

add_project(performance-tests
        "A suite of AWS C++ SDK performance tests"
        aws-cpp-sdk-core
        aws-cpp-sdk-s3
        aws-cpp-sdk-dynamodb
)

function(add_service_test SERVICE SDK_LIB)
    add_executable(${SERVICE}-performance-test
            src/services/${SERVICE}/main.cpp
            src/reporting/JsonReportingMetrics.cpp
            src/services/${SERVICE}/${SERVICE}PerformanceTest.cpp
    )
    set_compiler_flags(${SERVICE}-performance-test)
    set_compiler_warnings(${SERVICE}-performance-test)
    target_include_directories(${SERVICE}-performance-test PRIVATE include)
    target_link_libraries(${SERVICE}-performance-test PRIVATE aws-cpp-sdk-core ${SDK_LIB})
endfunction()

add_service_test(s3 aws-cpp-sdk-s3)
add_service_test(dynamodb aws-cpp-sdk-dynamodb)
