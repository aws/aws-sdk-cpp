/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3Client.h>

#include <cstddef>

namespace PerformanceTest {
namespace Services {
namespace S3 {
/**
 * Configuration for S3 performance test cases.
 */
struct TestCase {
  Aws::String sizeLabel;
  size_t sizeBytes;
  Aws::String bucketTypeLabel;
};

/**
 * Runs S3 performance test by creating a bucket, performing PutObject and GetObject operations,
 * then cleaning up resources.
 * @param s3 S3 client instance to use for operations
 * @param config Test configuration containing size and bucket type parameters
 * @param availabilityZoneId Availability zone ID for S3 Express buckets
 * @param iterations Number of put/get operations to perform
 * @return true if test completed successfully, false on error
 */
bool RunTest(Aws::S3::S3Client& s3, const TestCase& config, const Aws::String& availabilityZoneId, int iterations = 3);
}  // namespace S3
}  // namespace Services
}  // namespace PerformanceTest