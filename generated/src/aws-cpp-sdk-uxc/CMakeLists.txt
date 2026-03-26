add_project(aws-cpp-sdk-uxc "C++ SDK for the AWS uxc service" aws-cpp-sdk-core)

file(GLOB AWS_UXC_HEADERS
    "include/aws/uxc/*.h"
)

file(GLOB AWS_UXC_MODEL_HEADERS
    "include/aws/uxc/model/*.h"
)

file(GLOB AWS_UXC_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_UXC_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB UXC_UNIFIED_HEADERS
    ${AWS_UXC_HEADERS}
    ${AWS_UXC_MODEL_HEADERS}
)

file(GLOB UXC_UNITY_SRC
    ${AWS_UXC_SOURCE}
    ${AWS_UXC_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("UXC" UXC_UNITY_SRC)
endif()

file(GLOB UXC_SRC
    ${UXC_UNIFIED_HEADERS}
    ${UXC_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\uxc" FILES ${AWS_UXC_HEADERS})
        source_group("Header Files\\aws\\uxc\\model" FILES ${AWS_UXC_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_UXC_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_UXC_MODEL_SOURCE})
    endif(MSVC)
endif()

set(UXC_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${UXC_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_UXC_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_UXC_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/uxc)
install (FILES ${AWS_UXC_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/uxc/model)

do_packaging()


