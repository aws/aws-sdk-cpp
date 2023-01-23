add_project(aws-cpp-sdk-mediatailor "C++ SDK for the AWS mediatailor service" aws-cpp-sdk-core)

file(GLOB AWS_MEDIATAILOR_HEADERS
    "include/aws/mediatailor/*.h"
)

file(GLOB AWS_MEDIATAILOR_MODEL_HEADERS
    "include/aws/mediatailor/model/*.h"
)

file(GLOB AWS_MEDIATAILOR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MEDIATAILOR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MEDIATAILOR_UNIFIED_HEADERS
    ${AWS_MEDIATAILOR_HEADERS}
    ${AWS_MEDIATAILOR_MODEL_HEADERS}
)

file(GLOB MEDIATAILOR_UNITY_SRC
    ${AWS_MEDIATAILOR_SOURCE}
    ${AWS_MEDIATAILOR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MEDIATAILOR" MEDIATAILOR_UNITY_SRC)
endif()

file(GLOB MEDIATAILOR_SRC
    ${MEDIATAILOR_UNIFIED_HEADERS}
    ${MEDIATAILOR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\mediatailor" FILES ${AWS_MEDIATAILOR_HEADERS})
        source_group("Header Files\\aws\\mediatailor\\model" FILES ${AWS_MEDIATAILOR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MEDIATAILOR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MEDIATAILOR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MEDIATAILOR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MEDIATAILOR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MEDIATAILOR_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MEDIATAILOR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mediatailor)
install (FILES ${AWS_MEDIATAILOR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mediatailor/model)

do_packaging()


