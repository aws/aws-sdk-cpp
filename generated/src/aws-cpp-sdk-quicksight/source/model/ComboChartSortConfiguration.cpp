/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ComboChartSortConfiguration.h>
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

ComboChartSortConfiguration::ComboChartSortConfiguration() : 
    m_categorySortHasBeenSet(false),
    m_categoryItemsLimitHasBeenSet(false),
    m_colorSortHasBeenSet(false),
    m_colorItemsLimitHasBeenSet(false)
{
}

ComboChartSortConfiguration::ComboChartSortConfiguration(JsonView jsonValue) : 
    m_categorySortHasBeenSet(false),
    m_categoryItemsLimitHasBeenSet(false),
    m_colorSortHasBeenSet(false),
    m_colorItemsLimitHasBeenSet(false)
{
  *this = jsonValue;
}

ComboChartSortConfiguration& ComboChartSortConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ColorSort"))
  {
    Aws::Utils::Array<JsonView> colorSortJsonList = jsonValue.GetArray("ColorSort");
    for(unsigned colorSortIndex = 0; colorSortIndex < colorSortJsonList.GetLength(); ++colorSortIndex)
    {
      m_colorSort.push_back(colorSortJsonList[colorSortIndex].AsObject());
    }
    m_colorSortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColorItemsLimit"))
  {
    m_colorItemsLimit = jsonValue.GetObject("ColorItemsLimit");

    m_colorItemsLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue ComboChartSortConfiguration::Jsonize() const
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

  if(m_colorSortHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> colorSortJsonList(m_colorSort.size());
   for(unsigned colorSortIndex = 0; colorSortIndex < colorSortJsonList.GetLength(); ++colorSortIndex)
   {
     colorSortJsonList[colorSortIndex].AsObject(m_colorSort[colorSortIndex].Jsonize());
   }
   payload.WithArray("ColorSort", std::move(colorSortJsonList));

  }

  if(m_colorItemsLimitHasBeenSet)
  {
   payload.WithObject("ColorItemsLimit", m_colorItemsLimit.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
