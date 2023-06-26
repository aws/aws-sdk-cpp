/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WaterfallChartSortConfiguration.h>
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

WaterfallChartSortConfiguration::WaterfallChartSortConfiguration() : 
    m_categorySortHasBeenSet(false),
    m_breakdownItemsLimitHasBeenSet(false)
{
}

WaterfallChartSortConfiguration::WaterfallChartSortConfiguration(JsonView jsonValue) : 
    m_categorySortHasBeenSet(false),
    m_breakdownItemsLimitHasBeenSet(false)
{
  *this = jsonValue;
}

WaterfallChartSortConfiguration& WaterfallChartSortConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CategorySort"))
  {
    Aws::Utils::Array<JsonView> categorySortJsonList = jsonValue.GetArray("CategorySort");
    for(unsigned categorySortIndex = 0; categorySortIndex < categorySortJsonList.GetLength(); ++categorySortIndex)
    {
      m_categorySort.push_back(categorySortJsonList[categorySortIndex].AsObject());
    }
    m_categorySortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BreakdownItemsLimit"))
  {
    m_breakdownItemsLimit = jsonValue.GetObject("BreakdownItemsLimit");

    m_breakdownItemsLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue WaterfallChartSortConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_categorySortHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categorySortJsonList(m_categorySort.size());
   for(unsigned categorySortIndex = 0; categorySortIndex < categorySortJsonList.GetLength(); ++categorySortIndex)
   {
     categorySortJsonList[categorySortIndex].AsObject(m_categorySort[categorySortIndex].Jsonize());
   }
   payload.WithArray("CategorySort", std::move(categorySortJsonList));

  }

  if(m_breakdownItemsLimitHasBeenSet)
  {
   payload.WithObject("BreakdownItemsLimit", m_breakdownItemsLimit.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
