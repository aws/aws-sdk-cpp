/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3Client.h>
#include <performance-tests/PerformanceTestBase.h>

#include <cstddef>

namespace PerformanceTest {
namespace Services {
namespace S3 {
/**
 * Configuration for S3 performance test cases.
 */
struct TestCase {
  const char* sizeLabel;
  size_t sizeBytes;
  const char* bucketTypeLabel;
};

/**
 * S3 performance test implementation.
 * Tests PutObject and GetObject operations with different payload sizes and bucket types.
 */
class S3PerformanceTest : public PerformanceTestBase {
 public:
  S3PerformanceTest(const Aws::String& region, const TestCase& config, const Aws::String& availabilityZoneId, int iterations = 3);

  void Setup() override;
  void TearDown() override;
  void Run() override;

 private:
  const TestCase& m_config;
  const Aws::String m_region;
  const Aws::String m_availabilityZoneId;
  const int m_iterations;
  Aws::UniquePtr<Aws::S3::S3Client> m_s3;
  Aws::String m_bucketName;
};

}  // namespace S3
}  // namespace Services
}  // namespace PerformanceTest