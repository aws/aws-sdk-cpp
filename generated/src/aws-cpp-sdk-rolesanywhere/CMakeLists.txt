add_project(aws-cpp-sdk-rolesanywhere "C++ SDK for the AWS rolesanywhere service" aws-cpp-sdk-core)

file(GLOB AWS_ROLESANYWHERE_HEADERS
    "include/aws/rolesanywhere/*.h"
)

file(GLOB AWS_ROLESANYWHERE_MODEL_HEADERS
    "include/aws/rolesanywhere/model/*.h"
)

file(GLOB AWS_ROLESANYWHERE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ROLESANYWHERE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ROLESANYWHERE_UNIFIED_HEADERS
    ${AWS_ROLESANYWHERE_HEADERS}
    ${AWS_ROLESANYWHERE_MODEL_HEADERS}
)

file(GLOB ROLESANYWHERE_UNITY_SRC
    ${AWS_ROLESANYWHERE_SOURCE}
    ${AWS_ROLESANYWHERE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ROLESANYWHERE" ROLESANYWHERE_UNITY_SRC)
endif()

file(GLOB ROLESANYWHERE_SRC
    ${ROLESANYWHERE_UNIFIED_HEADERS}
    ${ROLESANYWHERE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\rolesanywhere" FILES ${AWS_ROLESANYWHERE_HEADERS})
        source_group("Header Files\\aws\\rolesanywhere\\model" FILES ${AWS_ROLESANYWHERE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ROLESANYWHERE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ROLESANYWHERE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ROLESANYWHERE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ROLESANYWHERE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ROLESANYWHERE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ROLESANYWHERE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/rolesanywhere)
install (FILES ${AWS_ROLESANYWHERE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/rolesanywhere/model)

do_packaging()


