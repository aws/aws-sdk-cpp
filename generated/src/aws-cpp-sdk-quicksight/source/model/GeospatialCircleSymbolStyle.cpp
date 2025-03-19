/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialCircleSymbolStyle.h>
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

GeospatialCircleSymbolStyle::GeospatialCircleSymbolStyle(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialCircleSymbolStyle& GeospatialCircleSymbolStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FillColor"))
  {
    m_fillColor = jsonValue.GetObject("FillColor");
    m_fillColorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StrokeColor"))
  {
    m_strokeColor = jsonValue.GetObject("StrokeColor");
    m_strokeColorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StrokeWidth"))
  {
    m_strokeWidth = jsonValue.GetObject("StrokeWidth");
    m_strokeWidthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CircleRadius"))
  {
    m_circleRadius = jsonValue.GetObject("CircleRadius");
    m_circleRadiusHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialCircleSymbolStyle::Jsonize() const
{
  JsonValue payload;

  if(m_fillColorHasBeenSet)
  {
   payload.WithObject("FillColor", m_fillColor.Jsonize());

  }

  if(m_strokeColorHasBeenSet)
  {
   payload.WithObject("StrokeColor", m_strokeColor.Jsonize());

  }

  if(m_strokeWidthHasBeenSet)
  {
   payload.WithObject("StrokeWidth", m_strokeWidth.Jsonize());

  }

  if(m_circleRadiusHasBeenSet)
  {
   payload.WithObject("CircleRadius", m_circleRadius.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
