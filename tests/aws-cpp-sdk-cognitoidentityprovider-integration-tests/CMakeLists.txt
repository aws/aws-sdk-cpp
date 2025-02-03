add_project(aws-cpp-sdk-cognitoidentityprovider-integration-tests 
    "Tests for the AWS Cognito IDP C++ SDK" 
    aws-cpp-sdk-cognito-idp 
    testing-resources 
    aws-cpp-sdk-core 
)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

file(GLOB AWS_COGNITO_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

file(GLOB AWS_COGNITO_INTEGRATION_TESTS_SRC
    ${AWS_COGNITO_SRC}
)

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${AWS_COGNITO_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_COGNITO_INTEGRATION_TESTS_SRC})
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

find_package(OpenSSL REQUIRED)
# Include directories for OpenSSL headers
include_directories(${OPENSSL_INCLUDE_DIR})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS} OpenSSL::Crypto)



if(MSVC AND BUILD_SHARED_LIBS)
    set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS
            "/DELAYLOAD:aws-cpp-sdk-access-management.dll /DELAYLOAD:aws-cpp-sdk-cognito-idp /DELAYLOAD:aws-cpp-sdk-iam /DELAYLOAD:aws-cpp-sdk-core.dll")
    target_link_libraries(${PROJECT_NAME} delayimp.lib)
endif()
