/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/model/UpdateClusterSlurmConfigurationRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {

UpdateClusterSlurmConfigurationRequest::UpdateClusterSlurmConfigurationRequest(JsonView jsonValue) { *this = jsonValue; }

UpdateClusterSlurmConfigurationRequest& UpdateClusterSlurmConfigurationRequest::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("slurmdbdCustomSettings")) {
    Aws::Utils::Array<JsonView> slurmdbdCustomSettingsJsonList = jsonValue.GetArray("slurmdbdCustomSettings");
    for (unsigned slurmdbdCustomSettingsIndex = 0; slurmdbdCustomSettingsIndex < slurmdbdCustomSettingsJsonList.GetLength();
         ++slurmdbdCustomSettingsIndex) {
      m_slurmdbdCustomSettings.push_back(slurmdbdCustomSettingsJsonList[slurmdbdCustomSettingsIndex].AsObject());
    }
    m_slurmdbdCustomSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cgroupCustomSettings")) {
    Aws::Utils::Array<JsonView> cgroupCustomSettingsJsonList = jsonValue.GetArray("cgroupCustomSettings");
    for (unsigned cgroupCustomSettingsIndex = 0; cgroupCustomSettingsIndex < cgroupCustomSettingsJsonList.GetLength();
         ++cgroupCustomSettingsIndex) {
      m_cgroupCustomSettings.push_back(cgroupCustomSettingsJsonList[cgroupCustomSettingsIndex].AsObject());
    }
    m_cgroupCustomSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accounting")) {
    m_accounting = jsonValue.GetObject("accounting");
    m_accountingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("slurmRest")) {
    m_slurmRest = jsonValue.GetObject("slurmRest");
    m_slurmRestHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateClusterSlurmConfigurationRequest::Jsonize() const {
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

  if (m_slurmdbdCustomSettingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> slurmdbdCustomSettingsJsonList(m_slurmdbdCustomSettings.size());
    for (unsigned slurmdbdCustomSettingsIndex = 0; slurmdbdCustomSettingsIndex < slurmdbdCustomSettingsJsonList.GetLength();
         ++slurmdbdCustomSettingsIndex) {
      slurmdbdCustomSettingsJsonList[slurmdbdCustomSettingsIndex].AsObject(m_slurmdbdCustomSettings[slurmdbdCustomSettingsIndex].Jsonize());
    }
    payload.WithArray("slurmdbdCustomSettings", std::move(slurmdbdCustomSettingsJsonList));
  }

  if (m_cgroupCustomSettingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cgroupCustomSettingsJsonList(m_cgroupCustomSettings.size());
    for (unsigned cgroupCustomSettingsIndex = 0; cgroupCustomSettingsIndex < cgroupCustomSettingsJsonList.GetLength();
         ++cgroupCustomSettingsIndex) {
      cgroupCustomSettingsJsonList[cgroupCustomSettingsIndex].AsObject(m_cgroupCustomSettings[cgroupCustomSettingsIndex].Jsonize());
    }
    payload.WithArray("cgroupCustomSettings", std::move(cgroupCustomSettingsJsonList));
  }

  if (m_accountingHasBeenSet) {
    payload.WithObject("accounting", m_accounting.Jsonize());
  }

  if (m_slurmRestHasBeenSet) {
    payload.WithObject("slurmRest", m_slurmRest.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
