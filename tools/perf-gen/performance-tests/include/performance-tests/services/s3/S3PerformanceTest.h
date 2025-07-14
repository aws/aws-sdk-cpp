/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Outcome.h>
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
 */
class S3PerformanceTest : public PerformanceTestBase {
 public:
  S3PerformanceTest(const Aws::String& region, const TestCase& config, const Aws::String& az_id, int iterations = 10);

  Aws::Utils::Outcome<bool, PerformanceTest::SetupError> Setup() override;
  void TearDown() override;
  void Run() override;

 private:
  const TestCase m_config;
  const Aws::String m_region;
  const Aws::String m_az_id;
  const int m_iterations;
  Aws::UniquePtr<Aws::S3::S3Client> m_s3;
  Aws::String m_bucketName;
};

}  // namespace S3
}  // namespace Services
}  // namespace PerformanceTest