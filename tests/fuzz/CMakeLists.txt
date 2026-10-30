# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
#

file(GLOB SCHEMA_FUZZ_HARNESS_SRC "${CMAKE_CURRENT_SOURCE_DIR}/harness/*.cpp")
file(GLOB SCHEMA_FUZZ_TARGET_SRC "${CMAKE_CURRENT_SOURCE_DIR}/targets/*.cpp")

# The tinyxml2 version core vendors, fetched so the reference parser outlives core's copy.
include(FetchContent)
set(SCHEMA_FUZZ_TINYXML2_GIT_TAG "9148bdf719e997d1f474be6bcc7943881046dba1" CACHE STRING "tinyxml2 11.0.0 commit used by the fuzz tests")
FetchContent_Declare(schema_fuzz_tinyxml2
        GIT_REPOSITORY https://github.com/leethomason/tinyxml2.git
        GIT_TAG ${SCHEMA_FUZZ_TINYXML2_GIT_TAG}
        SOURCE_SUBDIR no-cmake)
FetchContent_MakeAvailable(schema_fuzz_tinyxml2)
add_library(schema-fuzz-tinyxml2 STATIC ${schema_fuzz_tinyxml2_SOURCE_DIR}/tinyxml2.cpp)
target_include_directories(schema-fuzz-tinyxml2 SYSTEM PUBLIC ${schema_fuzz_tinyxml2_SOURCE_DIR})

add_executable(aws-cpp-sdk-schema-fuzz-tests ${SCHEMA_FUZZ_HARNESS_SRC} ${SCHEMA_FUZZ_TARGET_SRC})
set_target_properties(aws-cpp-sdk-schema-fuzz-tests PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON CXX_EXTENSIONS OFF)
# Warnings only: set_compiler_flags would force -fno-exceptions and the SDK's C++ standard, and FuzzTest needs C++17.
set_compiler_warnings(aws-cpp-sdk-schema-fuzz-tests)
target_include_directories(aws-cpp-sdk-schema-fuzz-tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_definitions(aws-cpp-sdk-schema-fuzz-tests PRIVATE
        "SCHEMA_FUZZ_CORPUS_DIR=\"${CMAKE_CURRENT_SOURCE_DIR}/corpus\""
        "SCHEMA_FUZZ_DICTIONARY_DIR=\"${CMAKE_CURRENT_SOURCE_DIR}/dictionaries\""
        "SCHEMA_FUZZ_FINDINGS_DIR=\"${CMAKE_CURRENT_SOURCE_DIR}/findings\"")
target_link_libraries(aws-cpp-sdk-schema-fuzz-tests PRIVATE aws-cpp-sdk-core schema-fuzz-tinyxml2)
link_fuzztest(aws-cpp-sdk-schema-fuzz-tests)

# Fuzzing mode already builds everything with ASan. Sanitizers are otherwise scoped to the serde, not the CRT.
if (FUZZTEST_FUZZING_MODE)
    set(SCHEMA_FUZZ_SANITIZERS undefined)
elseif (SCHEMA_FUZZ_UNIT_SANITIZERS)
    set(SCHEMA_FUZZ_SANITIZERS address,undefined)
endif ()
if (SCHEMA_FUZZ_SANITIZERS)
    target_compile_options(aws-cpp-sdk-core PRIVATE -fsanitize=${SCHEMA_FUZZ_SANITIZERS} -fno-sanitize-recover=undefined -fno-omit-frame-pointer)
    target_compile_options(aws-cpp-sdk-schema-fuzz-tests PRIVATE -fsanitize=${SCHEMA_FUZZ_SANITIZERS} -fno-sanitize-recover=undefined -fno-omit-frame-pointer)
    target_link_options(aws-cpp-sdk-schema-fuzz-tests PRIVATE -fsanitize=${SCHEMA_FUZZ_SANITIZERS})
endif ()

if (AUTORUN_UNIT_TESTS)
    add_custom_command(TARGET aws-cpp-sdk-schema-fuzz-tests POST_BUILD
            COMMAND $<TARGET_FILE:aws-cpp-sdk-schema-fuzz-tests> "--gtest_brief=1")
endif ()
