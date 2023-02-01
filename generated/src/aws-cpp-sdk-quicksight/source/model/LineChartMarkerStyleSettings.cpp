/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LineChartMarkerStyleSettings.h>
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

LineChartMarkerStyleSettings::LineChartMarkerStyleSettings() : 
    m_markerVisibility(Visibility::NOT_SET),
    m_markerVisibilityHasBeenSet(false),
    m_markerShape(LineChartMarkerShape::NOT_SET),
    m_markerShapeHasBeenSet(false),
    m_markerSizeHasBeenSet(false),
    m_markerColorHasBeenSet(false)
{
}

LineChartMarkerStyleSettings::LineChartMarkerStyleSettings(JsonView jsonValue) : 
    m_markerVisibility(Visibility::NOT_SET),
    m_markerVisibilityHasBeenSet(false),
    m_markerShape(LineChartMarkerShape::NOT_SET),
    m_markerShapeHasBeenSet(false),
    m_markerSizeHasBeenSet(false),
    m_markerColorHasBeenSet(false)
{
  *this = jsonValue;
}

LineChartMarkerStyleSettings& LineChartMarkerStyleSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MarkerVisibility"))
  {
    m_markerVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("MarkerVisibility"));

    m_markerVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MarkerShape"))
  {
    m_markerShape = LineChartMarkerShapeMapper::GetLineChartMarkerShapeForName(jsonValue.GetString("MarkerShape"));

    m_markerShapeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MarkerSize"))
  {
    m_markerSize = jsonValue.GetString("MarkerSize");

    m_markerSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MarkerColor"))
  {
    m_markerColor = jsonValue.GetString("MarkerColor");

    m_markerColorHasBeenSet = true;
  }

  return *this;
}

JsonValue LineChartMarkerStyleSettings::Jsonize() const
{
  JsonValue payload;

  if(m_markerVisibilityHasBeenSet)
  {
   payload.WithString("MarkerVisibility", VisibilityMapper::GetNameForVisibility(m_markerVisibility));
  }

  if(m_markerShapeHasBeenSet)
  {
   payload.WithString("MarkerShape", LineChartMarkerShapeMapper::GetNameForLineChartMarkerShape(m_markerShape));
  }

  if(m_markerSizeHasBeenSet)
  {
   payload.WithString("MarkerSize", m_markerSize);

  }

  if(m_markerColorHasBeenSet)
  {
   payload.WithString("MarkerColor", m_markerColor);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
