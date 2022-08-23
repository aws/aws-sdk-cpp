target_sources(
        aws-sdk-cpp-core-test
        PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/MonitoringEndToEndTest.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MonitoringTest.cpp
)