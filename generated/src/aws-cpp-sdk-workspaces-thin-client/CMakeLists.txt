add_project(aws-cpp-sdk-workspaces-thin-client "C++ SDK for the AWS workspaces-thin-client service" aws-cpp-sdk-core)

file(GLOB AWS_WORKSPACES-THIN-CLIENT_HEADERS
    "include/aws/workspaces-thin-client/*.h"
)

file(GLOB AWS_WORKSPACES-THIN-CLIENT_MODEL_HEADERS
    "include/aws/workspaces-thin-client/model/*.h"
)

file(GLOB AWS_WORKSPACES-THIN-CLIENT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_WORKSPACES-THIN-CLIENT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB WORKSPACES-THIN-CLIENT_UNIFIED_HEADERS
    ${AWS_WORKSPACES-THIN-CLIENT_HEADERS}
    ${AWS_WORKSPACES-THIN-CLIENT_MODEL_HEADERS}
)

file(GLOB WORKSPACES-THIN-CLIENT_UNITY_SRC
    ${AWS_WORKSPACES-THIN-CLIENT_SOURCE}
    ${AWS_WORKSPACES-THIN-CLIENT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("WORKSPACES-THIN-CLIENT" WORKSPACES-THIN-CLIENT_UNITY_SRC)
endif()

file(GLOB WORKSPACES-THIN-CLIENT_SRC
    ${WORKSPACES-THIN-CLIENT_UNIFIED_HEADERS}
    ${WORKSPACES-THIN-CLIENT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\workspaces-thin-client" FILES ${AWS_WORKSPACES-THIN-CLIENT_HEADERS})
        source_group("Header Files\\aws\\workspaces-thin-client\\model" FILES ${AWS_WORKSPACES-THIN-CLIENT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_WORKSPACES-THIN-CLIENT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_WORKSPACES-THIN-CLIENT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(WORKSPACES-THIN-CLIENT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${WORKSPACES-THIN-CLIENT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_WORKSPACESTHINCLIENT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_WORKSPACES-THIN-CLIENT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/workspaces-thin-client)
install (FILES ${AWS_WORKSPACES-THIN-CLIENT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/workspaces-thin-client/model)

do_packaging()


