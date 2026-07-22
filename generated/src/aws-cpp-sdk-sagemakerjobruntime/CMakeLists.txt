add_project(aws-cpp-sdk-sagemakerjobruntime "C++ SDK for the AWS sagemakerjobruntime service" aws-cpp-sdk-core)

file(GLOB AWS_SAGEMAKERJOBRUNTIME_HEADERS
    "include/aws/sagemakerjobruntime/*.h"
)

file(GLOB AWS_SAGEMAKERJOBRUNTIME_MODEL_HEADERS
    "include/aws/sagemakerjobruntime/model/*.h"
)

file(GLOB AWS_SAGEMAKERJOBRUNTIME_INTERNAL_HEADERS
    "include/aws/sagemakerjobruntime/internal/*.h"
)

file(GLOB AWS_SAGEMAKERJOBRUNTIME_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SAGEMAKERJOBRUNTIME_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SAGEMAKERJOBRUNTIME_UNIFIED_HEADERS
    ${AWS_SAGEMAKERJOBRUNTIME_HEADERS}
    ${AWS_SAGEMAKERJOBRUNTIME_INTERNAL_HEADERS}
    ${AWS_SAGEMAKERJOBRUNTIME_MODEL_HEADERS}
)

file(GLOB SAGEMAKERJOBRUNTIME_UNITY_SRC
    ${AWS_SAGEMAKERJOBRUNTIME_SOURCE}
    ${AWS_SAGEMAKERJOBRUNTIME_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SAGEMAKERJOBRUNTIME" SAGEMAKERJOBRUNTIME_UNITY_SRC)
endif()

file(GLOB SAGEMAKERJOBRUNTIME_SRC
    ${SAGEMAKERJOBRUNTIME_UNIFIED_HEADERS}
    ${SAGEMAKERJOBRUNTIME_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\sagemakerjobruntime" FILES ${AWS_SAGEMAKERJOBRUNTIME_HEADERS})
        source_group("Header Files\\aws\\sagemakerjobruntime\\internal" FILES ${AWS_SAGEMAKERJOBRUNTIME_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\sagemakerjobruntime\\model" FILES ${AWS_SAGEMAKERJOBRUNTIME_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SAGEMAKERJOBRUNTIME_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SAGEMAKERJOBRUNTIME_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SAGEMAKERJOBRUNTIME_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SAGEMAKERJOBRUNTIME_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SAGEMAKERJOBRUNTIME_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SAGEMAKERJOBRUNTIME_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sagemakerjobruntime)
install (FILES ${AWS_SAGEMAKERJOBRUNTIME_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/sagemakerjobruntime/model)

do_packaging()


