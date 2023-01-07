add_project(aws-cpp-sdk-transfer
    "High-level C++ SDK for file transfer to/from AWS S3"
    aws-cpp-sdk-s3
    aws-cpp-sdk-core)

file( GLOB TRANSFER_HEADERS "include/aws/transfer/*.h" )

file( GLOB TRANSFER_SOURCE "source/transfer/*.cpp" )

if(MSVC)
    source_group("Header Files\\aws\\transfer" FILES ${TRANSFER_HEADERS})
    source_group("Source Files\\transfer" FILES ${TRANSFER_SOURCE})
endif()

file(GLOB ALL_TRANSFER_HEADERS
    ${TRANSFER_HEADERS}
)

file(GLOB ALL_TRANSFER_SOURCE
    ${TRANSFER_SOURCE}
)

file(GLOB ALL_TRANSFER
    ${ALL_TRANSFER_HEADERS}
    ${ALL_TRANSFER_SOURCE}
)

set(TRANSFER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
  )

include_directories(${TRANSFER_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_TRANSFER_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${ALL_TRANSFER})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)
target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

setup_install()

install (FILES ${ALL_TRANSFER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/transfer)

do_packaging()
