add_project(aws-cpp-sdk-opensearch "C++ SDK for the AWS opensearch service" aws-cpp-sdk-core)

file(GLOB AWS_OPENSEARCH_HEADERS
    "include/aws/opensearch/*.h"
)

file(GLOB AWS_OPENSEARCH_MODEL_HEADERS
    "include/aws/opensearch/model/*.h"
)

file(GLOB AWS_OPENSEARCH_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_OPENSEARCH_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB OPENSEARCH_UNIFIED_HEADERS
    ${AWS_OPENSEARCH_HEADERS}
    ${AWS_OPENSEARCH_MODEL_HEADERS}
)

file(GLOB OPENSEARCH_UNITY_SRC
    ${AWS_OPENSEARCH_SOURCE}
    ${AWS_OPENSEARCH_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("OPENSEARCH" OPENSEARCH_UNITY_SRC)
endif()

file(GLOB OPENSEARCH_SRC
    ${OPENSEARCH_UNIFIED_HEADERS}
    ${OPENSEARCH_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\opensearch" FILES ${AWS_OPENSEARCH_HEADERS})
        source_group("Header Files\\aws\\opensearch\\model" FILES ${AWS_OPENSEARCH_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_OPENSEARCH_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_OPENSEARCH_MODEL_SOURCE})
    endif(MSVC)
endif()

set(OPENSEARCH_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${OPENSEARCH_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_OPENSEARCHSERVICE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_OPENSEARCH_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/opensearch)
install (FILES ${AWS_OPENSEARCH_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/opensearch/model)

do_packaging()


