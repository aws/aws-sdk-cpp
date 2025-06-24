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
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <cstdint>
#include <memory>
#include <utility>

namespace PerformanceTest {
namespace Reporting {
/**
 * Container for a single performance metric record that stores measurement data and associated metadata.
 */
struct PerformanceMetricRecord {
  Aws::String name;
  Aws::String description;
  Aws::String unit;
  int64_t date;
  Aws::Vector<int64_t> measurements;
  Aws::Vector<std::pair<Aws::String, Aws::String>> dimensions;
};

/**
 * An implementation of the MonitoringInterface that collects performance metrics
 * and reports them in a JSON format.
 */
class JsonReportingMetrics : public Aws::Monitoring::MonitoringInterface {
 public:
  ~JsonReportingMetrics() override;

  /**
   * Called when an AWS request is started. Returns context for tracking.
   * @param serviceName Name of the AWS service
   * @param requestName Name of the operation
   * @param request HTTP request object
   * @return Context pointer (always returns nullptr)
   */
  void* OnRequestStarted(const Aws::String& serviceName, const Aws::String& requestName,
                         const std::shared_ptr<const Aws::Http::HttpRequest>& request) const override;

  /**
   * Called when an AWS request succeeds. Records performance metrics.
   * @param serviceName Name of the AWS service
   * @param requestName Name of the operation
   * @param request HTTP request object
   * @param outcome HTTP response outcome
   * @param metrics Core metrics collection containing latency data
   * @param context Request context (unused)
   */
  void OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName,
                          const std::shared_ptr<const Aws::Http::HttpRequest>& request, const Aws::Client::HttpResponseOutcome& outcome,
                          const Aws::Monitoring::CoreMetricsCollection& metrics, void* context) const override;

  /**
   * Called when an AWS request fails. Records performance metrics.
   * @param serviceName Name of the AWS service
   * @param requestName Name of the operation
   * @param request HTTP request object
   * @param outcome HTTP response outcome
   * @param metrics Core metrics collection containing latency data
   * @param context Request context (unused)
   */
  void OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName,
                       const std::shared_ptr<const Aws::Http::HttpRequest>& request, const Aws::Client::HttpResponseOutcome& outcome,
                       const Aws::Monitoring::CoreMetricsCollection& metrics, void* context) const override;

  /**
   * Called when an AWS request is retried. No action taken.
   * @param serviceName Name of the AWS service
   * @param requestName Name of the operation
   * @param request HTTP request object
   * @param context Request context (unused)
   */
  void OnRequestRetry(const Aws::String& serviceName, const Aws::String& requestName,
                      const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override;

  /**
   * Called when an AWS request finishes. No action taken.
   * @param serviceName Name of the AWS service
   * @param requestName Name of the operation
   * @param request HTTP request object
   * @param context Request context (unused)
   */
  void OnFinish(const Aws::String& serviceName, const Aws::String& requestName,
                const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override;

  /**
   * Sets test dimensions that will be included with all performance records.
   * @param dimensions Vector of key-value pairs representing test dimensions (e.g., size, bucket type)
   */
  static void SetTestContext(const Aws::Vector<std::pair<Aws::String, Aws::String>>& dimensions);

  /**
   * Registers specific operations to monitor. If empty, all operations are monitored.
   * @param operations Vector of operation names to track (e.g., "PutObject", "GetItem")
   */
  static void RegisterOperationsToMonitor(const Aws::Vector<Aws::String>& operations);

  /**
   * Sets product information to include in the JSON output.
   * @param productId Product identifier (e.g., "cpp1")
   * @param sdkVersion SDK version string
   * @param commitId Git commit identifier
   */
  static void SetProductInfo(const Aws::String& productId, const Aws::String& sdkVersion, const Aws::String& commitId);

  /**
   * Sets the output filename for the JSON performance report.
   * @param filename Path to output file (e.g., "s3-perf-results.json")
   */
  static void SetOutputFilename(const Aws::String& filename);

 private:
  /**
   * Adds a performance record for a completed AWS service operation.
   * @param serviceName Name of the AWS service (e.g., "S3", "DynamoDB")
   * @param requestName Name of the operation (e.g., "PutObject", "GetItem")
   * @param metricsFromCore Core metrics collection containing latency data
   */
  void AddPerformanceRecord(const Aws::String& serviceName, const Aws::String& requestName,
                            const Aws::Monitoring::CoreMetricsCollection& metricsFromCore) const;

  /**
   * Outputs aggregated performance metrics to JSON file.
   * Groups records by name and dimensions, then writes to configured output file.
   */
  void DumpJson() const;

  mutable Aws::Vector<PerformanceMetricRecord> m_performanceRecords;
  static Aws::Vector<std::pair<Aws::String, Aws::String>> TestDimensions;
  static Aws::Set<Aws::String> MonitoredOperations;
  static Aws::String ProductId;
  static Aws::String SdkVersion;
  static Aws::String CommitId;
  static Aws::String OutputFilename;
};

/**
 * A factory for creating instances of JsonReportingMetrics.
 * Used by the AWS SDK monitoring system to instantiate performance metrics collectors.
 */
class JsonReportingMetricsFactory : public Aws::Monitoring::MonitoringFactory {
 public:
  ~JsonReportingMetricsFactory() override = default;
  /**
   * Creates a new JsonReportingMetrics instance for performance monitoring.
   * @return Unique pointer to monitoring interface implementation
   */
  Aws::UniquePtr<Aws::Monitoring::MonitoringInterface> CreateMonitoringInstance() const override;
};
}  // namespace Reporting
}  // namespace PerformanceTest