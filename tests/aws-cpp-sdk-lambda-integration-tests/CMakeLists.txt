add_project(aws-cpp-sdk-lambda-integration-tests
    "Tests for the AWS Lambda C++ SDK"
    aws-cpp-sdk-access-management
    aws-cpp-sdk-cognito-identity
    aws-cpp-sdk-iam
    aws-cpp-sdk-lambda
    aws-cpp-sdk-kinesis
    testing-resources
    aws-cpp-sdk-core)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

  file(GLOB AWS_LAMBDA_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
  )

  file(GLOB AWS_LAMBDA_INTEGRATION_TESTS_SRC
    ${AWS_LAMBDA_SRC}
  )

if(PLATFORM_ANDROID)
  add_definitions(-DRESOURCES_DIR="resources")
elseif(COMMAND add_custom_lambda_resources_directory_definition)
  add_custom_lambda_resources_directory_definition()
else()
  add_definitions(-DRESOURCES_DIR="${CMAKE_CURRENT_SOURCE_DIR}/resources")
endif()

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${AWS_LAMBDA_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_LAMBDA_INTEGRATION_TESTS_SRC})
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

if(COMMAND copy_lambda_testing_resources)
  copy_lambda_testing_resources()
endif()
