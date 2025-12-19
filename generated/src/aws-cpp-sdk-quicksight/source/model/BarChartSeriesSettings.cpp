/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/BarChartSeriesSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

BarChartSeriesSettings::BarChartSeriesSettings(JsonView jsonValue) { *this = jsonValue; }

BarChartSeriesSettings& BarChartSeriesSettings::operator=(JsonView jsonValue) {
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

JsonValue BarChartSeriesSettings::Jsonize() const {
  JsonValue payload;

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
