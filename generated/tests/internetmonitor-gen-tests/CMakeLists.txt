add_project(internetmonitor-gen-tests
    "Tests for the AWS INTERNETMONITOR C++ SDK"
    testing-resources
    testing-common-pch
    aws-cpp-sdk-internetmonitor
    aws-cpp-sdk-core)

file(GLOB AWS_INTERNETMONITOR_GENERATED_TEST_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

if(MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

if (CMAKE_CROSSCOMPILING)
    set(AUTORUN_UNIT_TESTS OFF)
endif()

if (AUTORUN_UNIT_TESTS)
    enable_testing()
endif()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} "${AWS_INTERNETMONITOR_GENERATED_TEST_SRC}")
else()
    add_executable(${PROJECT_NAME} "${AWS_INTERNETMONITOR_GENERATED_TEST_SRC}")
endif()

if(PLATFORM_WINDOWS AND MSVC)
    SET(PrecompiledBinary "${CMAKE_CURRENT_BINARY_DIR}/../../../tests/testing-common-pch/AwsTestingCommonPCH.pch")

    SET_SOURCE_FILES_PROPERTIES(${AWS_INTERNETMONITOR_GENERATED_TEST_SRC}
                                PROPERTIES COMPILE_FLAGS "/Yu\"aws/testing-common-pch/AwsTestingCommonPCH.h\" /Fp\"${PrecompiledBinary}\""
                                           OBJECT_DEPENDS "${PrecompiledBinary}")

    add_custom_command(
        TARGET ${PROJECT_NAME} PRE_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
                ${CMAKE_CURRENT_BINARY_DIR}/../../../tests/testing-common-pch/$(Configuration)/testing-common-pch.pdb
                ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.dir/$(Configuration)/vc${MSVC_TOOLSET_VERSION}.pdb
                || (exit 0)
    )
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

if (AUTORUN_UNIT_TESTS)
    ADD_CUSTOM_COMMAND( TARGET ${PROJECT_NAME} POST_BUILD COMMAND $<TARGET_FILE:${PROJECT_NAME}> "--gtest_brief=1")
endif()

if(NOT CMAKE_CROSSCOMPILING)
    SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
endif()