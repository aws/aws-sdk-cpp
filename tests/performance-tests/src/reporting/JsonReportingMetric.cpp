/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/monitoring/CoreMetrics.h>
#include <aws/core/monitoring/HttpClientMetrics.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <performance-tests/reporting/JsonReportingMetric.h>

#include <algorithm>
#include <fstream>
#include <memory>

using namespace PerformanceTest::Reporting;

struct PerformanceTest::Reporting::RequestContext {
  Aws::Utils::UUID requestId{Aws::Utils::UUID::RandomUUID()};
  Aws::String serviceName;
  Aws::String requestName;
  std::shared_ptr<const Aws::Http::HttpRequest> request;
  std::shared_ptr<const Aws::Http::HttpResponse> response;
  double payloadSize = 0.0;
  double responsePayloadSize = 0.0;
  bool failed = false;
  std::chrono::system_clock::time_point requestStartMs{};
  std::chrono::system_clock::time_point requestEndMs{};
  std::chrono::system_clock::time_point serializationStartMs{};
  std::chrono::system_clock::time_point serializationEndMs{};
  std::chrono::system_clock::time_point deserializationStartMs{};
  std::chrono::system_clock::time_point deserializationEndMs{};
};

JsonReportingMetric::JsonReportingMetric(const Aws::Set<Aws::String>& monitoredOperations, const Aws::String& outputFilename)
    : m_monitoredOperations(monitoredOperations), m_outputFilename(outputFilename) {}

JsonReportingMetric::~JsonReportingMetric() { DumpJson(); }

JsonReportingMetricFactory::JsonReportingMetricFactory(const Aws::Set<Aws::String>& monitoredOperations,
                                                       const Aws::String& outputFilename)
    : m_monitoredOperations(monitoredOperations), m_outputFilename(outputFilename) {}

Aws::UniquePtr<Aws::Monitoring::MonitoringInterface> JsonReportingMetricFactory::CreateMonitoringInstance() const {
  return Aws::MakeUnique<JsonReportingMetric>("JsonReportingMetric", m_monitoredOperations, m_outputFilename);
}

void JsonReportingMetric::StorePayloadSizeContext(const Aws::String& serviceName, const Aws::String& requestName,
                                                const std::shared_ptr<const Aws::Http::HttpRequest>& request,
                                                void* context) const {
  RequestContext* requestContext = static_cast<RequestContext*>(context);

  auto headers = request->GetHeaders();
  auto iterator = headers.find("content-length");
  if (iterator != headers.end()) {
    requestContext->serviceName = serviceName;
    requestContext->requestName = requestName;
    requestContext->request = request;
    requestContext->payloadSize = std::stoi(iterator->second);
  } else {
    requestContext->failed = true;
  }
}

void JsonReportingMetric::StoreResponsePayloadSizeContext(const Aws::String& serviceName, const Aws::String& requestName,
                                                const std::shared_ptr<const Aws::Http::HttpResponse>& response,
                                                void* context) const {
  RequestContext* requestContext = static_cast<RequestContext*>(context);

  auto headers = response->GetHeaders();
  auto iterator = headers.find("content-length");
  if (iterator != headers.end()) {
    requestContext->serviceName = serviceName;
    requestContext->requestName = requestName;
    requestContext->response = response;
    requestContext->responsePayloadSize = std::stoi(iterator->second);
  } else {
    requestContext->failed = true;
  }
}

void JsonReportingMetric::StoreLatencyInContext(const Aws::String& serviceName, const Aws::String& requestName,
                                                 const std::shared_ptr<const Aws::Http::HttpRequest>& request,
                                                 const Aws::Monitoring::CoreMetricsCollection& metricsFromCore, void* context) const {
  RequestContext* requestContext = static_cast<RequestContext*>(context);

  Aws::String const latencyKey = Aws::Monitoring::GetHttpClientMetricNameByType(Aws::Monitoring::HttpClientMetricsType::RequestLatency);
  auto iterator = metricsFromCore.httpClientMetrics.find(latencyKey);
  if (iterator != metricsFromCore.httpClientMetrics.end() && iterator->second > 0) {
    requestContext->serviceName = serviceName;
    requestContext->requestName = requestName;
    requestContext->request = request;
    //requestContext->durationMs = iterator->second;
  } else {
    requestContext->failed = true;
  }
}

void JsonReportingMetric::AddMeasurement(const Aws::String& serviceName, const Aws::String& requestName,
                                         const std::shared_ptr<const Aws::Http::HttpRequest>& request, double duration) const {
  if (!m_monitoredOperations.empty() && m_monitoredOperations.find(requestName) == m_monitoredOperations.end()) {
    return;
  }

  Aws::String key = serviceName + ":" + requestName;
  if (request) {
    auto headers = request->GetHeaders();
    for (const auto& header : headers) {
      if (header.first.find("test-dimension-") == 0) {
        key += ":" + header.first.substr(15) + "=" + header.second;
      }
      if (header.first.find("test-case-") == 0) {
        key += ":" + header.first.substr(10) + "=" + header.second;
      }
      if (header.first.find("test-protocol-") == 0) {
        key += ":" + header.first.substr(14) + "=" + header.second;
      }
    }
  }

  m_measurements[key].push_back(duration/1000);
}

void JsonReportingMetric::AddSizeMeasurement(const Aws::String& serviceName, const Aws::String& requestName,
                                         const std::shared_ptr<const Aws::Http::HttpRequest>& request, double payloadSize) const {
  if (!m_monitoredOperations.empty() && m_monitoredOperations.find(requestName) == m_monitoredOperations.end()) {
    return;
  }

  Aws::String key = serviceName + ":" + requestName;
  if (request) {
    auto headers = request->GetHeaders();
    for (const auto& header : headers) {
      if (header.first.find("test-dimension-") == 0) {
        key += ":" + header.first.substr(15) + "=" + header.second;
      }
      if (header.first.find("test-case-") == 0) {
        key += ":" + header.first.substr(10) + "=" + header.second;
      }
      if (header.first.find("test-protocol-") == 0) {
        key += ":" + header.first.substr(14) + "=" + header.second;
      }
    }
  }

  m_sizeMeasurements[key].push_back(payloadSize);
}

void JsonReportingMetric::AddResponseSizeMeasurement(const Aws::String& serviceName, const Aws::String& requestName,
                                         const std::shared_ptr<const Aws::Http::HttpRequest>& request, double payloadSize) const {
  if (!m_monitoredOperations.empty() && m_monitoredOperations.find(requestName) == m_monitoredOperations.end()) {
    return;
  }

  Aws::String key = serviceName + ":" + requestName;
  if (request) {
    auto headers = request->GetHeaders();
    for (const auto& header : headers) {
      if (header.first.find("test-dimension-") == 0) {
        key += ":" + header.first.substr(15) + "=" + header.second;
      }
      if (header.first.find("test-case-") == 0) {
        key += ":" + header.first.substr(10) + "=" + header.second;
      }
      if (header.first.find("test-protocol-") == 0) {
        key += ":" + header.first.substr(14) + "=" + header.second;
      }
    }
  }

  m_responseSizeMeasurements[key].push_back(payloadSize);
}

void JsonReportingMetric::AddSerializationMeasurement(const Aws::String& serviceName, const Aws::String& requestName,
                                         const std::shared_ptr<const Aws::Http::HttpRequest>& request, double duration) const {
  if (!m_monitoredOperations.empty() && m_monitoredOperations.find(requestName) == m_monitoredOperations.end()) {
    return;
  }

  Aws::String key = serviceName + ":" + requestName;
  if (request) {
    auto headers = request->GetHeaders();
    for (const auto& header : headers) {
      if (header.first.find("test-dimension-") == 0) {
        key += ":" + header.first.substr(15) + "=" + header.second;
      }
      if (header.first.find("test-case-") == 0) {
        key += ":" + header.first.substr(10) + "=" + header.second;
      }
      if (header.first.find("test-protocol-") == 0) {
        key += ":" + header.first.substr(14) + "=" + header.second;
      }
    }
  }

  m_serializationMeasurements[key].push_back(duration/1000);
}

void JsonReportingMetric::AddDeserializationMeasurement(const Aws::String& serviceName, const Aws::String& requestName,
                                         const std::shared_ptr<const Aws::Http::HttpRequest>& request, double duration) const {
  if (!m_monitoredOperations.empty() && m_monitoredOperations.find(requestName) == m_monitoredOperations.end()) {
    return;
  }

  Aws::String key = serviceName + ":" + requestName;
  if (request) {
    auto headers = request->GetHeaders();
    for (const auto& header : headers) {
      if (header.first.find("test-dimension-") == 0) {
        key += ":" + header.first.substr(15) + "=" + header.second;
      }
      if (header.first.find("test-case-") == 0) {
        key += ":" + header.first.substr(10) + "=" + header.second;
      }
      if (header.first.find("test-protocol-") == 0) {
        key += ":" + header.first.substr(14) + "=" + header.second;
      }
    }
  }

  m_deserializationMeasurements[key].push_back(duration/1000);
}

void* JsonReportingMetric::OnRequestStarted(const Aws::String&, const Aws::String&,
                                            const std::shared_ptr<const Aws::Http::HttpRequest>&) const {
  auto context = Aws::MakeUnique<RequestContext>("RequestContext");
  auto requestID = context->requestId;
  m_requestContexts.emplace(requestID, std::move(context));

  RequestContext* requestContext = static_cast<RequestContext*>(m_requestContexts[requestID].get());
  requestContext->requestStartMs = std::chrono::high_resolution_clock::now();

  return m_requestContexts[requestID].get();
}

void JsonReportingMetric::OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName,
                                             const std::shared_ptr<const Aws::Http::HttpRequest>& request,
                                             const Aws::Client::HttpResponseOutcome& outcome,
                                             const Aws::Monitoring::CoreMetricsCollection& metricsFromCore, void* context) const {

  RequestContext* requestContext = static_cast<RequestContext*>(context);
  requestContext->requestEndMs = std::chrono::high_resolution_clock::now();
  StorePayloadSizeContext(serviceName, requestName, request, context);
  StoreResponsePayloadSizeContext(serviceName, requestName, outcome.GetResult(), context);
}

void JsonReportingMetric::OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName,
                                          const std::shared_ptr<const Aws::Http::HttpRequest>& request,
                                          const Aws::Client::HttpResponseOutcome&,
                                          const Aws::Monitoring::CoreMetricsCollection& metricsFromCore, void* context) const {
  RequestContext* requestContext = static_cast<RequestContext*>(context);
  requestContext->requestEndMs = std::chrono::high_resolution_clock::now();
}

void JsonReportingMetric::OnRequestRetry(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&,
                                         void*) const {}

void JsonReportingMetric::OnFinish(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&,
                                   void* context) const {
  RequestContext* requestContext = static_cast<RequestContext*>(context);

  if (!requestContext->failed) {
    AddMeasurement(requestContext->serviceName, requestContext->requestName, requestContext->request, std::chrono::duration_cast<std::chrono::microseconds>(requestContext->requestEndMs - requestContext->requestStartMs).count());
    AddSizeMeasurement(requestContext->serviceName, requestContext->requestName, requestContext->request, requestContext->payloadSize);
    AddResponseSizeMeasurement(requestContext->serviceName, requestContext->requestName, requestContext->request, requestContext->responsePayloadSize);
    AddSerializationMeasurement(requestContext->serviceName, requestContext->requestName, requestContext->request, std::chrono::duration_cast<std::chrono::microseconds>(requestContext->serializationEndMs - requestContext->serializationStartMs).count());
  }

  //m_requestContexts.erase(requestContext->requestId);
}

void JsonReportingMetric::OnSerializeStarted(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&,
                                   void* context) const {
  RequestContext* requestContext = static_cast<RequestContext*>(context);
  requestContext->serializationStartMs = std::chrono::high_resolution_clock::now();
}

void JsonReportingMetric::OnDeserializeStarted(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&,
                                   void* context) const {
  RequestContext* requestContext = static_cast<RequestContext*>(context);
  requestContext->deserializationStartMs = std::chrono::high_resolution_clock::now();
}

void JsonReportingMetric::OnSerialized(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&,
                                   void* context) const {
  RequestContext* requestContext = static_cast<RequestContext*>(context);
  requestContext->serializationEndMs = std::chrono::high_resolution_clock::now();
}

void JsonReportingMetric::OnDeserialized(const Aws::String&, const Aws::String&, const std::shared_ptr<const Aws::Http::HttpRequest>&,
                                   void* context) const {
  RequestContext* requestContext = static_cast<RequestContext*>(context);
  requestContext->deserializationEndMs = std::chrono::high_resolution_clock::now();
  AddDeserializationMeasurement(requestContext->serviceName, requestContext->requestName, requestContext->request, std::chrono::duration_cast<std::chrono::microseconds>(requestContext->deserializationEndMs - requestContext->deserializationStartMs).count());
}

void JsonReportingMetric::DumpJson() const {
  if (m_measurements.empty()) {
    return;
  }

  Aws::Vector<TestRecord> testRecords;

  for (const auto& measurement : m_measurements) {
    const Aws::String& key = measurement.first;
    const Aws::Vector<double>& values = measurement.second;

    // Parse key: service:operation:dimension=value
    Aws::Vector<Aws::String> keyParts = Aws::Utils::StringUtils::Split(key, ':');
    if (keyParts.size() < 2) continue;

    TestRecord record;
    record.service = keyParts[0];
    record.test_case = keyParts[1];
    record.protocol = "JSON";  // Default protocol
    record.dimension_value = 0;    // Default dimension value
    record.metric = "Total request time (ms)";

    // Extract protocol and dimension from remaining parts
    for (size_t i = 2; i < keyParts.size(); ++i) {
      Aws::Vector<Aws::String> dimParts = Aws::Utils::StringUtils::Split(keyParts[i], '=');
      if (dimParts.size() == 2) {
        if (dimParts[0] == "protocol") {
          record.protocol = dimParts[1];
        }
        if (dimParts[0] == "size" || dimParts[0] == "metrics") {
          record.dimension_value = std::stoll(dimParts[1].c_str());
        }
        if (dimParts[0] == "type") {
          record.test_case = dimParts[1];
        }
      }
    }

    // Calculate percentiles
    Aws::Vector<double> sortedValues = values;
    std::sort(sortedValues.begin(), sortedValues.end());

    record.p50 = sortedValues[sortedValues.size() * 50 / 100];
    record.p90 = sortedValues[sortedValues.size() * 90 / 100];
    record.max = sortedValues.back();

    testRecords.push_back(record);
  }

  for (const auto& measurement : m_responseSizeMeasurements) {
    const Aws::String& key = measurement.first;
    const Aws::Vector<double>& values = measurement.second;

    // Parse key: service:operation:dimension=value
    Aws::Vector<Aws::String> keyParts = Aws::Utils::StringUtils::Split(key, ':');
    if (keyParts.size() < 2) continue;

    TestRecord record;
    record.service = keyParts[0];
    record.test_case = keyParts[1];
    record.protocol = "JSON";  // Default protocol
    record.dimension_value = 0;    // Default dimension value
    record.metric = "Response payload size (bytes)";

    // Extract protocol and dimension from remaining parts
    for (size_t i = 2; i < keyParts.size(); ++i) {
      Aws::Vector<Aws::String> dimParts = Aws::Utils::StringUtils::Split(keyParts[i], '=');
      if (dimParts.size() == 2) {
        if (dimParts[0] == "protocol") {
          record.protocol = dimParts[1];
        }
        if (dimParts[0] == "size" || dimParts[0] == "metrics") {
          record.dimension_value = std::stoll(dimParts[1].c_str());
        }
        if (dimParts[0] == "type") {
          record.test_case = dimParts[1];
        }
      }
    }

    // Calculate percentiles
    Aws::Vector<double> sortedValues = values;
    std::sort(sortedValues.begin(), sortedValues.end());

    record.p50 = sortedValues[sortedValues.size() * 50 / 100];
    record.p90 = sortedValues[sortedValues.size() * 90 / 100];
    record.max = sortedValues.back();

    testRecords.push_back(record);
  }

  for (const auto& measurement : m_sizeMeasurements) {
    const Aws::String& key = measurement.first;
    const Aws::Vector<double>& values = measurement.second;

    // Parse key: service:operation:dimension=value
    Aws::Vector<Aws::String> keyParts = Aws::Utils::StringUtils::Split(key, ':');
    if (keyParts.size() < 2) continue;

    TestRecord record;
    record.service = keyParts[0];
    record.test_case = keyParts[1];
    record.protocol = "JSON";  // Default protocol
    record.dimension_value = 0;    // Default dimension value
    record.metric = "Request payload size (bytes)";

    // Extract protocol and dimension from remaining parts
    for (size_t i = 2; i < keyParts.size(); ++i) {
      Aws::Vector<Aws::String> dimParts = Aws::Utils::StringUtils::Split(keyParts[i], '=');
      if (dimParts.size() == 2) {
        if (dimParts[0] == "protocol") {
          record.protocol = dimParts[1];
        }
        if (dimParts[0] == "size" || dimParts[0] == "metrics") {
          record.dimension_value = std::stoll(dimParts[1].c_str());
        }
        if (dimParts[0] == "type") {
          record.test_case = dimParts[1];
        }
      }
    }

    // Calculate percentiles
    Aws::Vector<double> sortedValues = values;
    std::sort(sortedValues.begin(), sortedValues.end());

    record.p50 = sortedValues[sortedValues.size() * 50 / 100];
    record.p90 = sortedValues[sortedValues.size() * 90 / 100];
    record.max = sortedValues.back();

    testRecords.push_back(record);
  }

  for (const auto& measurement : m_deserializationMeasurements) {
    const Aws::String& key = measurement.first;
    const Aws::Vector<double>& values = measurement.second;

    // Parse key: service:operation:dimension=value
    Aws::Vector<Aws::String> keyParts = Aws::Utils::StringUtils::Split(key, ':');
    if (keyParts.size() < 2) continue;

    TestRecord record;
    record.service = keyParts[0];
    record.test_case = keyParts[1];
    record.protocol = "JSON";  // Default protocol
    record.dimension_value = 0;    // Default dimension value
    record.metric = "Deserialization time (ms)";

    // Extract protocol and dimension from remaining parts
    for (size_t i = 2; i < keyParts.size(); ++i) {
      Aws::Vector<Aws::String> dimParts = Aws::Utils::StringUtils::Split(keyParts[i], '=');
      if (dimParts.size() == 2) {
        if (dimParts[0] == "protocol") {
          record.protocol = dimParts[1];
        }
        if (dimParts[0] == "size" || dimParts[0] == "metrics") {
          record.dimension_value = std::stoll(dimParts[1].c_str());
        }
        if (dimParts[0] == "type") {
          record.test_case = dimParts[1];
        }
      }
    }

    // Calculate percentiles
    Aws::Vector<double> sortedValues = values;
    std::sort(sortedValues.begin(), sortedValues.end());

    record.p50 = sortedValues[sortedValues.size() * 50 / 100];
    record.p90 = sortedValues[sortedValues.size() * 90 / 100];
    record.max = sortedValues.back();

    testRecords.push_back(record);
  }

  for (const auto& measurement : m_serializationMeasurements) {
    const Aws::String& key = measurement.first;
    const Aws::Vector<double>& values = measurement.second;

    // Parse key: service:operation:dimension=value
    Aws::Vector<Aws::String> keyParts = Aws::Utils::StringUtils::Split(key, ':');
    if (keyParts.size() < 2) continue;

    TestRecord record;
    record.service = keyParts[0];
    record.test_case = keyParts[1];
    record.protocol = "JSON";  // Default protocol
    record.dimension_value = 0;    // Default dimension value
    record.metric = "Serialization time (ms)";

    // Extract protocol and dimension from remaining parts
    for (size_t i = 2; i < keyParts.size(); ++i) {
      Aws::Vector<Aws::String> dimParts = Aws::Utils::StringUtils::Split(keyParts[i], '=');
      if (dimParts.size() == 2) {
        if (dimParts[0] == "protocol") {
          record.protocol = dimParts[1];
        } if (dimParts[0] == "size" || dimParts[0] == "metrics") {
          record.dimension_value = std::stoll(dimParts[1].c_str());
        }
        if (dimParts[0] == "type") {
          record.test_case = dimParts[1];
        }
      }
    }

    // Calculate percentiles
    Aws::Vector<double> sortedValues = values;
    std::sort(sortedValues.begin(), sortedValues.end());

    record.p50 = sortedValues[sortedValues.size() * 50 / 100];
    record.p90 = sortedValues[sortedValues.size() * 90 / 100];
    record.max = sortedValues.back();

    testRecords.push_back(record);
  }

  std::ofstream outFile(m_outputFilename.c_str());
  if (outFile.is_open()) {
    outFile << "[\n";
    for (size_t i = 0; i < testRecords.size(); ++i) {
      const TestRecord& record = testRecords[i];
      Aws::Utils::Json::JsonValue jsonRecord;
      jsonRecord.WithString("service", record.service);
      jsonRecord.WithString("test_case", record.test_case);
      jsonRecord.WithString("protocol", record.protocol);
      jsonRecord.WithInt64("dimension_value", record.dimension_value);
      jsonRecord.WithString("metric", record.metric);
      jsonRecord.WithDouble("p50", record.p50);
      jsonRecord.WithDouble("p90", record.p90);
      jsonRecord.WithDouble("max", record.max);
      
      outFile << jsonRecord.View().WriteCompact();
      if (i < testRecords.size() - 1) {
        outFile << ",\n";
      } else {
        outFile << "\n";
      }
    }
    outFile << "]\n";
  }
}