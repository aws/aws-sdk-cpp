add_project(aws-cpp-sdk-servicecatalog "C++ SDK for the AWS servicecatalog service" aws-cpp-sdk-core)

file(GLOB AWS_SERVICECATALOG_HEADERS
    "include/aws/servicecatalog/*.h"
)

file(GLOB AWS_SERVICECATALOG_MODEL_HEADERS
    "include/aws/servicecatalog/model/*.h"
)

file(GLOB AWS_SERVICECATALOG_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SERVICECATALOG_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SERVICECATALOG_UNIFIED_HEADERS
    ${AWS_SERVICECATALOG_HEADERS}
    ${AWS_SERVICECATALOG_MODEL_HEADERS}
)

file(GLOB SERVICECATALOG_UNITY_SRC
    ${AWS_SERVICECATALOG_SOURCE}
    ${AWS_SERVICECATALOG_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SERVICECATALOG" SERVICECATALOG_UNITY_SRC)
endif()

file(GLOB SERVICECATALOG_SRC
    ${SERVICECATALOG_UNIFIED_HEADERS}
    ${SERVICECATALOG_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\servicecatalog" FILES ${AWS_SERVICECATALOG_HEADERS})
        source_group("Header Files\\aws\\servicecatalog\\model" FILES ${AWS_SERVICECATALOG_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SERVICECATALOG_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SERVICECATALOG_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SERVICECATALOG_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SERVICECATALOG_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SERVICECATALOG_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SERVICECATALOG_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/servicecatalog)
install (FILES ${AWS_SERVICECATALOG_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/servicecatalog/model)

do_packaging()


