if (BUILD_TESTING)
    add_subdirectory(../tests/testing-resources)
    add_subdirectory(../tests/aws-cpp-sdk-core-tests)
    # Integration testing
    add_subdirectory(aws-cpp-sdk-dynamodb-integration-tests)
endif ()