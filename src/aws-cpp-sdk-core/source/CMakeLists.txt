add_subdirectory(auth)
add_subdirectory(client)
add_subdirectory(config)
add_subdirectory(http)
add_subdirectory(internal)
add_subdirectory(monitoring)
add_subdirectory(net)
add_subdirectory(platform)
add_subdirectory(utils)

target_sources(aws-sdk-cpp-core
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/Version.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/AmazonSerializableWebServiceRequest.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/AmazonStreamingWebServiceRequest.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/AmazonWebServiceRequest.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Aws.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Globals.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Region.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Version.cpp
        )

