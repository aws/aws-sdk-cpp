/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotFieldSortOptions.h>
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

PivotFieldSortOptions::PivotFieldSortOptions() : 
    m_fieldIdHasBeenSet(false),
    m_sortByHasBeenSet(false)
{
}

PivotFieldSortOptions::PivotFieldSortOptions(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_sortByHasBeenSet(false)
{
  *this = jsonValue;
}

PivotFieldSortOptions& PivotFieldSortOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortBy"))
  {
    m_sortBy = jsonValue.GetObject("SortBy");

    m_sortByHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotFieldSortOptions::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithObject("SortBy", m_sortBy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
