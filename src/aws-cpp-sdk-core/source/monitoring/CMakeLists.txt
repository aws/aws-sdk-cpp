target_sources(aws-sdk-cpp-core
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/DefaultMonitoring.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/HttpClientMetrics.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/MonitoringManager.cpp
        )