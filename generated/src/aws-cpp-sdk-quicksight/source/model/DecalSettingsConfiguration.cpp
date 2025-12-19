/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DecalSettingsConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DecalSettingsConfiguration::DecalSettingsConfiguration(JsonView jsonValue) { *this = jsonValue; }

DecalSettingsConfiguration& DecalSettingsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CustomDecalSettings")) {
    Aws::Utils::Array<JsonView> customDecalSettingsJsonList = jsonValue.GetArray("CustomDecalSettings");
    for (unsigned customDecalSettingsIndex = 0; customDecalSettingsIndex < customDecalSettingsJsonList.GetLength();
         ++customDecalSettingsIndex) {
      m_customDecalSettings.push_back(customDecalSettingsJsonList[customDecalSettingsIndex].AsObject());
    }
    m_customDecalSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue DecalSettingsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_customDecalSettingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> customDecalSettingsJsonList(m_customDecalSettings.size());
    for (unsigned customDecalSettingsIndex = 0; customDecalSettingsIndex < customDecalSettingsJsonList.GetLength();
         ++customDecalSettingsIndex) {
      customDecalSettingsJsonList[customDecalSettingsIndex].AsObject(m_customDecalSettings[customDecalSettingsIndex].Jsonize());
    }
    payload.WithArray("CustomDecalSettings", std::move(customDecalSettingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
