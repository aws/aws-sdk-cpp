add_project(aws-cpp-sdk-s3-encryption-tests 
    "Unit tests for the Amazon S3 Encryption Client"
    testing-resources 
    aws-cpp-sdk-core
    aws-cpp-sdk-s3
    aws-cpp-sdk-kms
    aws-cpp-sdk-s3-encryption)

# Headers are included in the source so that they show up in Visual Studio.
# They are included elsewhere for consistency.

file(GLOB S3ENCRYPTION_TEST_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

set(S3ECRYPTION_TEST_APPLICATION_INCLUDES
  "${AWS_NATIVE_SDK_ROOT}/src/aws-cpp-sdk-core/include/"
  "${AWS_NATIVE_SDK_ROOT}/generated/src/aws-cpp-sdk-s3/include/"
  "${AWS_NATIVE_SDK_ROOT}/src/aws-cpp-sdk-s3-encryption/include/"
  "${AWS_NATIVE_SDK_ROOT}/tests/testing-resources/include/"
  "${AWS_NATIVE_SDK_ROOT}/generated/src/aws-cpp-sdk-kms/include"
)

include_directories(${S3ECRYPTION_TEST_APPLICATION_INCLUDES})

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
    add_library(aws-cpp-sdk-s3-encryption-tests ${S3ENCRYPTION_TEST_SRC})
else()
    add_executable(aws-cpp-sdk-s3-encryption-tests ${S3ENCRYPTION_TEST_SRC})
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(aws-cpp-sdk-s3-encryption-tests ${PROJECT_LIBS})

if (AUTORUN_UNIT_TESTS)
    ADD_CUSTOM_COMMAND( TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E env LD_LIBRARY_PATH=${AWS_AUTORUN_LD_LIBRARY_PATH}:$ENV{LD_LIBRARY_PATH} $<TARGET_FILE:${PROJECT_NAME}>
        ARGS "--gtest_brief=1")
endif()

if(NOT CMAKE_CROSSCOMPILING)
    SET_TARGET_PROPERTIES(aws-cpp-sdk-s3-encryption-tests PROPERTIES OUTPUT_NAME aws-cpp-sdk-s3-encryption-tests)
endif()
