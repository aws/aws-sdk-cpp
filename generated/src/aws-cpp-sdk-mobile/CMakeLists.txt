add_project(aws-cpp-sdk-mobile "C++ SDK for the AWS mobile service" aws-cpp-sdk-core)

file(GLOB AWS_MOBILE_HEADERS
    "include/aws/mobile/*.h"
)

file(GLOB AWS_MOBILE_MODEL_HEADERS
    "include/aws/mobile/model/*.h"
)

file(GLOB AWS_MOBILE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MOBILE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MOBILE_UNIFIED_HEADERS
    ${AWS_MOBILE_HEADERS}
    ${AWS_MOBILE_MODEL_HEADERS}
)

file(GLOB MOBILE_UNITY_SRC
    ${AWS_MOBILE_SOURCE}
    ${AWS_MOBILE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MOBILE" MOBILE_UNITY_SRC)
endif()

file(GLOB MOBILE_SRC
    ${MOBILE_UNIFIED_HEADERS}
    ${MOBILE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\mobile" FILES ${AWS_MOBILE_HEADERS})
        source_group("Header Files\\aws\\mobile\\model" FILES ${AWS_MOBILE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MOBILE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MOBILE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MOBILE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MOBILE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MOBILE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MOBILE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mobile)
install (FILES ${AWS_MOBILE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mobile/model)

do_packaging()


