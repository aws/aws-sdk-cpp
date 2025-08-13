/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ListTasksSortBase.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

ListTasksSortBase::ListTasksSortBase(JsonView jsonValue)
{
  *this = jsonValue;
}

ListTasksSortBase& ListTasksSortBase::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("SortOrder"));
    m_sortOrderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SortBy"))
  {
    m_sortBy = ListTasksSortNameMapper::GetListTasksSortNameForName(jsonValue.GetString("SortBy"));
    m_sortByHasBeenSet = true;
  }
  return *this;
}

JsonValue ListTasksSortBase::Jsonize() const
{
  JsonValue payload;

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", ListTasksSortNameMapper::GetNameForListTasksSortName(m_sortBy));
  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
