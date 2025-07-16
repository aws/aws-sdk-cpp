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
namespace DynamoDB {
namespace TestConfig {

/**
 * Payload sizes for DynamoDB performance tests.
 */
enum class PayloadSize { K8, K64, K392 };

/**
 * Configuration for DynamoDB performance test cases.
 */
struct TestCase {
  PayloadSize payloadSize;
};

/**
 * Get the payload size in bytes for a given PayloadSize enum.
 * @param payloadSize The PayloadSize enum value
 * @return Size in bytes
 */
size_t GetPayloadSizeInBytes(PayloadSize payloadSize);

/**
 * Get the string label for a given PayloadSize enum.
 * @param payloadSize The PayloadSize enum value
 * @return String label (e.g., "8KB", "64KB", "392KB")
 */
Aws::String GetPayloadSizeLabel(PayloadSize payloadSize);

/** Operations tested in DynamoDB performance tests. */
extern const std::array<const char*, 2> TestOperations;

/** Array of all test case combinations. */
extern const std::array<TestCase, 3> TestMatrix;

/** Output filename for test results. */
extern const char* OutputFilename;

}  // namespace TestConfig
}  // namespace DynamoDB
}  // namespace Services
}  // namespace PerformanceTest