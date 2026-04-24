add_project(aws-cpp-sdk-migrationhub-config "C++ SDK for the AWS migrationhub-config service" aws-cpp-sdk-core)

file(GLOB AWS_MIGRATIONHUB-CONFIG_HEADERS
    "include/aws/migrationhub-config/*.h"
)

file(GLOB AWS_MIGRATIONHUB-CONFIG_MODEL_HEADERS
    "include/aws/migrationhub-config/model/*.h"
)

file(GLOB AWS_MIGRATIONHUB-CONFIG_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MIGRATIONHUB-CONFIG_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MIGRATIONHUB-CONFIG_UNIFIED_HEADERS
    ${AWS_MIGRATIONHUB-CONFIG_HEADERS}
    ${AWS_MIGRATIONHUB-CONFIG_MODEL_HEADERS}
)

file(GLOB MIGRATIONHUB-CONFIG_UNITY_SRC
    ${AWS_MIGRATIONHUB-CONFIG_SOURCE}
    ${AWS_MIGRATIONHUB-CONFIG_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MIGRATIONHUB-CONFIG" MIGRATIONHUB-CONFIG_UNITY_SRC)
endif()

file(GLOB MIGRATIONHUB-CONFIG_SRC
    ${MIGRATIONHUB-CONFIG_UNIFIED_HEADERS}
    ${MIGRATIONHUB-CONFIG_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\migrationhub-config" FILES ${AWS_MIGRATIONHUB-CONFIG_HEADERS})
        source_group("Header Files\\aws\\migrationhub-config\\model" FILES ${AWS_MIGRATIONHUB-CONFIG_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MIGRATIONHUB-CONFIG_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MIGRATIONHUB-CONFIG_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MIGRATIONHUB-CONFIG_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MIGRATIONHUB-CONFIG_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MIGRATIONHUBCONFIG_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MIGRATIONHUB-CONFIG_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/migrationhub-config)
install (FILES ${AWS_MIGRATIONHUB-CONFIG_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/migrationhub-config/model)

do_packaging()


