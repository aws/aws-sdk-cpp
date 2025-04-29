add_project(aws-cpp-sdk-ssm-guiconnect "C++ SDK for the AWS ssm-guiconnect service" aws-cpp-sdk-core)

file(GLOB AWS_SSM-GUICONNECT_HEADERS
    "include/aws/ssm-guiconnect/*.h"
)

file(GLOB AWS_SSM-GUICONNECT_MODEL_HEADERS
    "include/aws/ssm-guiconnect/model/*.h"
)

file(GLOB AWS_SSM-GUICONNECT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SSM-GUICONNECT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SSM-GUICONNECT_UNIFIED_HEADERS
    ${AWS_SSM-GUICONNECT_HEADERS}
    ${AWS_SSM-GUICONNECT_MODEL_HEADERS}
)

file(GLOB SSM-GUICONNECT_UNITY_SRC
    ${AWS_SSM-GUICONNECT_SOURCE}
    ${AWS_SSM-GUICONNECT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SSM-GUICONNECT" SSM-GUICONNECT_UNITY_SRC)
endif()

file(GLOB SSM-GUICONNECT_SRC
    ${SSM-GUICONNECT_UNIFIED_HEADERS}
    ${SSM-GUICONNECT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\ssm-guiconnect" FILES ${AWS_SSM-GUICONNECT_HEADERS})
        source_group("Header Files\\aws\\ssm-guiconnect\\model" FILES ${AWS_SSM-GUICONNECT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SSM-GUICONNECT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SSM-GUICONNECT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SSM-GUICONNECT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SSM-GUICONNECT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SSMGUICONNECT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SSM-GUICONNECT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ssm-guiconnect)
install (FILES ${AWS_SSM-GUICONNECT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ssm-guiconnect/model)

do_packaging()


