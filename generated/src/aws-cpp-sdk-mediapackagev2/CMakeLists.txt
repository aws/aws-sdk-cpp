add_project(aws-cpp-sdk-mediapackagev2 "C++ SDK for the AWS mediapackagev2 service" aws-cpp-sdk-core)

file(GLOB AWS_MEDIAPACKAGEV2_HEADERS
    "include/aws/mediapackagev2/*.h"
)

file(GLOB AWS_MEDIAPACKAGEV2_MODEL_HEADERS
    "include/aws/mediapackagev2/model/*.h"
)

file(GLOB AWS_MEDIAPACKAGEV2_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MEDIAPACKAGEV2_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MEDIAPACKAGEV2_UNIFIED_HEADERS
    ${AWS_MEDIAPACKAGEV2_HEADERS}
    ${AWS_MEDIAPACKAGEV2_MODEL_HEADERS}
)

file(GLOB MEDIAPACKAGEV2_UNITY_SRC
    ${AWS_MEDIAPACKAGEV2_SOURCE}
    ${AWS_MEDIAPACKAGEV2_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MEDIAPACKAGEV2" MEDIAPACKAGEV2_UNITY_SRC)
endif()

file(GLOB MEDIAPACKAGEV2_SRC
    ${MEDIAPACKAGEV2_UNIFIED_HEADERS}
    ${MEDIAPACKAGEV2_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\mediapackagev2" FILES ${AWS_MEDIAPACKAGEV2_HEADERS})
        source_group("Header Files\\aws\\mediapackagev2\\model" FILES ${AWS_MEDIAPACKAGEV2_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MEDIAPACKAGEV2_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MEDIAPACKAGEV2_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MEDIAPACKAGEV2_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MEDIAPACKAGEV2_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MEDIAPACKAGEV2_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MEDIAPACKAGEV2_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mediapackagev2)
install (FILES ${AWS_MEDIAPACKAGEV2_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mediapackagev2/model)

do_packaging()


