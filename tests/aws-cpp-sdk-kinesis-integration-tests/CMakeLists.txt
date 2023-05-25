add_project(aws-cpp-sdk-kinesis-integration-tests
    "Tests for the AWS Kinesis C++ SDK"
    aws-cpp-sdk-kinesis
    testing-resources
    aws-cpp-sdk-core)

file(GLOB AWS_KINESIS_SRC "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

file(GLOB AWS_KINESIS_INTEGRATION_TESTS_SRC ${AWS_KINESIS_SRC})

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${AWS_KINESIS_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_KINESIS_INTEGRATION_TESTS_SRC})
endif()

if(MSVC AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "GTEST_LINKED_AS_SHARED_LIBRARY=1")
endif()

enable_testing()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})
