message(WARNING "aws-sdk-cpp-core net needs refactor on platform dependant codebase")
if (CMAKE_SYSTEM_NAME STREQUAL "Windows")
    target_sources(aws-sdk-cpp-core
            PRIVATE
            ${CMAKE_CURRENT_SOURCE_DIR}/windows/Net.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/windows/SimpleUDP.cpp
            )
elseif (CMAKE_SYSTEM_NAME STREQUAL "Linux")
    target_sources(aws-sdk-cpp-core
            PRIVATE
            ${CMAKE_CURRENT_SOURCE_DIR}/linux-shared/Net.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/linux-shared/SimpleUDP.cpp
            )
else ()
    target_sources(aws-sdk-cpp-core
            PRIVATE
            ${CMAKE_CURRENT_SOURCE_DIR}/Net.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/SimpleUDP.cpp
            )
endif ()

