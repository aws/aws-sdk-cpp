add_project(aws-cpp-sdk-mediastore-data-integration-tests
    "Tests for the AWS MediaStore Data C++ SDK"
    aws-cpp-sdk-mediastore
    aws-cpp-sdk-mediastore-data
    testing-resources
    aws-cpp-sdk-core)

file(GLOB AWS_MEDIASTORE_DATA_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

file(GLOB AWS_MEDIASTORE_DATA_INTEGRATION_TESTS_SRC
    ${AWS_MEDIASTORE_DATA_SRC}
)

enable_testing()

if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} ${LIBTYPE} ${AWS_MEDIASTORE_DATA_INTEGRATION_TESTS_SRC})
else()
    add_executable(${PROJECT_NAME} ${AWS_MEDIASTORE_DATA_INTEGRATION_TESTS_SRC})
endif()

target_compile_definitions(${PROJECT_NAME} PRIVATE -DRESOURCES_DIR="${CMAKE_CURRENT_SOURCE_DIR}/resources")

if(MSVC AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE -DGTEST_LINKED_AS_SHARED_LIBRARY=1)
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

