add_project(aws-cpp-sdk-route53globalresolver "C++ SDK for the AWS route53globalresolver service" aws-cpp-sdk-core)

file(GLOB AWS_ROUTE53GLOBALRESOLVER_HEADERS
    "include/aws/route53globalresolver/*.h"
)

file(GLOB AWS_ROUTE53GLOBALRESOLVER_MODEL_HEADERS
    "include/aws/route53globalresolver/model/*.h"
)

file(GLOB AWS_ROUTE53GLOBALRESOLVER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ROUTE53GLOBALRESOLVER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ROUTE53GLOBALRESOLVER_UNIFIED_HEADERS
    ${AWS_ROUTE53GLOBALRESOLVER_HEADERS}
    ${AWS_ROUTE53GLOBALRESOLVER_MODEL_HEADERS}
)

file(GLOB ROUTE53GLOBALRESOLVER_UNITY_SRC
    ${AWS_ROUTE53GLOBALRESOLVER_SOURCE}
    ${AWS_ROUTE53GLOBALRESOLVER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ROUTE53GLOBALRESOLVER" ROUTE53GLOBALRESOLVER_UNITY_SRC)
endif()

file(GLOB ROUTE53GLOBALRESOLVER_SRC
    ${ROUTE53GLOBALRESOLVER_UNIFIED_HEADERS}
    ${ROUTE53GLOBALRESOLVER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\route53globalresolver" FILES ${AWS_ROUTE53GLOBALRESOLVER_HEADERS})
        source_group("Header Files\\aws\\route53globalresolver\\model" FILES ${AWS_ROUTE53GLOBALRESOLVER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ROUTE53GLOBALRESOLVER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ROUTE53GLOBALRESOLVER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ROUTE53GLOBALRESOLVER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ROUTE53GLOBALRESOLVER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ROUTE53GLOBALRESOLVER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ROUTE53GLOBALRESOLVER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/route53globalresolver)
install (FILES ${AWS_ROUTE53GLOBALRESOLVER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/route53globalresolver/model)

do_packaging()


