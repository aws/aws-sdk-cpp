add_project(aws-cpp-sdk-neptune-graph "C++ SDK for the AWS neptune-graph service" aws-cpp-sdk-core)

file(GLOB AWS_NEPTUNE-GRAPH_HEADERS
    "include/aws/neptune-graph/*.h"
)

file(GLOB AWS_NEPTUNE-GRAPH_MODEL_HEADERS
    "include/aws/neptune-graph/model/*.h"
)

file(GLOB AWS_NEPTUNE-GRAPH_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_NEPTUNE-GRAPH_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB NEPTUNE-GRAPH_UNIFIED_HEADERS
    ${AWS_NEPTUNE-GRAPH_HEADERS}
    ${AWS_NEPTUNE-GRAPH_MODEL_HEADERS}
)

file(GLOB NEPTUNE-GRAPH_UNITY_SRC
    ${AWS_NEPTUNE-GRAPH_SOURCE}
    ${AWS_NEPTUNE-GRAPH_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("NEPTUNE-GRAPH" NEPTUNE-GRAPH_UNITY_SRC)
endif()

file(GLOB NEPTUNE-GRAPH_SRC
    ${NEPTUNE-GRAPH_UNIFIED_HEADERS}
    ${NEPTUNE-GRAPH_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\neptune-graph" FILES ${AWS_NEPTUNE-GRAPH_HEADERS})
        source_group("Header Files\\aws\\neptune-graph\\model" FILES ${AWS_NEPTUNE-GRAPH_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_NEPTUNE-GRAPH_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_NEPTUNE-GRAPH_MODEL_SOURCE})
    endif(MSVC)
endif()

set(NEPTUNE-GRAPH_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${NEPTUNE-GRAPH_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_NEPTUNEGRAPH_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_NEPTUNE-GRAPH_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/neptune-graph)
install (FILES ${AWS_NEPTUNE-GRAPH_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/neptune-graph/model)

do_packaging()


