add_project(aws-cpp-sdk-sso "C++ SDK for the AWS sso service" aws-cpp-sdk-core)

file(GLOB AWS_SSO_HEADERS
    "include/aws/sso/*.h"
)

file(GLOB AWS_SSO_MODEL_HEADERS
    "include/aws/sso/model/*.h"
)

file(GLOB AWS_SSO_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SSO_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SSO_UNIFIED_HEADERS
    ${AWS_SSO_HEADERS}
    ${AWS_SSO_MODEL_HEADERS}
)

file(GLOB SSO_UNITY_SRC
    ${AWS_SSO_SOURCE}
    ${AWS_SSO_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SSO" SSO_UNITY_SRC)
endif()

file(GLOB SSO_SRC
    ${SSO_UNIFIED_HEADERS}
    ${SSO_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\sso" FILES ${AWS_SSO_HEADERS})
        source_group("Header Files\\aws\\sso\\model" FILES ${AWS_SSO_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SSO_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SSO_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SSO_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SSO_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SSO_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SSO_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sso)
install (FILES ${AWS_SSO_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sso/model)

do_packaging()


