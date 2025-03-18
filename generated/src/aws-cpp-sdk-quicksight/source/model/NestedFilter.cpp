/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NestedFilter.h>
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

NestedFilter::NestedFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

NestedFilter& NestedFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterId"))
  {
    m_filterId = jsonValue.GetString("FilterId");
    m_filterIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Column"))
  {
    m_column = jsonValue.GetObject("Column");
    m_columnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeInnerSet"))
  {
    m_includeInnerSet = jsonValue.GetBool("IncludeInnerSet");
    m_includeInnerSetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InnerFilter"))
  {
    m_innerFilter = jsonValue.GetObject("InnerFilter");
    m_innerFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue NestedFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterIdHasBeenSet)
  {
   payload.WithString("FilterId", m_filterId);

  }

  if(m_columnHasBeenSet)
  {
   payload.WithObject("Column", m_column.Jsonize());

  }

  if(m_includeInnerSetHasBeenSet)
  {
   payload.WithBool("IncludeInnerSet", m_includeInnerSet);

  }

  if(m_innerFilterHasBeenSet)
  {
   payload.WithObject("InnerFilter", m_innerFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
