/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSClient.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/monitoring/CoreMetrics.h>
#include <aws/core/monitoring/MonitoringFactory.h>
#include <aws/core/monitoring/MonitoringInterface.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <mutex>
#include <utility>

/**
 * @brief A data structure to hold the details of a single performance metric.
 */
struct RequestMetric {
  Aws::String name;
  Aws::String description;
  Aws::String unit;
  int64_t date;
  Aws::Vector<double> measurements;
  Aws::Vector<std::pair<Aws::String, Aws::String>> dimensions;
  bool publishToCloudWatch;
};

/**
 * @brief An implementation of the MonitoringInterface that collects performance metrics
 * and reports them in a JSON format.
 */
class JsonReportingMetrics : public Aws::Monitoring::MonitoringInterface {
 public:
  ~JsonReportingMetrics() override;

  void* OnRequestStarted(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&) const override;
  void OnRequestSucceeded(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&,
                          const Aws::Client::HttpResponseOutcome&, const Aws::Monitoring::CoreMetricsCollection&, void*) const override;
  void OnRequestFailed(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&,
                       const Aws::Client::HttpResponseOutcome&, const Aws::Monitoring::CoreMetricsCollection&, void*) const override;
  void OnRequestRetry(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&, void*) const override;
  void OnFinish(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&, void*) const override;

  /**
   * @brief Sets the test-wide context to be added as dimensions to subsequently collected metrics.
   * This serves as a communication channel between the main test runner and the monitoring instance.
   * @param size A string label for the object size being tested (e.g., "64KB").
   * @param bucketType A string label for the bucket type being tested (e.g., "s3-standard").
   */
  static void SetTestContext(const Aws::String& size, const Aws::String& bucketType);

 private:
  void AddMetric(const Aws::String& serviceName, const Aws::String& requestName,
                 const Aws::Monitoring::CoreMetricsCollection& metricsFromCore) const;
  void DumpJson() const;

  mutable std::mutex m_mutex;
  mutable Aws::Vector<RequestMetric> m_metrics;

  static Aws::String m_testSize;
  static Aws::String m_testBucketType;
};

/**
 * @brief A factory for creating instances of JsonReportingMetrics.
 */
class JsonReportingMetricsFactory : public Aws::Monitoring::MonitoringFactory {
 public:
  ~JsonReportingMetricsFactory() override;
  Aws::UniquePtr<Aws::Monitoring::MonitoringInterface> CreateMonitoringInstance() const override;
};