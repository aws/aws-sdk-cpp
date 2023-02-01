/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PieChartSortConfiguration.h>
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

PieChartSortConfiguration::PieChartSortConfiguration() : 
    m_categorySortHasBeenSet(false),
    m_categoryItemsLimitHasBeenSet(false),
    m_smallMultiplesSortHasBeenSet(false),
    m_smallMultiplesLimitConfigurationHasBeenSet(false)
{
}

PieChartSortConfiguration::PieChartSortConfiguration(JsonView jsonValue) : 
    m_categorySortHasBeenSet(false),
    m_categoryItemsLimitHasBeenSet(false),
    m_smallMultiplesSortHasBeenSet(false),
    m_smallMultiplesLimitConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

PieChartSortConfiguration& PieChartSortConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("CategoryItemsLimit"))
  {
    m_categoryItemsLimit = jsonValue.GetObject("CategoryItemsLimit");

    m_categoryItemsLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SmallMultiplesSort"))
  {
    Aws::Utils::Array<JsonView> smallMultiplesSortJsonList = jsonValue.GetArray("SmallMultiplesSort");
    for(unsigned smallMultiplesSortIndex = 0; smallMultiplesSortIndex < smallMultiplesSortJsonList.GetLength(); ++smallMultiplesSortIndex)
    {
      m_smallMultiplesSort.push_back(smallMultiplesSortJsonList[smallMultiplesSortIndex].AsObject());
    }
    m_smallMultiplesSortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SmallMultiplesLimitConfiguration"))
  {
    m_smallMultiplesLimitConfiguration = jsonValue.GetObject("SmallMultiplesLimitConfiguration");

    m_smallMultiplesLimitConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue PieChartSortConfiguration::Jsonize() const
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

  if(m_categoryItemsLimitHasBeenSet)
  {
   payload.WithObject("CategoryItemsLimit", m_categoryItemsLimit.Jsonize());

  }

  if(m_smallMultiplesSortHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> smallMultiplesSortJsonList(m_smallMultiplesSort.size());
   for(unsigned smallMultiplesSortIndex = 0; smallMultiplesSortIndex < smallMultiplesSortJsonList.GetLength(); ++smallMultiplesSortIndex)
   {
     smallMultiplesSortJsonList[smallMultiplesSortIndex].AsObject(m_smallMultiplesSort[smallMultiplesSortIndex].Jsonize());
   }
   payload.WithArray("SmallMultiplesSort", std::move(smallMultiplesSortJsonList));

  }

  if(m_smallMultiplesLimitConfigurationHasBeenSet)
  {
   payload.WithObject("SmallMultiplesLimitConfiguration", m_smallMultiplesLimitConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
