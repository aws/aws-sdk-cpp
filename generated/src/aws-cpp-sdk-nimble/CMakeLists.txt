add_project(aws-cpp-sdk-nimble "C++ SDK for the AWS nimble service" aws-cpp-sdk-core)

file(GLOB AWS_NIMBLE_HEADERS
    "include/aws/nimble/*.h"
)

file(GLOB AWS_NIMBLE_MODEL_HEADERS
    "include/aws/nimble/model/*.h"
)

file(GLOB AWS_NIMBLE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_NIMBLE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB NIMBLE_UNIFIED_HEADERS
    ${AWS_NIMBLE_HEADERS}
    ${AWS_NIMBLE_MODEL_HEADERS}
)

file(GLOB NIMBLE_UNITY_SRC
    ${AWS_NIMBLE_SOURCE}
    ${AWS_NIMBLE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("NIMBLE" NIMBLE_UNITY_SRC)
endif()

file(GLOB NIMBLE_SRC
    ${NIMBLE_UNIFIED_HEADERS}
    ${NIMBLE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\nimble" FILES ${AWS_NIMBLE_HEADERS})
        source_group("Header Files\\aws\\nimble\\model" FILES ${AWS_NIMBLE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_NIMBLE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_NIMBLE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(NIMBLE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${NIMBLE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_NIMBLESTUDIO_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_NIMBLE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/nimble)
install (FILES ${AWS_NIMBLE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/nimble/model)

do_packaging()


