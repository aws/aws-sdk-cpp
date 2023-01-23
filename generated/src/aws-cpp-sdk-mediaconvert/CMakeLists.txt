add_project(aws-cpp-sdk-mediaconvert "C++ SDK for the AWS mediaconvert service" aws-cpp-sdk-core)

file(GLOB AWS_MEDIACONVERT_HEADERS
    "include/aws/mediaconvert/*.h"
)

file(GLOB AWS_MEDIACONVERT_MODEL_HEADERS
    "include/aws/mediaconvert/model/*.h"
)

file(GLOB AWS_MEDIACONVERT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MEDIACONVERT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MEDIACONVERT_UNIFIED_HEADERS
    ${AWS_MEDIACONVERT_HEADERS}
    ${AWS_MEDIACONVERT_MODEL_HEADERS}
)

file(GLOB MEDIACONVERT_UNITY_SRC
    ${AWS_MEDIACONVERT_SOURCE}
    ${AWS_MEDIACONVERT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MEDIACONVERT" MEDIACONVERT_UNITY_SRC)
endif()

file(GLOB MEDIACONVERT_SRC
    ${MEDIACONVERT_UNIFIED_HEADERS}
    ${MEDIACONVERT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\mediaconvert" FILES ${AWS_MEDIACONVERT_HEADERS})
        source_group("Header Files\\aws\\mediaconvert\\model" FILES ${AWS_MEDIACONVERT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MEDIACONVERT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MEDIACONVERT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MEDIACONVERT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MEDIACONVERT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MEDIACONVERT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MEDIACONVERT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mediaconvert)
install (FILES ${AWS_MEDIACONVERT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mediaconvert/model)

do_packaging()


