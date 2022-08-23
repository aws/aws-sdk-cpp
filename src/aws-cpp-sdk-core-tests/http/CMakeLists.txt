target_sources(
        aws-sdk-cpp-core-test
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/HttpClientTest.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/HttpTypesMapperTest.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/SignalHandlerTest.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/URITest.cpp
)