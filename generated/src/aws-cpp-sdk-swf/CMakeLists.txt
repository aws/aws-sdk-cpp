add_project(aws-cpp-sdk-swf "C++ SDK for the AWS swf service" aws-cpp-sdk-core)

file(GLOB AWS_SWF_HEADERS
    "include/aws/swf/*.h"
)

file(GLOB AWS_SWF_MODEL_HEADERS
    "include/aws/swf/model/*.h"
)

file(GLOB AWS_SWF_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SWF_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SWF_UNIFIED_HEADERS
    ${AWS_SWF_HEADERS}
    ${AWS_SWF_MODEL_HEADERS}
)

file(GLOB SWF_UNITY_SRC
    ${AWS_SWF_SOURCE}
    ${AWS_SWF_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SWF" SWF_UNITY_SRC)
endif()

file(GLOB SWF_SRC
    ${SWF_UNIFIED_HEADERS}
    ${SWF_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\swf" FILES ${AWS_SWF_HEADERS})
        source_group("Header Files\\aws\\swf\\model" FILES ${AWS_SWF_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SWF_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SWF_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SWF_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SWF_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SWF_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SWF_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/swf)
install (FILES ${AWS_SWF_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/swf/model)

do_packaging()


