add_project(aws-cpp-sdk-medialive "C++ SDK for the AWS medialive service" aws-cpp-sdk-core)

file(GLOB AWS_MEDIALIVE_HEADERS
    "include/aws/medialive/*.h"
)

file(GLOB AWS_MEDIALIVE_MODEL_HEADERS
    "include/aws/medialive/model/*.h"
)

file(GLOB AWS_MEDIALIVE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MEDIALIVE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MEDIALIVE_UNIFIED_HEADERS
    ${AWS_MEDIALIVE_HEADERS}
    ${AWS_MEDIALIVE_MODEL_HEADERS}
)

file(GLOB MEDIALIVE_UNITY_SRC
    ${AWS_MEDIALIVE_SOURCE}
    ${AWS_MEDIALIVE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MEDIALIVE" MEDIALIVE_UNITY_SRC)
endif()

file(GLOB MEDIALIVE_SRC
    ${MEDIALIVE_UNIFIED_HEADERS}
    ${MEDIALIVE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\medialive" FILES ${AWS_MEDIALIVE_HEADERS})
        source_group("Header Files\\aws\\medialive\\model" FILES ${AWS_MEDIALIVE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MEDIALIVE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MEDIALIVE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MEDIALIVE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MEDIALIVE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MEDIALIVE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MEDIALIVE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/medialive)
install (FILES ${AWS_MEDIALIVE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/medialive/model)

do_packaging()


