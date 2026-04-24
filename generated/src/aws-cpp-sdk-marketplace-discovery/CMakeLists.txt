add_project(aws-cpp-sdk-marketplace-discovery "C++ SDK for the AWS marketplace-discovery service" aws-cpp-sdk-core)

file(GLOB AWS_MARKETPLACE-DISCOVERY_HEADERS
    "include/aws/marketplace-discovery/*.h"
)

file(GLOB AWS_MARKETPLACE-DISCOVERY_MODEL_HEADERS
    "include/aws/marketplace-discovery/model/*.h"
)

file(GLOB AWS_MARKETPLACE-DISCOVERY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MARKETPLACE-DISCOVERY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MARKETPLACE-DISCOVERY_UNIFIED_HEADERS
    ${AWS_MARKETPLACE-DISCOVERY_HEADERS}
    ${AWS_MARKETPLACE-DISCOVERY_MODEL_HEADERS}
)

file(GLOB MARKETPLACE-DISCOVERY_UNITY_SRC
    ${AWS_MARKETPLACE-DISCOVERY_SOURCE}
    ${AWS_MARKETPLACE-DISCOVERY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MARKETPLACE-DISCOVERY" MARKETPLACE-DISCOVERY_UNITY_SRC)
endif()

file(GLOB MARKETPLACE-DISCOVERY_SRC
    ${MARKETPLACE-DISCOVERY_UNIFIED_HEADERS}
    ${MARKETPLACE-DISCOVERY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\marketplace-discovery" FILES ${AWS_MARKETPLACE-DISCOVERY_HEADERS})
        source_group("Header Files\\aws\\marketplace-discovery\\model" FILES ${AWS_MARKETPLACE-DISCOVERY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MARKETPLACE-DISCOVERY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MARKETPLACE-DISCOVERY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MARKETPLACE-DISCOVERY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MARKETPLACE-DISCOVERY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MARKETPLACEDISCOVERY_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MARKETPLACE-DISCOVERY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/marketplace-discovery)
install (FILES ${AWS_MARKETPLACE-DISCOVERY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/marketplace-discovery/model)

do_packaging()


