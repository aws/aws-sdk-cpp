/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialMapAggregatedFieldWells.h>
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

GeospatialMapAggregatedFieldWells::GeospatialMapAggregatedFieldWells() : 
    m_geospatialHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_colorsHasBeenSet(false)
{
}

GeospatialMapAggregatedFieldWells::GeospatialMapAggregatedFieldWells(JsonView jsonValue) : 
    m_geospatialHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_colorsHasBeenSet(false)
{
  *this = jsonValue;
}

GeospatialMapAggregatedFieldWells& GeospatialMapAggregatedFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Geospatial"))
  {
    Aws::Utils::Array<JsonView> geospatialJsonList = jsonValue.GetArray("Geospatial");
    for(unsigned geospatialIndex = 0; geospatialIndex < geospatialJsonList.GetLength(); ++geospatialIndex)
    {
      m_geospatial.push_back(geospatialJsonList[geospatialIndex].AsObject());
    }
    m_geospatialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsObject());
    }
    m_valuesHasBeenSet = true;
  }

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

JsonValue GeospatialMapAggregatedFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_geospatialHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> geospatialJsonList(m_geospatial.size());
   for(unsigned geospatialIndex = 0; geospatialIndex < geospatialJsonList.GetLength(); ++geospatialIndex)
   {
     geospatialJsonList[geospatialIndex].AsObject(m_geospatial[geospatialIndex].Jsonize());
   }
   payload.WithArray("Geospatial", std::move(geospatialJsonList));

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsObject(m_values[valuesIndex].Jsonize());
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

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
