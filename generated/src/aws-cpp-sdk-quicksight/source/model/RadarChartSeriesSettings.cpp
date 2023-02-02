/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RadarChartSeriesSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

RadarChartSeriesSettings::RadarChartSeriesSettings() : 
    m_areaStyleSettingsHasBeenSet(false)
{
}

RadarChartSeriesSettings::RadarChartSeriesSettings(JsonView jsonValue) : 
    m_areaStyleSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

RadarChartSeriesSettings& RadarChartSeriesSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AreaStyleSettings"))
  {
    m_areaStyleSettings = jsonValue.GetObject("AreaStyleSettings");

    m_areaStyleSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue RadarChartSeriesSettings::Jsonize() const
{
  JsonValue payload;

  if(m_areaStyleSettingsHasBeenSet)
  {
   payload.WithObject("AreaStyleSettings", m_areaStyleSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
