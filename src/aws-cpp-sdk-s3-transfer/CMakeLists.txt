add_project(aws-cpp-sdk-s3-transfer
        "High-level CRT-backed C++ SDK for file transfer to/from AWS S3"
        aws-cpp-sdk-s3
        aws-cpp-sdk-core)

file( GLOB S3_TRANSFER_HEADERS "include/aws/s3-transfer/*.h" )

file( GLOB S3_TRANSFER_SOURCE "source/s3-transfer/*.cpp" )

if(MSVC)
    source_group("Header Files\\aws\\s3-transfer" FILES ${S3_TRANSFER_HEADERS})
    source_group("Source Files\\s3-transfer" FILES ${S3_TRANSFER_SOURCE})
endif()

file(GLOB ALL_S3_TRANSFER_HEADERS
        ${S3_TRANSFER_HEADERS}
)

file(GLOB ALL_S3_TRANSFER_SOURCE
        ${S3_TRANSFER_SOURCE}
)

file(GLOB ALL_S3_TRANSFER
        ${ALL_S3_TRANSFER_HEADERS}
        ${ALL_S3_TRANSFER_SOURCE}
)

set(S3_TRANSFER_INCLUDES
        "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${S3_TRANSFER_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_S3_TRANSFER_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${ALL_S3_TRANSFER})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

setup_install()

install (FILES ${ALL_S3_TRANSFER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/s3-transfer)

do_packaging()
