add_project(aws-cpp-sdk-wickr "C++ SDK for the AWS wickr service" aws-cpp-sdk-core)

file(GLOB AWS_WICKR_HEADERS
    "include/aws/wickr/*.h"
)

file(GLOB AWS_WICKR_MODEL_HEADERS
    "include/aws/wickr/model/*.h"
)

file(GLOB AWS_WICKR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_WICKR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB WICKR_UNIFIED_HEADERS
    ${AWS_WICKR_HEADERS}
    ${AWS_WICKR_MODEL_HEADERS}
)

file(GLOB WICKR_UNITY_SRC
    ${AWS_WICKR_SOURCE}
    ${AWS_WICKR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("WICKR" WICKR_UNITY_SRC)
endif()

file(GLOB WICKR_SRC
    ${WICKR_UNIFIED_HEADERS}
    ${WICKR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\wickr" FILES ${AWS_WICKR_HEADERS})
        source_group("Header Files\\aws\\wickr\\model" FILES ${AWS_WICKR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_WICKR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_WICKR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(WICKR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${WICKR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_WICKR_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_WICKR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/wickr)
install (FILES ${AWS_WICKR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/wickr/model)

do_packaging()


