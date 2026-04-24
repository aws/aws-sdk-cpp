add_project(aws-cpp-sdk-translate "C++ SDK for the AWS translate service" aws-cpp-sdk-core)

file(GLOB AWS_TRANSLATE_HEADERS
    "include/aws/translate/*.h"
)

file(GLOB AWS_TRANSLATE_MODEL_HEADERS
    "include/aws/translate/model/*.h"
)

file(GLOB AWS_TRANSLATE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_TRANSLATE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB TRANSLATE_UNIFIED_HEADERS
    ${AWS_TRANSLATE_HEADERS}
    ${AWS_TRANSLATE_MODEL_HEADERS}
)

file(GLOB TRANSLATE_UNITY_SRC
    ${AWS_TRANSLATE_SOURCE}
    ${AWS_TRANSLATE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("TRANSLATE" TRANSLATE_UNITY_SRC)
endif()

file(GLOB TRANSLATE_SRC
    ${TRANSLATE_UNIFIED_HEADERS}
    ${TRANSLATE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\translate" FILES ${AWS_TRANSLATE_HEADERS})
        source_group("Header Files\\aws\\translate\\model" FILES ${AWS_TRANSLATE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_TRANSLATE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_TRANSLATE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(TRANSLATE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${TRANSLATE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_TRANSLATE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_TRANSLATE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/translate)
install (FILES ${AWS_TRANSLATE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/translate/model)

do_packaging()


