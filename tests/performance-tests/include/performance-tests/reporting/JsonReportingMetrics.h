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
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <cstdint>
#include <memory>
#include <variant>

namespace PerformanceTest {
namespace Reporting {

/**
 * Container for a single performance metric record that stores measurement data and associated metadata.
 */
struct PerformanceMetricRecord {
  Aws::String name;
  Aws::String description;
  Aws::String unit;
  Aws::Utils::DateTime date;
  Aws::Vector<std::variant<int64_t, double>> measurements;
  Aws::Map<Aws::String, Aws::String> dimensions;
};

/**
 * Context will be shared between monitor invocations.
 */
struct RequestContext;

/**
 * An implementation of the MonitoringInterface that collects performance metrics
 * and reports them in a JSON format.
 */
class JsonReportingMetrics : public Aws::Monitoring::MonitoringInterface {
 public:
  /**
   * Constructor that initializes the metrics collector with configuration parameters.
   * @param monitoredOperations Set of operations to monitor (empty means monitor all)
   * @param productId Product identifier (e.g., "cpp1")
   * @param sdkVersion SDK version string
   * @param commitId Git commit identifier
   * @param outputFilename Path to output file (e.g., "s3-perf-results.json")
   * @param buildMode Build mode (e.g., "debug" or "release")
   */
  JsonReportingMetrics(const Aws::Set<Aws::String>& monitoredOperations = Aws::Set<Aws::String>(), const Aws::String& productId = "unknown",
                       const Aws::String& sdkVersion = "unknown", const Aws::String& commitId = "unknown",
                       const Aws::String& outputFilename = "performance-test-results.json", const Aws::String& buildMode = "unknown");

  ~JsonReportingMetrics() override;

  /**
   * Called when an AWS request is started. Creates and returns context for tracking.
   * @param serviceName Name of the AWS service
   * @param requestName Name of the operation
   * @param request HTTP request object
   * @return Context pointer to newly created RequestContext
   */
  void* OnRequestStarted(const Aws::String& serviceName, const Aws::String& requestName,
                         const std::shared_ptr<const Aws::Http::HttpRequest>& request) const override;

  /**
   * Called when an AWS request succeeds. Stores latency metrics in context.
   * @param serviceName Name of the AWS service
   * @param requestName Name of the operation
   * @param request HTTP request object
   * @param outcome HTTP response outcome
   * @param metrics Core metrics collection containing latency data
   * @param context Request context
   */
  void OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName,
                          const std::shared_ptr<const Aws::Http::HttpRequest>& request, const Aws::Client::HttpResponseOutcome& outcome,
                          const Aws::Monitoring::CoreMetricsCollection& metrics, void* context) const override;

  /**
   * Called when an AWS request fails. Stores latency metrics in context.
   * @param serviceName Name of the AWS service
   * @param requestName Name of the operation
   * @param request HTTP request object
   * @param outcome HTTP response outcome
   * @param metrics Core metrics collection containing latency data
   * @param context Request context
   */
  void OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName,
                       const std::shared_ptr<const Aws::Http::HttpRequest>& request, const Aws::Client::HttpResponseOutcome& outcome,
                       const Aws::Monitoring::CoreMetricsCollection& metrics, void* context) const override;

  /**
   * Called when an AWS request is retried. No action taken.
   * @param serviceName Name of the AWS service
   * @param requestName Name of the operation
   * @param request HTTP request object
   * @param context Request context
   */
  void OnRequestRetry(const Aws::String& serviceName, const Aws::String& requestName,
                      const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override;

  /**
   * Called when an AWS request finishes. Processes stored metrics and cleans up context.
   * @param serviceName Name of the AWS service
   * @param requestName Name of the operation
   * @param request HTTP request object
   * @param context Request context
   */
  void OnFinish(const Aws::String& serviceName, const Aws::String& requestName,
                const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override;

 private:
  /**
   * Helper method to process request metrics and store in context.
   * @param serviceName Name of the AWS service
   * @param requestName Name of the operation
   * @param request HTTP request object
   * @param metricsFromCore Core metrics collection containing latency data
   * @param context Request context
   */
  void StoreLatencyInContext(const Aws::String& serviceName, const Aws::String& requestName,
                             const std::shared_ptr<const Aws::Http::HttpRequest>& request,
                             const Aws::Monitoring::CoreMetricsCollection& metricsFromCore, void* context) const;

  /**
   * Adds a performance record with a specified duration.
   * @param serviceName Name of the AWS service
   * @param requestName Name of the operation
   * @param request HTTP request object
   * @param durationMs Duration of the request in milliseconds
   */
  void AddPerformanceRecord(const Aws::String& serviceName, const Aws::String& requestName,
                            const std::shared_ptr<const Aws::Http::HttpRequest>& request,
                            const std::variant<int64_t, double>& durationMs) const;

  /**
   * Outputs aggregated performance metrics to JSON file.
   * Groups records by name and dimensions, then writes to configured output file.
   */
  void DumpJson() const;

  /**
   * Writes JSON to the output file.
   * @param root The JSON root object to write
   */
  void WriteJsonToFile(const Aws::Utils::Json::JsonValue& root) const;

  mutable Aws::Vector<PerformanceMetricRecord> m_performanceRecords;
  mutable Aws::UnorderedMap<Aws::String, Aws::UniquePtr<RequestContext>> m_requestContexts;
  Aws::Set<Aws::String> m_monitoredOperations;
  Aws::String m_productId;
  Aws::String m_sdkVersion;
  Aws::String m_commitId;
  Aws::String m_outputFilename;
  Aws::String m_buildMode;
};

/**
 * A factory for creating instances of JsonReportingMetrics.
 * Used by the AWS SDK monitoring system to instantiate performance metrics collectors.
 */
class JsonReportingMetricsFactory : public Aws::Monitoring::MonitoringFactory {
 public:
  /**
   * Constructor that initializes the factory with configuration parameters.
   * @param monitoredOperations Set of operations to monitor (empty means monitor all)
   * @param productId Product identifier (e.g., "cpp1")
   * @param sdkVersion SDK version string
   * @param commitId Git commit identifier
   * @param outputFilename Path to output file (e.g., "s3-perf-results.json")
   * @param buildMode Build mode (e.g., "debug" or "release")
   */
  JsonReportingMetricsFactory(const Aws::Set<Aws::String>& monitoredOperations = Aws::Set<Aws::String>(),
                              const Aws::String& productId = "unknown", const Aws::String& sdkVersion = "unknown",
                              const Aws::String& commitId = "unknown", const Aws::String& outputFilename = "performance-test-results.json",
                              const Aws::String& buildMode = "unknown");

  ~JsonReportingMetricsFactory() override = default;

  /**
   * Creates a new JsonReportingMetrics instance for performance monitoring.
   * @return Unique pointer to monitoring interface implementation
   */
  Aws::UniquePtr<Aws::Monitoring::MonitoringInterface> CreateMonitoringInstance() const override;

 private:
  Aws::Set<Aws::String> m_monitoredOperations;
  Aws::String m_productId;
  Aws::String m_sdkVersion;
  Aws::String m_commitId;
  Aws::String m_outputFilename;
  Aws::String m_buildMode;
};
}  // namespace Reporting
}  // namespace PerformanceTest