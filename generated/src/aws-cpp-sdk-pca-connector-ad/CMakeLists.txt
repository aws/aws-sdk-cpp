add_project(aws-cpp-sdk-pca-connector-ad "C++ SDK for the AWS pca-connector-ad service" aws-cpp-sdk-core)

file(GLOB AWS_PCA-CONNECTOR-AD_HEADERS
    "include/aws/pca-connector-ad/*.h"
)

file(GLOB AWS_PCA-CONNECTOR-AD_MODEL_HEADERS
    "include/aws/pca-connector-ad/model/*.h"
)

file(GLOB AWS_PCA-CONNECTOR-AD_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PCA-CONNECTOR-AD_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PCA-CONNECTOR-AD_UNIFIED_HEADERS
    ${AWS_PCA-CONNECTOR-AD_HEADERS}
    ${AWS_PCA-CONNECTOR-AD_MODEL_HEADERS}
)

file(GLOB PCA-CONNECTOR-AD_UNITY_SRC
    ${AWS_PCA-CONNECTOR-AD_SOURCE}
    ${AWS_PCA-CONNECTOR-AD_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PCA-CONNECTOR-AD" PCA-CONNECTOR-AD_UNITY_SRC)
endif()

file(GLOB PCA-CONNECTOR-AD_SRC
    ${PCA-CONNECTOR-AD_UNIFIED_HEADERS}
    ${PCA-CONNECTOR-AD_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\pca-connector-ad" FILES ${AWS_PCA-CONNECTOR-AD_HEADERS})
        source_group("Header Files\\aws\\pca-connector-ad\\model" FILES ${AWS_PCA-CONNECTOR-AD_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PCA-CONNECTOR-AD_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PCA-CONNECTOR-AD_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PCA-CONNECTOR-AD_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PCA-CONNECTOR-AD_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PCACONNECTORAD_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PCA-CONNECTOR-AD_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/pca-connector-ad)
install (FILES ${AWS_PCA-CONNECTOR-AD_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/pca-connector-ad/model)

do_packaging()


