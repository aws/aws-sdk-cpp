/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/TelemetryPipelineSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

TelemetryPipelineSummary::TelemetryPipelineSummary(JsonView jsonValue) { *this = jsonValue; }

TelemetryPipelineSummary& TelemetryPipelineSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CreatedTimeStamp")) {
    m_createdTimeStamp = jsonValue.GetInt64("CreatedTimeStamp");
    m_createdTimeStampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdateTimeStamp")) {
    m_lastUpdateTimeStamp = jsonValue.GetInt64("LastUpdateTimeStamp");
    m_lastUpdateTimeStampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = TelemetryPipelineStatusMapper::GetTelemetryPipelineStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConfigurationSummary")) {
    m_configurationSummary = jsonValue.GetObject("ConfigurationSummary");
    m_configurationSummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue TelemetryPipelineSummary::Jsonize() const {
  JsonValue payload;

  if (m_createdTimeStampHasBeenSet) {
    payload.WithInt64("CreatedTimeStamp", m_createdTimeStamp);
  }

  if (m_lastUpdateTimeStampHasBeenSet) {
    payload.WithInt64("LastUpdateTimeStamp", m_lastUpdateTimeStamp);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", TelemetryPipelineStatusMapper::GetNameForTelemetryPipelineStatus(m_status));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  if (m_configurationSummaryHasBeenSet) {
    payload.WithObject("ConfigurationSummary", m_configurationSummary.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
