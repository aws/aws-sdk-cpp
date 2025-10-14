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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <cstdint>
#include <memory>

namespace PerformanceTest {
namespace Reporting {

/**
 * Individual test record for the simplified JSON format.
 */
struct TestRecord {
  Aws::String service;
  Aws::String test_case;
  Aws::String protocol;
  int64_t dimension_value;
  Aws::String metric;
  double p50;
  double p90;
  double max;
};

/**
 * Context for tracking individual requests.
 */
struct RequestContext;

/**
 * An implementation of the MonitoringInterface that collects performance metrics
 * and reports them in a simplified JSON format with individual test records.
 */
class JsonReportingMetric : public Aws::Monitoring::MonitoringInterface {
 public:
  /**
   * Constructor that initializes the metrics collector.
   * @param monitoredOperations Set of operations to monitor (empty means monitor all)
   * @param outputFilename Path to output file
   */
  JsonReportingMetric(const Aws::Set<Aws::String>& monitoredOperations = Aws::Set<Aws::String>(),
                      const Aws::String& outputFilename = "performance-test-results.json");

  ~JsonReportingMetric() override;

  void* OnRequestStarted(const Aws::String& serviceName, const Aws::String& requestName,
                         const std::shared_ptr<const Aws::Http::HttpRequest>& request) const override;

  void OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName,
                          const std::shared_ptr<const Aws::Http::HttpRequest>& request, const Aws::Client::HttpResponseOutcome& outcome,
                          const Aws::Monitoring::CoreMetricsCollection& metrics, void* context) const override;

  void OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName,
                       const std::shared_ptr<const Aws::Http::HttpRequest>& request, const Aws::Client::HttpResponseOutcome& outcome,
                       const Aws::Monitoring::CoreMetricsCollection& metrics, void* context) const override;

  void OnRequestRetry(const Aws::String& serviceName, const Aws::String& requestName,
                      const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override;

  void OnFinish(const Aws::String& serviceName, const Aws::String& requestName,
                const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override;

  void OnSerializeStarted(const Aws::String& serviceName, const Aws::String& requestName,
                const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override;

  void OnDeserializeStarted(const Aws::String& serviceName, const Aws::String& requestName,
                const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override;

  void OnSerialized(const Aws::String& serviceName, const Aws::String& requestName,
              const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override;

  void OnDeserialized(const Aws::String& serviceName, const Aws::String& requestName,
                const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override;

 private:
  void StorePayloadSizeContext(const Aws::String& serviceName, const Aws::String& requestName,
                               const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const;
  void StoreResponsePayloadSizeContext(const Aws::String& serviceName, const Aws::String& requestName,
                                       const std::shared_ptr<const Aws::Http::HttpResponse>& response, void* context) const;
  void StoreLatencyInContext(const Aws::String& serviceName, const Aws::String& requestName,
                             const std::shared_ptr<const Aws::Http::HttpRequest>& request,
                             const Aws::Monitoring::CoreMetricsCollection& metricsFromCore, void* context) const;

  void AddMeasurement(const Aws::String& serviceName, const Aws::String& requestName,
                      const std::shared_ptr<const Aws::Http::HttpRequest>& request, double durationMs) const;
  void AddSizeMeasurement(const Aws::String& serviceName, const Aws::String& requestName,
                          const std::shared_ptr<const Aws::Http::HttpRequest>& request, double payloadSize) const;
  void AddResponseSizeMeasurement(const Aws::String& serviceName, const Aws::String& requestName,
                                  const std::shared_ptr<const Aws::Http::HttpRequest>& request, double payloadSize) const;
  void AddSerializationMeasurement(const Aws::String& serviceName, const Aws::String& requestName,
                                    const std::shared_ptr<const Aws::Http::HttpRequest>& request, double duration) const;
  void AddDeserializationMeasurement(const Aws::String& serviceName, const Aws::String& requestName,
                                      const std::shared_ptr<const Aws::Http::HttpRequest>& request, double duration) const;

  void DumpJson() const;

  mutable Aws::Map<Aws::String, Aws::Vector<double>> m_measurements;
  mutable Aws::Map<Aws::String, Aws::Vector<double>> m_sizeMeasurements;
  mutable Aws::Map<Aws::String, Aws::Vector<double>> m_responseSizeMeasurements;
  mutable Aws::Map<Aws::String, Aws::Vector<double>> m_serializationMeasurements;
  mutable Aws::Map<Aws::String, Aws::Vector<double>> m_deserializationMeasurements;
  mutable Aws::UnorderedMap<Aws::String, Aws::UniquePtr<RequestContext>> m_requestContexts;
  Aws::Set<Aws::String> m_monitoredOperations;
  Aws::String m_outputFilename;
};

/**
 * Factory for creating JsonReportingMetric instances.
 */
class JsonReportingMetricFactory : public Aws::Monitoring::MonitoringFactory {
 public:
  JsonReportingMetricFactory(const Aws::Set<Aws::String>& monitoredOperations = Aws::Set<Aws::String>(),
                             const Aws::String& outputFilename = "performance-test-results.json");

  ~JsonReportingMetricFactory() override = default;

  Aws::UniquePtr<Aws::Monitoring::MonitoringInterface> CreateMonitoringInstance() const override;

 private:
  Aws::Set<Aws::String> m_monitoredOperations;
  Aws::String m_outputFilename;
};

}  // namespace Reporting
}  // namespace PerformanceTest