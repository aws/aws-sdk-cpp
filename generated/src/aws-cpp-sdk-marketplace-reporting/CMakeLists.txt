add_project(aws-cpp-sdk-marketplace-reporting "C++ SDK for the AWS marketplace-reporting service" aws-cpp-sdk-core)

file(GLOB AWS_MARKETPLACE-REPORTING_HEADERS
    "include/aws/marketplace-reporting/*.h"
)

file(GLOB AWS_MARKETPLACE-REPORTING_MODEL_HEADERS
    "include/aws/marketplace-reporting/model/*.h"
)

file(GLOB AWS_MARKETPLACE-REPORTING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MARKETPLACE-REPORTING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MARKETPLACE-REPORTING_UNIFIED_HEADERS
    ${AWS_MARKETPLACE-REPORTING_HEADERS}
    ${AWS_MARKETPLACE-REPORTING_MODEL_HEADERS}
)

file(GLOB MARKETPLACE-REPORTING_UNITY_SRC
    ${AWS_MARKETPLACE-REPORTING_SOURCE}
    ${AWS_MARKETPLACE-REPORTING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MARKETPLACE-REPORTING" MARKETPLACE-REPORTING_UNITY_SRC)
endif()

file(GLOB MARKETPLACE-REPORTING_SRC
    ${MARKETPLACE-REPORTING_UNIFIED_HEADERS}
    ${MARKETPLACE-REPORTING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\marketplace-reporting" FILES ${AWS_MARKETPLACE-REPORTING_HEADERS})
        source_group("Header Files\\aws\\marketplace-reporting\\model" FILES ${AWS_MARKETPLACE-REPORTING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MARKETPLACE-REPORTING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MARKETPLACE-REPORTING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MARKETPLACE-REPORTING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MARKETPLACE-REPORTING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MARKETPLACEREPORTING_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MARKETPLACE-REPORTING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/marketplace-reporting)
install (FILES ${AWS_MARKETPLACE-REPORTING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/marketplace-reporting/model)

do_packaging()


