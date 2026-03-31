add_project(aws-cpp-sdk-sustainability "C++ SDK for the AWS sustainability service" aws-cpp-sdk-core)

file(GLOB AWS_SUSTAINABILITY_HEADERS
    "include/aws/sustainability/*.h"
)

file(GLOB AWS_SUSTAINABILITY_MODEL_HEADERS
    "include/aws/sustainability/model/*.h"
)

file(GLOB AWS_SUSTAINABILITY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SUSTAINABILITY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SUSTAINABILITY_UNIFIED_HEADERS
    ${AWS_SUSTAINABILITY_HEADERS}
    ${AWS_SUSTAINABILITY_MODEL_HEADERS}
)

file(GLOB SUSTAINABILITY_UNITY_SRC
    ${AWS_SUSTAINABILITY_SOURCE}
    ${AWS_SUSTAINABILITY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SUSTAINABILITY" SUSTAINABILITY_UNITY_SRC)
endif()

file(GLOB SUSTAINABILITY_SRC
    ${SUSTAINABILITY_UNIFIED_HEADERS}
    ${SUSTAINABILITY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\sustainability" FILES ${AWS_SUSTAINABILITY_HEADERS})
        source_group("Header Files\\aws\\sustainability\\model" FILES ${AWS_SUSTAINABILITY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SUSTAINABILITY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SUSTAINABILITY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SUSTAINABILITY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SUSTAINABILITY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SUSTAINABILITY_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SUSTAINABILITY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sustainability)
install (FILES ${AWS_SUSTAINABILITY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sustainability/model)

do_packaging()


