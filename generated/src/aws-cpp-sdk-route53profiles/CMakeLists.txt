add_project(aws-cpp-sdk-route53profiles "C++ SDK for the AWS route53profiles service" aws-cpp-sdk-core)

file(GLOB AWS_ROUTE53PROFILES_HEADERS
    "include/aws/route53profiles/*.h"
)

file(GLOB AWS_ROUTE53PROFILES_MODEL_HEADERS
    "include/aws/route53profiles/model/*.h"
)

file(GLOB AWS_ROUTE53PROFILES_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ROUTE53PROFILES_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ROUTE53PROFILES_UNIFIED_HEADERS
    ${AWS_ROUTE53PROFILES_HEADERS}
    ${AWS_ROUTE53PROFILES_MODEL_HEADERS}
)

file(GLOB ROUTE53PROFILES_UNITY_SRC
    ${AWS_ROUTE53PROFILES_SOURCE}
    ${AWS_ROUTE53PROFILES_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ROUTE53PROFILES" ROUTE53PROFILES_UNITY_SRC)
endif()

file(GLOB ROUTE53PROFILES_SRC
    ${ROUTE53PROFILES_UNIFIED_HEADERS}
    ${ROUTE53PROFILES_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\route53profiles" FILES ${AWS_ROUTE53PROFILES_HEADERS})
        source_group("Header Files\\aws\\route53profiles\\model" FILES ${AWS_ROUTE53PROFILES_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ROUTE53PROFILES_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ROUTE53PROFILES_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ROUTE53PROFILES_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ROUTE53PROFILES_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ROUTE53PROFILES_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ROUTE53PROFILES_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/route53profiles)
install (FILES ${AWS_ROUTE53PROFILES_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/route53profiles/model)

do_packaging()


