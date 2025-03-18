/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PluginVisualTableQuerySort.h>
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

PluginVisualTableQuerySort::PluginVisualTableQuerySort(JsonView jsonValue)
{
  *this = jsonValue;
}

PluginVisualTableQuerySort& PluginVisualTableQuerySort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RowSort"))
  {
    Aws::Utils::Array<JsonView> rowSortJsonList = jsonValue.GetArray("RowSort");
    for(unsigned rowSortIndex = 0; rowSortIndex < rowSortJsonList.GetLength(); ++rowSortIndex)
    {
      m_rowSort.push_back(rowSortJsonList[rowSortIndex].AsObject());
    }
    m_rowSortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ItemsLimitConfiguration"))
  {
    m_itemsLimitConfiguration = jsonValue.GetObject("ItemsLimitConfiguration");
    m_itemsLimitConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue PluginVisualTableQuerySort::Jsonize() const
{
  JsonValue payload;

  if(m_rowSortHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rowSortJsonList(m_rowSort.size());
   for(unsigned rowSortIndex = 0; rowSortIndex < rowSortJsonList.GetLength(); ++rowSortIndex)
   {
     rowSortJsonList[rowSortIndex].AsObject(m_rowSort[rowSortIndex].Jsonize());
   }
   payload.WithArray("RowSort", std::move(rowSortJsonList));

  }

  if(m_itemsLimitConfigurationHasBeenSet)
  {
   payload.WithObject("ItemsLimitConfiguration", m_itemsLimitConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
