add_project(aws-cpp-sdk-sagemaker-inference-router-runtime "C++ SDK for Amazon SageMaker Inference Router Runtime" aws-cpp-sdk-core)

file(GLOB AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_HEADERS
    "include/aws/sagemaker-inference-router-runtime/*.h"
)

file(GLOB AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_MODEL_HEADERS
    "include/aws/sagemaker-inference-router-runtime/model/*.h"
)

file(GLOB AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_INTERNAL_HEADERS
    "include/aws/sagemaker-inference-router-runtime/internal/*.h"
)

file(GLOB AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SAGEMAKER-INFERENCE-ROUTER-RUNTIME_UNIFIED_HEADERS
    ${AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_HEADERS}
    ${AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_INTERNAL_HEADERS}
    ${AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_MODEL_HEADERS}
)

file(GLOB SAGEMAKER-INFERENCE-ROUTER-RUNTIME_UNITY_SRC
    ${AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_SOURCE}
    ${AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SAGEMAKER-INFERENCE-ROUTER-RUNTIME" SAGEMAKER-INFERENCE-ROUTER-RUNTIME_UNITY_SRC)
endif()

file(GLOB SAGEMAKER-INFERENCE-ROUTER-RUNTIME_SRC
    ${SAGEMAKER-INFERENCE-ROUTER-RUNTIME_UNIFIED_HEADERS}
    ${SAGEMAKER-INFERENCE-ROUTER-RUNTIME_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\sagemaker-inference-router-runtime" FILES ${AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_HEADERS})
        source_group("Header Files\\aws\\sagemaker-inference-router-runtime\\internal" FILES ${AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\sagemaker-inference-router-runtime\\model" FILES ${AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SAGEMAKER-INFERENCE-ROUTER-RUNTIME_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SAGEMAKER-INFERENCE-ROUTER-RUNTIME_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SAGEMAKERINFERENCEROUTERRUNTIME_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sagemaker-inference-router-runtime)
install (FILES ${AWS_SAGEMAKER-INFERENCE-ROUTER-RUNTIME_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sagemaker-inference-router-runtime/model)

do_packaging()


