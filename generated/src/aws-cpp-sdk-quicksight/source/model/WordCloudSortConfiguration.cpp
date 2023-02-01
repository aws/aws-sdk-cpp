/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WordCloudSortConfiguration.h>
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

WordCloudSortConfiguration::WordCloudSortConfiguration() : 
    m_categoryItemsLimitHasBeenSet(false),
    m_categorySortHasBeenSet(false)
{
}

WordCloudSortConfiguration::WordCloudSortConfiguration(JsonView jsonValue) : 
    m_categoryItemsLimitHasBeenSet(false),
    m_categorySortHasBeenSet(false)
{
  *this = jsonValue;
}

WordCloudSortConfiguration& WordCloudSortConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CategoryItemsLimit"))
  {
    m_categoryItemsLimit = jsonValue.GetObject("CategoryItemsLimit");

    m_categoryItemsLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategorySort"))
  {
    Aws::Utils::Array<JsonView> categorySortJsonList = jsonValue.GetArray("CategorySort");
    for(unsigned categorySortIndex = 0; categorySortIndex < categorySortJsonList.GetLength(); ++categorySortIndex)
    {
      m_categorySort.push_back(categorySortJsonList[categorySortIndex].AsObject());
    }
    m_categorySortHasBeenSet = true;
  }

  return *this;
}

JsonValue WordCloudSortConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_categoryItemsLimitHasBeenSet)
  {
   payload.WithObject("CategoryItemsLimit", m_categoryItemsLimit.Jsonize());

  }

  if(m_categorySortHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categorySortJsonList(m_categorySort.size());
   for(unsigned categorySortIndex = 0; categorySortIndex < categorySortJsonList.GetLength(); ++categorySortIndex)
   {
     categorySortJsonList[categorySortIndex].AsObject(m_categorySort[categorySortIndex].Jsonize());
   }
   payload.WithArray("CategorySort", std::move(categorySortJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
