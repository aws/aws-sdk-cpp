add_project(aws-cpp-sdk-odb "C++ SDK for the AWS odb service" aws-cpp-sdk-core)

file(GLOB AWS_ODB_HEADERS
    "include/aws/odb/*.h"
)

file(GLOB AWS_ODB_MODEL_HEADERS
    "include/aws/odb/model/*.h"
)

file(GLOB AWS_ODB_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ODB_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ODB_UNIFIED_HEADERS
    ${AWS_ODB_HEADERS}
    ${AWS_ODB_MODEL_HEADERS}
)

file(GLOB ODB_UNITY_SRC
    ${AWS_ODB_SOURCE}
    ${AWS_ODB_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ODB" ODB_UNITY_SRC)
endif()

file(GLOB ODB_SRC
    ${ODB_UNIFIED_HEADERS}
    ${ODB_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\odb" FILES ${AWS_ODB_HEADERS})
        source_group("Header Files\\aws\\odb\\model" FILES ${AWS_ODB_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ODB_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ODB_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ODB_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ODB_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ODB_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ODB_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/odb)
install (FILES ${AWS_ODB_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/odb/model)

do_packaging()


