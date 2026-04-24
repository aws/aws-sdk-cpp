add_project(aws-cpp-sdk-service-quotas "C++ SDK for the AWS service-quotas service" aws-cpp-sdk-core)

file(GLOB AWS_SERVICE-QUOTAS_HEADERS
    "include/aws/service-quotas/*.h"
)

file(GLOB AWS_SERVICE-QUOTAS_MODEL_HEADERS
    "include/aws/service-quotas/model/*.h"
)

file(GLOB AWS_SERVICE-QUOTAS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SERVICE-QUOTAS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SERVICE-QUOTAS_UNIFIED_HEADERS
    ${AWS_SERVICE-QUOTAS_HEADERS}
    ${AWS_SERVICE-QUOTAS_MODEL_HEADERS}
)

file(GLOB SERVICE-QUOTAS_UNITY_SRC
    ${AWS_SERVICE-QUOTAS_SOURCE}
    ${AWS_SERVICE-QUOTAS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SERVICE-QUOTAS" SERVICE-QUOTAS_UNITY_SRC)
endif()

file(GLOB SERVICE-QUOTAS_SRC
    ${SERVICE-QUOTAS_UNIFIED_HEADERS}
    ${SERVICE-QUOTAS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\service-quotas" FILES ${AWS_SERVICE-QUOTAS_HEADERS})
        source_group("Header Files\\aws\\service-quotas\\model" FILES ${AWS_SERVICE-QUOTAS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SERVICE-QUOTAS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SERVICE-QUOTAS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SERVICE-QUOTAS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SERVICE-QUOTAS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SERVICEQUOTAS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SERVICE-QUOTAS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/service-quotas)
install (FILES ${AWS_SERVICE-QUOTAS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/service-quotas/model)

do_packaging()


