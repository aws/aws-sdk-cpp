add_project(aws-cpp-sdk-logs-integration-tests
    "Tests for the AWS CloudWatch Logs C++ SDK"
    aws-cpp-sdk-logs
    aws-cpp-sdk-access-management
    aws-cpp-sdk-iam
    aws-cpp-sdk-cognito-identity
    testing-resources
    aws-cpp-sdk-core)

file(GLOB AWS_LOGS_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

file(GLOB AWS_LOGS_INTEGRATION_TESTS_SRC
    ${AWS_LOGS_SRC}
)

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${AWS_LOGS_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_LOGS_INTEGRATION_TESTS_SRC})
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})
