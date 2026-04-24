add_project(aws-cpp-sdk-s3outposts "C++ SDK for the AWS s3outposts service" aws-cpp-sdk-core)

file(GLOB AWS_S3OUTPOSTS_HEADERS
    "include/aws/s3outposts/*.h"
)

file(GLOB AWS_S3OUTPOSTS_MODEL_HEADERS
    "include/aws/s3outposts/model/*.h"
)

file(GLOB AWS_S3OUTPOSTS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_S3OUTPOSTS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB S3OUTPOSTS_UNIFIED_HEADERS
    ${AWS_S3OUTPOSTS_HEADERS}
    ${AWS_S3OUTPOSTS_MODEL_HEADERS}
)

file(GLOB S3OUTPOSTS_UNITY_SRC
    ${AWS_S3OUTPOSTS_SOURCE}
    ${AWS_S3OUTPOSTS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("S3OUTPOSTS" S3OUTPOSTS_UNITY_SRC)
endif()

file(GLOB S3OUTPOSTS_SRC
    ${S3OUTPOSTS_UNIFIED_HEADERS}
    ${S3OUTPOSTS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\s3outposts" FILES ${AWS_S3OUTPOSTS_HEADERS})
        source_group("Header Files\\aws\\s3outposts\\model" FILES ${AWS_S3OUTPOSTS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_S3OUTPOSTS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_S3OUTPOSTS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(S3OUTPOSTS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${S3OUTPOSTS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_S3OUTPOSTS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_S3OUTPOSTS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/s3outposts)
install (FILES ${AWS_S3OUTPOSTS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/s3outposts/model)

do_packaging()


