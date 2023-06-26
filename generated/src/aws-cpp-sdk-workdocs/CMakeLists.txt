add_project(aws-cpp-sdk-workdocs "C++ SDK for the AWS workdocs service" aws-cpp-sdk-core)

file(GLOB AWS_WORKDOCS_HEADERS
    "include/aws/workdocs/*.h"
)

file(GLOB AWS_WORKDOCS_MODEL_HEADERS
    "include/aws/workdocs/model/*.h"
)

file(GLOB AWS_WORKDOCS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_WORKDOCS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB WORKDOCS_UNIFIED_HEADERS
    ${AWS_WORKDOCS_HEADERS}
    ${AWS_WORKDOCS_MODEL_HEADERS}
)

file(GLOB WORKDOCS_UNITY_SRC
    ${AWS_WORKDOCS_SOURCE}
    ${AWS_WORKDOCS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("WORKDOCS" WORKDOCS_UNITY_SRC)
endif()

file(GLOB WORKDOCS_SRC
    ${WORKDOCS_UNIFIED_HEADERS}
    ${WORKDOCS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\workdocs" FILES ${AWS_WORKDOCS_HEADERS})
        source_group("Header Files\\aws\\workdocs\\model" FILES ${AWS_WORKDOCS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_WORKDOCS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_WORKDOCS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(WORKDOCS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${WORKDOCS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_WORKDOCS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_WORKDOCS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/workdocs)
install (FILES ${AWS_WORKDOCS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/workdocs/model)

do_packaging()


