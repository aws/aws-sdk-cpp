add_project(aws-cpp-sdk-personalize-runtime "C++ SDK for the AWS personalize-runtime service" aws-cpp-sdk-core)

file(GLOB AWS_PERSONALIZE-RUNTIME_HEADERS
    "include/aws/personalize-runtime/*.h"
)

file(GLOB AWS_PERSONALIZE-RUNTIME_MODEL_HEADERS
    "include/aws/personalize-runtime/model/*.h"
)

file(GLOB AWS_PERSONALIZE-RUNTIME_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PERSONALIZE-RUNTIME_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PERSONALIZE-RUNTIME_UNIFIED_HEADERS
    ${AWS_PERSONALIZE-RUNTIME_HEADERS}
    ${AWS_PERSONALIZE-RUNTIME_MODEL_HEADERS}
)

file(GLOB PERSONALIZE-RUNTIME_UNITY_SRC
    ${AWS_PERSONALIZE-RUNTIME_SOURCE}
    ${AWS_PERSONALIZE-RUNTIME_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PERSONALIZE-RUNTIME" PERSONALIZE-RUNTIME_UNITY_SRC)
endif()

file(GLOB PERSONALIZE-RUNTIME_SRC
    ${PERSONALIZE-RUNTIME_UNIFIED_HEADERS}
    ${PERSONALIZE-RUNTIME_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\personalize-runtime" FILES ${AWS_PERSONALIZE-RUNTIME_HEADERS})
        source_group("Header Files\\aws\\personalize-runtime\\model" FILES ${AWS_PERSONALIZE-RUNTIME_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PERSONALIZE-RUNTIME_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PERSONALIZE-RUNTIME_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PERSONALIZE-RUNTIME_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PERSONALIZE-RUNTIME_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PERSONALIZERUNTIME_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PERSONALIZE-RUNTIME_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/personalize-runtime)
install (FILES ${AWS_PERSONALIZE-RUNTIME_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/personalize-runtime/model)

do_packaging()


