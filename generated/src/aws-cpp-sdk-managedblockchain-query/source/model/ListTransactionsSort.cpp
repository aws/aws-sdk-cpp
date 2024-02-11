/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/ListTransactionsSort.h>
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

ListTransactionsSort::ListTransactionsSort() : 
    m_sortBy(ListTransactionsSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

ListTransactionsSort::ListTransactionsSort(JsonView jsonValue) : 
    m_sortBy(ListTransactionsSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

ListTransactionsSort& ListTransactionsSort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sortBy"))
  {
    m_sortBy = ListTransactionsSortByMapper::GetListTransactionsSortByForName(jsonValue.GetString("sortBy"));

    m_sortByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue ListTransactionsSort::Jsonize() const
{
  JsonValue payload;

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", ListTransactionsSortByMapper::GetNameForListTransactionsSortBy(m_sortBy));
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
