add_project(aws-cpp-sdk-monitoring-integration-tests
    "Tests for the AWS CloudWatch Monitoring C++ SDK"
    aws-cpp-sdk-monitoring
    testing-resources
    aws-cpp-sdk-core)

file(GLOB AWS_MONITORING_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

file(GLOB AWS_MONITORING_INTEGRATION_TESTS_SRC
    ${AWS_MONITORING_SRC}
)

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${AWS_MONITORING_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_MONITORING_INTEGRATION_TESTS_SRC})
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})
