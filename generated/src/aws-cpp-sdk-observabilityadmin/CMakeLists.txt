add_project(aws-cpp-sdk-observabilityadmin "C++ SDK for the AWS observabilityadmin service" aws-cpp-sdk-core)

file(GLOB AWS_OBSERVABILITYADMIN_HEADERS
    "include/aws/observabilityadmin/*.h"
)

file(GLOB AWS_OBSERVABILITYADMIN_MODEL_HEADERS
    "include/aws/observabilityadmin/model/*.h"
)

file(GLOB AWS_OBSERVABILITYADMIN_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_OBSERVABILITYADMIN_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB OBSERVABILITYADMIN_UNIFIED_HEADERS
    ${AWS_OBSERVABILITYADMIN_HEADERS}
    ${AWS_OBSERVABILITYADMIN_MODEL_HEADERS}
)

file(GLOB OBSERVABILITYADMIN_UNITY_SRC
    ${AWS_OBSERVABILITYADMIN_SOURCE}
    ${AWS_OBSERVABILITYADMIN_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("OBSERVABILITYADMIN" OBSERVABILITYADMIN_UNITY_SRC)
endif()

file(GLOB OBSERVABILITYADMIN_SRC
    ${OBSERVABILITYADMIN_UNIFIED_HEADERS}
    ${OBSERVABILITYADMIN_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\observabilityadmin" FILES ${AWS_OBSERVABILITYADMIN_HEADERS})
        source_group("Header Files\\aws\\observabilityadmin\\model" FILES ${AWS_OBSERVABILITYADMIN_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_OBSERVABILITYADMIN_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_OBSERVABILITYADMIN_MODEL_SOURCE})
    endif(MSVC)
endif()

set(OBSERVABILITYADMIN_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${OBSERVABILITYADMIN_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_OBSERVABILITYADMIN_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_OBSERVABILITYADMIN_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/observabilityadmin)
install (FILES ${AWS_OBSERVABILITYADMIN_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/observabilityadmin/model)

do_packaging()


