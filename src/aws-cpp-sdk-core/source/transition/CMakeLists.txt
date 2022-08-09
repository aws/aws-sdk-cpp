# Files in this directory are wrappers used for transition between build processes in 1.10 release
target_sources(aws-sdk-cpp-core
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/cJSON.cpp
        )