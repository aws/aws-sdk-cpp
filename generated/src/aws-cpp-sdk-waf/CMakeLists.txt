add_project(aws-cpp-sdk-waf "C++ SDK for the AWS waf service" aws-cpp-sdk-core)

file(GLOB AWS_WAF_HEADERS
    "include/aws/waf/*.h"
)

file(GLOB AWS_WAF_MODEL_HEADERS
    "include/aws/waf/model/*.h"
)

file(GLOB AWS_WAF_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_WAF_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB WAF_UNIFIED_HEADERS
    ${AWS_WAF_HEADERS}
    ${AWS_WAF_MODEL_HEADERS}
)

file(GLOB WAF_UNITY_SRC
    ${AWS_WAF_SOURCE}
    ${AWS_WAF_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("WAF" WAF_UNITY_SRC)
endif()

file(GLOB WAF_SRC
    ${WAF_UNIFIED_HEADERS}
    ${WAF_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\waf" FILES ${AWS_WAF_HEADERS})
        source_group("Header Files\\aws\\waf\\model" FILES ${AWS_WAF_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_WAF_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_WAF_MODEL_SOURCE})
    endif(MSVC)
endif()

set(WAF_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${WAF_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_WAF_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_WAF_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/waf)
install (FILES ${AWS_WAF_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/waf/model)

do_packaging()


