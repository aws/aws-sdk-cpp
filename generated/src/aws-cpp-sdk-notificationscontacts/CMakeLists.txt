add_project(aws-cpp-sdk-notificationscontacts "C++ SDK for the AWS notificationscontacts service" aws-cpp-sdk-core)

file(GLOB AWS_NOTIFICATIONSCONTACTS_HEADERS
    "include/aws/notificationscontacts/*.h"
)

file(GLOB AWS_NOTIFICATIONSCONTACTS_MODEL_HEADERS
    "include/aws/notificationscontacts/model/*.h"
)

file(GLOB AWS_NOTIFICATIONSCONTACTS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_NOTIFICATIONSCONTACTS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB NOTIFICATIONSCONTACTS_UNIFIED_HEADERS
    ${AWS_NOTIFICATIONSCONTACTS_HEADERS}
    ${AWS_NOTIFICATIONSCONTACTS_MODEL_HEADERS}
)

file(GLOB NOTIFICATIONSCONTACTS_UNITY_SRC
    ${AWS_NOTIFICATIONSCONTACTS_SOURCE}
    ${AWS_NOTIFICATIONSCONTACTS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("NOTIFICATIONSCONTACTS" NOTIFICATIONSCONTACTS_UNITY_SRC)
endif()

file(GLOB NOTIFICATIONSCONTACTS_SRC
    ${NOTIFICATIONSCONTACTS_UNIFIED_HEADERS}
    ${NOTIFICATIONSCONTACTS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\notificationscontacts" FILES ${AWS_NOTIFICATIONSCONTACTS_HEADERS})
        source_group("Header Files\\aws\\notificationscontacts\\model" FILES ${AWS_NOTIFICATIONSCONTACTS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_NOTIFICATIONSCONTACTS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_NOTIFICATIONSCONTACTS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(NOTIFICATIONSCONTACTS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${NOTIFICATIONSCONTACTS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_NOTIFICATIONSCONTACTS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_NOTIFICATIONSCONTACTS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/notificationscontacts)
install (FILES ${AWS_NOTIFICATIONSCONTACTS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/notificationscontacts/model)

do_packaging()


