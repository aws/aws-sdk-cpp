add_project(arc-region-switch-gen-tests
    "Tests for the AWS ARC-REGION-SWITCH C++ SDK"
    testing-resources
    aws-cpp-sdk-arc-region-switch
    aws-cpp-sdk-core)

file(GLOB AWS_ARC-REGION-SWITCH_GENERATED_TEST_SRC
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
    add_library(${PROJECT_NAME} "${AWS_ARC-REGION-SWITCH_GENERATED_TEST_SRC}")
else()
    add_executable(${PROJECT_NAME} "${AWS_ARC-REGION-SWITCH_GENERATED_TEST_SRC}")
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

if (AUTORUN_UNIT_TESTS)
    ADD_CUSTOM_COMMAND( TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E env LD_LIBRARY_PATH=${AWS_AUTORUN_LD_LIBRARY_PATH}:$ENV{LD_LIBRARY_PATH} $<TARGET_FILE:${PROJECT_NAME}>
        ARGS "--gtest_brief=1")
endif()

if(NOT CMAKE_CROSSCOMPILING)
    SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
endif()