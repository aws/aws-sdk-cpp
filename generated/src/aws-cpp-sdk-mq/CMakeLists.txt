add_project(aws-cpp-sdk-mq "C++ SDK for the AWS mq service" aws-cpp-sdk-core)

file(GLOB AWS_MQ_HEADERS
    "include/aws/mq/*.h"
)

file(GLOB AWS_MQ_MODEL_HEADERS
    "include/aws/mq/model/*.h"
)

file(GLOB AWS_MQ_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MQ_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MQ_UNIFIED_HEADERS
    ${AWS_MQ_HEADERS}
    ${AWS_MQ_MODEL_HEADERS}
)

file(GLOB MQ_UNITY_SRC
    ${AWS_MQ_SOURCE}
    ${AWS_MQ_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MQ" MQ_UNITY_SRC)
endif()

file(GLOB MQ_SRC
    ${MQ_UNIFIED_HEADERS}
    ${MQ_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\mq" FILES ${AWS_MQ_HEADERS})
        source_group("Header Files\\aws\\mq\\model" FILES ${AWS_MQ_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MQ_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MQ_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MQ_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MQ_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MQ_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MQ_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mq)
install (FILES ${AWS_MQ_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mq/model)

do_packaging()


