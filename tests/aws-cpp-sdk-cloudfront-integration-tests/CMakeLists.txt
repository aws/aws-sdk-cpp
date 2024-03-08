add_project(aws-cpp-sdk-cloudfront-integration-tests
        "Integration tests for the Amazon CloudFront Client"
        testing-resources
        aws-cpp-sdk-core
        aws-cpp-sdk-cloudfront
        aws-cpp-sdk-cloudfront-keyvaluestore)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

file(GLOB CLOUDFRONT_INT_TEST_SRC
        "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
        )

set(CLOUDFRONT_INT_TEST_APPLICATION_INCLUDES
        "${AWS_NATIVE_SDK_ROOT}/src/aws-cpp-sdk-core/include/"
        "${AWS_NATIVE_SDK_ROOT}/generated/src/aws-cpp-sdk-cloudfront/include/"
        "${AWS_NATIVE_SDK_ROOT}/generated/src/aws-cpp-sdk-cloudfront-keyvaluestore/include"
        "${AWS_NATIVE_SDK_ROOT}/tests/testing-resources/include/"

        )

include_directories(${CLOUDFRONT_INT_TEST_APPLICATION_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(aws-cpp-sdk-cloudfront-integration-tests ${CLOUDFRONT_INT_TEST_SRC})
else()
    add_executable(aws-cpp-sdk-cloudfront-integration-tests ${CLOUDFRONT_INT_TEST_SRC})
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(aws-cpp-sdk-cloudfront-integration-tests ${PROJECT_LIBS})
