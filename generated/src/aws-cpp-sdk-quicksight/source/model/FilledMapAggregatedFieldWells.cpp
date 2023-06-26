/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilledMapAggregatedFieldWells.h>
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

FilledMapAggregatedFieldWells::FilledMapAggregatedFieldWells() : 
    m_geospatialHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

FilledMapAggregatedFieldWells::FilledMapAggregatedFieldWells(JsonView jsonValue) : 
    m_geospatialHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

FilledMapAggregatedFieldWells& FilledMapAggregatedFieldWells::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue FilledMapAggregatedFieldWells::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
