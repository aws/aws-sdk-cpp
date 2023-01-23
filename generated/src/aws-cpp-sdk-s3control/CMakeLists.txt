add_project(aws-cpp-sdk-s3control "C++ SDK for the AWS s3control service" aws-cpp-sdk-core)

file(GLOB AWS_S3CONTROL_HEADERS
    "include/aws/s3control/*.h"
)

file(GLOB AWS_S3CONTROL_MODEL_HEADERS
    "include/aws/s3control/model/*.h"
)

file(GLOB AWS_S3CONTROL_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_S3CONTROL_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB S3CONTROL_UNIFIED_HEADERS
    ${AWS_S3CONTROL_HEADERS}
    ${AWS_S3CONTROL_MODEL_HEADERS}
)

file(GLOB S3CONTROL_UNITY_SRC
    ${AWS_S3CONTROL_SOURCE}
    ${AWS_S3CONTROL_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("S3CONTROL" S3CONTROL_UNITY_SRC)
endif()

file(GLOB S3CONTROL_SRC
    ${S3CONTROL_UNIFIED_HEADERS}
    ${S3CONTROL_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\s3control" FILES ${AWS_S3CONTROL_HEADERS})
        source_group("Header Files\\aws\\s3control\\model" FILES ${AWS_S3CONTROL_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_S3CONTROL_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_S3CONTROL_MODEL_SOURCE})
    endif(MSVC)
endif()

set(S3CONTROL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${S3CONTROL_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_S3CONTROL_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_S3CONTROL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/s3control)
install (FILES ${AWS_S3CONTROL_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/s3control/model)

do_packaging()


