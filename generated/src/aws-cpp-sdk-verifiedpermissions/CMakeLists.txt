add_project(aws-cpp-sdk-verifiedpermissions "C++ SDK for the AWS verifiedpermissions service" aws-cpp-sdk-core)

file(GLOB AWS_VERIFIEDPERMISSIONS_HEADERS
    "include/aws/verifiedpermissions/*.h"
)

file(GLOB AWS_VERIFIEDPERMISSIONS_MODEL_HEADERS
    "include/aws/verifiedpermissions/model/*.h"
)

file(GLOB AWS_VERIFIEDPERMISSIONS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_VERIFIEDPERMISSIONS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB VERIFIEDPERMISSIONS_UNIFIED_HEADERS
    ${AWS_VERIFIEDPERMISSIONS_HEADERS}
    ${AWS_VERIFIEDPERMISSIONS_MODEL_HEADERS}
)

file(GLOB VERIFIEDPERMISSIONS_UNITY_SRC
    ${AWS_VERIFIEDPERMISSIONS_SOURCE}
    ${AWS_VERIFIEDPERMISSIONS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("VERIFIEDPERMISSIONS" VERIFIEDPERMISSIONS_UNITY_SRC)
endif()

file(GLOB VERIFIEDPERMISSIONS_SRC
    ${VERIFIEDPERMISSIONS_UNIFIED_HEADERS}
    ${VERIFIEDPERMISSIONS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\verifiedpermissions" FILES ${AWS_VERIFIEDPERMISSIONS_HEADERS})
        source_group("Header Files\\aws\\verifiedpermissions\\model" FILES ${AWS_VERIFIEDPERMISSIONS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_VERIFIEDPERMISSIONS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_VERIFIEDPERMISSIONS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(VERIFIEDPERMISSIONS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${VERIFIEDPERMISSIONS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_VERIFIEDPERMISSIONS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_VERIFIEDPERMISSIONS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/verifiedpermissions)
install (FILES ${AWS_VERIFIEDPERMISSIONS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/verifiedpermissions/model)

do_packaging()


