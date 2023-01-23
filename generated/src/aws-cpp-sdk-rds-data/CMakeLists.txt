add_project(aws-cpp-sdk-rds-data "C++ SDK for the AWS rds-data service" aws-cpp-sdk-core)

file(GLOB AWS_RDS-DATA_HEADERS
    "include/aws/rds-data/*.h"
)

file(GLOB AWS_RDS-DATA_MODEL_HEADERS
    "include/aws/rds-data/model/*.h"
)

file(GLOB AWS_RDS-DATA_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_RDS-DATA_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB RDS-DATA_UNIFIED_HEADERS
    ${AWS_RDS-DATA_HEADERS}
    ${AWS_RDS-DATA_MODEL_HEADERS}
)

file(GLOB RDS-DATA_UNITY_SRC
    ${AWS_RDS-DATA_SOURCE}
    ${AWS_RDS-DATA_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("RDS-DATA" RDS-DATA_UNITY_SRC)
endif()

file(GLOB RDS-DATA_SRC
    ${RDS-DATA_UNIFIED_HEADERS}
    ${RDS-DATA_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\rds-data" FILES ${AWS_RDS-DATA_HEADERS})
        source_group("Header Files\\aws\\rds-data\\model" FILES ${AWS_RDS-DATA_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_RDS-DATA_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_RDS-DATA_MODEL_SOURCE})
    endif(MSVC)
endif()

set(RDS-DATA_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${RDS-DATA_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_RDSDATASERVICE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_RDS-DATA_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/rds-data)
install (FILES ${AWS_RDS-DATA_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/rds-data/model)

do_packaging()


