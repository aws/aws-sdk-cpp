add_project(aws-cpp-sdk-timestream-influxdb "C++ SDK for the AWS timestream-influxdb service" aws-cpp-sdk-core)

file(GLOB AWS_TIMESTREAM-INFLUXDB_HEADERS
    "include/aws/timestream-influxdb/*.h"
)

file(GLOB AWS_TIMESTREAM-INFLUXDB_MODEL_HEADERS
    "include/aws/timestream-influxdb/model/*.h"
)

file(GLOB AWS_TIMESTREAM-INFLUXDB_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_TIMESTREAM-INFLUXDB_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB TIMESTREAM-INFLUXDB_UNIFIED_HEADERS
    ${AWS_TIMESTREAM-INFLUXDB_HEADERS}
    ${AWS_TIMESTREAM-INFLUXDB_MODEL_HEADERS}
)

file(GLOB TIMESTREAM-INFLUXDB_UNITY_SRC
    ${AWS_TIMESTREAM-INFLUXDB_SOURCE}
    ${AWS_TIMESTREAM-INFLUXDB_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("TIMESTREAM-INFLUXDB" TIMESTREAM-INFLUXDB_UNITY_SRC)
endif()

file(GLOB TIMESTREAM-INFLUXDB_SRC
    ${TIMESTREAM-INFLUXDB_UNIFIED_HEADERS}
    ${TIMESTREAM-INFLUXDB_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\timestream-influxdb" FILES ${AWS_TIMESTREAM-INFLUXDB_HEADERS})
        source_group("Header Files\\aws\\timestream-influxdb\\model" FILES ${AWS_TIMESTREAM-INFLUXDB_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_TIMESTREAM-INFLUXDB_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_TIMESTREAM-INFLUXDB_MODEL_SOURCE})
    endif(MSVC)
endif()

set(TIMESTREAM-INFLUXDB_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${TIMESTREAM-INFLUXDB_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_TIMESTREAMINFLUXDB_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_TIMESTREAM-INFLUXDB_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/timestream-influxdb)
install (FILES ${AWS_TIMESTREAM-INFLUXDB_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/timestream-influxdb/model)

do_packaging()


