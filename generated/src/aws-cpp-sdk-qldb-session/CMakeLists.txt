add_project(aws-cpp-sdk-qldb-session "C++ SDK for the AWS qldb-session service" aws-cpp-sdk-core)

file(GLOB AWS_QLDB-SESSION_HEADERS
    "include/aws/qldb-session/*.h"
)

file(GLOB AWS_QLDB-SESSION_MODEL_HEADERS
    "include/aws/qldb-session/model/*.h"
)

file(GLOB AWS_QLDB-SESSION_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_QLDB-SESSION_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB QLDB-SESSION_UNIFIED_HEADERS
    ${AWS_QLDB-SESSION_HEADERS}
    ${AWS_QLDB-SESSION_MODEL_HEADERS}
)

file(GLOB QLDB-SESSION_UNITY_SRC
    ${AWS_QLDB-SESSION_SOURCE}
    ${AWS_QLDB-SESSION_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("QLDB-SESSION" QLDB-SESSION_UNITY_SRC)
endif()

file(GLOB QLDB-SESSION_SRC
    ${QLDB-SESSION_UNIFIED_HEADERS}
    ${QLDB-SESSION_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\qldb-session" FILES ${AWS_QLDB-SESSION_HEADERS})
        source_group("Header Files\\aws\\qldb-session\\model" FILES ${AWS_QLDB-SESSION_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_QLDB-SESSION_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_QLDB-SESSION_MODEL_SOURCE})
    endif(MSVC)
endif()

set(QLDB-SESSION_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${QLDB-SESSION_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_QLDBSESSION_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_QLDB-SESSION_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/qldb-session)
install (FILES ${AWS_QLDB-SESSION_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/qldb-session/model)

do_packaging()


