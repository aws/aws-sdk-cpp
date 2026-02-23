add_project(aws-cpp-sdk-signer-data "C++ SDK for the AWS signer-data service" aws-cpp-sdk-core)

file(GLOB AWS_SIGNER-DATA_HEADERS
    "include/aws/signer-data/*.h"
)

file(GLOB AWS_SIGNER-DATA_MODEL_HEADERS
    "include/aws/signer-data/model/*.h"
)

file(GLOB AWS_SIGNER-DATA_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SIGNER-DATA_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SIGNER-DATA_UNIFIED_HEADERS
    ${AWS_SIGNER-DATA_HEADERS}
    ${AWS_SIGNER-DATA_MODEL_HEADERS}
)

file(GLOB SIGNER-DATA_UNITY_SRC
    ${AWS_SIGNER-DATA_SOURCE}
    ${AWS_SIGNER-DATA_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SIGNER-DATA" SIGNER-DATA_UNITY_SRC)
endif()

file(GLOB SIGNER-DATA_SRC
    ${SIGNER-DATA_UNIFIED_HEADERS}
    ${SIGNER-DATA_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\signer-data" FILES ${AWS_SIGNER-DATA_HEADERS})
        source_group("Header Files\\aws\\signer-data\\model" FILES ${AWS_SIGNER-DATA_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SIGNER-DATA_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SIGNER-DATA_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SIGNER-DATA_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SIGNER-DATA_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SIGNERDATA_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SIGNER-DATA_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/signer-data)
install (FILES ${AWS_SIGNER-DATA_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/signer-data/model)

do_packaging()


