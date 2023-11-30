add_project(aws-cpp-sdk-marketplace-deployment "C++ SDK for the AWS marketplace-deployment service" aws-cpp-sdk-core)

file(GLOB AWS_MARKETPLACE-DEPLOYMENT_HEADERS
    "include/aws/marketplace-deployment/*.h"
)

file(GLOB AWS_MARKETPLACE-DEPLOYMENT_MODEL_HEADERS
    "include/aws/marketplace-deployment/model/*.h"
)

file(GLOB AWS_MARKETPLACE-DEPLOYMENT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MARKETPLACE-DEPLOYMENT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MARKETPLACE-DEPLOYMENT_UNIFIED_HEADERS
    ${AWS_MARKETPLACE-DEPLOYMENT_HEADERS}
    ${AWS_MARKETPLACE-DEPLOYMENT_MODEL_HEADERS}
)

file(GLOB MARKETPLACE-DEPLOYMENT_UNITY_SRC
    ${AWS_MARKETPLACE-DEPLOYMENT_SOURCE}
    ${AWS_MARKETPLACE-DEPLOYMENT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MARKETPLACE-DEPLOYMENT" MARKETPLACE-DEPLOYMENT_UNITY_SRC)
endif()

file(GLOB MARKETPLACE-DEPLOYMENT_SRC
    ${MARKETPLACE-DEPLOYMENT_UNIFIED_HEADERS}
    ${MARKETPLACE-DEPLOYMENT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\marketplace-deployment" FILES ${AWS_MARKETPLACE-DEPLOYMENT_HEADERS})
        source_group("Header Files\\aws\\marketplace-deployment\\model" FILES ${AWS_MARKETPLACE-DEPLOYMENT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MARKETPLACE-DEPLOYMENT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MARKETPLACE-DEPLOYMENT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MARKETPLACE-DEPLOYMENT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MARKETPLACE-DEPLOYMENT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MARKETPLACEDEPLOYMENT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MARKETPLACE-DEPLOYMENT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/marketplace-deployment)
install (FILES ${AWS_MARKETPLACE-DEPLOYMENT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/marketplace-deployment/model)

do_packaging()


