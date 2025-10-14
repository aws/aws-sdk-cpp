# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#

add_project(performance-tests
        "A suite of AWS C++ SDK performance tests"
        aws-cpp-sdk-core
        aws-cpp-sdk-s3
        aws-cpp-sdk-dynamodb
        aws-cpp-sdk-monitoring
        aws-cpp-sdk-secretsmanager
        aws-cpp-sk-echo
        aws-cpp-sdk-protocol-mock
)

include(FetchContent)
FetchContent_Declare(
        cxxopts
        GIT_REPOSITORY https://github.com/jarro2783/cxxopts.git
        GIT_TAG v3.1.1
)
FetchContent_MakeAvailable(cxxopts)

function(add_service_test SERVICE)
    string(TOLOWER ${SERVICE} SERVICE_LOWER)
    if(${SERVICE} STREQUAL "CloudWatch")
        set(SDK_NAME "monitoring")
    else()
        set(SDK_NAME ${SERVICE_LOWER})
    endif()
    add_executable(${SERVICE_LOWER}-performance-test
            src/services/${SERVICE_LOWER}/main.cpp
            src/reporting/JsonReportingMetric.cpp
            src/services/${SERVICE_LOWER}/${SERVICE}PerformanceTest.cpp
            src/services/${SERVICE_LOWER}/${SERVICE}TestConfig.cpp
    )
    set_compiler_flags(${SERVICE_LOWER}-performance-test)
    set_compiler_warnings(${SERVICE_LOWER}-performance-test)
    target_include_directories(${SERVICE_LOWER}-performance-test PRIVATE include)
    target_link_libraries(${SERVICE_LOWER}-performance-test PRIVATE aws-cpp-sdk-core aws-cpp-sdk-${SDK_NAME} cxxopts::cxxopts)
    set_property(TARGET ${SERVICE_LOWER}-performance-test PROPERTY CXX_STANDARD 20)
    set_property(TARGET ${SERVICE_LOWER}-performance-test PROPERTY COMPILE_OPTIONS "-fexceptions")
endfunction()

#add_service_test(S3)
#add_service_test(DynamoDB)
add_service_test(CloudWatch)
add_service_test(SecretsManager)
add_service_test(Echo)
