if (BUILD_TESTING)
    add_subdirectory(testing-resources)
    add_subdirectory(aws-cpp-sdk-core-tests)
    # Integration testing
    add_subdirectory(aws-cpp-sdk-dynamodb-integration-tests)
endif ()