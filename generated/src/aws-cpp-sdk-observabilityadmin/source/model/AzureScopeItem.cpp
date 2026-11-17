/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureScopeItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureScopeItem::AzureScopeItem(JsonView jsonValue) { *this = jsonValue; }

AzureScopeItem& AzureScopeItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TelemetryTypes")) {
    Aws::Utils::Array<JsonView> telemetryTypesJsonList = jsonValue.GetArray("TelemetryTypes");
    for (unsigned telemetryTypesIndex = 0; telemetryTypesIndex < telemetryTypesJsonList.GetLength(); ++telemetryTypesIndex) {
      m_telemetryTypes.push_back(
          AzureTelemetryTypeMapper::GetAzureTelemetryTypeForName(telemetryTypesJsonList[telemetryTypesIndex].AsString()));
    }
    m_telemetryTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Scope")) {
    m_scope = jsonValue.GetObject("Scope");
    m_scopeHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureScopeItem::Jsonize() const {
  JsonValue payload;

  if (m_telemetryTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> telemetryTypesJsonList(m_telemetryTypes.size());
    for (unsigned telemetryTypesIndex = 0; telemetryTypesIndex < telemetryTypesJsonList.GetLength(); ++telemetryTypesIndex) {
      telemetryTypesJsonList[telemetryTypesIndex].AsString(
          AzureTelemetryTypeMapper::GetNameForAzureTelemetryType(m_telemetryTypes[telemetryTypesIndex]));
    }
    payload.WithArray("TelemetryTypes", std::move(telemetryTypesJsonList));
  }

  if (m_scopeHasBeenSet) {
    payload.WithObject("Scope", m_scope.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
