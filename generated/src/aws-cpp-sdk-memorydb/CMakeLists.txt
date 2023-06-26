add_project(aws-cpp-sdk-memorydb "C++ SDK for the AWS memorydb service" aws-cpp-sdk-core)

file(GLOB AWS_MEMORYDB_HEADERS
    "include/aws/memorydb/*.h"
)

file(GLOB AWS_MEMORYDB_MODEL_HEADERS
    "include/aws/memorydb/model/*.h"
)

file(GLOB AWS_MEMORYDB_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_MEMORYDB_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB MEMORYDB_UNIFIED_HEADERS
    ${AWS_MEMORYDB_HEADERS}
    ${AWS_MEMORYDB_MODEL_HEADERS}
)

file(GLOB MEMORYDB_UNITY_SRC
    ${AWS_MEMORYDB_SOURCE}
    ${AWS_MEMORYDB_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("MEMORYDB" MEMORYDB_UNITY_SRC)
endif()

file(GLOB MEMORYDB_SRC
    ${MEMORYDB_UNIFIED_HEADERS}
    ${MEMORYDB_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\memorydb" FILES ${AWS_MEMORYDB_HEADERS})
        source_group("Header Files\\aws\\memorydb\\model" FILES ${AWS_MEMORYDB_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_MEMORYDB_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_MEMORYDB_MODEL_SOURCE})
    endif(MSVC)
endif()

set(MEMORYDB_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${MEMORYDB_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_MEMORYDB_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_MEMORYDB_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/memorydb)
install (FILES ${AWS_MEMORYDB_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/memorydb/model)

do_packaging()


