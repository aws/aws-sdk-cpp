/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ComboChartAggregatedFieldWells.h>
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

ComboChartAggregatedFieldWells::ComboChartAggregatedFieldWells() : 
    m_categoryHasBeenSet(false),
    m_barValuesHasBeenSet(false),
    m_colorsHasBeenSet(false),
    m_lineValuesHasBeenSet(false)
{
}

ComboChartAggregatedFieldWells::ComboChartAggregatedFieldWells(JsonView jsonValue) : 
    m_categoryHasBeenSet(false),
    m_barValuesHasBeenSet(false),
    m_colorsHasBeenSet(false),
    m_lineValuesHasBeenSet(false)
{
  *this = jsonValue;
}

ComboChartAggregatedFieldWells& ComboChartAggregatedFieldWells::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("BarValues"))
  {
    Aws::Utils::Array<JsonView> barValuesJsonList = jsonValue.GetArray("BarValues");
    for(unsigned barValuesIndex = 0; barValuesIndex < barValuesJsonList.GetLength(); ++barValuesIndex)
    {
      m_barValues.push_back(barValuesJsonList[barValuesIndex].AsObject());
    }
    m_barValuesHasBeenSet = true;
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

  if(jsonValue.ValueExists("LineValues"))
  {
    Aws::Utils::Array<JsonView> lineValuesJsonList = jsonValue.GetArray("LineValues");
    for(unsigned lineValuesIndex = 0; lineValuesIndex < lineValuesJsonList.GetLength(); ++lineValuesIndex)
    {
      m_lineValues.push_back(lineValuesJsonList[lineValuesIndex].AsObject());
    }
    m_lineValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue ComboChartAggregatedFieldWells::Jsonize() const
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

  if(m_barValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> barValuesJsonList(m_barValues.size());
   for(unsigned barValuesIndex = 0; barValuesIndex < barValuesJsonList.GetLength(); ++barValuesIndex)
   {
     barValuesJsonList[barValuesIndex].AsObject(m_barValues[barValuesIndex].Jsonize());
   }
   payload.WithArray("BarValues", std::move(barValuesJsonList));

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

  if(m_lineValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lineValuesJsonList(m_lineValues.size());
   for(unsigned lineValuesIndex = 0; lineValuesIndex < lineValuesJsonList.GetLength(); ++lineValuesIndex)
   {
     lineValuesJsonList[lineValuesIndex].AsObject(m_lineValues[lineValuesIndex].Jsonize());
   }
   payload.WithArray("LineValues", std::move(lineValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
