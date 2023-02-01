add_project(aws-cpp-sdk-sagemaker-geospatial "C++ SDK for the AWS sagemaker-geospatial service" aws-cpp-sdk-core)

file(GLOB AWS_SAGEMAKER-GEOSPATIAL_HEADERS
    "include/aws/sagemaker-geospatial/*.h"
)

file(GLOB AWS_SAGEMAKER-GEOSPATIAL_MODEL_HEADERS
    "include/aws/sagemaker-geospatial/model/*.h"
)

file(GLOB AWS_SAGEMAKER-GEOSPATIAL_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SAGEMAKER-GEOSPATIAL_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SAGEMAKER-GEOSPATIAL_UNIFIED_HEADERS
    ${AWS_SAGEMAKER-GEOSPATIAL_HEADERS}
    ${AWS_SAGEMAKER-GEOSPATIAL_MODEL_HEADERS}
)

file(GLOB SAGEMAKER-GEOSPATIAL_UNITY_SRC
    ${AWS_SAGEMAKER-GEOSPATIAL_SOURCE}
    ${AWS_SAGEMAKER-GEOSPATIAL_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SAGEMAKER-GEOSPATIAL" SAGEMAKER-GEOSPATIAL_UNITY_SRC)
endif()

file(GLOB SAGEMAKER-GEOSPATIAL_SRC
    ${SAGEMAKER-GEOSPATIAL_UNIFIED_HEADERS}
    ${SAGEMAKER-GEOSPATIAL_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\sagemaker-geospatial" FILES ${AWS_SAGEMAKER-GEOSPATIAL_HEADERS})
        source_group("Header Files\\aws\\sagemaker-geospatial\\model" FILES ${AWS_SAGEMAKER-GEOSPATIAL_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SAGEMAKER-GEOSPATIAL_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SAGEMAKER-GEOSPATIAL_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SAGEMAKER-GEOSPATIAL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SAGEMAKER-GEOSPATIAL_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SAGEMAKERGEOSPATIAL_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SAGEMAKER-GEOSPATIAL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sagemaker-geospatial)
install (FILES ${AWS_SAGEMAKER-GEOSPATIAL_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sagemaker-geospatial/model)

do_packaging()


