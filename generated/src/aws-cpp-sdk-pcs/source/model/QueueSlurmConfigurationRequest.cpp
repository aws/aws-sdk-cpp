/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/model/QueueSlurmConfigurationRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {

QueueSlurmConfigurationRequest::QueueSlurmConfigurationRequest(JsonView jsonValue) { *this = jsonValue; }

QueueSlurmConfigurationRequest& QueueSlurmConfigurationRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("slurmCustomSettings")) {
    Aws::Utils::Array<JsonView> slurmCustomSettingsJsonList = jsonValue.GetArray("slurmCustomSettings");
    for (unsigned slurmCustomSettingsIndex = 0; slurmCustomSettingsIndex < slurmCustomSettingsJsonList.GetLength();
         ++slurmCustomSettingsIndex) {
      m_slurmCustomSettings.push_back(slurmCustomSettingsJsonList[slurmCustomSettingsIndex].AsObject());
    }
    m_slurmCustomSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue QueueSlurmConfigurationRequest::Jsonize() const {
  JsonValue payload;

  if (m_slurmCustomSettingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> slurmCustomSettingsJsonList(m_slurmCustomSettings.size());
    for (unsigned slurmCustomSettingsIndex = 0; slurmCustomSettingsIndex < slurmCustomSettingsJsonList.GetLength();
         ++slurmCustomSettingsIndex) {
      slurmCustomSettingsJsonList[slurmCustomSettingsIndex].AsObject(m_slurmCustomSettings[slurmCustomSettingsIndex].Jsonize());
    }
    payload.WithArray("slurmCustomSettings", std::move(slurmCustomSettingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
