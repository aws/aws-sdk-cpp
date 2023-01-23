add_project(aws-cpp-sdk-securityhub "C++ SDK for the AWS securityhub service" aws-cpp-sdk-core)

file(GLOB AWS_SECURITYHUB_HEADERS
    "include/aws/securityhub/*.h"
)

file(GLOB AWS_SECURITYHUB_MODEL_HEADERS
    "include/aws/securityhub/model/*.h"
)

file(GLOB AWS_SECURITYHUB_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SECURITYHUB_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SECURITYHUB_UNIFIED_HEADERS
    ${AWS_SECURITYHUB_HEADERS}
    ${AWS_SECURITYHUB_MODEL_HEADERS}
)

file(GLOB SECURITYHUB_UNITY_SRC
    ${AWS_SECURITYHUB_SOURCE}
    ${AWS_SECURITYHUB_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SECURITYHUB" SECURITYHUB_UNITY_SRC)
endif()

file(GLOB SECURITYHUB_SRC
    ${SECURITYHUB_UNIFIED_HEADERS}
    ${SECURITYHUB_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\securityhub" FILES ${AWS_SECURITYHUB_HEADERS})
        source_group("Header Files\\aws\\securityhub\\model" FILES ${AWS_SECURITYHUB_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SECURITYHUB_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SECURITYHUB_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SECURITYHUB_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SECURITYHUB_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SECURITYHUB_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SECURITYHUB_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/securityhub)
install (FILES ${AWS_SECURITYHUB_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/securityhub/model)

do_packaging()


