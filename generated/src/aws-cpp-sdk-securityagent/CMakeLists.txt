add_project(aws-cpp-sdk-securityagent "C++ SDK for the AWS securityagent service" aws-cpp-sdk-core)

file(GLOB AWS_SECURITYAGENT_HEADERS
    "include/aws/securityagent/*.h"
)

file(GLOB AWS_SECURITYAGENT_MODEL_HEADERS
    "include/aws/securityagent/model/*.h"
)

file(GLOB AWS_SECURITYAGENT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SECURITYAGENT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SECURITYAGENT_UNIFIED_HEADERS
    ${AWS_SECURITYAGENT_HEADERS}
    ${AWS_SECURITYAGENT_MODEL_HEADERS}
)

file(GLOB SECURITYAGENT_UNITY_SRC
    ${AWS_SECURITYAGENT_SOURCE}
    ${AWS_SECURITYAGENT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SECURITYAGENT" SECURITYAGENT_UNITY_SRC)
endif()

file(GLOB SECURITYAGENT_SRC
    ${SECURITYAGENT_UNIFIED_HEADERS}
    ${SECURITYAGENT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\securityagent" FILES ${AWS_SECURITYAGENT_HEADERS})
        source_group("Header Files\\aws\\securityagent\\model" FILES ${AWS_SECURITYAGENT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SECURITYAGENT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SECURITYAGENT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SECURITYAGENT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SECURITYAGENT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SECURITYAGENT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SECURITYAGENT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/securityagent)
install (FILES ${AWS_SECURITYAGENT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/securityagent/model)

do_packaging()


