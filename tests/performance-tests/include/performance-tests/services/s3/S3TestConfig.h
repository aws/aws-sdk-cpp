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
namespace S3 {
namespace TestConfig {

/**
 * Payload sizes for S3 performance tests.
 */
enum class PayloadSize { K8, K64, M1 };

/**
 * Bucket types for S3 performance tests.
 */
enum class BucketType { Standard, Express };

/**
 * Configuration for S3 performance test cases.
 */
struct TestCase {
  PayloadSize payloadSize;
  BucketType bucketType;
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
 * @return String label (e.g., "8KB", "64KB", "1MB")
 */
Aws::String GetPayloadSizeLabel(PayloadSize payloadSize);

/**
 * Get the string label for a given BucketType enum.
 * @param bucketType The BucketType enum value
 * @return String label (e.g., "s3-standard", "s3-express")
 */
Aws::String GetBucketTypeLabel(BucketType bucketType);

/** Operations tested in S3 performance tests. */
extern const std::array<const char*, 2> TestOperations;

/** Array of all test case combinations. */
extern const std::array<TestCase, 6> TestMatrix;

/** Output filename for test results. */
extern const char* OutputFilename;

}  // namespace TestConfig
}  // namespace S3
}  // namespace Services
}  // namespace PerformanceTest