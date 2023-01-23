/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LineChartDefaultSeriesSettings.h>
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

LineChartDefaultSeriesSettings::LineChartDefaultSeriesSettings() : 
    m_axisBinding(AxisBinding::NOT_SET),
    m_axisBindingHasBeenSet(false),
    m_lineStyleSettingsHasBeenSet(false),
    m_markerStyleSettingsHasBeenSet(false)
{
}

LineChartDefaultSeriesSettings::LineChartDefaultSeriesSettings(JsonView jsonValue) : 
    m_axisBinding(AxisBinding::NOT_SET),
    m_axisBindingHasBeenSet(false),
    m_lineStyleSettingsHasBeenSet(false),
    m_markerStyleSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

LineChartDefaultSeriesSettings& LineChartDefaultSeriesSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AxisBinding"))
  {
    m_axisBinding = AxisBindingMapper::GetAxisBindingForName(jsonValue.GetString("AxisBinding"));

    m_axisBindingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineStyleSettings"))
  {
    m_lineStyleSettings = jsonValue.GetObject("LineStyleSettings");

    m_lineStyleSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MarkerStyleSettings"))
  {
    m_markerStyleSettings = jsonValue.GetObject("MarkerStyleSettings");

    m_markerStyleSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue LineChartDefaultSeriesSettings::Jsonize() const
{
  JsonValue payload;

  if(m_axisBindingHasBeenSet)
  {
   payload.WithString("AxisBinding", AxisBindingMapper::GetNameForAxisBinding(m_axisBinding));
  }

  if(m_lineStyleSettingsHasBeenSet)
  {
   payload.WithObject("LineStyleSettings", m_lineStyleSettings.Jsonize());

  }

  if(m_markerStyleSettingsHasBeenSet)
  {
   payload.WithObject("MarkerStyleSettings", m_markerStyleSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
