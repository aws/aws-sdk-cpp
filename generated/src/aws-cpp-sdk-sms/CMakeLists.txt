add_project(aws-cpp-sdk-sms "C++ SDK for the AWS sms service" aws-cpp-sdk-core)

file(GLOB AWS_SMS_HEADERS
    "include/aws/sms/*.h"
)

file(GLOB AWS_SMS_MODEL_HEADERS
    "include/aws/sms/model/*.h"
)

file(GLOB AWS_SMS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SMS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SMS_UNIFIED_HEADERS
    ${AWS_SMS_HEADERS}
    ${AWS_SMS_MODEL_HEADERS}
)

file(GLOB SMS_UNITY_SRC
    ${AWS_SMS_SOURCE}
    ${AWS_SMS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SMS" SMS_UNITY_SRC)
endif()

file(GLOB SMS_SRC
    ${SMS_UNIFIED_HEADERS}
    ${SMS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\sms" FILES ${AWS_SMS_HEADERS})
        source_group("Header Files\\aws\\sms\\model" FILES ${AWS_SMS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SMS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SMS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SMS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SMS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SMS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SMS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sms)
install (FILES ${AWS_SMS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sms/model)

do_packaging()


