target_sources(aws-sdk-cpp-core
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/Environment.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/FileSystem.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/OSVersionInfo.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Security.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Time.cpp
        )