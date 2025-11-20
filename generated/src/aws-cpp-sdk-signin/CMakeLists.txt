add_project(aws-cpp-sdk-signin "C++ SDK for the AWS signin service" aws-cpp-sdk-core)

file(GLOB AWS_SIGNIN_HEADERS
    "include/aws/signin/*.h"
)

file(GLOB AWS_SIGNIN_MODEL_HEADERS
    "include/aws/signin/model/*.h"
)

file(GLOB AWS_SIGNIN_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SIGNIN_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SIGNIN_UNIFIED_HEADERS
    ${AWS_SIGNIN_HEADERS}
    ${AWS_SIGNIN_MODEL_HEADERS}
)

file(GLOB SIGNIN_UNITY_SRC
    ${AWS_SIGNIN_SOURCE}
    ${AWS_SIGNIN_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SIGNIN" SIGNIN_UNITY_SRC)
endif()

file(GLOB SIGNIN_SRC
    ${SIGNIN_UNIFIED_HEADERS}
    ${SIGNIN_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\signin" FILES ${AWS_SIGNIN_HEADERS})
        source_group("Header Files\\aws\\signin\\model" FILES ${AWS_SIGNIN_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SIGNIN_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SIGNIN_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SIGNIN_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SIGNIN_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SIGNIN_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SIGNIN_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/signin)
install (FILES ${AWS_SIGNIN_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/signin/model)

do_packaging()


