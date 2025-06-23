/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/http/HttpRequest.h>
#include <aws/core/monitoring/CoreMetrics.h>
#include <aws/core/monitoring/MonitoringFactory.h>
#include <aws/core/monitoring/MonitoringInterface.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <cstdint>
#include <utility>

namespace PerformanceTest {
namespace Reporting {
/**
 * @brief Container for a single performance metric record that stores measurement data and associated metadata.
 */
struct PerformanceMetricRecord {
  Aws::String name;
  Aws::String description;
  Aws::String unit;
  int64_t date;
  Aws::Vector<double> measurements;
  Aws::Vector<std::pair<Aws::String, Aws::String>> dimensions;

};

/**
 * @brief An implementation of the MonitoringInterface that collects performance metrics
 * and reports them in a JSON format.
 */
class JsonReportingMetrics : public Aws::Monitoring::MonitoringInterface {
 public:
  ~JsonReportingMetrics() override;

  void* OnRequestStarted(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request) const override;
  void OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
                          const Aws::Client::HttpResponseOutcome& outcome, const Aws::Monitoring::CoreMetricsCollection& metrics, void* context) const override;
  void OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
                       const Aws::Client::HttpResponseOutcome& outcome, const Aws::Monitoring::CoreMetricsCollection& metrics, void* context) const override;
  void OnRequestRetry(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override;
  void OnFinish(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override;

  static void SetTestContext(const Aws::Vector<std::pair<Aws::String, Aws::String>>& dimensions);

  static void RegisterOperationsToMonitor(const Aws::Vector<Aws::String>& operations);

  static void SetProductInfo(const Aws::String& productId, const Aws::String& sdkVersion, const Aws::String& commitId);

  static void SetOutputFilename(const Aws::String& filename);

 private:
  void AddPerformanceRecord(const Aws::String& serviceName, const Aws::String& requestName,
                            const Aws::Monitoring::CoreMetricsCollection& metricsFromCore) const;
  void DumpJson() const;

  mutable Aws::Vector<PerformanceMetricRecord> m_performanceRecords;

  static Aws::Vector<std::pair<Aws::String, Aws::String>> m_testDimensions;
  static Aws::Set<Aws::String> m_monitoredOperations;
  static Aws::String m_productId;
  static Aws::String m_sdkVersion;
  static Aws::String m_commitId;
  static Aws::String m_outputFilename;
};

/**
 * @brief A factory for creating instances of JsonReportingMetrics.
 */
class JsonReportingMetricsFactory : public Aws::Monitoring::MonitoringFactory {
 public:
  ~JsonReportingMetricsFactory() override;
  auto CreateMonitoringInstance() const -> Aws::UniquePtr<Aws::Monitoring::MonitoringInterface> override;
};
}  // namespace Reporting
}  // namespace PerformanceTest