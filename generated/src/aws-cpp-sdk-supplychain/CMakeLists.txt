add_project(aws-cpp-sdk-supplychain "C++ SDK for the AWS supplychain service" aws-cpp-sdk-core)

file(GLOB AWS_SUPPLYCHAIN_HEADERS
    "include/aws/supplychain/*.h"
)

file(GLOB AWS_SUPPLYCHAIN_MODEL_HEADERS
    "include/aws/supplychain/model/*.h"
)

file(GLOB AWS_SUPPLYCHAIN_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SUPPLYCHAIN_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SUPPLYCHAIN_UNIFIED_HEADERS
    ${AWS_SUPPLYCHAIN_HEADERS}
    ${AWS_SUPPLYCHAIN_MODEL_HEADERS}
)

file(GLOB SUPPLYCHAIN_UNITY_SRC
    ${AWS_SUPPLYCHAIN_SOURCE}
    ${AWS_SUPPLYCHAIN_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SUPPLYCHAIN" SUPPLYCHAIN_UNITY_SRC)
endif()

file(GLOB SUPPLYCHAIN_SRC
    ${SUPPLYCHAIN_UNIFIED_HEADERS}
    ${SUPPLYCHAIN_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\supplychain" FILES ${AWS_SUPPLYCHAIN_HEADERS})
        source_group("Header Files\\aws\\supplychain\\model" FILES ${AWS_SUPPLYCHAIN_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SUPPLYCHAIN_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SUPPLYCHAIN_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SUPPLYCHAIN_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SUPPLYCHAIN_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SUPPLYCHAIN_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SUPPLYCHAIN_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/supplychain)
install (FILES ${AWS_SUPPLYCHAIN_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/supplychain/model)

do_packaging()


