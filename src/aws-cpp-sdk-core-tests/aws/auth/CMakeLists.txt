target_sources(
        aws-sdk-cpp-core-test
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/AWSAuthSignerTest.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/AWSCredentialsProviderTest.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/AWSHttpResourceClientTest.cpp
)
