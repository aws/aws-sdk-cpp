target_sources(aws-sdk-cpp-core
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/defaults/ClientConfigurationDefaults.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/AWSProfileConfigLoader.cpp
        )