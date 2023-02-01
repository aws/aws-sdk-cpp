/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WaterfallChartAggregatedFieldWells.h>
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

WaterfallChartAggregatedFieldWells::WaterfallChartAggregatedFieldWells() : 
    m_categoriesHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_breakdownsHasBeenSet(false)
{
}

WaterfallChartAggregatedFieldWells::WaterfallChartAggregatedFieldWells(JsonView jsonValue) : 
    m_categoriesHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_breakdownsHasBeenSet(false)
{
  *this = jsonValue;
}

WaterfallChartAggregatedFieldWells& WaterfallChartAggregatedFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Categories"))
  {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("Categories");
    for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
    {
      m_categories.push_back(categoriesJsonList[categoriesIndex].AsObject());
    }
    m_categoriesHasBeenSet = true;
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

  if(jsonValue.ValueExists("Breakdowns"))
  {
    Aws::Utils::Array<JsonView> breakdownsJsonList = jsonValue.GetArray("Breakdowns");
    for(unsigned breakdownsIndex = 0; breakdownsIndex < breakdownsJsonList.GetLength(); ++breakdownsIndex)
    {
      m_breakdowns.push_back(breakdownsJsonList[breakdownsIndex].AsObject());
    }
    m_breakdownsHasBeenSet = true;
  }

  return *this;
}

JsonValue WaterfallChartAggregatedFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_categoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
   for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
   {
     categoriesJsonList[categoriesIndex].AsObject(m_categories[categoriesIndex].Jsonize());
   }
   payload.WithArray("Categories", std::move(categoriesJsonList));

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

  if(m_breakdownsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> breakdownsJsonList(m_breakdowns.size());
   for(unsigned breakdownsIndex = 0; breakdownsIndex < breakdownsJsonList.GetLength(); ++breakdownsIndex)
   {
     breakdownsJsonList[breakdownsIndex].AsObject(m_breakdowns[breakdownsIndex].Jsonize());
   }
   payload.WithArray("Breakdowns", std::move(breakdownsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
