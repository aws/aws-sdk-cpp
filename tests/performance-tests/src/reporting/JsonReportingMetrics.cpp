/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSClient.h>
#include <aws/core/monitoring/CoreMetrics.h>
#include <aws/core/monitoring/HttpClientMetrics.h>
#include <aws/core/monitoring/MonitoringInterface.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <performance_tests/reporting/JsonReportingMetrics.h>

#include <cstddef>
#include <cstdint>
#include <fstream>
#include <memory>
#include <utility>

using namespace PerformanceTest::Reporting;

struct RequestContext {
  Aws::Utils::DateTime requestStartTime;
};

JsonReportingMetrics::JsonReportingMetrics(const Aws::Set<Aws::String>& monitoredOperations, const Aws::String& productId,
                                           const Aws::String& sdkVersion, const Aws::String& commitId, const Aws::String& outputFilename)
    : m_monitoredOperations(monitoredOperations),
      m_productId(productId),
      m_sdkVersion(sdkVersion),
      m_commitId(commitId),
      m_outputFilename(outputFilename) {}

JsonReportingMetricsFactory::JsonReportingMetricsFactory(const Aws::Set<Aws::String>& monitoredOperations, const Aws::String& productId,
                                                         const Aws::String& sdkVersion, const Aws::String& commitId,
                                                         const Aws::String& outputFilename)
    : m_monitoredOperations(monitoredOperations),
      m_productId(productId),
      m_sdkVersion(sdkVersion),
      m_commitId(commitId),
      m_outputFilename(outputFilename) {}

JsonReportingMetrics::~JsonReportingMetrics() { DumpJson(); }

Aws::UniquePtr<Aws::Monitoring::MonitoringInterface> JsonReportingMetricsFactory::CreateMonitoringInstance() const {
  return Aws::MakeUnique<JsonReportingMetrics>("JsonReportingMetrics", m_monitoredOperations, m_productId, m_sdkVersion, m_commitId,
                                               m_outputFilename);
}

void JsonReportingMetrics::AddPerformanceRecord(const Aws::String& serviceName, const Aws::String& requestName,
                                                const Aws::Monitoring::CoreMetricsCollection&,
                                                const std::shared_ptr<const Aws::Http::HttpRequest>& request, int64_t durationMs) const {
  // If no operations are registered, monitor all operations. Otherwise, only monitor registered operations
  if (!m_monitoredOperations.empty() && m_monitoredOperations.find(requestName) == m_monitoredOperations.end()) {
    return;
  }

  PerformanceMetricRecord record;
  record.name =
      Aws::Utils::StringUtils::ToLower(serviceName.c_str()) + "." + Aws::Utils::StringUtils::ToLower(requestName.c_str()) + ".latency";
  record.description = "Time to complete " + requestName + " operation";
  record.unit = "Milliseconds";
  record.date = Aws::Utils::DateTime::Now();
  record.measurements.emplace_back(durationMs);

  if (request) {
    auto headers = request->GetHeaders();
    for (const auto& header : headers) {
      if (header.first.find("test-dimension-") == 0) {
        Aws::String const key = header.first.substr(15);
        record.dimensions[key] = header.second;
      }
    }
  }

  m_performanceRecords.push_back(record);
}

void* JsonReportingMetrics::OnRequestStarted(const Aws::String&, const Aws::String&,
                                             const std::shared_ptr<const Aws::Http::HttpRequest>&) const {
  auto context = Aws::New<RequestContext>("JsonReportingMetrics");
  context->requestStartTime = Aws::Utils::DateTime::Now();
  return context;
}

void JsonReportingMetrics::OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName,
                                              const std::shared_ptr<const Aws::Http::HttpRequest>& request,
                                              const Aws::Client::HttpResponseOutcome&,
                                              const Aws::Monitoring::CoreMetricsCollection& metricsFromCore, void* context) const {
  RequestContext* requestContext = static_cast<RequestContext*>(context);
  int64_t durationMs = (Aws::Utils::DateTime::Now() - requestContext->requestStartTime).count();
  AddPerformanceRecord(serviceName, requestName, metricsFromCore, request, durationMs);
}

void JsonReportingMetrics::OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName,
                                           const std::shared_ptr<const Aws::Http::HttpRequest>& request,
                                           const Aws::Client::HttpResponseOutcome&,
                                           const Aws::Monitoring::CoreMetricsCollection& metricsFromCore, void* context) const {
  RequestContext* requestContext = static_cast<RequestContext*>(context);
  int64_t durationMs = (Aws::Utils::DateTime::Now() - requestContext->requestStartTime).count();
  AddPerformanceRecord(serviceName, requestName, metricsFromCore, request, durationMs);
}

void JsonReportingMetrics::OnRequestRetry(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&,
                                          void*) const {}

void JsonReportingMetrics::OnFinish(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&,
                                    void* context) const {
  RequestContext* requestContext = static_cast<RequestContext*>(context);
  Aws::Delete(requestContext);
}

void JsonReportingMetrics::DumpJson() const {
  if (m_performanceRecords.empty()) {
    return;
  }

  // Group performance records by name and dimensions
  Aws::Map<Aws::String, PerformanceMetricRecord> aggregatedRecords;

  for (const auto& record : m_performanceRecords) {
    Aws::String key = record.name;
    for (const auto& dim : record.dimensions) {
      key += ":" + Aws::String(dim.first) + "=" + Aws::String(dim.second);
    }

    if (aggregatedRecords.find(key) == aggregatedRecords.end()) {
      aggregatedRecords[key] = record;
    } else {
      for (const auto& measurement : record.measurements) {
        aggregatedRecords[key].measurements.push_back(measurement);
      }
    }
  }

  // Create the JSON output
  Aws::Utils::Json::JsonValue root;
  root.WithString("productId", m_productId);
  root.WithString("sdkVersion", m_sdkVersion);
  root.WithString("commitId", m_commitId);

  Aws::Utils::Array<Aws::Utils::Json::JsonValue> results(aggregatedRecords.size());
  size_t index = 0;

  for (const auto& pair : aggregatedRecords) {
    const auto& record = pair.second;
    Aws::Utils::Json::JsonValue jsonMetric;
    jsonMetric.WithString("name", record.name);
    jsonMetric.WithString("description", record.description);
    jsonMetric.WithString("unit", record.unit);
    jsonMetric.WithInt64("date", record.date.Seconds());

    if (!record.dimensions.empty()) {
      Aws::Utils::Array<Aws::Utils::Json::JsonValue> dimensionsArray(record.dimensions.size());
      size_t dimensionIndex = 0;
      for (const auto& dim : record.dimensions) {
        Aws::Utils::Json::JsonValue dimension;
        dimension.WithString("name", dim.first);
        dimension.WithString("value", dim.second);
        dimensionsArray[dimensionIndex++] = std::move(dimension);
      }
      jsonMetric.WithArray("dimensions", std::move(dimensionsArray));
    }

    Aws::Utils::Array<Aws::Utils::Json::JsonValue> measurementsArray(record.measurements.size());
    for (size_t measurementIndex = 0; measurementIndex < record.measurements.size(); ++measurementIndex) {
      Aws::Utils::Json::JsonValue measurementValue;
      if (record.measurements[measurementIndex].IsDouble()) {
        measurementValue.AsDouble(record.measurements[measurementIndex].AsDouble());
      } else {
        measurementValue.AsInt64(record.measurements[measurementIndex].AsInt64());
      }
      measurementsArray[measurementIndex] = std::move(measurementValue);
    }
    jsonMetric.WithArray("measurements", std::move(measurementsArray));

    results[index++] = std::move(jsonMetric);
  }

  root.WithArray("results", std::move(results));

  std::ofstream outFile(m_outputFilename.c_str());
  if (outFile.is_open()) {
    outFile << root.View().WriteReadable();
  }
}