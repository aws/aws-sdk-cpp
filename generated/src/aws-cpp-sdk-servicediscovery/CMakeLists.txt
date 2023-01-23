add_project(aws-cpp-sdk-servicediscovery "C++ SDK for the AWS servicediscovery service" aws-cpp-sdk-core)

file(GLOB AWS_SERVICEDISCOVERY_HEADERS
    "include/aws/servicediscovery/*.h"
)

file(GLOB AWS_SERVICEDISCOVERY_MODEL_HEADERS
    "include/aws/servicediscovery/model/*.h"
)

file(GLOB AWS_SERVICEDISCOVERY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SERVICEDISCOVERY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SERVICEDISCOVERY_UNIFIED_HEADERS
    ${AWS_SERVICEDISCOVERY_HEADERS}
    ${AWS_SERVICEDISCOVERY_MODEL_HEADERS}
)

file(GLOB SERVICEDISCOVERY_UNITY_SRC
    ${AWS_SERVICEDISCOVERY_SOURCE}
    ${AWS_SERVICEDISCOVERY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SERVICEDISCOVERY" SERVICEDISCOVERY_UNITY_SRC)
endif()

file(GLOB SERVICEDISCOVERY_SRC
    ${SERVICEDISCOVERY_UNIFIED_HEADERS}
    ${SERVICEDISCOVERY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\servicediscovery" FILES ${AWS_SERVICEDISCOVERY_HEADERS})
        source_group("Header Files\\aws\\servicediscovery\\model" FILES ${AWS_SERVICEDISCOVERY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SERVICEDISCOVERY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SERVICEDISCOVERY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SERVICEDISCOVERY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SERVICEDISCOVERY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SERVICEDISCOVERY_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SERVICEDISCOVERY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/servicediscovery)
install (FILES ${AWS_SERVICEDISCOVERY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/servicediscovery/model)

do_packaging()


