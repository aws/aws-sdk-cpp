add_executable(
        aws-core-monitoring
        ${CMAKE_CURRENT_LIST_DIR}/MonitoringEndToEndTest.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MonitoringTest.cpp
)
target_include_directories(
        aws-core-monitoring
        PRIVATE GTest::GTest
)
target_link_libraries(
        aws-core-monitoring
        PRIVATE GTest::GTest
        PRIVATE aws-sdk-cpp::core
)