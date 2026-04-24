add_project(aws-cpp-sdk-qbusiness "C++ SDK for the AWS qbusiness service" aws-cpp-sdk-core)

file(GLOB AWS_QBUSINESS_HEADERS
    "include/aws/qbusiness/*.h"
)

file(GLOB AWS_QBUSINESS_MODEL_HEADERS
    "include/aws/qbusiness/model/*.h"
)

file(GLOB AWS_QBUSINESS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_QBUSINESS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB QBUSINESS_UNIFIED_HEADERS
    ${AWS_QBUSINESS_HEADERS}
    ${AWS_QBUSINESS_MODEL_HEADERS}
)

file(GLOB QBUSINESS_UNITY_SRC
    ${AWS_QBUSINESS_SOURCE}
    ${AWS_QBUSINESS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("QBUSINESS" QBUSINESS_UNITY_SRC)
endif()

file(GLOB QBUSINESS_SRC
    ${QBUSINESS_UNIFIED_HEADERS}
    ${QBUSINESS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\qbusiness" FILES ${AWS_QBUSINESS_HEADERS})
        source_group("Header Files\\aws\\qbusiness\\model" FILES ${AWS_QBUSINESS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_QBUSINESS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_QBUSINESS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(QBUSINESS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${QBUSINESS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_QBUSINESS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_QBUSINESS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/qbusiness)
install (FILES ${AWS_QBUSINESS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/qbusiness/model)

do_packaging()


