add_project(aws-cpp-sdk-tnb "C++ SDK for the AWS tnb service" aws-cpp-sdk-core)

file(GLOB AWS_TNB_HEADERS
    "include/aws/tnb/*.h"
)

file(GLOB AWS_TNB_MODEL_HEADERS
    "include/aws/tnb/model/*.h"
)

file(GLOB AWS_TNB_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_TNB_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB TNB_UNIFIED_HEADERS
    ${AWS_TNB_HEADERS}
    ${AWS_TNB_MODEL_HEADERS}
)

file(GLOB TNB_UNITY_SRC
    ${AWS_TNB_SOURCE}
    ${AWS_TNB_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("TNB" TNB_UNITY_SRC)
endif()

file(GLOB TNB_SRC
    ${TNB_UNIFIED_HEADERS}
    ${TNB_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\tnb" FILES ${AWS_TNB_HEADERS})
        source_group("Header Files\\aws\\tnb\\model" FILES ${AWS_TNB_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_TNB_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_TNB_MODEL_SOURCE})
    endif(MSVC)
endif()

set(TNB_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${TNB_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_TNB_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_TNB_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/tnb)
install (FILES ${AWS_TNB_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/tnb/model)

do_packaging()


