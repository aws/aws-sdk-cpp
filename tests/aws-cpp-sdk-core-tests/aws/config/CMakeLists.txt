target_sources(
        aws-sdk-cpp-core-test
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/AWSConfigFileProfileConfigLoaderTest.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ClientConfigurationDefaultsTest.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/EC2InstanceProfileConfigLoaderTest.cpp
)
