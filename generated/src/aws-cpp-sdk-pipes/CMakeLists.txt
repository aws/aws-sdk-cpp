add_project(aws-cpp-sdk-pipes "C++ SDK for the AWS pipes service" aws-cpp-sdk-core)

file(GLOB AWS_PIPES_HEADERS
    "include/aws/pipes/*.h"
)

file(GLOB AWS_PIPES_MODEL_HEADERS
    "include/aws/pipes/model/*.h"
)

file(GLOB AWS_PIPES_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PIPES_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PIPES_UNIFIED_HEADERS
    ${AWS_PIPES_HEADERS}
    ${AWS_PIPES_MODEL_HEADERS}
)

file(GLOB PIPES_UNITY_SRC
    ${AWS_PIPES_SOURCE}
    ${AWS_PIPES_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PIPES" PIPES_UNITY_SRC)
endif()

file(GLOB PIPES_SRC
    ${PIPES_UNIFIED_HEADERS}
    ${PIPES_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\pipes" FILES ${AWS_PIPES_HEADERS})
        source_group("Header Files\\aws\\pipes\\model" FILES ${AWS_PIPES_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PIPES_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PIPES_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PIPES_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PIPES_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PIPES_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PIPES_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/pipes)
install (FILES ${AWS_PIPES_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/pipes/model)

do_packaging()


