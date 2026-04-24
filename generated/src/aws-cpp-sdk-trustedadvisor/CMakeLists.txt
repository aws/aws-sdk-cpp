add_project(aws-cpp-sdk-trustedadvisor "C++ SDK for the AWS trustedadvisor service" aws-cpp-sdk-core)

file(GLOB AWS_TRUSTEDADVISOR_HEADERS
    "include/aws/trustedadvisor/*.h"
)

file(GLOB AWS_TRUSTEDADVISOR_MODEL_HEADERS
    "include/aws/trustedadvisor/model/*.h"
)

file(GLOB AWS_TRUSTEDADVISOR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_TRUSTEDADVISOR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB TRUSTEDADVISOR_UNIFIED_HEADERS
    ${AWS_TRUSTEDADVISOR_HEADERS}
    ${AWS_TRUSTEDADVISOR_MODEL_HEADERS}
)

file(GLOB TRUSTEDADVISOR_UNITY_SRC
    ${AWS_TRUSTEDADVISOR_SOURCE}
    ${AWS_TRUSTEDADVISOR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("TRUSTEDADVISOR" TRUSTEDADVISOR_UNITY_SRC)
endif()

file(GLOB TRUSTEDADVISOR_SRC
    ${TRUSTEDADVISOR_UNIFIED_HEADERS}
    ${TRUSTEDADVISOR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\trustedadvisor" FILES ${AWS_TRUSTEDADVISOR_HEADERS})
        source_group("Header Files\\aws\\trustedadvisor\\model" FILES ${AWS_TRUSTEDADVISOR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_TRUSTEDADVISOR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_TRUSTEDADVISOR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(TRUSTEDADVISOR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${TRUSTEDADVISOR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_TRUSTEDADVISOR_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_TRUSTEDADVISOR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/trustedadvisor)
install (FILES ${AWS_TRUSTEDADVISOR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/trustedadvisor/model)

do_packaging()


