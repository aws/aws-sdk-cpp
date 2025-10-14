/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>

#include <array>
#include <cstddef>

namespace PerformanceTest {
namespace Services {
namespace Echo {
namespace TestConfig {

/**
 * Test case types for Echo Service performance tests.
 */
enum class TestCaseType { 
  AllTypes, 
  LongListOfStrings, 
  ComplexObject, 
  ListOfComplexObjects, 
  VeryLargeBlob 
};

/**
 * Configuration for Echo Service performance test cases.
 */
struct TestCase {
  TestCaseType testCaseType;
};

/**
 * Get the string label for a given TestCaseType enum.
 * @param testCaseType The TestCaseType enum value
 * @return String label
 */
Aws::String GetTestCaseTypeLabel(TestCaseType testCaseType);

/** Operations tested in Echo Service performance tests. */
extern const std::array<const char*, 1> TestOperations;

/** Array of all test case combinations. */
extern const std::array<TestCase, 5> TestMatrix;

/** Output filename for test results. */
extern const char* OutputFilename;

}  // namespace TestConfig
}  // namespace Echo
}  // namespace Services
}  // namespace PerformanceTest