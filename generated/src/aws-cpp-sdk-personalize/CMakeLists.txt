add_project(aws-cpp-sdk-personalize "C++ SDK for the AWS personalize service" aws-cpp-sdk-core)

file(GLOB AWS_PERSONALIZE_HEADERS
    "include/aws/personalize/*.h"
)

file(GLOB AWS_PERSONALIZE_MODEL_HEADERS
    "include/aws/personalize/model/*.h"
)

file(GLOB AWS_PERSONALIZE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PERSONALIZE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PERSONALIZE_UNIFIED_HEADERS
    ${AWS_PERSONALIZE_HEADERS}
    ${AWS_PERSONALIZE_MODEL_HEADERS}
)

file(GLOB PERSONALIZE_UNITY_SRC
    ${AWS_PERSONALIZE_SOURCE}
    ${AWS_PERSONALIZE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PERSONALIZE" PERSONALIZE_UNITY_SRC)
endif()

file(GLOB PERSONALIZE_SRC
    ${PERSONALIZE_UNIFIED_HEADERS}
    ${PERSONALIZE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\personalize" FILES ${AWS_PERSONALIZE_HEADERS})
        source_group("Header Files\\aws\\personalize\\model" FILES ${AWS_PERSONALIZE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PERSONALIZE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PERSONALIZE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PERSONALIZE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PERSONALIZE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PERSONALIZE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PERSONALIZE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/personalize)
install (FILES ${AWS_PERSONALIZE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/personalize/model)

do_packaging()


