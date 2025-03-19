/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialNullSymbolStyle.h>
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

GeospatialNullSymbolStyle::GeospatialNullSymbolStyle(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialNullSymbolStyle& GeospatialNullSymbolStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FillColor"))
  {
    m_fillColor = jsonValue.GetString("FillColor");
    m_fillColorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StrokeColor"))
  {
    m_strokeColor = jsonValue.GetString("StrokeColor");
    m_strokeColorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StrokeWidth"))
  {
    m_strokeWidth = jsonValue.GetDouble("StrokeWidth");
    m_strokeWidthHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialNullSymbolStyle::Jsonize() const
{
  JsonValue payload;

  if(m_fillColorHasBeenSet)
  {
   payload.WithString("FillColor", m_fillColor);

  }

  if(m_strokeColorHasBeenSet)
  {
   payload.WithString("StrokeColor", m_strokeColor);

  }

  if(m_strokeWidthHasBeenSet)
  {
   payload.WithDouble("StrokeWidth", m_strokeWidth);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
