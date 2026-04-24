add_project(aws-cpp-sdk-workmailmessageflow "C++ SDK for the AWS workmailmessageflow service" aws-cpp-sdk-core)

file(GLOB AWS_WORKMAILMESSAGEFLOW_HEADERS
    "include/aws/workmailmessageflow/*.h"
)

file(GLOB AWS_WORKMAILMESSAGEFLOW_MODEL_HEADERS
    "include/aws/workmailmessageflow/model/*.h"
)

file(GLOB AWS_WORKMAILMESSAGEFLOW_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_WORKMAILMESSAGEFLOW_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB WORKMAILMESSAGEFLOW_UNIFIED_HEADERS
    ${AWS_WORKMAILMESSAGEFLOW_HEADERS}
    ${AWS_WORKMAILMESSAGEFLOW_MODEL_HEADERS}
)

file(GLOB WORKMAILMESSAGEFLOW_UNITY_SRC
    ${AWS_WORKMAILMESSAGEFLOW_SOURCE}
    ${AWS_WORKMAILMESSAGEFLOW_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("WORKMAILMESSAGEFLOW" WORKMAILMESSAGEFLOW_UNITY_SRC)
endif()

file(GLOB WORKMAILMESSAGEFLOW_SRC
    ${WORKMAILMESSAGEFLOW_UNIFIED_HEADERS}
    ${WORKMAILMESSAGEFLOW_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\workmailmessageflow" FILES ${AWS_WORKMAILMESSAGEFLOW_HEADERS})
        source_group("Header Files\\aws\\workmailmessageflow\\model" FILES ${AWS_WORKMAILMESSAGEFLOW_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_WORKMAILMESSAGEFLOW_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_WORKMAILMESSAGEFLOW_MODEL_SOURCE})
    endif(MSVC)
endif()

set(WORKMAILMESSAGEFLOW_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${WORKMAILMESSAGEFLOW_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_WORKMAILMESSAGEFLOW_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_WORKMAILMESSAGEFLOW_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/workmailmessageflow)
install (FILES ${AWS_WORKMAILMESSAGEFLOW_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/workmailmessageflow/model)

do_packaging()


