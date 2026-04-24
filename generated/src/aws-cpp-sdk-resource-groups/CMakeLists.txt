add_project(aws-cpp-sdk-resource-groups "C++ SDK for the AWS resource-groups service" aws-cpp-sdk-core)

file(GLOB AWS_RESOURCE-GROUPS_HEADERS
    "include/aws/resource-groups/*.h"
)

file(GLOB AWS_RESOURCE-GROUPS_MODEL_HEADERS
    "include/aws/resource-groups/model/*.h"
)

file(GLOB AWS_RESOURCE-GROUPS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_RESOURCE-GROUPS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB RESOURCE-GROUPS_UNIFIED_HEADERS
    ${AWS_RESOURCE-GROUPS_HEADERS}
    ${AWS_RESOURCE-GROUPS_MODEL_HEADERS}
)

file(GLOB RESOURCE-GROUPS_UNITY_SRC
    ${AWS_RESOURCE-GROUPS_SOURCE}
    ${AWS_RESOURCE-GROUPS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("RESOURCE-GROUPS" RESOURCE-GROUPS_UNITY_SRC)
endif()

file(GLOB RESOURCE-GROUPS_SRC
    ${RESOURCE-GROUPS_UNIFIED_HEADERS}
    ${RESOURCE-GROUPS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\resource-groups" FILES ${AWS_RESOURCE-GROUPS_HEADERS})
        source_group("Header Files\\aws\\resource-groups\\model" FILES ${AWS_RESOURCE-GROUPS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_RESOURCE-GROUPS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_RESOURCE-GROUPS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(RESOURCE-GROUPS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${RESOURCE-GROUPS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_RESOURCEGROUPS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_RESOURCE-GROUPS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/resource-groups)
install (FILES ${AWS_RESOURCE-GROUPS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/resource-groups/model)

do_packaging()


