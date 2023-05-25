/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableSortConfiguration.h>
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

TableSortConfiguration::TableSortConfiguration() : 
    m_rowSortHasBeenSet(false),
    m_paginationConfigurationHasBeenSet(false)
{
}

TableSortConfiguration::TableSortConfiguration(JsonView jsonValue) : 
    m_rowSortHasBeenSet(false),
    m_paginationConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

TableSortConfiguration& TableSortConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("PaginationConfiguration"))
  {
    m_paginationConfiguration = jsonValue.GetObject("PaginationConfiguration");

    m_paginationConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue TableSortConfiguration::Jsonize() const
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

  if(m_paginationConfigurationHasBeenSet)
  {
   payload.WithObject("PaginationConfiguration", m_paginationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
