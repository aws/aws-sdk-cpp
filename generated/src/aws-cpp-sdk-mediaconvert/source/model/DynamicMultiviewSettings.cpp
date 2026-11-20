/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/DynamicMultiviewSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

DynamicMultiviewSettings::DynamicMultiviewSettings(JsonView jsonValue) { *this = jsonValue; }

DynamicMultiviewSettings& DynamicMultiviewSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enabled")) {
    m_enabled = DynamicMultiviewSettingsEnabledMapper::GetDynamicMultiviewSettingsEnabledForName(jsonValue.GetString("enabled"));
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regions")) {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      m_regions.push_back(regionsJsonList[regionsIndex].AsObject());
    }
    m_regionsHasBeenSet = true;
  }
  return *this;
}

JsonValue DynamicMultiviewSettings::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithString("enabled", DynamicMultiviewSettingsEnabledMapper::GetNameForDynamicMultiviewSettingsEnabled(m_enabled));
  }

  if (m_regionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
    for (unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex) {
      regionsJsonList[regionsIndex].AsObject(m_regions[regionsIndex].Jsonize());
    }
    payload.WithArray("regions", std::move(regionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
