add_subdirectory(standard)
if (NOT ${USE_CURL})
    add_subdirectory(windows)
else ()
    add_subdirectory(curl)
endif ()
target_sources(aws-sdk-cpp-core
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/HttpClient.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/HttpClientFactory.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/HttpRequest.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/HttpTypes.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Scheme.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/URI.cpp
        )
