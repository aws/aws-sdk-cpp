/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/ClientSideBeaconingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

ClientSideBeaconingConfiguration::ClientSideBeaconingConfiguration(JsonView jsonValue) { *this = jsonValue; }

ClientSideBeaconingConfiguration& ClientSideBeaconingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ReportingMode")) {
    m_reportingMode = ClientSideBeaconingModeMapper::GetClientSideBeaconingModeForName(jsonValue.GetString("ReportingMode"));
    m_reportingModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AdditionalEventTypes")) {
    Aws::Utils::Array<JsonView> additionalEventTypesJsonList = jsonValue.GetArray("AdditionalEventTypes");
    for (unsigned additionalEventTypesIndex = 0; additionalEventTypesIndex < additionalEventTypesJsonList.GetLength();
         ++additionalEventTypesIndex) {
      m_additionalEventTypes.push_back(
          BeaconEventTypeMapper::GetBeaconEventTypeForName(additionalEventTypesJsonList[additionalEventTypesIndex].AsString()));
    }
    m_additionalEventTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientSideBeaconingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_reportingModeHasBeenSet) {
    payload.WithString("ReportingMode", ClientSideBeaconingModeMapper::GetNameForClientSideBeaconingMode(m_reportingMode));
  }

  if (m_additionalEventTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> additionalEventTypesJsonList(m_additionalEventTypes.size());
    for (unsigned additionalEventTypesIndex = 0; additionalEventTypesIndex < additionalEventTypesJsonList.GetLength();
         ++additionalEventTypesIndex) {
      additionalEventTypesJsonList[additionalEventTypesIndex].AsString(
          BeaconEventTypeMapper::GetNameForBeaconEventType(m_additionalEventTypes[additionalEventTypesIndex]));
    }
    payload.WithArray("AdditionalEventTypes", std::move(additionalEventTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
