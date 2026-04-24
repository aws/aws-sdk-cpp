add_project(aws-cpp-sdk-osis "C++ SDK for the AWS osis service" aws-cpp-sdk-core)

file(GLOB AWS_OSIS_HEADERS
    "include/aws/osis/*.h"
)

file(GLOB AWS_OSIS_MODEL_HEADERS
    "include/aws/osis/model/*.h"
)

file(GLOB AWS_OSIS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_OSIS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB OSIS_UNIFIED_HEADERS
    ${AWS_OSIS_HEADERS}
    ${AWS_OSIS_MODEL_HEADERS}
)

file(GLOB OSIS_UNITY_SRC
    ${AWS_OSIS_SOURCE}
    ${AWS_OSIS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("OSIS" OSIS_UNITY_SRC)
endif()

file(GLOB OSIS_SRC
    ${OSIS_UNIFIED_HEADERS}
    ${OSIS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\osis" FILES ${AWS_OSIS_HEADERS})
        source_group("Header Files\\aws\\osis\\model" FILES ${AWS_OSIS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_OSIS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_OSIS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(OSIS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${OSIS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_OSIS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_OSIS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/osis)
install (FILES ${AWS_OSIS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/osis/model)

do_packaging()


