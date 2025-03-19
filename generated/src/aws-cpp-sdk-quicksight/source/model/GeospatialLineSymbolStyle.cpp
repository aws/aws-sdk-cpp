/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialLineSymbolStyle.h>
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

GeospatialLineSymbolStyle::GeospatialLineSymbolStyle(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialLineSymbolStyle& GeospatialLineSymbolStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FillColor"))
  {
    m_fillColor = jsonValue.GetObject("FillColor");
    m_fillColorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LineWidth"))
  {
    m_lineWidth = jsonValue.GetObject("LineWidth");
    m_lineWidthHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialLineSymbolStyle::Jsonize() const
{
  JsonValue payload;

  if(m_fillColorHasBeenSet)
  {
   payload.WithObject("FillColor", m_fillColor.Jsonize());

  }

  if(m_lineWidthHasBeenSet)
  {
   payload.WithObject("LineWidth", m_lineWidth.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
