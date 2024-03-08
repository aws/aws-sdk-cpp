add_project(aws-cpp-sdk-networkmonitor "C++ SDK for the AWS networkmonitor service" aws-cpp-sdk-core)

file(GLOB AWS_NETWORKMONITOR_HEADERS
    "include/aws/networkmonitor/*.h"
)

file(GLOB AWS_NETWORKMONITOR_MODEL_HEADERS
    "include/aws/networkmonitor/model/*.h"
)

file(GLOB AWS_NETWORKMONITOR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_NETWORKMONITOR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB NETWORKMONITOR_UNIFIED_HEADERS
    ${AWS_NETWORKMONITOR_HEADERS}
    ${AWS_NETWORKMONITOR_MODEL_HEADERS}
)

file(GLOB NETWORKMONITOR_UNITY_SRC
    ${AWS_NETWORKMONITOR_SOURCE}
    ${AWS_NETWORKMONITOR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("NETWORKMONITOR" NETWORKMONITOR_UNITY_SRC)
endif()

file(GLOB NETWORKMONITOR_SRC
    ${NETWORKMONITOR_UNIFIED_HEADERS}
    ${NETWORKMONITOR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\networkmonitor" FILES ${AWS_NETWORKMONITOR_HEADERS})
        source_group("Header Files\\aws\\networkmonitor\\model" FILES ${AWS_NETWORKMONITOR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_NETWORKMONITOR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_NETWORKMONITOR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(NETWORKMONITOR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${NETWORKMONITOR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_NETWORKMONITOR_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_NETWORKMONITOR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/networkmonitor)
install (FILES ${AWS_NETWORKMONITOR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/networkmonitor/model)

do_packaging()


