/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/SearchSortResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

SearchSortResult::SearchSortResult() : 
    m_field(OrderByFieldType::NOT_SET),
    m_fieldHasBeenSet(false),
    m_order(SortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
}

SearchSortResult::SearchSortResult(JsonView jsonValue) : 
    m_field(OrderByFieldType::NOT_SET),
    m_fieldHasBeenSet(false),
    m_order(SortOrder::NOT_SET),
    m_orderHasBeenSet(false)
{
  *this = jsonValue;
}

SearchSortResult& SearchSortResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Field"))
  {
    m_field = OrderByFieldTypeMapper::GetOrderByFieldTypeForName(jsonValue.GetString("Field"));

    m_fieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Order"))
  {
    m_order = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("Order"));

    m_orderHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchSortResult::Jsonize() const
{
  JsonValue payload;

  if(m_fieldHasBeenSet)
  {
   payload.WithString("Field", OrderByFieldTypeMapper::GetNameForOrderByFieldType(m_field));
  }

  if(m_orderHasBeenSet)
  {
   payload.WithString("Order", SortOrderMapper::GetNameForSortOrder(m_order));
  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
