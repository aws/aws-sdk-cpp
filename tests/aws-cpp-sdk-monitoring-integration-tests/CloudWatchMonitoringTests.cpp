/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/monitoring/CloudWatchClient.h>
#include <aws/monitoring/model/PutMetricDataRequest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/TestingEnvironment.h>
#include <gtest/gtest.h>

#include <chrono>
#include <thread>

using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::CloudWatch;
using namespace Aws::CloudWatch::Model;
using namespace Aws::Region;

namespace {
static const char ALLOCATION_TAG[] = "CloudWatchMonitoringTest";

class CloudWatchMonitoringOperationTest : public ::testing::Test {
protected:
  Aws::UniquePtr<Aws::CloudWatch::CloudWatchClient> m_client;
  Aws::String m_UUID;

  Aws::String BuildResourceName(const char *baseName) {
    return Aws::Testing::GetAwsResourcePrefix() + baseName + m_UUID;
  }

  void SetUp() {
    m_UUID = Aws::Utils::UUID::RandomUUID();
    ClientConfiguration config;
    config.scheme = Scheme::HTTPS;
    config.region = AWS_TEST_REGION;
    m_client = Aws::MakeUnique<Aws::CloudWatch::CloudWatchClient>(
        ALLOCATION_TAG, config);
  }

  void TearDown() {}
};

TEST_F(CloudWatchMonitoringOperationTest, PutSmallMetricDataTest) {
  // Preparing small custom metric data to be pushed
  Aws::CloudWatch::Model::Dimension dimension;
  dimension.SetName("IntegrationTest");
  dimension.SetValue(m_UUID);
  Aws::CloudWatch::Model::MetricDatum datum;
  datum.SetMetricName("TestMetric1");
  datum.SetUnit(Aws::CloudWatch::Model::StandardUnit::Count);
  datum.SetValue(1);
  datum.AddDimensions(dimension);
  // Preparing request
  Aws::CloudWatch::Model::PutMetricDataRequest request;
  request.SetNamespace("TestingMetrics");
  request.AddMetricData(datum);
  // Submit request
  Aws::CloudWatch::Model::PutMetricDataOutcome outcome =
      m_client->PutMetricData(request);
  AWS_ASSERT_SUCCESS(outcome);
}

TEST_F(CloudWatchMonitoringOperationTest, PutLargeMetricDataTest) {
  // Preparing large custom metric data to be pushed
  Aws::CloudWatch::Model::Dimension dimension;
  dimension.SetName("IntegrationTest");
  dimension.SetValue(m_UUID);
  Aws::CloudWatch::Model::MetricDatum datum;
  datum.SetMetricName("TestMetric1");
  datum.SetUnit(Aws::CloudWatch::Model::StandardUnit::Count);
  datum.SetValue(1);
  datum.AddDimensions(dimension);
  // Preparing request
  Aws::CloudWatch::Model::PutMetricDataRequest request;
  request.SetNamespace("TestingMetrics");
  // Adding the datum 200 times, each about a 100bytes to inflate the request
  // size above request compression threshold if enabled
  for (int i = 0; i < 200; i++) {
    request.AddMetricData(datum);
  }
  // Submit request
  Aws::CloudWatch::Model::PutMetricDataOutcome outcome =
      m_client->PutMetricData(request);
  AWS_ASSERT_SUCCESS(outcome);
}
} // namespace
