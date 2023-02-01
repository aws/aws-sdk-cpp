add_project(aws-cpp-sdk-states "C++ SDK for the AWS states service" aws-cpp-sdk-core)

file(GLOB AWS_STATES_HEADERS
    "include/aws/states/*.h"
)

file(GLOB AWS_STATES_MODEL_HEADERS
    "include/aws/states/model/*.h"
)

file(GLOB AWS_STATES_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_STATES_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB STATES_UNIFIED_HEADERS
    ${AWS_STATES_HEADERS}
    ${AWS_STATES_MODEL_HEADERS}
)

file(GLOB STATES_UNITY_SRC
    ${AWS_STATES_SOURCE}
    ${AWS_STATES_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("STATES" STATES_UNITY_SRC)
endif()

file(GLOB STATES_SRC
    ${STATES_UNIFIED_HEADERS}
    ${STATES_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\states" FILES ${AWS_STATES_HEADERS})
        source_group("Header Files\\aws\\states\\model" FILES ${AWS_STATES_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_STATES_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_STATES_MODEL_SOURCE})
    endif(MSVC)
endif()

set(STATES_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${STATES_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SFN_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_STATES_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/states)
install (FILES ${AWS_STATES_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/states/model)

do_packaging()


