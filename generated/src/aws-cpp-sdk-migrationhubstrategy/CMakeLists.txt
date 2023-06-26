add_project(aws-cpp-sdk-migrationhubstrategy "C++ SDK for the AWS migrationhubstrategy service" aws-cpp-sdk-core)

file(GLOB AWS_MIGRATIONHUBSTRATEGY_HEADERS
    "include/aws/migrationhubstrategy/*.h"
)

file(GLOB AWS_MIGRATIONHUBSTRATEGY_MODEL_HEADERS
    "include/aws/migrationhubstrategy/model/*.h"
)

file(GLOB AWS_MIGRATIONHUBSTRATEGY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MIGRATIONHUBSTRATEGY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MIGRATIONHUBSTRATEGY_UNIFIED_HEADERS
    ${AWS_MIGRATIONHUBSTRATEGY_HEADERS}
    ${AWS_MIGRATIONHUBSTRATEGY_MODEL_HEADERS}
)

file(GLOB MIGRATIONHUBSTRATEGY_UNITY_SRC
    ${AWS_MIGRATIONHUBSTRATEGY_SOURCE}
    ${AWS_MIGRATIONHUBSTRATEGY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MIGRATIONHUBSTRATEGY" MIGRATIONHUBSTRATEGY_UNITY_SRC)
endif()

file(GLOB MIGRATIONHUBSTRATEGY_SRC
    ${MIGRATIONHUBSTRATEGY_UNIFIED_HEADERS}
    ${MIGRATIONHUBSTRATEGY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\migrationhubstrategy" FILES ${AWS_MIGRATIONHUBSTRATEGY_HEADERS})
        source_group("Header Files\\aws\\migrationhubstrategy\\model" FILES ${AWS_MIGRATIONHUBSTRATEGY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MIGRATIONHUBSTRATEGY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MIGRATIONHUBSTRATEGY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MIGRATIONHUBSTRATEGY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MIGRATIONHUBSTRATEGY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MIGRATIONHUBSTRATEGY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/migrationhubstrategy)
install (FILES ${AWS_MIGRATIONHUBSTRATEGY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/migrationhubstrategy/model)

do_packaging()


