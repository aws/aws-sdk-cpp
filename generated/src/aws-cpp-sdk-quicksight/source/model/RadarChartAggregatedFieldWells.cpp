/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RadarChartAggregatedFieldWells.h>
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

RadarChartAggregatedFieldWells::RadarChartAggregatedFieldWells() : 
    m_categoryHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

RadarChartAggregatedFieldWells::RadarChartAggregatedFieldWells(JsonView jsonValue) : 
    m_categoryHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

RadarChartAggregatedFieldWells& RadarChartAggregatedFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Category"))
  {
    Aws::Utils::Array<JsonView> categoryJsonList = jsonValue.GetArray("Category");
    for(unsigned categoryIndex = 0; categoryIndex < categoryJsonList.GetLength(); ++categoryIndex)
    {
      m_category.push_back(categoryJsonList[categoryIndex].AsObject());
    }
    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Color"))
  {
    Aws::Utils::Array<JsonView> colorJsonList = jsonValue.GetArray("Color");
    for(unsigned colorIndex = 0; colorIndex < colorJsonList.GetLength(); ++colorIndex)
    {
      m_color.push_back(colorJsonList[colorIndex].AsObject());
    }
    m_colorHasBeenSet = true;
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

JsonValue RadarChartAggregatedFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoryJsonList(m_category.size());
   for(unsigned categoryIndex = 0; categoryIndex < categoryJsonList.GetLength(); ++categoryIndex)
   {
     categoryJsonList[categoryIndex].AsObject(m_category[categoryIndex].Jsonize());
   }
   payload.WithArray("Category", std::move(categoryJsonList));

  }

  if(m_colorHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> colorJsonList(m_color.size());
   for(unsigned colorIndex = 0; colorIndex < colorJsonList.GetLength(); ++colorIndex)
   {
     colorJsonList[colorIndex].AsObject(m_color[colorIndex].Jsonize());
   }
   payload.WithArray("Color", std::move(colorJsonList));

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
