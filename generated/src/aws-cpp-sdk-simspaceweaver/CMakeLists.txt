add_project(aws-cpp-sdk-simspaceweaver "C++ SDK for the AWS simspaceweaver service" aws-cpp-sdk-core)

file(GLOB AWS_SIMSPACEWEAVER_HEADERS
    "include/aws/simspaceweaver/*.h"
)

file(GLOB AWS_SIMSPACEWEAVER_MODEL_HEADERS
    "include/aws/simspaceweaver/model/*.h"
)

file(GLOB AWS_SIMSPACEWEAVER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SIMSPACEWEAVER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SIMSPACEWEAVER_UNIFIED_HEADERS
    ${AWS_SIMSPACEWEAVER_HEADERS}
    ${AWS_SIMSPACEWEAVER_MODEL_HEADERS}
)

file(GLOB SIMSPACEWEAVER_UNITY_SRC
    ${AWS_SIMSPACEWEAVER_SOURCE}
    ${AWS_SIMSPACEWEAVER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SIMSPACEWEAVER" SIMSPACEWEAVER_UNITY_SRC)
endif()

file(GLOB SIMSPACEWEAVER_SRC
    ${SIMSPACEWEAVER_UNIFIED_HEADERS}
    ${SIMSPACEWEAVER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\simspaceweaver" FILES ${AWS_SIMSPACEWEAVER_HEADERS})
        source_group("Header Files\\aws\\simspaceweaver\\model" FILES ${AWS_SIMSPACEWEAVER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SIMSPACEWEAVER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SIMSPACEWEAVER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SIMSPACEWEAVER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SIMSPACEWEAVER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SIMSPACEWEAVER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SIMSPACEWEAVER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/simspaceweaver)
install (FILES ${AWS_SIMSPACEWEAVER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/simspaceweaver/model)

do_packaging()


