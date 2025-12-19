/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/VisualCustomizationFieldsConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

VisualCustomizationFieldsConfiguration::VisualCustomizationFieldsConfiguration(JsonView jsonValue) { *this = jsonValue; }

VisualCustomizationFieldsConfiguration& VisualCustomizationFieldsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = DashboardCustomizationStatusMapper::GetDashboardCustomizationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AdditionalFields")) {
    Aws::Utils::Array<JsonView> additionalFieldsJsonList = jsonValue.GetArray("AdditionalFields");
    for (unsigned additionalFieldsIndex = 0; additionalFieldsIndex < additionalFieldsJsonList.GetLength(); ++additionalFieldsIndex) {
      m_additionalFields.push_back(additionalFieldsJsonList[additionalFieldsIndex].AsObject());
    }
    m_additionalFieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue VisualCustomizationFieldsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", DashboardCustomizationStatusMapper::GetNameForDashboardCustomizationStatus(m_status));
  }

  if (m_additionalFieldsHasBeenSet) {
    Aws::Utils::Array<JsonValue> additionalFieldsJsonList(m_additionalFields.size());
    for (unsigned additionalFieldsIndex = 0; additionalFieldsIndex < additionalFieldsJsonList.GetLength(); ++additionalFieldsIndex) {
      additionalFieldsJsonList[additionalFieldsIndex].AsObject(m_additionalFields[additionalFieldsIndex].Jsonize());
    }
    payload.WithArray("AdditionalFields", std::move(additionalFieldsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
