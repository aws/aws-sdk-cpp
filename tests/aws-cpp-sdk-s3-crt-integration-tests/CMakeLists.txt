set(TEST_LIST "aws-cpp-sdk-s3-crt-integration-tests:RunTests.cpp")

# Only run memlimiter test if we are building with custom memory management
if (CUSTOM_MEMORY_MANAGEMENT)
    list(APPEND TEST_LIST "aws-cpp-sdk-s3-crt-memory-checked-integration-tests:RunTestsWithMemTracer.cpp")
endif ()

foreach(TEST IN LISTS TEST_LIST)
    string(REPLACE ":" ";" TEST_ITEMS "${TEST}")
    list(GET TEST_ITEMS 0 TEST_PROJECT_NAME)
    list(GET TEST_ITEMS 1 TEST_MAIN_FILE)

    add_project("${TEST_PROJECT_NAME}"
            "Tests for the AWS S3 CRT C++ SDK"
            aws-cpp-sdk-s3-crt
            testing-resources
            aws-cpp-sdk-core)

    file(GLOB AWS_S3_CRT_SRC
            "${TEST_MAIN_FILE}"
            "BucketAndObjectOperationTest.cpp"
            "S3ExpressTest.cpp"
            "CancelCrtRequestTest.cpp"
    )

    file(GLOB AWS_S3_CRT_INTEGRATION_TESTS_SRC
            ${AWS_S3_CRT_SRC}
    )

    add_definitions(-DRESOURCES_DIR="${CMAKE_CURRENT_SOURCE_DIR}/resources")

    if(MSVC AND BUILD_SHARED_LIBS)
        add_definitions(-DGTEST_LINKED_AS_SHARED_LIBRARY=1)
    endif()

    enable_testing()

    if(PLATFORM_ANDROID AND BUILD_SHARED_LIBS)
        add_library(${PROJECT_NAME} ${AWS_S3_CRT_INTEGRATION_TESTS_SRC})
    else()
        add_executable(${PROJECT_NAME} ${AWS_S3_CRT_INTEGRATION_TESTS_SRC})
    endif()

    configure_file(${CMAKE_CURRENT_LIST_DIR}/testFile.txt ${CMAKE_BINARY_DIR}/testFile.txt COPYONLY)

    set_compiler_flags(${PROJECT_NAME})
    set_compiler_warnings(${PROJECT_NAME})

    target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

    if(MSVC AND BUILD_SHARED_LIBS)
        set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "/DELAYLOAD:aws-cpp-sdk-s3-crt.dll /DELAYLOAD:aws-cpp-sdk-core.dll")
        target_link_libraries(${PROJECT_NAME} delayimp.lib)
    endif()
endforeach ()
