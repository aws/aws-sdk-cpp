/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/NoResult.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3Client.h>
#include <performance-tests/PerformanceTestBase.h>
#include <performance-tests/services/s3/S3TestConfig.h>

namespace PerformanceTest {
namespace Services {
namespace S3 {

/**
 * S3 performance test implementation.
 * Tests PutObject and GetObject operations with different payload sizes and bucket types.
 */
class S3PerformanceTest : public PerformanceTestBase {
 public:
  S3PerformanceTest(const Aws::Client::ClientConfiguration& clientConfig, const TestConfig::TestCase& testConfig, int iterations = 10,
                    const Aws::String& availabilityZoneId = "");

  Aws::Utils::Outcome<Aws::NoResult, Aws::String> Setup() override;
  void Run() override;
  void TearDown() override;

 private:
  const Aws::UniquePtr<Aws::S3::S3Client> m_s3;
  const TestConfig::TestCase m_testConfig;
  const int m_iterations;
  const Aws::String m_bucketName;
  const Aws::String m_availabilityZoneId;
};

}  // namespace S3
}  // namespace Services
}  // namespace PerformanceTest