#add_subdirectory(auth)
#add_subdirectory(client)
#add_subdirectory(config)
#add_subdirectory(endpoint)
#add_subdirectory(http)
#add_subdirectory(internal)
#add_subdirectory(monitoring)
#add_subdirectory(net)
#add_subdirectory(platform)
#add_subdirectory(utils)
#add_subdirectory(transition) #cJSON Wrapper to be added here

target_sources(aws-sdk-cpp-core
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/AmazonSerializableWebServiceRequest.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/AmazonStreamingWebServiceRequest.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/AmazonWebServiceRequest.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Aws.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Globals.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Region.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Version.cpp
        )

