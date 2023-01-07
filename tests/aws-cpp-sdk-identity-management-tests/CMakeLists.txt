add_project(aws-cpp-sdk-identity-management-tests 
    "Tests for the AWS Identity Management C++ SDK" 
    aws-cpp-sdk-identity-management
    aws-cpp-sdk-cognito-identity
    aws-cpp-sdk-sts
    testing-resources 
    aws-cpp-sdk-core)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.
file(GLOB AWS_AUTH_SRC "${CMAKE_CURRENT_SOURCE_DIR}/auth/*.cpp")

file(GLOB AWS_CPP_SDK_IDENTITY_MANAGEMENT_TESTS_SRC
  "${CMAKE_CURRENT_SOURCE_DIR}/RunTests.cpp"
  ${AWS_AUTH_SRC}
)

if(PLATFORM_WINDOWS)
  if(MSVC)
    source_group("Source Files\\aws\\identity-management\\auth" FILES ${AWS_AUTH_SRC})
  endif()
endif()

if (CMAKE_CROSSCOMPILING)
    set(AUTORUN_UNIT_TESTS OFF)
endif()

if (AUTORUN_UNIT_TESTS)
    enable_testing()
endif()

if(PLATFORM_WINDOWS AND MSVC AND BUILD_SHARED_LIBS)
    add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${AWS_CPP_SDK_IDENTITY_MANAGEMENT_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_CPP_SDK_IDENTITY_MANAGEMENT_TESTS_SRC})
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

if (AUTORUN_UNIT_TESTS)
    ADD_CUSTOM_COMMAND( TARGET ${PROJECT_NAME} POST_BUILD COMMAND $<TARGET_FILE:${PROJECT_NAME}>)
endif()

if(NOT CMAKE_CROSSCOMPILING)
    SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
endif()
