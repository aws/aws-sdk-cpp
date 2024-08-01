add_project(aws-cpp-sdk-ssm-quicksetup "C++ SDK for the AWS ssm-quicksetup service" aws-cpp-sdk-core)

file(GLOB AWS_SSM-QUICKSETUP_HEADERS
    "include/aws/ssm-quicksetup/*.h"
)

file(GLOB AWS_SSM-QUICKSETUP_MODEL_HEADERS
    "include/aws/ssm-quicksetup/model/*.h"
)

file(GLOB AWS_SSM-QUICKSETUP_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SSM-QUICKSETUP_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SSM-QUICKSETUP_UNIFIED_HEADERS
    ${AWS_SSM-QUICKSETUP_HEADERS}
    ${AWS_SSM-QUICKSETUP_MODEL_HEADERS}
)

file(GLOB SSM-QUICKSETUP_UNITY_SRC
    ${AWS_SSM-QUICKSETUP_SOURCE}
    ${AWS_SSM-QUICKSETUP_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SSM-QUICKSETUP" SSM-QUICKSETUP_UNITY_SRC)
endif()

file(GLOB SSM-QUICKSETUP_SRC
    ${SSM-QUICKSETUP_UNIFIED_HEADERS}
    ${SSM-QUICKSETUP_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\ssm-quicksetup" FILES ${AWS_SSM-QUICKSETUP_HEADERS})
        source_group("Header Files\\aws\\ssm-quicksetup\\model" FILES ${AWS_SSM-QUICKSETUP_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SSM-QUICKSETUP_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SSM-QUICKSETUP_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SSM-QUICKSETUP_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SSM-QUICKSETUP_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SSMQUICKSETUP_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SSM-QUICKSETUP_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ssm-quicksetup)
install (FILES ${AWS_SSM-QUICKSETUP_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ssm-quicksetup/model)

do_packaging()


