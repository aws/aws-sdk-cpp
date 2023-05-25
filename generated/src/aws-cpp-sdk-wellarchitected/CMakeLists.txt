add_project(aws-cpp-sdk-wellarchitected "C++ SDK for the AWS wellarchitected service" aws-cpp-sdk-core)

file(GLOB AWS_WELLARCHITECTED_HEADERS
    "include/aws/wellarchitected/*.h"
)

file(GLOB AWS_WELLARCHITECTED_MODEL_HEADERS
    "include/aws/wellarchitected/model/*.h"
)

file(GLOB AWS_WELLARCHITECTED_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_WELLARCHITECTED_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB WELLARCHITECTED_UNIFIED_HEADERS
    ${AWS_WELLARCHITECTED_HEADERS}
    ${AWS_WELLARCHITECTED_MODEL_HEADERS}
)

file(GLOB WELLARCHITECTED_UNITY_SRC
    ${AWS_WELLARCHITECTED_SOURCE}
    ${AWS_WELLARCHITECTED_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("WELLARCHITECTED" WELLARCHITECTED_UNITY_SRC)
endif()

file(GLOB WELLARCHITECTED_SRC
    ${WELLARCHITECTED_UNIFIED_HEADERS}
    ${WELLARCHITECTED_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\wellarchitected" FILES ${AWS_WELLARCHITECTED_HEADERS})
        source_group("Header Files\\aws\\wellarchitected\\model" FILES ${AWS_WELLARCHITECTED_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_WELLARCHITECTED_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_WELLARCHITECTED_MODEL_SOURCE})
    endif(MSVC)
endif()

set(WELLARCHITECTED_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${WELLARCHITECTED_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_WELLARCHITECTED_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_WELLARCHITECTED_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/wellarchitected)
install (FILES ${AWS_WELLARCHITECTED_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/wellarchitected/model)

do_packaging()


