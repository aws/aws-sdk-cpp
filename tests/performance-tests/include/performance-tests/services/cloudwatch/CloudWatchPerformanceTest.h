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
#include <performance-tests/PerformanceTestBase.h>
#include <performance-tests/services/cloudwatch/CloudWatchTestConfig.h>
#include <aws/monitoring/CloudWatchClient.h>

namespace PerformanceTest {
namespace Services {
namespace CloudWatch {

/**
 * CloudWatch performance test implementation.
 * Tests PutMetricData, GetMetricData, and ListMetrics operations with different metric counts.
 */
class CloudWatchPerformanceTest : public PerformanceTestBase {
 public:
  CloudWatchPerformanceTest(const Aws::Client::ClientConfiguration& clientConfig, 
                           const TestConfig::TestCase& testConfig,
                           int iterations = 500);

  Aws::Utils::Outcome<Aws::NoResult, Aws::String> Setup() override;
  void Run() override;
  void TearDown() override;

 private:
  void RunPutMetricDataTests();
  void RunGetMetricDataTests();
  void RunListMetricsTests();

  const Aws::UniquePtr<Aws::CloudWatch::CloudWatchClient> m_cloudWatch;
  const TestConfig::TestCase m_testConfig;
  const int m_iterations;
  const Aws::String m_suiteId;
  const int64_t m_baseTime;
};

}  // namespace CloudWatch
}  // namespace Services
}  // namespace PerformanceTest