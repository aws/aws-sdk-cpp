add_project(aws-cpp-sdk-quicksight "C++ SDK for the AWS quicksight service" aws-cpp-sdk-core)

file(GLOB AWS_QUICKSIGHT_HEADERS
    "include/aws/quicksight/*.h"
)

file(GLOB AWS_QUICKSIGHT_MODEL_HEADERS
    "include/aws/quicksight/model/*.h"
)

file(GLOB AWS_QUICKSIGHT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_QUICKSIGHT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB QUICKSIGHT_UNIFIED_HEADERS
    ${AWS_QUICKSIGHT_HEADERS}
    ${AWS_QUICKSIGHT_MODEL_HEADERS}
)

file(GLOB QUICKSIGHT_UNITY_SRC
    ${AWS_QUICKSIGHT_SOURCE}
    ${AWS_QUICKSIGHT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("QUICKSIGHT" QUICKSIGHT_UNITY_SRC)
endif()

file(GLOB QUICKSIGHT_SRC
    ${QUICKSIGHT_UNIFIED_HEADERS}
    ${QUICKSIGHT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\quicksight" FILES ${AWS_QUICKSIGHT_HEADERS})
        source_group("Header Files\\aws\\quicksight\\model" FILES ${AWS_QUICKSIGHT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_QUICKSIGHT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_QUICKSIGHT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(QUICKSIGHT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${QUICKSIGHT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_QUICKSIGHT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_QUICKSIGHT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/quicksight)
install (FILES ${AWS_QUICKSIGHT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/quicksight/model)

do_packaging()


