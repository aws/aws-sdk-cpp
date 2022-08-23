target_sources(aws-sdk-cpp-core
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/defaults/ClientConfigurationDefaults.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/AWSConfigFileProfileConfigLoader.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/AWSProfileConfigLoaderBase.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ConfigAndCredentialsCacheManager.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/EC2InstanceProfileConfigLoader.cpp
        )