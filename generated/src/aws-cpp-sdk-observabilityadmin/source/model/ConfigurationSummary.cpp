/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/ConfigurationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

ConfigurationSummary::ConfigurationSummary(JsonView jsonValue) { *this = jsonValue; }

ConfigurationSummary& ConfigurationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Sources")) {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("Sources");
    for (unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex) {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataSources")) {
    Aws::Utils::Array<JsonView> dataSourcesJsonList = jsonValue.GetArray("DataSources");
    for (unsigned dataSourcesIndex = 0; dataSourcesIndex < dataSourcesJsonList.GetLength(); ++dataSourcesIndex) {
      m_dataSources.push_back(dataSourcesJsonList[dataSourcesIndex].AsObject());
    }
    m_dataSourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Processors")) {
    Aws::Utils::Array<JsonView> processorsJsonList = jsonValue.GetArray("Processors");
    for (unsigned processorsIndex = 0; processorsIndex < processorsJsonList.GetLength(); ++processorsIndex) {
      m_processors.push_back(processorsJsonList[processorsIndex].AsString());
    }
    m_processorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProcessorCount")) {
    m_processorCount = jsonValue.GetInteger("ProcessorCount");
    m_processorCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Sinks")) {
    Aws::Utils::Array<JsonView> sinksJsonList = jsonValue.GetArray("Sinks");
    for (unsigned sinksIndex = 0; sinksIndex < sinksJsonList.GetLength(); ++sinksIndex) {
      m_sinks.push_back(sinksJsonList[sinksIndex].AsString());
    }
    m_sinksHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationSummary::Jsonize() const {
  JsonValue payload;

  if (m_sourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
    for (unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex) {
      sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
    }
    payload.WithArray("Sources", std::move(sourcesJsonList));
  }

  if (m_dataSourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> dataSourcesJsonList(m_dataSources.size());
    for (unsigned dataSourcesIndex = 0; dataSourcesIndex < dataSourcesJsonList.GetLength(); ++dataSourcesIndex) {
      dataSourcesJsonList[dataSourcesIndex].AsObject(m_dataSources[dataSourcesIndex].Jsonize());
    }
    payload.WithArray("DataSources", std::move(dataSourcesJsonList));
  }

  if (m_processorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> processorsJsonList(m_processors.size());
    for (unsigned processorsIndex = 0; processorsIndex < processorsJsonList.GetLength(); ++processorsIndex) {
      processorsJsonList[processorsIndex].AsString(m_processors[processorsIndex]);
    }
    payload.WithArray("Processors", std::move(processorsJsonList));
  }

  if (m_processorCountHasBeenSet) {
    payload.WithInteger("ProcessorCount", m_processorCount);
  }

  if (m_sinksHasBeenSet) {
    Aws::Utils::Array<JsonValue> sinksJsonList(m_sinks.size());
    for (unsigned sinksIndex = 0; sinksIndex < sinksJsonList.GetLength(); ++sinksIndex) {
      sinksJsonList[sinksIndex].AsString(m_sinks[sinksIndex]);
    }
    payload.WithArray("Sinks", std::move(sinksJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
