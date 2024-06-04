add_project(aws-cpp-sdk-taxsettings "C++ SDK for the AWS taxsettings service" aws-cpp-sdk-core)

file(GLOB AWS_TAXSETTINGS_HEADERS
    "include/aws/taxsettings/*.h"
)

file(GLOB AWS_TAXSETTINGS_MODEL_HEADERS
    "include/aws/taxsettings/model/*.h"
)

file(GLOB AWS_TAXSETTINGS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_TAXSETTINGS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB TAXSETTINGS_UNIFIED_HEADERS
    ${AWS_TAXSETTINGS_HEADERS}
    ${AWS_TAXSETTINGS_MODEL_HEADERS}
)

file(GLOB TAXSETTINGS_UNITY_SRC
    ${AWS_TAXSETTINGS_SOURCE}
    ${AWS_TAXSETTINGS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("TAXSETTINGS" TAXSETTINGS_UNITY_SRC)
endif()

file(GLOB TAXSETTINGS_SRC
    ${TAXSETTINGS_UNIFIED_HEADERS}
    ${TAXSETTINGS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\taxsettings" FILES ${AWS_TAXSETTINGS_HEADERS})
        source_group("Header Files\\aws\\taxsettings\\model" FILES ${AWS_TAXSETTINGS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_TAXSETTINGS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_TAXSETTINGS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(TAXSETTINGS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${TAXSETTINGS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_TAXSETTINGS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_TAXSETTINGS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/taxsettings)
install (FILES ${AWS_TAXSETTINGS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/taxsettings/model)

do_packaging()


