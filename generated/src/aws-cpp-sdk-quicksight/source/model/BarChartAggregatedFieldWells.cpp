/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BarChartAggregatedFieldWells.h>
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

BarChartAggregatedFieldWells::BarChartAggregatedFieldWells() : 
    m_categoryHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_colorsHasBeenSet(false),
    m_smallMultiplesHasBeenSet(false)
{
}

BarChartAggregatedFieldWells::BarChartAggregatedFieldWells(JsonView jsonValue) : 
    m_categoryHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_colorsHasBeenSet(false),
    m_smallMultiplesHasBeenSet(false)
{
  *this = jsonValue;
}

BarChartAggregatedFieldWells& BarChartAggregatedFieldWells::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("SmallMultiples"))
  {
    Aws::Utils::Array<JsonView> smallMultiplesJsonList = jsonValue.GetArray("SmallMultiples");
    for(unsigned smallMultiplesIndex = 0; smallMultiplesIndex < smallMultiplesJsonList.GetLength(); ++smallMultiplesIndex)
    {
      m_smallMultiples.push_back(smallMultiplesJsonList[smallMultiplesIndex].AsObject());
    }
    m_smallMultiplesHasBeenSet = true;
  }

  return *this;
}

JsonValue BarChartAggregatedFieldWells::Jsonize() const
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

  if(m_smallMultiplesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> smallMultiplesJsonList(m_smallMultiples.size());
   for(unsigned smallMultiplesIndex = 0; smallMultiplesIndex < smallMultiplesJsonList.GetLength(); ++smallMultiplesIndex)
   {
     smallMultiplesJsonList[smallMultiplesIndex].AsObject(m_smallMultiples[smallMultiplesIndex].Jsonize());
   }
   payload.WithArray("SmallMultiples", std::move(smallMultiplesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
