add_project(aws-cpp-sdk-workmail "C++ SDK for the AWS workmail service" aws-cpp-sdk-core)

file(GLOB AWS_WORKMAIL_HEADERS
    "include/aws/workmail/*.h"
)

file(GLOB AWS_WORKMAIL_MODEL_HEADERS
    "include/aws/workmail/model/*.h"
)

file(GLOB AWS_WORKMAIL_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_WORKMAIL_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB WORKMAIL_UNIFIED_HEADERS
    ${AWS_WORKMAIL_HEADERS}
    ${AWS_WORKMAIL_MODEL_HEADERS}
)

file(GLOB WORKMAIL_UNITY_SRC
    ${AWS_WORKMAIL_SOURCE}
    ${AWS_WORKMAIL_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("WORKMAIL" WORKMAIL_UNITY_SRC)
endif()

file(GLOB WORKMAIL_SRC
    ${WORKMAIL_UNIFIED_HEADERS}
    ${WORKMAIL_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\workmail" FILES ${AWS_WORKMAIL_HEADERS})
        source_group("Header Files\\aws\\workmail\\model" FILES ${AWS_WORKMAIL_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_WORKMAIL_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_WORKMAIL_MODEL_SOURCE})
    endif(MSVC)
endif()

set(WORKMAIL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${WORKMAIL_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_WORKMAIL_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_WORKMAIL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/workmail)
install (FILES ${AWS_WORKMAIL_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/workmail/model)

do_packaging()


