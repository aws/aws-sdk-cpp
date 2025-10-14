/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <performance-tests/services/echo/EchoTestConfig.h>

namespace PerformanceTest {
namespace Services {
namespace Echo {
namespace TestConfig {

Aws::String GetTestCaseTypeLabel(TestCaseType testCaseType) {
  switch (testCaseType) {
    case TestCaseType::AllTypes:
      return "AllTypes";
    case TestCaseType::LongListOfStrings:
      return "LongListOfStrings";
    case TestCaseType::ComplexObject:
      return "ComplexObject";
    case TestCaseType::ListOfComplexObjects:
      return "ListOfComplexObjects";
    case TestCaseType::VeryLargeBlob:
      return "VeryLargeBlob";
    default:
      return "AllTypes";
  }
}

const std::array<const char*, 1> TestOperations = {
  "EchoOperation"
};

const std::array<TestCase, 5> TestMatrix = {
  TestCase{TestCaseType::AllTypes},
  TestCase{TestCaseType::LongListOfStrings},
  TestCase{TestCaseType::ComplexObject},
  TestCase{TestCaseType::ListOfComplexObjects},
  TestCase{TestCaseType::VeryLargeBlob}
};

const char* OutputFilename = "echo-performance-test-results.json";

}  // namespace TestConfig
}  // namespace Echo
}  // namespace Services
}  // namespace PerformanceTest