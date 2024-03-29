add_project(aws-cpp-sdk-opensearchserverless "C++ SDK for the AWS opensearchserverless service" aws-cpp-sdk-core)

file(GLOB AWS_OPENSEARCHSERVERLESS_HEADERS
    "include/aws/opensearchserverless/*.h"
)

file(GLOB AWS_OPENSEARCHSERVERLESS_MODEL_HEADERS
    "include/aws/opensearchserverless/model/*.h"
)

file(GLOB AWS_OPENSEARCHSERVERLESS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_OPENSEARCHSERVERLESS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB OPENSEARCHSERVERLESS_UNIFIED_HEADERS
    ${AWS_OPENSEARCHSERVERLESS_HEADERS}
    ${AWS_OPENSEARCHSERVERLESS_MODEL_HEADERS}
)

file(GLOB OPENSEARCHSERVERLESS_UNITY_SRC
    ${AWS_OPENSEARCHSERVERLESS_SOURCE}
    ${AWS_OPENSEARCHSERVERLESS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("OPENSEARCHSERVERLESS" OPENSEARCHSERVERLESS_UNITY_SRC)
endif()

file(GLOB OPENSEARCHSERVERLESS_SRC
    ${OPENSEARCHSERVERLESS_UNIFIED_HEADERS}
    ${OPENSEARCHSERVERLESS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\opensearchserverless" FILES ${AWS_OPENSEARCHSERVERLESS_HEADERS})
        source_group("Header Files\\aws\\opensearchserverless\\model" FILES ${AWS_OPENSEARCHSERVERLESS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_OPENSEARCHSERVERLESS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_OPENSEARCHSERVERLESS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(OPENSEARCHSERVERLESS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${OPENSEARCHSERVERLESS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_OPENSEARCHSERVERLESS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_OPENSEARCHSERVERLESS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/opensearchserverless)
install (FILES ${AWS_OPENSEARCHSERVERLESS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/opensearchserverless/model)

do_packaging()


