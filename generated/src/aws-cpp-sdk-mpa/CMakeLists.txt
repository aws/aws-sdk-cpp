add_project(aws-cpp-sdk-mpa "C++ SDK for the AWS mpa service" aws-cpp-sdk-core)

file(GLOB AWS_MPA_HEADERS
    "include/aws/mpa/*.h"
)

file(GLOB AWS_MPA_MODEL_HEADERS
    "include/aws/mpa/model/*.h"
)

file(GLOB AWS_MPA_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MPA_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MPA_UNIFIED_HEADERS
    ${AWS_MPA_HEADERS}
    ${AWS_MPA_MODEL_HEADERS}
)

file(GLOB MPA_UNITY_SRC
    ${AWS_MPA_SOURCE}
    ${AWS_MPA_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MPA" MPA_UNITY_SRC)
endif()

file(GLOB MPA_SRC
    ${MPA_UNIFIED_HEADERS}
    ${MPA_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\mpa" FILES ${AWS_MPA_HEADERS})
        source_group("Header Files\\aws\\mpa\\model" FILES ${AWS_MPA_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MPA_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MPA_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MPA_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MPA_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MPA_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MPA_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mpa)
install (FILES ${AWS_MPA_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mpa/model)

do_packaging()


