message(FATAL_ERROR "Windows build not yet supported in new build system")
target_sources(aws-sdk-cpp-core
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/IXmlHttpRequest2HttpClient.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/WinConnectionPoolMgr.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/WinHttpConnectionPoolMgr.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/WinHttpSyncHttpClient.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/WinINetConnectionPoolMgr.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/WinINetSyncHttpClient.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/WinSyncHttpClient.cpp
        )