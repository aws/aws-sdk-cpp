add_project(aws-cpp-sdk-s3-transfer-integration-tests
    "Integration tests for the AWS S3 Transfer Manager 2.0 C++ library"
    aws-cpp-sdk-s3-transfer
    aws-cpp-sdk-s3
    testing-resources
    aws-cpp-sdk-core)

file(GLOB AWS_S3_TRANSFER_TEST_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

set(S3_TRANSFER_TEST_APPLICATION_INCLUDES
    "${AWS_NATIVE_SDK_ROOT}/src/aws-cpp-sdk-core/include/"
    "${AWS_NATIVE_SDK_ROOT}/generated/src/aws-cpp-sdk-s3/include/"
    "${AWS_NATIVE_SDK_ROOT}/src/aws-cpp-sdk-s3-transfer/include/"
    "${AWS_NATIVE_SDK_ROOT}/tests/testing-resources/include/"
)

include_directories(${S3_TRANSFER_TEST_APPLICATION_INCLUDES})

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${AWS_S3_TRANSFER_TEST_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_S3_TRANSFER_TEST_SRC})
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

if(MSVC AND BUILD_SHARED_LIBS)
    set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "/DELAYLOAD:aws-cpp-sdk-s3-transfer.dll /DELAYLOAD:aws-cpp-sdk-s3.dll /DELAYLOAD:aws-cpp-sdk-core.dll")
    target_link_libraries(${PROJECT_NAME} delayimp.lib)
endif()
