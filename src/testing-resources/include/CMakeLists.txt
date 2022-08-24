target_include_directories(
        aws-sdk-cpp-testing-resources
        BEFORE
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
        PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
)

include(GenerateExportHeader)
generate_export_header(
        aws-sdk-cpp-testing-resources
        EXPORT_MACRO_NAME AWS_TESTING_API # to be backward compatible during LEGACY_BUILD exist until 1.11
)
