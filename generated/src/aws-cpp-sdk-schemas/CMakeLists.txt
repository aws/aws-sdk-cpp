add_project(aws-cpp-sdk-schemas "C++ SDK for the AWS schemas service" aws-cpp-sdk-core)

file(GLOB AWS_SCHEMAS_HEADERS
    "include/aws/schemas/*.h"
)

file(GLOB AWS_SCHEMAS_MODEL_HEADERS
    "include/aws/schemas/model/*.h"
)

file(GLOB AWS_SCHEMAS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SCHEMAS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SCHEMAS_UNIFIED_HEADERS
    ${AWS_SCHEMAS_HEADERS}
    ${AWS_SCHEMAS_MODEL_HEADERS}
)

file(GLOB SCHEMAS_UNITY_SRC
    ${AWS_SCHEMAS_SOURCE}
    ${AWS_SCHEMAS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SCHEMAS" SCHEMAS_UNITY_SRC)
endif()

file(GLOB SCHEMAS_SRC
    ${SCHEMAS_UNIFIED_HEADERS}
    ${SCHEMAS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\schemas" FILES ${AWS_SCHEMAS_HEADERS})
        source_group("Header Files\\aws\\schemas\\model" FILES ${AWS_SCHEMAS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SCHEMAS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SCHEMAS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SCHEMAS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SCHEMAS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SCHEMAS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SCHEMAS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/schemas)
install (FILES ${AWS_SCHEMAS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/schemas/model)

do_packaging()


