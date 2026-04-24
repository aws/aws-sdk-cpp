add_project(aws-cpp-sdk-pi "C++ SDK for the AWS pi service" aws-cpp-sdk-core)

file(GLOB AWS_PI_HEADERS
    "include/aws/pi/*.h"
)

file(GLOB AWS_PI_MODEL_HEADERS
    "include/aws/pi/model/*.h"
)

file(GLOB AWS_PI_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PI_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PI_UNIFIED_HEADERS
    ${AWS_PI_HEADERS}
    ${AWS_PI_MODEL_HEADERS}
)

file(GLOB PI_UNITY_SRC
    ${AWS_PI_SOURCE}
    ${AWS_PI_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PI" PI_UNITY_SRC)
endif()

file(GLOB PI_SRC
    ${PI_UNIFIED_HEADERS}
    ${PI_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\pi" FILES ${AWS_PI_HEADERS})
        source_group("Header Files\\aws\\pi\\model" FILES ${AWS_PI_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PI_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PI_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PI_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PI_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PI_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PI_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/pi)
install (FILES ${AWS_PI_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/pi/model)

do_packaging()


