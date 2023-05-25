add_project(aws-cpp-sdk-sqs "C++ SDK for the AWS sqs service" aws-cpp-sdk-core)

file(GLOB AWS_SQS_HEADERS
    "include/aws/sqs/*.h"
)

file(GLOB AWS_SQS_MODEL_HEADERS
    "include/aws/sqs/model/*.h"
)

file(GLOB AWS_SQS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SQS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SQS_UNIFIED_HEADERS
    ${AWS_SQS_HEADERS}
    ${AWS_SQS_MODEL_HEADERS}
)

file(GLOB SQS_UNITY_SRC
    ${AWS_SQS_SOURCE}
    ${AWS_SQS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SQS" SQS_UNITY_SRC)
endif()

file(GLOB SQS_SRC
    ${SQS_UNIFIED_HEADERS}
    ${SQS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\sqs" FILES ${AWS_SQS_HEADERS})
        source_group("Header Files\\aws\\sqs\\model" FILES ${AWS_SQS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SQS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SQS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SQS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SQS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SQS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SQS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sqs)
install (FILES ${AWS_SQS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sqs/model)

do_packaging()


