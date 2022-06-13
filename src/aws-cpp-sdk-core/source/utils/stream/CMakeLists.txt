target_sources(aws-sdk-cpp-core
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/ConcurrentStreamBuf.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/PreallocatedStreamBuf.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ResponseStream.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SimpleStreamBuf.cpp
        )