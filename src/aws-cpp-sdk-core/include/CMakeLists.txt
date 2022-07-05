target_include_directories(
        aws-sdk-cpp-core
        BEFORE
        PUBLIC ${CMAKE_CURRENT_BINARY_DIR} #For generated Headers as VersionConfig and SDKConfig
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)