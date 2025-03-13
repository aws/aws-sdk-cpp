/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/ListFilteredTransactionEventsSort.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Model
{

ListFilteredTransactionEventsSort::ListFilteredTransactionEventsSort(JsonView jsonValue)
{
  *this = jsonValue;
}

ListFilteredTransactionEventsSort& ListFilteredTransactionEventsSort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sortBy"))
  {
    m_sortBy = ListFilteredTransactionEventsSortByMapper::GetListFilteredTransactionEventsSortByForName(jsonValue.GetString("sortBy"));
    m_sortByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));
    m_sortOrderHasBeenSet = true;
  }
  return *this;
}

JsonValue ListFilteredTransactionEventsSort::Jsonize() const
{
  JsonValue payload;

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", ListFilteredTransactionEventsSortByMapper::GetNameForListFilteredTransactionEventsSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
