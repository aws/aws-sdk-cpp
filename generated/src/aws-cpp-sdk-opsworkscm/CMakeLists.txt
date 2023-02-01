add_project(aws-cpp-sdk-opsworkscm "C++ SDK for the AWS opsworkscm service" aws-cpp-sdk-core)

file(GLOB AWS_OPSWORKSCM_HEADERS
    "include/aws/opsworkscm/*.h"
)

file(GLOB AWS_OPSWORKSCM_MODEL_HEADERS
    "include/aws/opsworkscm/model/*.h"
)

file(GLOB AWS_OPSWORKSCM_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_OPSWORKSCM_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB OPSWORKSCM_UNIFIED_HEADERS
    ${AWS_OPSWORKSCM_HEADERS}
    ${AWS_OPSWORKSCM_MODEL_HEADERS}
)

file(GLOB OPSWORKSCM_UNITY_SRC
    ${AWS_OPSWORKSCM_SOURCE}
    ${AWS_OPSWORKSCM_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("OPSWORKSCM" OPSWORKSCM_UNITY_SRC)
endif()

file(GLOB OPSWORKSCM_SRC
    ${OPSWORKSCM_UNIFIED_HEADERS}
    ${OPSWORKSCM_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\opsworkscm" FILES ${AWS_OPSWORKSCM_HEADERS})
        source_group("Header Files\\aws\\opsworkscm\\model" FILES ${AWS_OPSWORKSCM_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_OPSWORKSCM_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_OPSWORKSCM_MODEL_SOURCE})
    endif(MSVC)
endif()

set(OPSWORKSCM_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${OPSWORKSCM_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_OPSWORKSCM_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_OPSWORKSCM_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/opsworkscm)
install (FILES ${AWS_OPSWORKSCM_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/opsworkscm/model)

do_packaging()


