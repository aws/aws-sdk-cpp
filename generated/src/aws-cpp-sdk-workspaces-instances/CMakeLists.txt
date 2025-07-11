add_project(aws-cpp-sdk-workspaces-instances "C++ SDK for the AWS workspaces-instances service" aws-cpp-sdk-core)

file(GLOB AWS_WORKSPACES-INSTANCES_HEADERS
    "include/aws/workspaces-instances/*.h"
)

file(GLOB AWS_WORKSPACES-INSTANCES_MODEL_HEADERS
    "include/aws/workspaces-instances/model/*.h"
)

file(GLOB AWS_WORKSPACES-INSTANCES_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_WORKSPACES-INSTANCES_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB WORKSPACES-INSTANCES_UNIFIED_HEADERS
    ${AWS_WORKSPACES-INSTANCES_HEADERS}
    ${AWS_WORKSPACES-INSTANCES_MODEL_HEADERS}
)

file(GLOB WORKSPACES-INSTANCES_UNITY_SRC
    ${AWS_WORKSPACES-INSTANCES_SOURCE}
    ${AWS_WORKSPACES-INSTANCES_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("WORKSPACES-INSTANCES" WORKSPACES-INSTANCES_UNITY_SRC)
endif()

file(GLOB WORKSPACES-INSTANCES_SRC
    ${WORKSPACES-INSTANCES_UNIFIED_HEADERS}
    ${WORKSPACES-INSTANCES_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\workspaces-instances" FILES ${AWS_WORKSPACES-INSTANCES_HEADERS})
        source_group("Header Files\\aws\\workspaces-instances\\model" FILES ${AWS_WORKSPACES-INSTANCES_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_WORKSPACES-INSTANCES_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_WORKSPACES-INSTANCES_MODEL_SOURCE})
    endif(MSVC)
endif()

set(WORKSPACES-INSTANCES_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${WORKSPACES-INSTANCES_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_WORKSPACESINSTANCES_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_WORKSPACES-INSTANCES_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/workspaces-instances)
install (FILES ${AWS_WORKSPACES-INSTANCES_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/workspaces-instances/model)

do_packaging()


