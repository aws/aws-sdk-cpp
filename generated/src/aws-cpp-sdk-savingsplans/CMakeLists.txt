add_project(aws-cpp-sdk-savingsplans "C++ SDK for the AWS savingsplans service" aws-cpp-sdk-core)

file(GLOB AWS_SAVINGSPLANS_HEADERS
    "include/aws/savingsplans/*.h"
)

file(GLOB AWS_SAVINGSPLANS_MODEL_HEADERS
    "include/aws/savingsplans/model/*.h"
)

file(GLOB AWS_SAVINGSPLANS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SAVINGSPLANS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SAVINGSPLANS_UNIFIED_HEADERS
    ${AWS_SAVINGSPLANS_HEADERS}
    ${AWS_SAVINGSPLANS_MODEL_HEADERS}
)

file(GLOB SAVINGSPLANS_UNITY_SRC
    ${AWS_SAVINGSPLANS_SOURCE}
    ${AWS_SAVINGSPLANS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SAVINGSPLANS" SAVINGSPLANS_UNITY_SRC)
endif()

file(GLOB SAVINGSPLANS_SRC
    ${SAVINGSPLANS_UNIFIED_HEADERS}
    ${SAVINGSPLANS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\savingsplans" FILES ${AWS_SAVINGSPLANS_HEADERS})
        source_group("Header Files\\aws\\savingsplans\\model" FILES ${AWS_SAVINGSPLANS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SAVINGSPLANS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SAVINGSPLANS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SAVINGSPLANS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SAVINGSPLANS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SAVINGSPLANS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SAVINGSPLANS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/savingsplans)
install (FILES ${AWS_SAVINGSPLANS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/savingsplans/model)

do_packaging()


