target_sources(
        aws-sdk-cpp-core-test
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/AWSProfileConfigLoaderTest.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ClientConfigurationDefaultsTest.cpp
)
