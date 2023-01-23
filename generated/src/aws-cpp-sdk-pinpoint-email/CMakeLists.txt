add_project(aws-cpp-sdk-pinpoint-email "C++ SDK for the AWS pinpoint-email service" aws-cpp-sdk-core)

file(GLOB AWS_PINPOINT-EMAIL_HEADERS
    "include/aws/pinpoint-email/*.h"
)

file(GLOB AWS_PINPOINT-EMAIL_MODEL_HEADERS
    "include/aws/pinpoint-email/model/*.h"
)

file(GLOB AWS_PINPOINT-EMAIL_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PINPOINT-EMAIL_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PINPOINT-EMAIL_UNIFIED_HEADERS
    ${AWS_PINPOINT-EMAIL_HEADERS}
    ${AWS_PINPOINT-EMAIL_MODEL_HEADERS}
)

file(GLOB PINPOINT-EMAIL_UNITY_SRC
    ${AWS_PINPOINT-EMAIL_SOURCE}
    ${AWS_PINPOINT-EMAIL_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PINPOINT-EMAIL" PINPOINT-EMAIL_UNITY_SRC)
endif()

file(GLOB PINPOINT-EMAIL_SRC
    ${PINPOINT-EMAIL_UNIFIED_HEADERS}
    ${PINPOINT-EMAIL_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\pinpoint-email" FILES ${AWS_PINPOINT-EMAIL_HEADERS})
        source_group("Header Files\\aws\\pinpoint-email\\model" FILES ${AWS_PINPOINT-EMAIL_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PINPOINT-EMAIL_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PINPOINT-EMAIL_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PINPOINT-EMAIL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PINPOINT-EMAIL_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PINPOINTEMAIL_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PINPOINT-EMAIL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/pinpoint-email)
install (FILES ${AWS_PINPOINT-EMAIL_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/pinpoint-email/model)

do_packaging()


