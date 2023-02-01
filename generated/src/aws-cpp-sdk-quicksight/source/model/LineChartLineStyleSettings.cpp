/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LineChartLineStyleSettings.h>
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

LineChartLineStyleSettings::LineChartLineStyleSettings() : 
    m_lineVisibility(Visibility::NOT_SET),
    m_lineVisibilityHasBeenSet(false),
    m_lineInterpolation(LineInterpolation::NOT_SET),
    m_lineInterpolationHasBeenSet(false),
    m_lineStyle(LineChartLineStyle::NOT_SET),
    m_lineStyleHasBeenSet(false),
    m_lineWidthHasBeenSet(false)
{
}

LineChartLineStyleSettings::LineChartLineStyleSettings(JsonView jsonValue) : 
    m_lineVisibility(Visibility::NOT_SET),
    m_lineVisibilityHasBeenSet(false),
    m_lineInterpolation(LineInterpolation::NOT_SET),
    m_lineInterpolationHasBeenSet(false),
    m_lineStyle(LineChartLineStyle::NOT_SET),
    m_lineStyleHasBeenSet(false),
    m_lineWidthHasBeenSet(false)
{
  *this = jsonValue;
}

LineChartLineStyleSettings& LineChartLineStyleSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LineVisibility"))
  {
    m_lineVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("LineVisibility"));

    m_lineVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineInterpolation"))
  {
    m_lineInterpolation = LineInterpolationMapper::GetLineInterpolationForName(jsonValue.GetString("LineInterpolation"));

    m_lineInterpolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineStyle"))
  {
    m_lineStyle = LineChartLineStyleMapper::GetLineChartLineStyleForName(jsonValue.GetString("LineStyle"));

    m_lineStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineWidth"))
  {
    m_lineWidth = jsonValue.GetString("LineWidth");

    m_lineWidthHasBeenSet = true;
  }

  return *this;
}

JsonValue LineChartLineStyleSettings::Jsonize() const
{
  JsonValue payload;

  if(m_lineVisibilityHasBeenSet)
  {
   payload.WithString("LineVisibility", VisibilityMapper::GetNameForVisibility(m_lineVisibility));
  }

  if(m_lineInterpolationHasBeenSet)
  {
   payload.WithString("LineInterpolation", LineInterpolationMapper::GetNameForLineInterpolation(m_lineInterpolation));
  }

  if(m_lineStyleHasBeenSet)
  {
   payload.WithString("LineStyle", LineChartLineStyleMapper::GetNameForLineChartLineStyle(m_lineStyle));
  }

  if(m_lineWidthHasBeenSet)
  {
   payload.WithString("LineWidth", m_lineWidth);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
