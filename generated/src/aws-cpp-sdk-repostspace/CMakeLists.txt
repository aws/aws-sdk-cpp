add_project(aws-cpp-sdk-repostspace "C++ SDK for the AWS repostspace service" aws-cpp-sdk-core)

file(GLOB AWS_REPOSTSPACE_HEADERS
    "include/aws/repostspace/*.h"
)

file(GLOB AWS_REPOSTSPACE_MODEL_HEADERS
    "include/aws/repostspace/model/*.h"
)

file(GLOB AWS_REPOSTSPACE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_REPOSTSPACE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB REPOSTSPACE_UNIFIED_HEADERS
    ${AWS_REPOSTSPACE_HEADERS}
    ${AWS_REPOSTSPACE_MODEL_HEADERS}
)

file(GLOB REPOSTSPACE_UNITY_SRC
    ${AWS_REPOSTSPACE_SOURCE}
    ${AWS_REPOSTSPACE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("REPOSTSPACE" REPOSTSPACE_UNITY_SRC)
endif()

file(GLOB REPOSTSPACE_SRC
    ${REPOSTSPACE_UNIFIED_HEADERS}
    ${REPOSTSPACE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\repostspace" FILES ${AWS_REPOSTSPACE_HEADERS})
        source_group("Header Files\\aws\\repostspace\\model" FILES ${AWS_REPOSTSPACE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_REPOSTSPACE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_REPOSTSPACE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(REPOSTSPACE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${REPOSTSPACE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_REPOSTSPACE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_REPOSTSPACE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/repostspace)
install (FILES ${AWS_REPOSTSPACE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/repostspace/model)

do_packaging()


