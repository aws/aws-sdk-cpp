add_project(aws-cpp-sdk-outposts "C++ SDK for the AWS outposts service" aws-cpp-sdk-core)

file(GLOB AWS_OUTPOSTS_HEADERS
    "include/aws/outposts/*.h"
)

file(GLOB AWS_OUTPOSTS_MODEL_HEADERS
    "include/aws/outposts/model/*.h"
)

file(GLOB AWS_OUTPOSTS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_OUTPOSTS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB OUTPOSTS_UNIFIED_HEADERS
    ${AWS_OUTPOSTS_HEADERS}
    ${AWS_OUTPOSTS_MODEL_HEADERS}
)

file(GLOB OUTPOSTS_UNITY_SRC
    ${AWS_OUTPOSTS_SOURCE}
    ${AWS_OUTPOSTS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("OUTPOSTS" OUTPOSTS_UNITY_SRC)
endif()

file(GLOB OUTPOSTS_SRC
    ${OUTPOSTS_UNIFIED_HEADERS}
    ${OUTPOSTS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\outposts" FILES ${AWS_OUTPOSTS_HEADERS})
        source_group("Header Files\\aws\\outposts\\model" FILES ${AWS_OUTPOSTS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_OUTPOSTS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_OUTPOSTS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(OUTPOSTS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${OUTPOSTS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_OUTPOSTS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_OUTPOSTS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/outposts)
install (FILES ${AWS_OUTPOSTS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/outposts/model)

do_packaging()


