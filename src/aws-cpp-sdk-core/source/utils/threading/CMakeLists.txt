target_sources(aws-sdk-cpp-core
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/Executor.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ReaderWriterLock.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Semaphore.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ThreadTask.cpp
        )