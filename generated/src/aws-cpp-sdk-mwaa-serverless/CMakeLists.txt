add_project(aws-cpp-sdk-mwaa-serverless "C++ SDK for the AWS mwaa-serverless service" aws-cpp-sdk-core)

file(GLOB AWS_MWAA-SERVERLESS_HEADERS
    "include/aws/mwaa-serverless/*.h"
)

file(GLOB AWS_MWAA-SERVERLESS_MODEL_HEADERS
    "include/aws/mwaa-serverless/model/*.h"
)

file(GLOB AWS_MWAA-SERVERLESS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MWAA-SERVERLESS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MWAA-SERVERLESS_UNIFIED_HEADERS
    ${AWS_MWAA-SERVERLESS_HEADERS}
    ${AWS_MWAA-SERVERLESS_MODEL_HEADERS}
)

file(GLOB MWAA-SERVERLESS_UNITY_SRC
    ${AWS_MWAA-SERVERLESS_SOURCE}
    ${AWS_MWAA-SERVERLESS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MWAA-SERVERLESS" MWAA-SERVERLESS_UNITY_SRC)
endif()

file(GLOB MWAA-SERVERLESS_SRC
    ${MWAA-SERVERLESS_UNIFIED_HEADERS}
    ${MWAA-SERVERLESS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\mwaa-serverless" FILES ${AWS_MWAA-SERVERLESS_HEADERS})
        source_group("Header Files\\aws\\mwaa-serverless\\model" FILES ${AWS_MWAA-SERVERLESS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MWAA-SERVERLESS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MWAA-SERVERLESS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MWAA-SERVERLESS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MWAA-SERVERLESS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MWAASERVERLESS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MWAA-SERVERLESS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mwaa-serverless)
install (FILES ${AWS_MWAA-SERVERLESS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mwaa-serverless/model)

do_packaging()


