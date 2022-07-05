target_sources(
        aws-sdk-cpp-test-resources
        PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/MemoryTesting.cpp
        PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/TestingEnvironment.cpp
        PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/platform/linux-shared/PlatformTesting.cpp
)
