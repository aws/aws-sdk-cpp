add_project(aws-cpp-sdk-network-security-manager "C++ SDK for the AWS network-security-manager service" aws-cpp-sdk-core)

file(GLOB AWS_NETWORK-SECURITY-MANAGER_HEADERS
    "include/aws/network-security-manager/*.h"
)

file(GLOB AWS_NETWORK-SECURITY-MANAGER_MODEL_HEADERS
    "include/aws/network-security-manager/model/*.h"
)

file(GLOB AWS_NETWORK-SECURITY-MANAGER_INTERNAL_HEADERS
    "include/aws/network-security-manager/internal/*.h"
)

file(GLOB AWS_NETWORK-SECURITY-MANAGER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_NETWORK-SECURITY-MANAGER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB NETWORK-SECURITY-MANAGER_UNIFIED_HEADERS
    ${AWS_NETWORK-SECURITY-MANAGER_HEADERS}
    ${AWS_NETWORK-SECURITY-MANAGER_INTERNAL_HEADERS}
    ${AWS_NETWORK-SECURITY-MANAGER_MODEL_HEADERS}
)

file(GLOB NETWORK-SECURITY-MANAGER_UNITY_SRC
    ${AWS_NETWORK-SECURITY-MANAGER_SOURCE}
    ${AWS_NETWORK-SECURITY-MANAGER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("NETWORK-SECURITY-MANAGER" NETWORK-SECURITY-MANAGER_UNITY_SRC)
endif()

file(GLOB NETWORK-SECURITY-MANAGER_SRC
    ${NETWORK-SECURITY-MANAGER_UNIFIED_HEADERS}
    ${NETWORK-SECURITY-MANAGER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\network-security-manager" FILES ${AWS_NETWORK-SECURITY-MANAGER_HEADERS})
        source_group("Header Files\\aws\\network-security-manager\\internal" FILES ${AWS_NETWORK-SECURITY-MANAGER_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\network-security-manager\\model" FILES ${AWS_NETWORK-SECURITY-MANAGER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_NETWORK-SECURITY-MANAGER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_NETWORK-SECURITY-MANAGER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(NETWORK-SECURITY-MANAGER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${NETWORK-SECURITY-MANAGER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_NETWORKSECURITYMANAGER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_NETWORK-SECURITY-MANAGER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/network-security-manager)
install (FILES ${AWS_NETWORK-SECURITY-MANAGER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/network-security-manager/model)

do_packaging()


