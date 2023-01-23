add_project(aws-cpp-sdk-opsworks "C++ SDK for the AWS opsworks service" aws-cpp-sdk-core)

file(GLOB AWS_OPSWORKS_HEADERS
    "include/aws/opsworks/*.h"
)

file(GLOB AWS_OPSWORKS_MODEL_HEADERS
    "include/aws/opsworks/model/*.h"
)

file(GLOB AWS_OPSWORKS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_OPSWORKS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB OPSWORKS_UNIFIED_HEADERS
    ${AWS_OPSWORKS_HEADERS}
    ${AWS_OPSWORKS_MODEL_HEADERS}
)

file(GLOB OPSWORKS_UNITY_SRC
    ${AWS_OPSWORKS_SOURCE}
    ${AWS_OPSWORKS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("OPSWORKS" OPSWORKS_UNITY_SRC)
endif()

file(GLOB OPSWORKS_SRC
    ${OPSWORKS_UNIFIED_HEADERS}
    ${OPSWORKS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\opsworks" FILES ${AWS_OPSWORKS_HEADERS})
        source_group("Header Files\\aws\\opsworks\\model" FILES ${AWS_OPSWORKS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_OPSWORKS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_OPSWORKS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(OPSWORKS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${OPSWORKS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_OPSWORKS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_OPSWORKS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/opsworks)
install (FILES ${AWS_OPSWORKS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/opsworks/model)

do_packaging()


