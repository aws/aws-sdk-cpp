add_project(aws-cpp-sdk-redshift-serverless "C++ SDK for the AWS redshift-serverless service" aws-cpp-sdk-core)

file(GLOB AWS_REDSHIFT-SERVERLESS_HEADERS
    "include/aws/redshift-serverless/*.h"
)

file(GLOB AWS_REDSHIFT-SERVERLESS_MODEL_HEADERS
    "include/aws/redshift-serverless/model/*.h"
)

file(GLOB AWS_REDSHIFT-SERVERLESS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_REDSHIFT-SERVERLESS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB REDSHIFT-SERVERLESS_UNIFIED_HEADERS
    ${AWS_REDSHIFT-SERVERLESS_HEADERS}
    ${AWS_REDSHIFT-SERVERLESS_MODEL_HEADERS}
)

file(GLOB REDSHIFT-SERVERLESS_UNITY_SRC
    ${AWS_REDSHIFT-SERVERLESS_SOURCE}
    ${AWS_REDSHIFT-SERVERLESS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("REDSHIFT-SERVERLESS" REDSHIFT-SERVERLESS_UNITY_SRC)
endif()

file(GLOB REDSHIFT-SERVERLESS_SRC
    ${REDSHIFT-SERVERLESS_UNIFIED_HEADERS}
    ${REDSHIFT-SERVERLESS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\redshift-serverless" FILES ${AWS_REDSHIFT-SERVERLESS_HEADERS})
        source_group("Header Files\\aws\\redshift-serverless\\model" FILES ${AWS_REDSHIFT-SERVERLESS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_REDSHIFT-SERVERLESS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_REDSHIFT-SERVERLESS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(REDSHIFT-SERVERLESS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${REDSHIFT-SERVERLESS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_REDSHIFTSERVERLESS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_REDSHIFT-SERVERLESS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/redshift-serverless)
install (FILES ${AWS_REDSHIFT-SERVERLESS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/redshift-serverless/model)

do_packaging()


