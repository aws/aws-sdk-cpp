/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/ResaleAuthorizationSort.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{

ResaleAuthorizationSort::ResaleAuthorizationSort() : 
    m_sortBy(ResaleAuthorizationSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

ResaleAuthorizationSort::ResaleAuthorizationSort(JsonView jsonValue) : 
    m_sortBy(ResaleAuthorizationSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

ResaleAuthorizationSort& ResaleAuthorizationSort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SortBy"))
  {
    m_sortBy = ResaleAuthorizationSortByMapper::GetResaleAuthorizationSortByForName(jsonValue.GetString("SortBy"));

    m_sortByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("SortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue ResaleAuthorizationSort::Jsonize() const
{
  JsonValue payload;

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", ResaleAuthorizationSortByMapper::GetNameForResaleAuthorizationSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
