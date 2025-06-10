/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include "JsonReportingMetrics.h"

#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <fstream>
#include <iostream>

Aws::String JsonReportingMetrics::m_testSize = "";
Aws::String JsonReportingMetrics::m_testBucketType = "";

void JsonReportingMetrics::SetTestContext(const Aws::String& size, const Aws::String& bucketType) {
  m_testSize = size;
  m_testBucketType = bucketType;
}

JsonReportingMetrics::~JsonReportingMetrics() { DumpJson(); }

JsonReportingMetricsFactory::~JsonReportingMetricsFactory() {}

Aws::UniquePtr<Aws::Monitoring::MonitoringInterface> JsonReportingMetricsFactory::CreateMonitoringInstance() const {
  return Aws::MakeUnique<JsonReportingMetrics>("JsonReportingMetrics");
}

void JsonReportingMetrics::AddMetric(const Aws::String& serviceName, const Aws::String& requestName,
                                     const Aws::Monitoring::CoreMetricsCollection& metricsFromCore) const {
  if (requestName != "PutObject" && requestName != "GetObject") {
    return;  
  }

  std::lock_guard<std::mutex> lock(m_mutex);

  double durationMs = 0.0;
  Aws::String latencyKey = Aws::Monitoring::GetHttpClientMetricNameByType(Aws::Monitoring::HttpClientMetricsType::RequestLatency);

  auto it = metricsFromCore.httpClientMetrics.find(latencyKey);
  if (it != metricsFromCore.httpClientMetrics.end()) {
    durationMs = static_cast<double>(it->second);
  }

  RequestMetric metric;
  metric.name =
      Aws::Utils::StringUtils::ToLower(serviceName.c_str()) + "." + Aws::Utils::StringUtils::ToLower(requestName.c_str()) + ".latency";
  metric.description = "Time to complete " + requestName + " operation";
  metric.unit = "Milliseconds";
  metric.date = Aws::Utils::DateTime::CurrentTimeMillis() / 1000;
  metric.measurements.push_back(durationMs);

  if (!m_testSize.empty()) {
    metric.dimensions.push_back(std::make_pair("Size", m_testSize));
  }
  if (!m_testBucketType.empty()) {
    metric.dimensions.push_back(std::make_pair("BucketType", m_testBucketType));
  }

  metric.publishToCloudWatch = true;
  m_metrics.push_back(metric);
}

void* JsonReportingMetrics::OnRequestStarted(const Aws::String&, const Aws::String&,
                                             const std::shared_ptr<const Aws::Http::HttpRequest>&) const {
  return nullptr;
}

void JsonReportingMetrics::OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName,
                                              const std::shared_ptr<const Aws::Http::HttpRequest>&, const Aws::Client::HttpResponseOutcome&,
                                              const Aws::Monitoring::CoreMetricsCollection& metricsFromCore, void*) const {
  AddMetric(serviceName, requestName, metricsFromCore);
}

void JsonReportingMetrics::OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName,
                                           const std::shared_ptr<const Aws::Http::HttpRequest>&, const Aws::Client::HttpResponseOutcome&,
                                           const Aws::Monitoring::CoreMetricsCollection& metricsFromCore, void*) const {
  AddMetric(serviceName, requestName, metricsFromCore);
}

void JsonReportingMetrics::OnRequestRetry(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&,
                                          void*) const {}

void JsonReportingMetrics::OnFinish(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&,
                                    void*) const {}


void JsonReportingMetrics::DumpJson() const {
  std::lock_guard<std::mutex> lock(m_mutex);

  if (m_metrics.empty()) {
    return;
  }

  Aws::Utils::Json::JsonValue root;
  root.WithString("productId", "AWS SDK for C++");
  root.WithString("sdkVersion", "1.0.0");
  root.WithString("commitId", "unknown");

  Aws::Utils::Array<Aws::Utils::Json::JsonValue> results(m_metrics.size());
  for (size_t i = 0; i < m_metrics.size(); ++i) {
    Aws::Utils::Json::JsonValue metric;
    metric.WithString("name", m_metrics[i].name);
    metric.WithString("description", m_metrics[i].description);
    metric.WithString("unit", m_metrics[i].unit);
    metric.WithInt64("date", m_metrics[i].date);

    if (!m_metrics[i].dimensions.empty()) {
      Aws::Utils::Array<Aws::Utils::Json::JsonValue> dimensionsArray(m_metrics[i].dimensions.size());
      for (size_t j = 0; j < m_metrics[i].dimensions.size(); ++j) {
        Aws::Utils::Json::JsonValue dimension;
        dimension.WithString("name", m_metrics[i].dimensions[j].first);
        dimension.WithString("value", m_metrics[i].dimensions[j].second);
        dimensionsArray[j] = std::move(dimension);
      }
      metric.WithArray("dimensions", std::move(dimensionsArray));
    }

    Aws::Utils::Array<Aws::Utils::Json::JsonValue> measurementsArray(m_metrics[i].measurements.size());
    for (size_t j = 0; j < m_metrics[i].measurements.size(); ++j) {
      Aws::Utils::Json::JsonValue measurementValue;
      measurementValue.AsDouble(m_metrics[i].measurements[j]);
      measurementsArray[j] = std::move(measurementValue);
    }
    metric.WithArray("measurements", std::move(measurementsArray));

    results[i] = std::move(metric);
  }
  root.WithArray("results", std::move(results));

  std::cout << root.View().WriteReadable() << std::endl;

  std::ofstream outFile("perf-results.json");
  if (outFile.is_open()) {
    outFile << root.View().WriteReadable();
  }
}