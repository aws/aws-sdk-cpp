add_project(aws-cpp-sdk-qldb "C++ SDK for the AWS qldb service" aws-cpp-sdk-core)

file(GLOB AWS_QLDB_HEADERS
    "include/aws/qldb/*.h"
)

file(GLOB AWS_QLDB_MODEL_HEADERS
    "include/aws/qldb/model/*.h"
)

file(GLOB AWS_QLDB_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_QLDB_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB QLDB_UNIFIED_HEADERS
    ${AWS_QLDB_HEADERS}
    ${AWS_QLDB_MODEL_HEADERS}
)

file(GLOB QLDB_UNITY_SRC
    ${AWS_QLDB_SOURCE}
    ${AWS_QLDB_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("QLDB" QLDB_UNITY_SRC)
endif()

file(GLOB QLDB_SRC
    ${QLDB_UNIFIED_HEADERS}
    ${QLDB_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\qldb" FILES ${AWS_QLDB_HEADERS})
        source_group("Header Files\\aws\\qldb\\model" FILES ${AWS_QLDB_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_QLDB_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_QLDB_MODEL_SOURCE})
    endif(MSVC)
endif()

set(QLDB_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${QLDB_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_QLDB_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_QLDB_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/qldb)
install (FILES ${AWS_QLDB_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/qldb/model)

do_packaging()


