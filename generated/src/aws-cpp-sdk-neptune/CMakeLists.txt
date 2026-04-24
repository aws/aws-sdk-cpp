add_project(aws-cpp-sdk-neptune "C++ SDK for the AWS neptune service" aws-cpp-sdk-core)

file(GLOB AWS_NEPTUNE_HEADERS
    "include/aws/neptune/*.h"
)

file(GLOB AWS_NEPTUNE_MODEL_HEADERS
    "include/aws/neptune/model/*.h"
)

file(GLOB AWS_NEPTUNE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_NEPTUNE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB NEPTUNE_UNIFIED_HEADERS
    ${AWS_NEPTUNE_HEADERS}
    ${AWS_NEPTUNE_MODEL_HEADERS}
)

file(GLOB NEPTUNE_UNITY_SRC
    ${AWS_NEPTUNE_SOURCE}
    ${AWS_NEPTUNE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("NEPTUNE" NEPTUNE_UNITY_SRC)
endif()

file(GLOB NEPTUNE_SRC
    ${NEPTUNE_UNIFIED_HEADERS}
    ${NEPTUNE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\neptune" FILES ${AWS_NEPTUNE_HEADERS})
        source_group("Header Files\\aws\\neptune\\model" FILES ${AWS_NEPTUNE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_NEPTUNE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_NEPTUNE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(NEPTUNE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${NEPTUNE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_NEPTUNE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_NEPTUNE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/neptune)
install (FILES ${AWS_NEPTUNE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/neptune/model)

do_packaging()


