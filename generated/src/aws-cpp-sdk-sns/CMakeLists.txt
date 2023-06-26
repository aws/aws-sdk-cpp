add_project(aws-cpp-sdk-sns "C++ SDK for the AWS sns service" aws-cpp-sdk-core)

file(GLOB AWS_SNS_HEADERS
    "include/aws/sns/*.h"
)

file(GLOB AWS_SNS_MODEL_HEADERS
    "include/aws/sns/model/*.h"
)

file(GLOB AWS_SNS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SNS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SNS_UNIFIED_HEADERS
    ${AWS_SNS_HEADERS}
    ${AWS_SNS_MODEL_HEADERS}
)

file(GLOB SNS_UNITY_SRC
    ${AWS_SNS_SOURCE}
    ${AWS_SNS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SNS" SNS_UNITY_SRC)
endif()

file(GLOB SNS_SRC
    ${SNS_UNIFIED_HEADERS}
    ${SNS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\sns" FILES ${AWS_SNS_HEADERS})
        source_group("Header Files\\aws\\sns\\model" FILES ${AWS_SNS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SNS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SNS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SNS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SNS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SNS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SNS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sns)
install (FILES ${AWS_SNS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sns/model)

do_packaging()


