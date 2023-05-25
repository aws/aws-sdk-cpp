add_project(aws-cpp-sdk-sts "C++ SDK for the AWS sts service" aws-cpp-sdk-core)

file(GLOB AWS_STS_HEADERS
    "include/aws/sts/*.h"
)

file(GLOB AWS_STS_MODEL_HEADERS
    "include/aws/sts/model/*.h"
)

file(GLOB AWS_STS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_STS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB STS_UNIFIED_HEADERS
    ${AWS_STS_HEADERS}
    ${AWS_STS_MODEL_HEADERS}
)

file(GLOB STS_UNITY_SRC
    ${AWS_STS_SOURCE}
    ${AWS_STS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("STS" STS_UNITY_SRC)
endif()

file(GLOB STS_SRC
    ${STS_UNIFIED_HEADERS}
    ${STS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\sts" FILES ${AWS_STS_HEADERS})
        source_group("Header Files\\aws\\sts\\model" FILES ${AWS_STS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_STS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_STS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(STS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${STS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_STS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_STS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sts)
install (FILES ${AWS_STS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sts/model)

do_packaging()


