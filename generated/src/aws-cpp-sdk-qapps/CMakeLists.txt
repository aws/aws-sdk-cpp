add_project(aws-cpp-sdk-qapps "C++ SDK for the AWS qapps service" aws-cpp-sdk-core)

file(GLOB AWS_QAPPS_HEADERS
    "include/aws/qapps/*.h"
)

file(GLOB AWS_QAPPS_MODEL_HEADERS
    "include/aws/qapps/model/*.h"
)

file(GLOB AWS_QAPPS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_QAPPS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB QAPPS_UNIFIED_HEADERS
    ${AWS_QAPPS_HEADERS}
    ${AWS_QAPPS_MODEL_HEADERS}
)

file(GLOB QAPPS_UNITY_SRC
    ${AWS_QAPPS_SOURCE}
    ${AWS_QAPPS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("QAPPS" QAPPS_UNITY_SRC)
endif()

file(GLOB QAPPS_SRC
    ${QAPPS_UNIFIED_HEADERS}
    ${QAPPS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\qapps" FILES ${AWS_QAPPS_HEADERS})
        source_group("Header Files\\aws\\qapps\\model" FILES ${AWS_QAPPS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_QAPPS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_QAPPS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(QAPPS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${QAPPS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_QAPPS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_QAPPS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/qapps)
install (FILES ${AWS_QAPPS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/qapps/model)

do_packaging()


