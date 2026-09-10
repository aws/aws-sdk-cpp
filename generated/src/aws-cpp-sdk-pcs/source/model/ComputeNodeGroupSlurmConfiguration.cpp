/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/model/ComputeNodeGroupSlurmConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {

ComputeNodeGroupSlurmConfiguration::ComputeNodeGroupSlurmConfiguration(JsonView jsonValue) { *this = jsonValue; }

ComputeNodeGroupSlurmConfiguration& ComputeNodeGroupSlurmConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scaleDownIdleTimeInSeconds")) {
    m_scaleDownIdleTimeInSeconds = jsonValue.GetInteger("scaleDownIdleTimeInSeconds");
    m_scaleDownIdleTimeInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("slurmCustomSettings")) {
    Aws::Utils::Array<JsonView> slurmCustomSettingsJsonList = jsonValue.GetArray("slurmCustomSettings");
    for (unsigned slurmCustomSettingsIndex = 0; slurmCustomSettingsIndex < slurmCustomSettingsJsonList.GetLength();
         ++slurmCustomSettingsIndex) {
      m_slurmCustomSettings.push_back(slurmCustomSettingsJsonList[slurmCustomSettingsIndex].AsObject());
    }
    m_slurmCustomSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gresCustomSettings")) {
    Aws::Utils::Array<JsonView> gresCustomSettingsJsonList = jsonValue.GetArray("gresCustomSettings");
    for (unsigned gresCustomSettingsIndex = 0; gresCustomSettingsIndex < gresCustomSettingsJsonList.GetLength();
         ++gresCustomSettingsIndex) {
      Aws::Map<Aws::String, JsonView> gresCustomSettingMap2JsonMap = gresCustomSettingsJsonList[gresCustomSettingsIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> gresCustomSettingMap2Map;
      for (auto& gresCustomSettingMap2Item : gresCustomSettingMap2JsonMap) {
        gresCustomSettingMap2Map[gresCustomSettingMap2Item.first] = gresCustomSettingMap2Item.second.AsString();
      }
      m_gresCustomSettings.push_back(std::move(gresCustomSettingMap2Map));
    }
    m_gresCustomSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeNodeGroupSlurmConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_scaleDownIdleTimeInSecondsHasBeenSet) {
    payload.WithInteger("scaleDownIdleTimeInSeconds", m_scaleDownIdleTimeInSeconds);
  }

  if (m_slurmCustomSettingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> slurmCustomSettingsJsonList(m_slurmCustomSettings.size());
    for (unsigned slurmCustomSettingsIndex = 0; slurmCustomSettingsIndex < slurmCustomSettingsJsonList.GetLength();
         ++slurmCustomSettingsIndex) {
      slurmCustomSettingsJsonList[slurmCustomSettingsIndex].AsObject(m_slurmCustomSettings[slurmCustomSettingsIndex].Jsonize());
    }
    payload.WithArray("slurmCustomSettings", std::move(slurmCustomSettingsJsonList));
  }

  if (m_gresCustomSettingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> gresCustomSettingsJsonList(m_gresCustomSettings.size());
    for (unsigned gresCustomSettingsIndex = 0; gresCustomSettingsIndex < gresCustomSettingsJsonList.GetLength();
         ++gresCustomSettingsIndex) {
      JsonValue gresCustomSettingMapJsonMap;
      for (auto& gresCustomSettingMapItem : m_gresCustomSettings[gresCustomSettingsIndex]) {
        gresCustomSettingMapJsonMap.WithString(gresCustomSettingMapItem.first, gresCustomSettingMapItem.second);
      }
      gresCustomSettingsJsonList[gresCustomSettingsIndex].AsObject(std::move(gresCustomSettingMapJsonMap));
    }
    payload.WithArray("gresCustomSettings", std::move(gresCustomSettingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
