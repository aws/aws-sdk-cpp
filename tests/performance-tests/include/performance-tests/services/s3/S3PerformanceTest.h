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
 * @param config Test configuration containing object size and bucket type parameters
 * @param availabilityZoneId Availability zone ID for S3 Express buckets
 * @param iterations Number of put/get operations to perform
 */
void RunTest(Aws::S3::S3Client& s3, const TestCase& config, const Aws::String& availabilityZoneId, int iterations = 3);

/**
 * Create S3 bucket for testing.
 * @param s3 S3 client instance
 * @param config Test configuration
 * @param availabilityZoneId Availability zone ID for S3 Express buckets
 * @return Bucket name if successful, empty string if failed
 */
Aws::String SetupBucket(Aws::S3::S3Client& s3, const TestCase& config, const Aws::String& availabilityZoneId);

/**
 * Run PutObject and GetObject operations.
 * @param s3 S3 client instance
 * @param bucketName Name of the bucket to use
 * @param config Test configuration
 * @param iterations Number of operations to perform
 */
void RunOperations(Aws::S3::S3Client& s3, const Aws::String& bucketName, const TestCase& config, int iterations);

/**
 * Clean up S3 resources (objects and bucket).
 * @param s3 S3 client instance
 * @param bucketName Name of the bucket to clean up
 * @param iterations Number of objects to delete
 */
void CleanupResources(Aws::S3::S3Client& s3, const Aws::String& bucketName, int iterations);
}  // namespace S3
}  // namespace Services
}  // namespace PerformanceTest