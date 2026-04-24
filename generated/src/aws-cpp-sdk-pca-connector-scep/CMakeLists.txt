add_project(aws-cpp-sdk-pca-connector-scep "C++ SDK for the AWS pca-connector-scep service" aws-cpp-sdk-core)

file(GLOB AWS_PCA-CONNECTOR-SCEP_HEADERS
    "include/aws/pca-connector-scep/*.h"
)

file(GLOB AWS_PCA-CONNECTOR-SCEP_MODEL_HEADERS
    "include/aws/pca-connector-scep/model/*.h"
)

file(GLOB AWS_PCA-CONNECTOR-SCEP_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PCA-CONNECTOR-SCEP_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PCA-CONNECTOR-SCEP_UNIFIED_HEADERS
    ${AWS_PCA-CONNECTOR-SCEP_HEADERS}
    ${AWS_PCA-CONNECTOR-SCEP_MODEL_HEADERS}
)

file(GLOB PCA-CONNECTOR-SCEP_UNITY_SRC
    ${AWS_PCA-CONNECTOR-SCEP_SOURCE}
    ${AWS_PCA-CONNECTOR-SCEP_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PCA-CONNECTOR-SCEP" PCA-CONNECTOR-SCEP_UNITY_SRC)
endif()

file(GLOB PCA-CONNECTOR-SCEP_SRC
    ${PCA-CONNECTOR-SCEP_UNIFIED_HEADERS}
    ${PCA-CONNECTOR-SCEP_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\pca-connector-scep" FILES ${AWS_PCA-CONNECTOR-SCEP_HEADERS})
        source_group("Header Files\\aws\\pca-connector-scep\\model" FILES ${AWS_PCA-CONNECTOR-SCEP_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PCA-CONNECTOR-SCEP_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PCA-CONNECTOR-SCEP_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PCA-CONNECTOR-SCEP_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PCA-CONNECTOR-SCEP_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PCACONNECTORSCEP_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PCA-CONNECTOR-SCEP_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/pca-connector-scep)
install (FILES ${AWS_PCA-CONNECTOR-SCEP_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/pca-connector-scep/model)

do_packaging()


