add_project(aws-cpp-sdk-s3-encryption
    "Amazon S3 Encryption Client"
    aws-cpp-sdk-core 
    aws-cpp-sdk-s3 
    aws-cpp-sdk-kms)

file( GLOB S3ENCRYPTION_HEADERS "include/aws/s3-encryption/*.h" )
file( GLOB S3ENCRYPTION_MATERIALS_HEADERS "include/aws/s3-encryption/materials/*.h" )
file( GLOB S3ENCRYPTION_HANDLERS_HEADERS "include/aws/s3-encryption/handlers/*.h" )
file( GLOB S3ENCRYPTION_MODULES_HEADERS "include/aws/s3-encryption/modules/*.h" )

file( GLOB S3ENCRYPTION_SOURCE "source/s3-encryption/*.cpp" )
file( GLOB S3ENCRYPTION_MATERIALS_SOURCE "source/s3-encryption/materials/*.cpp" )
file( GLOB S3ENCRYPTION_HANDLERS_SOURCE "source/s3-encryption/handlers/*.cpp" )
file( GLOB S3ENCRYPTION_MODULES_SOURCE "source/s3-encryption/modules/*.cpp" )

if(MSVC)
    source_group("Header Files\\aws\\s3-encryption" FILES ${S3ENCRYPTION_HEADERS})
    source_group("Header Files\\aws\\s3-encryption\\materials" FILES ${S3ENCRYPTION_MATERIALS_HEADERS})
    source_group("Header Files\\aws\\s3-encryption\\handlers" FILES ${S3ENCRYPTION_HANDLERS_HEADERS})
    source_group("Header Files\\aws\\s3-encryption\\modules" FILES ${S3ENCRYPTION_MODULES_HEADERS})

    source_group("Source Files\\s3-encryption" FILES ${S3ENCRYPTION_SOURCE})
    source_group("Source Files\\s3-encryption\\materials" FILES ${S3ENCRYPTION_MATERIALS_SOURCE})
    source_group("Source Files\\s3-encryption\\handlers" FILES ${S3ENCRYPTION_HANDLERS_SOURCE})
    source_group("Source Files\\s3-encryption\\modules" FILES ${S3ENCRYPTION_MODULES_SOURCE})
    
endif()

file(GLOB ALL_S3ENCRYPTION_HEADERS
    ${S3ENCRYPTION_HEADERS}
    ${S3ENCRYPTION_MATERIALS_HEADERS}
    ${S3ENCRYPTION_HANDLERS_HEADERS}
    ${S3ENCRYPTION_MODULES_HEADERS}
)

file(GLOB ALL_S3ENCRYPTION_SOURCE
    ${S3ENCRYPTION_SOURCE}
    ${S3ENCRYPTION_MATERIALS_SOURCE}
    ${S3ENCRYPTION_HANDLERS_SOURCE}
    ${S3ENCRYPTION_MODULES_SOURCE}
)

file(GLOB ALL_S3ENCRYPTION
    ${ALL_S3ENCRYPTION_HEADERS}
    ${ALL_S3ENCRYPTION_SOURCE}
)

set(S3ENCRYPTION_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-s3/include/"
    "${AWS_NATIVE_SDK_ROOT}/aws-cpp-sdk-kms/include/"
    "${CORE_DIR}/include/"
  )

include_directories(${S3ENCRYPTION_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_S3ENCRYPTION_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${ALL_S3ENCRYPTION})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})

setup_install()

install (FILES ${S3ENCRYPTION_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/s3-encryption)
install (FILES ${S3ENCRYPTION_MATERIALS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/s3-encryption/materials)
install (FILES ${S3ENCRYPTION_HANDLERS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/s3-encryption/handlers)
install (FILES ${S3ENCRYPTION_MODULES_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/s3-encryption/modules)

do_packaging()
