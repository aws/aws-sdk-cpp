add_project(aws-cpp-sdk-marketplace-catalog "C++ SDK for the AWS marketplace-catalog service" aws-cpp-sdk-core)

file(GLOB AWS_MARKETPLACE-CATALOG_HEADERS
    "include/aws/marketplace-catalog/*.h"
)

file(GLOB AWS_MARKETPLACE-CATALOG_MODEL_HEADERS
    "include/aws/marketplace-catalog/model/*.h"
)

file(GLOB AWS_MARKETPLACE-CATALOG_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MARKETPLACE-CATALOG_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MARKETPLACE-CATALOG_UNIFIED_HEADERS
    ${AWS_MARKETPLACE-CATALOG_HEADERS}
    ${AWS_MARKETPLACE-CATALOG_MODEL_HEADERS}
)

file(GLOB MARKETPLACE-CATALOG_UNITY_SRC
    ${AWS_MARKETPLACE-CATALOG_SOURCE}
    ${AWS_MARKETPLACE-CATALOG_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MARKETPLACE-CATALOG" MARKETPLACE-CATALOG_UNITY_SRC)
endif()

file(GLOB MARKETPLACE-CATALOG_SRC
    ${MARKETPLACE-CATALOG_UNIFIED_HEADERS}
    ${MARKETPLACE-CATALOG_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\marketplace-catalog" FILES ${AWS_MARKETPLACE-CATALOG_HEADERS})
        source_group("Header Files\\aws\\marketplace-catalog\\model" FILES ${AWS_MARKETPLACE-CATALOG_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MARKETPLACE-CATALOG_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MARKETPLACE-CATALOG_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MARKETPLACE-CATALOG_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MARKETPLACE-CATALOG_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MARKETPLACECATALOG_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MARKETPLACE-CATALOG_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/marketplace-catalog)
install (FILES ${AWS_MARKETPLACE-CATALOG_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/marketplace-catalog/model)

do_packaging()


