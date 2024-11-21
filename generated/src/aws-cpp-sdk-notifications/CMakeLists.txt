add_project(aws-cpp-sdk-notifications "C++ SDK for the AWS notifications service" aws-cpp-sdk-core)

file(GLOB AWS_NOTIFICATIONS_HEADERS
    "include/aws/notifications/*.h"
)

file(GLOB AWS_NOTIFICATIONS_MODEL_HEADERS
    "include/aws/notifications/model/*.h"
)

file(GLOB AWS_NOTIFICATIONS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_NOTIFICATIONS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB NOTIFICATIONS_UNIFIED_HEADERS
    ${AWS_NOTIFICATIONS_HEADERS}
    ${AWS_NOTIFICATIONS_MODEL_HEADERS}
)

file(GLOB NOTIFICATIONS_UNITY_SRC
    ${AWS_NOTIFICATIONS_SOURCE}
    ${AWS_NOTIFICATIONS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("NOTIFICATIONS" NOTIFICATIONS_UNITY_SRC)
endif()

file(GLOB NOTIFICATIONS_SRC
    ${NOTIFICATIONS_UNIFIED_HEADERS}
    ${NOTIFICATIONS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\notifications" FILES ${AWS_NOTIFICATIONS_HEADERS})
        source_group("Header Files\\aws\\notifications\\model" FILES ${AWS_NOTIFICATIONS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_NOTIFICATIONS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_NOTIFICATIONS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(NOTIFICATIONS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${NOTIFICATIONS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_NOTIFICATIONS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_NOTIFICATIONS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/notifications)
install (FILES ${AWS_NOTIFICATIONS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/notifications/model)

do_packaging()


