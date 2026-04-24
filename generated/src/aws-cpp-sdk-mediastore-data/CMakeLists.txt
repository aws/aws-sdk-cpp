add_project(aws-cpp-sdk-mediastore-data "C++ SDK for the AWS mediastore-data service" aws-cpp-sdk-core)

file(GLOB AWS_MEDIASTORE-DATA_HEADERS
    "include/aws/mediastore-data/*.h"
)

file(GLOB AWS_MEDIASTORE-DATA_MODEL_HEADERS
    "include/aws/mediastore-data/model/*.h"
)

file(GLOB AWS_MEDIASTORE-DATA_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MEDIASTORE-DATA_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MEDIASTORE-DATA_UNIFIED_HEADERS
    ${AWS_MEDIASTORE-DATA_HEADERS}
    ${AWS_MEDIASTORE-DATA_MODEL_HEADERS}
)

file(GLOB MEDIASTORE-DATA_UNITY_SRC
    ${AWS_MEDIASTORE-DATA_SOURCE}
    ${AWS_MEDIASTORE-DATA_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MEDIASTORE-DATA" MEDIASTORE-DATA_UNITY_SRC)
endif()

file(GLOB MEDIASTORE-DATA_SRC
    ${MEDIASTORE-DATA_UNIFIED_HEADERS}
    ${MEDIASTORE-DATA_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\mediastore-data" FILES ${AWS_MEDIASTORE-DATA_HEADERS})
        source_group("Header Files\\aws\\mediastore-data\\model" FILES ${AWS_MEDIASTORE-DATA_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MEDIASTORE-DATA_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MEDIASTORE-DATA_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MEDIASTORE-DATA_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MEDIASTORE-DATA_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MEDIASTOREDATA_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MEDIASTORE-DATA_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mediastore-data)
install (FILES ${AWS_MEDIASTORE-DATA_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/mediastore-data/model)

do_packaging()


