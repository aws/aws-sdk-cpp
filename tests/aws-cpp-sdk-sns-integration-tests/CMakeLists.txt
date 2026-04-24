add_project(aws-cpp-sdk-sns-integration-tests
        "Tests for the AWS SNS C++ SDK"
        aws-cpp-sdk-sns
        testing-resources
        aws-cpp-sdk-core)

file(GLOB AWS_SNS_SRC
        "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

file(GLOB AWS_SNS_INTEGRATION_TESTS_SRC
        ${AWS_SNS_SRC}
)

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${AWS_SNS_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_SNS_INTEGRATION_TESTS_SRC})
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})