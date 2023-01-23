add_project(aws-cpp-sdk-marketplace-entitlement "C++ SDK for the AWS marketplace-entitlement service" aws-cpp-sdk-core)

file(GLOB AWS_MARKETPLACE-ENTITLEMENT_HEADERS
    "include/aws/marketplace-entitlement/*.h"
)

file(GLOB AWS_MARKETPLACE-ENTITLEMENT_MODEL_HEADERS
    "include/aws/marketplace-entitlement/model/*.h"
)

file(GLOB AWS_MARKETPLACE-ENTITLEMENT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MARKETPLACE-ENTITLEMENT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MARKETPLACE-ENTITLEMENT_UNIFIED_HEADERS
    ${AWS_MARKETPLACE-ENTITLEMENT_HEADERS}
    ${AWS_MARKETPLACE-ENTITLEMENT_MODEL_HEADERS}
)

file(GLOB MARKETPLACE-ENTITLEMENT_UNITY_SRC
    ${AWS_MARKETPLACE-ENTITLEMENT_SOURCE}
    ${AWS_MARKETPLACE-ENTITLEMENT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MARKETPLACE-ENTITLEMENT" MARKETPLACE-ENTITLEMENT_UNITY_SRC)
endif()

file(GLOB MARKETPLACE-ENTITLEMENT_SRC
    ${MARKETPLACE-ENTITLEMENT_UNIFIED_HEADERS}
    ${MARKETPLACE-ENTITLEMENT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\marketplace-entitlement" FILES ${AWS_MARKETPLACE-ENTITLEMENT_HEADERS})
        source_group("Header Files\\aws\\marketplace-entitlement\\model" FILES ${AWS_MARKETPLACE-ENTITLEMENT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MARKETPLACE-ENTITLEMENT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MARKETPLACE-ENTITLEMENT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MARKETPLACE-ENTITLEMENT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MARKETPLACE-ENTITLEMENT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MARKETPLACEENTITLEMENTSERVICE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MARKETPLACE-ENTITLEMENT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/marketplace-entitlement)
install (FILES ${AWS_MARKETPLACE-ENTITLEMENT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/marketplace-entitlement/model)

do_packaging()


