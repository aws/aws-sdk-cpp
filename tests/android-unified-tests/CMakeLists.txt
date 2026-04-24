project(android-unified-tests)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.
file(GLOB CORE_AWS_CONFIG_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core-tests/aws/config/*.cpp")
file(GLOB CORE_AWS_AUTH_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core-tests/aws/auth/*.cpp")
file(GLOB CORE_AWS_CLIENT_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core-tests/aws/client/*.cpp")
file(GLOB CORE_HTTP_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core-tests/http/*.cpp")
file(GLOB CORE_UTILS_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core-tests/utils/*.cpp")
file(GLOB CORE_UTILS_JSON_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core-tests/utils/json/*.cpp")
file(GLOB CORE_UTILS_LOGGING_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core-tests/utils/logging/*.cpp")
file(GLOB CORE_UTILS_MEMORY_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core-tests/utils/memory/*.cpp")
file(GLOB CORE_UTILS_STREAM_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core-tests/utils/stream/*.cpp")
file(GLOB CORE_UTILS_CRYPTO_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core-tests/utils/crypto/*.cpp")
file(GLOB CORE_UTILS_RATE_LIMITER_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core-tests/utils/ratelimiter/*.cpp")
file(GLOB CORE_UTILS_XML_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core-tests/utils/xml/*.cpp")
file(GLOB DYNAMODB_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-dynamodb-integration-tests/TableOperationTest.cpp")
file(GLOB SQS_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-sqs-integration-tests/QueueOperationTest.cpp")
file(GLOB S3_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3-integration-tests/BucketAndObjectOperationTest.cpp")
file(GLOB LAMBDA_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-lambda-integration-tests/FunctionTest.cpp")
file(GLOB COGNITO_IDENTITY_IDENTITY_POOL_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-cognitoidentity-integration-tests/IdentityPoolOperationTest.cpp")
file(GLOB TRANSFER_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-transfer-tests/TransferTests.cpp")
file(GLOB IDENTITY_MANAGEMENT_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-identity-management-tests/auth/*.cpp")
file(GLOB ENCRYPTION_TESTS_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3-encryption-tests/CryptoModulesTest.cpp"
                               "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3-encryption-tests/DataHandlersTest.cpp"
                               "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3-encryption-tests/EncryptionMaterialsTest.cpp")
file(GLOB ENCRYPTION_INTEGRATION_TESTS_SRC "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3-encryption-integration-tests/LiveClientTests.cpp")
file(GLOB TEST_SRC "${CMAKE_CURRENT_SOURCE_DIR}/RunTests.cpp")

# commented-out tests are not working on android yet due to file permissions/location/management issues
file(GLOB AWS_UNIFIED_INTEGRATION_TESTS_SRC 
    ${CORE_AWS_CONFIG_SRC}
    ${CORE_AWS_AUTH_SRC}
    ${CORE_AWS_CLIENT_SRC}
    ${CORE_HTTP_SRC}
    ${CORE_UTILS_SRC}
    ${CORE_UTILS_CRYPTO_SRC}
    ${CORE_UTILS_JSON_SRC}
    ${CORE_UTILS_LOGGING_SRC}
    ${CORE_UTILS_MEMORY_SRC}
    ${CORE_UTILS_RATE_LIMITER_SRC}
    ${CORE_UTILS_STREAM_SRC}
    ${CORE_UTILS_XML_SRC}
    ${DYNAMODB_SRC}
    ${SQS_SRC}
    ${S3_SRC}
    ${LAMBDA_SRC}
    ${COGNITO_IDENTITY_IDENTITY_POOL_SRC}
    ${TRANSFER_SRC}
    ${IDENTITY_MANAGEMENT_SRC}
    ${ENCRYPTION_TESTS_SRC}
    ${ENCRYPTION_INTEGRATION_TESTS_SRC}
    ${TEST_SRC}
)

set(AWS_UNIFIED_INTEGRATION_TEST_APPLICATION_INCLUDES
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-core/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-dynamodb/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-sqs/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3-encryption/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-lambda/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-kinesis/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-cognito-identity/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-transfer/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-logging/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-iam/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-sts/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-kms/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-identity-management/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-access-management/include/"
    "${AWS_NATIVE_SDK_ROOT}/testing-resources/include/"
)

include_directories(${AWS_UNIFIED_INTEGRATION_TEST_APPLICATION_INCLUDES})

if(PLATFORM_ANDROID)
  add_definitions(-DRESOURCES_DIR="resources")
else()
  add_definitions(-DRESOURCES_DIR="${CMAKE_CURRENT_SOURCE_DIR}/resources")
endif()


SET(SUFFIX so)

add_library(android-unified-tests ${AWS_UNIFIED_INTEGRATION_TESTS_SRC})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(android-unified-tests 
                      aws-cpp-sdk-dynamodb 
                      aws-cpp-sdk-sqs
                      aws-cpp-sdk-s3-encryption
                      aws-cpp-sdk-s3
                      aws-cpp-sdk-lambda
                      aws-cpp-sdk-kinesis
                      aws-cpp-sdk-cognito-identity
                      aws-cpp-sdk-transfer
                      aws-cpp-sdk-iam
                      aws-cpp-sdk-identity-management
                      aws-cpp-sdk-access-management
                      testing-resources
                      aws-cpp-sdk-core
                      ${CLIENT_LIBS}
                      ${PLATFORM_DEP_LIBS})


