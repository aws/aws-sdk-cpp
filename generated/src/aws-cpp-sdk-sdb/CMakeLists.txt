add_project(aws-cpp-sdk-sdb "C++ SDK for the AWS sdb service" aws-cpp-sdk-core)

file(GLOB AWS_SDB_HEADERS
    "include/aws/sdb/*.h"
)

file(GLOB AWS_SDB_MODEL_HEADERS
    "include/aws/sdb/model/*.h"
)

file(GLOB AWS_SDB_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SDB_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SDB_UNIFIED_HEADERS
    ${AWS_SDB_HEADERS}
    ${AWS_SDB_MODEL_HEADERS}
)

file(GLOB SDB_UNITY_SRC
    ${AWS_SDB_SOURCE}
    ${AWS_SDB_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SDB" SDB_UNITY_SRC)
endif()

file(GLOB SDB_SRC
    ${SDB_UNIFIED_HEADERS}
    ${SDB_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\sdb" FILES ${AWS_SDB_HEADERS})
        source_group("Header Files\\aws\\sdb\\model" FILES ${AWS_SDB_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SDB_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SDB_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SDB_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SDB_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SIMPLEDB_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SDB_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sdb)
install (FILES ${AWS_SDB_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sdb/model)

do_packaging()


