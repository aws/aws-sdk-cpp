add_project(aws-cpp-sdk-partnercentral-channel "C++ SDK for the AWS partnercentral-channel service" aws-cpp-sdk-core)

file(GLOB AWS_PARTNERCENTRAL-CHANNEL_HEADERS
    "include/aws/partnercentral-channel/*.h"
)

file(GLOB AWS_PARTNERCENTRAL-CHANNEL_MODEL_HEADERS
    "include/aws/partnercentral-channel/model/*.h"
)

file(GLOB AWS_PARTNERCENTRAL-CHANNEL_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PARTNERCENTRAL-CHANNEL_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PARTNERCENTRAL-CHANNEL_UNIFIED_HEADERS
    ${AWS_PARTNERCENTRAL-CHANNEL_HEADERS}
    ${AWS_PARTNERCENTRAL-CHANNEL_MODEL_HEADERS}
)

file(GLOB PARTNERCENTRAL-CHANNEL_UNITY_SRC
    ${AWS_PARTNERCENTRAL-CHANNEL_SOURCE}
    ${AWS_PARTNERCENTRAL-CHANNEL_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PARTNERCENTRAL-CHANNEL" PARTNERCENTRAL-CHANNEL_UNITY_SRC)
endif()

file(GLOB PARTNERCENTRAL-CHANNEL_SRC
    ${PARTNERCENTRAL-CHANNEL_UNIFIED_HEADERS}
    ${PARTNERCENTRAL-CHANNEL_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\partnercentral-channel" FILES ${AWS_PARTNERCENTRAL-CHANNEL_HEADERS})
        source_group("Header Files\\aws\\partnercentral-channel\\model" FILES ${AWS_PARTNERCENTRAL-CHANNEL_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PARTNERCENTRAL-CHANNEL_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PARTNERCENTRAL-CHANNEL_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PARTNERCENTRAL-CHANNEL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PARTNERCENTRAL-CHANNEL_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PARTNERCENTRALCHANNEL_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PARTNERCENTRAL-CHANNEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/partnercentral-channel)
install (FILES ${AWS_PARTNERCENTRAL-CHANNEL_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/partnercentral-channel/model)

do_packaging()


