add_project(aws-cpp-sdk-sso-admin "C++ SDK for the AWS sso-admin service" aws-cpp-sdk-core)

file(GLOB AWS_SSO-ADMIN_HEADERS
    "include/aws/sso-admin/*.h"
)

file(GLOB AWS_SSO-ADMIN_MODEL_HEADERS
    "include/aws/sso-admin/model/*.h"
)

file(GLOB AWS_SSO-ADMIN_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SSO-ADMIN_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SSO-ADMIN_UNIFIED_HEADERS
    ${AWS_SSO-ADMIN_HEADERS}
    ${AWS_SSO-ADMIN_MODEL_HEADERS}
)

file(GLOB SSO-ADMIN_UNITY_SRC
    ${AWS_SSO-ADMIN_SOURCE}
    ${AWS_SSO-ADMIN_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SSO-ADMIN" SSO-ADMIN_UNITY_SRC)
endif()

file(GLOB SSO-ADMIN_SRC
    ${SSO-ADMIN_UNIFIED_HEADERS}
    ${SSO-ADMIN_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\sso-admin" FILES ${AWS_SSO-ADMIN_HEADERS})
        source_group("Header Files\\aws\\sso-admin\\model" FILES ${AWS_SSO-ADMIN_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SSO-ADMIN_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SSO-ADMIN_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SSO-ADMIN_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SSO-ADMIN_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SSOADMIN_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SSO-ADMIN_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sso-admin)
install (FILES ${AWS_SSO-ADMIN_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sso-admin/model)

do_packaging()


