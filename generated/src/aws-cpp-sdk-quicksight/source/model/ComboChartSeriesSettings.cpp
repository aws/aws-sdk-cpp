/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ComboChartSeriesSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ComboChartSeriesSettings::ComboChartSeriesSettings(JsonView jsonValue) { *this = jsonValue; }

ComboChartSeriesSettings& ComboChartSeriesSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LineStyleSettings")) {
    m_lineStyleSettings = jsonValue.GetObject("LineStyleSettings");
    m_lineStyleSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MarkerStyleSettings")) {
    m_markerStyleSettings = jsonValue.GetObject("MarkerStyleSettings");
    m_markerStyleSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DecalSettings")) {
    m_decalSettings = jsonValue.GetObject("DecalSettings");
    m_decalSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BorderSettings")) {
    m_borderSettings = jsonValue.GetObject("BorderSettings");
    m_borderSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ComboChartSeriesSettings::Jsonize() const {
  JsonValue payload;

  if (m_lineStyleSettingsHasBeenSet) {
    payload.WithObject("LineStyleSettings", m_lineStyleSettings.Jsonize());
  }

  if (m_markerStyleSettingsHasBeenSet) {
    payload.WithObject("MarkerStyleSettings", m_markerStyleSettings.Jsonize());
  }

  if (m_decalSettingsHasBeenSet) {
    payload.WithObject("DecalSettings", m_decalSettings.Jsonize());
  }

  if (m_borderSettingsHasBeenSet) {
    payload.WithObject("BorderSettings", m_borderSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
