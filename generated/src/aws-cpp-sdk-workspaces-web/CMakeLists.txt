add_project(aws-cpp-sdk-workspaces-web "C++ SDK for the AWS workspaces-web service" aws-cpp-sdk-core)

file(GLOB AWS_WORKSPACES-WEB_HEADERS
    "include/aws/workspaces-web/*.h"
)

file(GLOB AWS_WORKSPACES-WEB_MODEL_HEADERS
    "include/aws/workspaces-web/model/*.h"
)

file(GLOB AWS_WORKSPACES-WEB_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_WORKSPACES-WEB_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB WORKSPACES-WEB_UNIFIED_HEADERS
    ${AWS_WORKSPACES-WEB_HEADERS}
    ${AWS_WORKSPACES-WEB_MODEL_HEADERS}
)

file(GLOB WORKSPACES-WEB_UNITY_SRC
    ${AWS_WORKSPACES-WEB_SOURCE}
    ${AWS_WORKSPACES-WEB_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("WORKSPACES-WEB" WORKSPACES-WEB_UNITY_SRC)
endif()

file(GLOB WORKSPACES-WEB_SRC
    ${WORKSPACES-WEB_UNIFIED_HEADERS}
    ${WORKSPACES-WEB_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\workspaces-web" FILES ${AWS_WORKSPACES-WEB_HEADERS})
        source_group("Header Files\\aws\\workspaces-web\\model" FILES ${AWS_WORKSPACES-WEB_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_WORKSPACES-WEB_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_WORKSPACES-WEB_MODEL_SOURCE})
    endif(MSVC)
endif()

set(WORKSPACES-WEB_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${WORKSPACES-WEB_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_WORKSPACESWEB_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_WORKSPACES-WEB_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/workspaces-web)
install (FILES ${AWS_WORKSPACES-WEB_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/workspaces-web/model)

do_packaging()


