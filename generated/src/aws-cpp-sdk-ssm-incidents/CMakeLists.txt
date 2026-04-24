add_project(aws-cpp-sdk-ssm-incidents "C++ SDK for the AWS ssm-incidents service" aws-cpp-sdk-core)

file(GLOB AWS_SSM-INCIDENTS_HEADERS
    "include/aws/ssm-incidents/*.h"
)

file(GLOB AWS_SSM-INCIDENTS_MODEL_HEADERS
    "include/aws/ssm-incidents/model/*.h"
)

file(GLOB AWS_SSM-INCIDENTS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SSM-INCIDENTS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SSM-INCIDENTS_UNIFIED_HEADERS
    ${AWS_SSM-INCIDENTS_HEADERS}
    ${AWS_SSM-INCIDENTS_MODEL_HEADERS}
)

file(GLOB SSM-INCIDENTS_UNITY_SRC
    ${AWS_SSM-INCIDENTS_SOURCE}
    ${AWS_SSM-INCIDENTS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SSM-INCIDENTS" SSM-INCIDENTS_UNITY_SRC)
endif()

file(GLOB SSM-INCIDENTS_SRC
    ${SSM-INCIDENTS_UNIFIED_HEADERS}
    ${SSM-INCIDENTS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\ssm-incidents" FILES ${AWS_SSM-INCIDENTS_HEADERS})
        source_group("Header Files\\aws\\ssm-incidents\\model" FILES ${AWS_SSM-INCIDENTS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SSM-INCIDENTS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SSM-INCIDENTS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SSM-INCIDENTS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SSM-INCIDENTS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SSMINCIDENTS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SSM-INCIDENTS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ssm-incidents)
install (FILES ${AWS_SSM-INCIDENTS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ssm-incidents/model)

do_packaging()


