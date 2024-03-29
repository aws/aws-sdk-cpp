add_project(aws-cpp-sdk-omics "C++ SDK for the AWS omics service" aws-cpp-sdk-core)

file(GLOB AWS_OMICS_HEADERS
    "include/aws/omics/*.h"
)

file(GLOB AWS_OMICS_MODEL_HEADERS
    "include/aws/omics/model/*.h"
)

file(GLOB AWS_OMICS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_OMICS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB OMICS_UNIFIED_HEADERS
    ${AWS_OMICS_HEADERS}
    ${AWS_OMICS_MODEL_HEADERS}
)

file(GLOB OMICS_UNITY_SRC
    ${AWS_OMICS_SOURCE}
    ${AWS_OMICS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("OMICS" OMICS_UNITY_SRC)
endif()

file(GLOB OMICS_SRC
    ${OMICS_UNIFIED_HEADERS}
    ${OMICS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\omics" FILES ${AWS_OMICS_HEADERS})
        source_group("Header Files\\aws\\omics\\model" FILES ${AWS_OMICS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_OMICS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_OMICS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(OMICS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${OMICS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_OMICS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_OMICS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/omics)
install (FILES ${AWS_OMICS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/omics/model)

do_packaging()


