/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialHeatmapColorScale.h>
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

GeospatialHeatmapColorScale::GeospatialHeatmapColorScale() : 
    m_colorsHasBeenSet(false)
{
}

GeospatialHeatmapColorScale::GeospatialHeatmapColorScale(JsonView jsonValue) : 
    m_colorsHasBeenSet(false)
{
  *this = jsonValue;
}

GeospatialHeatmapColorScale& GeospatialHeatmapColorScale::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Colors"))
  {
    Aws::Utils::Array<JsonView> colorsJsonList = jsonValue.GetArray("Colors");
    for(unsigned colorsIndex = 0; colorsIndex < colorsJsonList.GetLength(); ++colorsIndex)
    {
      m_colors.push_back(colorsJsonList[colorsIndex].AsObject());
    }
    m_colorsHasBeenSet = true;
  }

  return *this;
}

JsonValue GeospatialHeatmapColorScale::Jsonize() const
{
  JsonValue payload;

  if(m_colorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> colorsJsonList(m_colors.size());
   for(unsigned colorsIndex = 0; colorsIndex < colorsJsonList.GetLength(); ++colorsIndex)
   {
     colorsJsonList[colorsIndex].AsObject(m_colors[colorsIndex].Jsonize());
   }
   payload.WithArray("Colors", std::move(colorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
