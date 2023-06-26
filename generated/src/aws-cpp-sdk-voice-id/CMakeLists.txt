add_project(aws-cpp-sdk-voice-id "C++ SDK for the AWS voice-id service" aws-cpp-sdk-core)

file(GLOB AWS_VOICE-ID_HEADERS
    "include/aws/voice-id/*.h"
)

file(GLOB AWS_VOICE-ID_MODEL_HEADERS
    "include/aws/voice-id/model/*.h"
)

file(GLOB AWS_VOICE-ID_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_VOICE-ID_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB VOICE-ID_UNIFIED_HEADERS
    ${AWS_VOICE-ID_HEADERS}
    ${AWS_VOICE-ID_MODEL_HEADERS}
)

file(GLOB VOICE-ID_UNITY_SRC
    ${AWS_VOICE-ID_SOURCE}
    ${AWS_VOICE-ID_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("VOICE-ID" VOICE-ID_UNITY_SRC)
endif()

file(GLOB VOICE-ID_SRC
    ${VOICE-ID_UNIFIED_HEADERS}
    ${VOICE-ID_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\voice-id" FILES ${AWS_VOICE-ID_HEADERS})
        source_group("Header Files\\aws\\voice-id\\model" FILES ${AWS_VOICE-ID_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_VOICE-ID_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_VOICE-ID_MODEL_SOURCE})
    endif(MSVC)
endif()

set(VOICE-ID_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${VOICE-ID_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_VOICEID_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_VOICE-ID_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/voice-id)
install (FILES ${AWS_VOICE-ID_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/voice-id/model)

do_packaging()


