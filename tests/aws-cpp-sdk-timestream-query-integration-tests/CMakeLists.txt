add_project(aws-cpp-sdk-timestream-query-integration-tests
    "Tests for the AWS Timestream-query C++ SDK" 
    aws-cpp-sdk-core 
    aws-cpp-sdk-timestream-query 
    testing-resources)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

file(GLOB AWS_TIMESTREAM_QUERY_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

file(GLOB AWS_TIMESTREAM_QUERY_INTEGRATION_TESTS_SRC
    ${AWS_TIMESTREAM_QUERY_SRC}
)

set(AWS_TIMESTREAM_QUERY_INTEGRATION_TEST_APPLICATION_INCLUDES
    "${AWS_NATIVE_SDK_ROOT}/src/aws-cpp-sdk-core/include/"
    "${AWS_NATIVE_SDK_ROOT}/generated/src/aws-cpp-sdk-timestream-query/include/"
    "${AWS_NATIVE_SDK_ROOT}/tests/testing-resources/include/"
)

include_directories(${AWS_TIMESTREAM_QUERY_INTEGRATION_TEST_APPLICATION_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${AWS_TIMESTREAM_QUERY_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_TIMESTREAM_QUERY_INTEGRATION_TESTS_SRC})
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})
