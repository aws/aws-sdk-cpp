/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/CloudWatchClient.h>
#include <aws/monitoring/model/GetMetricDataRequest.h>
#include <aws/monitoring/model/ListMetricsRequest.h>
#include <aws/monitoring/model/Dimension.h>
#include <aws/monitoring/model/Metric.h>
#include <aws/monitoring/model/MetricDataQuery.h>
#include <aws/monitoring/model/MetricDatum.h>
//#include <aws/monitoring/model/MetricStat.h>
#include <aws/monitoring/model/PutMetricDataRequest.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/monitoring/model/Statistic.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/UUID.h>
#include <performance-tests/services/cloudwatch/CloudWatchPerformanceTest.h>

#include <chrono>
#include <random>
#include <thread>

namespace PerformanceTest {
namespace Services {
namespace CloudWatch {

CloudWatchPerformanceTest::CloudWatchPerformanceTest(const Aws::Client::ClientConfiguration& clientConfig,
                                                     const TestConfig::TestCase& testConfig, int iterations)
    : m_cloudWatch(Aws::MakeUnique<Aws::CloudWatch::CloudWatchClient>("CloudWatchPerformanceTest", clientConfig)),
      m_testConfig(testConfig),
      m_iterations(iterations),
      m_suiteId(Aws::Utils::UUID::RandomUUID()),
      m_baseTime(std::chrono::duration_cast<std::chrono::milliseconds>(
                     std::chrono::system_clock::now().time_since_epoch() - std::chrono::hours(2))
                     .count()) {}

Aws::Utils::Outcome<Aws::NoResult, Aws::String> CloudWatchPerformanceTest::Setup() {
  return Aws::Utils::Outcome<Aws::NoResult, Aws::String>(Aws::NoResult());
}

void CloudWatchPerformanceTest::Run() {
  RunPutMetricDataTests();
  RunGetMetricDataTests();
  RunListMetricsTests();
}

void CloudWatchPerformanceTest::TearDown() {
  // No cleanup needed for CloudWatch metrics
}

void CloudWatchPerformanceTest::RunPutMetricDataTests() {
  const size_t metricCount = TestConfig::GetMetricCountValue(m_testConfig.metricCount);
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<> dis(0.0, 1.0);

  for (int i = 0; i < m_iterations; ++i) {
    Aws::CloudWatch::Model::PutMetricDataRequest request;
    request.SetNamespace("TestNamespace");

    Aws::Vector<Aws::CloudWatch::Model::MetricDatum> metricData;
    for (size_t j = 0; j < metricCount; ++j) {
      Aws::CloudWatch::Model::MetricDatum datum;
      datum.SetMetricName("TestMetric");
      datum.SetValue(dis(gen));
      datum.SetUnit(Aws::CloudWatch::Model::StandardUnit::None);

      Aws::CloudWatch::Model::Dimension dimension;
      dimension.SetName("TestDimension");
      dimension.SetValue(m_suiteId + "-" + std::to_string(metricCount));
      datum.AddDimensions(dimension);

      int64_t toAdd = 2000 * (j + 1);
      datum.SetTimestamp(Aws::Utils::DateTime(m_baseTime + toAdd));

      metricData.push_back(datum);
    }
    request.SetAdditionalCustomHeaderValue("test-dimension-size", std::to_string(metricCount));
    request.SetAdditionalCustomHeaderValue("test-case-type", "Put metric data");
    auto headers = request.GetHeaders();
    if (headers.find(Aws::Http::SMITHY_PROTOCOL_HEADER) != headers.end()) {
      request.SetAdditionalCustomHeaderValue("test-protocol-protocol", "CBOR");
    }

    request.SetMetricData(metricData);

    auto resp = m_cloudWatch->PutMetricData(request);
    if (!resp.IsSuccess()) {
      std::cout << "PutMetric failed: " << resp.GetError() << std::endl;
      exit(1);
    }

    if ((i % 50) == 0) {
      std::this_thread::sleep_for(std::chrono::seconds(2));
    }
  }
}

void CloudWatchPerformanceTest::RunGetMetricDataTests() {
  const size_t metricCount = TestConfig::GetMetricCountValue(m_testConfig.metricCount);

  for (int i = 0; i < m_iterations; ++i) {
    Aws::CloudWatch::Model::GetMetricDataRequest request;
    request.SetStartTime(Aws::Utils::DateTime(m_baseTime));
    request.SetEndTime(Aws::Utils::DateTime(m_baseTime + 3600000));  // +60 mins

    Aws::CloudWatch::Model::MetricDataQuery query;
    query.SetId("m0");
    query.SetReturnData(true);

    Aws::CloudWatch::Model::MetricStat metricStat;
    metricStat.SetUnit(Aws::CloudWatch::Model::StandardUnit::None);
    metricStat.SetStat(Aws::CloudWatch::Model::StatisticMapper::GetNameForStatistic(Aws::CloudWatch::Model::Statistic::Sum));
    metricStat.SetPeriod(60);

    Aws::CloudWatch::Model::Metric metric;
    metric.SetNamespace("TestNamespace");
    metric.SetMetricName("TestMetric");

    Aws::CloudWatch::Model::Dimension dimension;
    dimension.SetName("TestDimension");
    dimension.SetValue(m_suiteId + "-" + std::to_string(metricCount));
    metric.AddDimensions(dimension);

    request.SetAdditionalCustomHeaderValue("test-dimension-size", std::to_string(metricCount));
    request.SetAdditionalCustomHeaderValue("test-case-type", "Get metric data");
    auto headers = request.GetHeaders();
    if (headers.find(Aws::Http::SMITHY_PROTOCOL_HEADER) != headers.end()) {
      request.SetAdditionalCustomHeaderValue("test-protocol-protocol", "CBOR");
    }

    metricStat.SetMetric(metric);
    query.SetMetricStat(metricStat);

    request.AddMetricDataQueries(query);

    auto resp = m_cloudWatch->GetMetricData(request);
    if (!resp.IsSuccess()) {
      std::cout << "GetMetric failed: " << resp.GetError() << std::endl;
      exit(1);
    }

    if ((i % 50) == 0) {
      std::this_thread::sleep_for(std::chrono::seconds(2));
    }
  }
}

void CloudWatchPerformanceTest::RunListMetricsTests() {
  for (int i = 0; i < m_iterations; ++i) {
    Aws::CloudWatch::Model::ListMetricsRequest request;
    request.SetNamespace("TestNamespace");
    request.SetAdditionalCustomHeaderValue("test-dimension-size", TestConfig::GetMetricCountLabel(m_testConfig.metricCount));
    request.SetAdditionalCustomHeaderValue("test-case-type", "List metrics");
    auto headers = request.GetHeaders();
    if (headers.find(Aws::Http::SMITHY_PROTOCOL_HEADER) != headers.end()) {
      request.SetAdditionalCustomHeaderValue("test-protocol-protocol", "CBOR");
    }
    auto resp = m_cloudWatch->ListMetrics(request);
    if (!resp.IsSuccess()) {
      std::cout << "ListMetric failed: " << resp.GetError() << std::endl;
      exit(1);
    }

    if ((i % 50) == 0) {
      std::this_thread::sleep_for(std::chrono::seconds(2));
    }
  }
}

}  // namespace CloudWatch
}  // namespace Services
}  // namespace PerformanceTest