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
#include <fstream>
#include <memory>
#include <utility>

using namespace PerformanceTest::Reporting;

Aws::Vector<std::pair<Aws::String, Aws::String>> JsonReportingMetrics::m_testDimensions;
Aws::Set<Aws::String> JsonReportingMetrics::m_monitoredOperations;
Aws::String JsonReportingMetrics::m_productId = "unknown";
Aws::String JsonReportingMetrics::m_sdkVersion = "unknown";
Aws::String JsonReportingMetrics::m_commitId = "unknown";
Aws::String JsonReportingMetrics::m_outputFilename = "perf-results.json";

void JsonReportingMetrics::SetTestContext(const Aws::Vector<std::pair<Aws::String, Aws::String>>& dimensions) {
  m_testDimensions = dimensions;
}

void JsonReportingMetrics::RegisterOperationsToMonitor(const Aws::Vector<Aws::String>& operations) {
  m_monitoredOperations.clear();
  for (const auto& operation : operations) {
    m_monitoredOperations.insert(operation);
  }
}

void JsonReportingMetrics::SetProductInfo(const Aws::String& productId, const Aws::String& sdkVersion, const Aws::String& commitId) {
  m_productId = productId;
  m_sdkVersion = sdkVersion;
  m_commitId = commitId;
}

void JsonReportingMetrics::SetOutputFilename(const Aws::String& filename) { m_outputFilename = filename; }

JsonReportingMetrics::~JsonReportingMetrics() { DumpJson(); }

JsonReportingMetricsFactory::~JsonReportingMetricsFactory() = default;

auto JsonReportingMetricsFactory::CreateMonitoringInstance() const -> Aws::UniquePtr<Aws::Monitoring::MonitoringInterface> {
  return Aws::MakeUnique<JsonReportingMetrics>("JsonReportingMetrics");
}

void JsonReportingMetrics::AddPerformanceRecord(const Aws::String& serviceName, const Aws::String& requestName,
                                                const Aws::Monitoring::CoreMetricsCollection& metricsFromCore) const {
  // If no operations are registered, monitor all operations
  // Otherwise, only monitor registered operations
  if (!m_monitoredOperations.empty() && m_monitoredOperations.find(requestName) == m_monitoredOperations.end()) {
    return;
  }

  double durationMs = 0.0;
  Aws::String const latencyKey = Aws::Monitoring::GetHttpClientMetricNameByType(Aws::Monitoring::HttpClientMetricsType::RequestLatency);

  auto iterator = metricsFromCore.httpClientMetrics.find(latencyKey);
  if (iterator != metricsFromCore.httpClientMetrics.end()) {
    durationMs = static_cast<double>(iterator->second);
  }

  PerformanceMetricRecord record;
  record.name =
      Aws::Utils::StringUtils::ToLower(serviceName.c_str()) + "." + Aws::Utils::StringUtils::ToLower(requestName.c_str()) + ".latency";
  record.description = "Time to complete " + requestName + " operation";
  record.unit = "Milliseconds";
  record.date = Aws::Utils::DateTime::CurrentTimeMillis() / 1000;
  record.measurements.push_back(durationMs);
  record.dimensions = m_testDimensions;

  m_performanceRecords.push_back(record);
}

void* JsonReportingMetrics::OnRequestStarted(const Aws::String&, const Aws::String&,
                                             const std::shared_ptr<const Aws::Http::HttpRequest>&) const {
  return nullptr;
}

void JsonReportingMetrics::OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName,
                                              const std::shared_ptr<const Aws::Http::HttpRequest>&, const Aws::Client::HttpResponseOutcome&,
                                              const Aws::Monitoring::CoreMetricsCollection& metricsFromCore, void*) const {
  AddPerformanceRecord(serviceName, requestName, metricsFromCore);
}

void JsonReportingMetrics::OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName,
                                           const std::shared_ptr<const Aws::Http::HttpRequest>&, const Aws::Client::HttpResponseOutcome&,
                                           const Aws::Monitoring::CoreMetricsCollection& metricsFromCore, void*) const {
  AddPerformanceRecord(serviceName, requestName, metricsFromCore);
}

void JsonReportingMetrics::OnRequestRetry(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&,
                                          void*) const {}

void JsonReportingMetrics::OnFinish(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&,
                                    void*) const {}

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
    jsonMetric.WithInt64("date", record.date);

    if (!record.dimensions.empty()) {
      Aws::Utils::Array<Aws::Utils::Json::JsonValue> dimensionsArray(record.dimensions.size());
      for (size_t j = 0; j < record.dimensions.size(); ++j) {
        Aws::Utils::Json::JsonValue dimension;
        dimension.WithString("name", record.dimensions[j].first);
        dimension.WithString("value", record.dimensions[j].second);
        dimensionsArray[j] = std::move(dimension);
      }
      jsonMetric.WithArray("dimensions", std::move(dimensionsArray));
    }

    Aws::Utils::Array<Aws::Utils::Json::JsonValue> measurementsArray(record.measurements.size());
    for (size_t j = 0; j < record.measurements.size(); ++j) {
      Aws::Utils::Json::JsonValue measurementValue;
      measurementValue.AsDouble(record.measurements[j]);
      measurementsArray[j] = std::move(measurementValue);
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