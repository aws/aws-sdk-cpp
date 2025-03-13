/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialPolygonStyle.h>
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

GeospatialPolygonStyle::GeospatialPolygonStyle(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialPolygonStyle& GeospatialPolygonStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolygonSymbolStyle"))
  {
    m_polygonSymbolStyle = jsonValue.GetObject("PolygonSymbolStyle");
    m_polygonSymbolStyleHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialPolygonStyle::Jsonize() const
{
  JsonValue payload;

  if(m_polygonSymbolStyleHasBeenSet)
  {
   payload.WithObject("PolygonSymbolStyle", m_polygonSymbolStyle.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
