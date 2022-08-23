target_sources(aws-sdk-cpp-core
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/AWSAuthEventStreamV4Signer.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/AWSAuthSignerCommon.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/AWSAuthSignerHelper.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/AWSAuthV4Signer.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/AWSNullSigner.cpp
        )