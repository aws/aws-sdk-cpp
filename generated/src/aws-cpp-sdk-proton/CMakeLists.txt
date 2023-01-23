add_project(aws-cpp-sdk-proton "C++ SDK for the AWS proton service" aws-cpp-sdk-core)

file(GLOB AWS_PROTON_HEADERS
    "include/aws/proton/*.h"
)

file(GLOB AWS_PROTON_MODEL_HEADERS
    "include/aws/proton/model/*.h"
)

file(GLOB AWS_PROTON_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_PROTON_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB PROTON_UNIFIED_HEADERS
    ${AWS_PROTON_HEADERS}
    ${AWS_PROTON_MODEL_HEADERS}
)

file(GLOB PROTON_UNITY_SRC
    ${AWS_PROTON_SOURCE}
    ${AWS_PROTON_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("PROTON" PROTON_UNITY_SRC)
endif()

file(GLOB PROTON_SRC
    ${PROTON_UNIFIED_HEADERS}
    ${PROTON_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\proton" FILES ${AWS_PROTON_HEADERS})
        source_group("Header Files\\aws\\proton\\model" FILES ${AWS_PROTON_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_PROTON_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_PROTON_MODEL_SOURCE})
    endif(MSVC)
endif()

set(PROTON_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${PROTON_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_PROTON_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_PROTON_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/proton)
install (FILES ${AWS_PROTON_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/proton/model)

do_packaging()


