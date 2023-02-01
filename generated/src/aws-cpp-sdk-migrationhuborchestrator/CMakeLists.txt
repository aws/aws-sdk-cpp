add_project(aws-cpp-sdk-migrationhuborchestrator "C++ SDK for the AWS migrationhuborchestrator service" aws-cpp-sdk-core)

file(GLOB AWS_MIGRATIONHUBORCHESTRATOR_HEADERS
    "include/aws/migrationhuborchestrator/*.h"
)

file(GLOB AWS_MIGRATIONHUBORCHESTRATOR_MODEL_HEADERS
    "include/aws/migrationhuborchestrator/model/*.h"
)

file(GLOB AWS_MIGRATIONHUBORCHESTRATOR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MIGRATIONHUBORCHESTRATOR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MIGRATIONHUBORCHESTRATOR_UNIFIED_HEADERS
    ${AWS_MIGRATIONHUBORCHESTRATOR_HEADERS}
    ${AWS_MIGRATIONHUBORCHESTRATOR_MODEL_HEADERS}
)

file(GLOB MIGRATIONHUBORCHESTRATOR_UNITY_SRC
    ${AWS_MIGRATIONHUBORCHESTRATOR_SOURCE}
    ${AWS_MIGRATIONHUBORCHESTRATOR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MIGRATIONHUBORCHESTRATOR" MIGRATIONHUBORCHESTRATOR_UNITY_SRC)
endif()

file(GLOB MIGRATIONHUBORCHESTRATOR_SRC
    ${MIGRATIONHUBORCHESTRATOR_UNIFIED_HEADERS}
    ${MIGRATIONHUBORCHESTRATOR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\migrationhuborchestrator" FILES ${AWS_MIGRATIONHUBORCHESTRATOR_HEADERS})
        source_group("Header Files\\aws\\migrationhuborchestrator\\model" FILES ${AWS_MIGRATIONHUBORCHESTRATOR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MIGRATIONHUBORCHESTRATOR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MIGRATIONHUBORCHESTRATOR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MIGRATIONHUBORCHESTRATOR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MIGRATIONHUBORCHESTRATOR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MIGRATIONHUBORCHESTRATOR_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MIGRATIONHUBORCHESTRATOR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/migrationhuborchestrator)
install (FILES ${AWS_MIGRATIONHUBORCHESTRATOR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/migrationhuborchestrator/model)

do_packaging()


