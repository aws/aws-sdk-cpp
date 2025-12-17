add_project(aws-cpp-sdk-test-new-service-sdk-testing "C++ SDK for the AWS test-new-service-sdk-testing service" aws-cpp-sdk-core)

file(GLOB AWS_TEST-NEW-SERVICE-SDK-TESTING_HEADERS
    "include/aws/test-new-service-sdk-testing/*.h"
)

file(GLOB AWS_TEST-NEW-SERVICE-SDK-TESTING_MODEL_HEADERS
    "include/aws/test-new-service-sdk-testing/model/*.h"
)

file(GLOB AWS_TEST-NEW-SERVICE-SDK-TESTING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_TEST-NEW-SERVICE-SDK-TESTING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB TEST-NEW-SERVICE-SDK-TESTING_UNIFIED_HEADERS
    ${AWS_TEST-NEW-SERVICE-SDK-TESTING_HEADERS}
    ${AWS_TEST-NEW-SERVICE-SDK-TESTING_MODEL_HEADERS}
)

file(GLOB TEST-NEW-SERVICE-SDK-TESTING_UNITY_SRC
    ${AWS_TEST-NEW-SERVICE-SDK-TESTING_SOURCE}
    ${AWS_TEST-NEW-SERVICE-SDK-TESTING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("TEST-NEW-SERVICE-SDK-TESTING" TEST-NEW-SERVICE-SDK-TESTING_UNITY_SRC)
endif()

file(GLOB TEST-NEW-SERVICE-SDK-TESTING_SRC
    ${TEST-NEW-SERVICE-SDK-TESTING_UNIFIED_HEADERS}
    ${TEST-NEW-SERVICE-SDK-TESTING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\test-new-service-sdk-testing" FILES ${AWS_TEST-NEW-SERVICE-SDK-TESTING_HEADERS})
        source_group("Header Files\\aws\\test-new-service-sdk-testing\\model" FILES ${AWS_TEST-NEW-SERVICE-SDK-TESTING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_TEST-NEW-SERVICE-SDK-TESTING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_TEST-NEW-SERVICE-SDK-TESTING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(TEST-NEW-SERVICE-SDK-TESTING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${TEST-NEW-SERVICE-SDK-TESTING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_TESTNEWSERVICESDKTESTING_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_TEST-NEW-SERVICE-SDK-TESTING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/test-new-service-sdk-testing)
install (FILES ${AWS_TEST-NEW-SERVICE-SDK-TESTING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/test-new-service-sdk-testing/model)

do_packaging()


