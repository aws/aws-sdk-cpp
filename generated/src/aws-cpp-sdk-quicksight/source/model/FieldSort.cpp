/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FieldSort.h>
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

FieldSort::FieldSort() : 
    m_fieldIdHasBeenSet(false),
    m_direction(SortDirection::NOT_SET),
    m_directionHasBeenSet(false)
{
}

FieldSort::FieldSort(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_direction(SortDirection::NOT_SET),
    m_directionHasBeenSet(false)
{
  *this = jsonValue;
}

FieldSort& FieldSort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Direction"))
  {
    m_direction = SortDirectionMapper::GetSortDirectionForName(jsonValue.GetString("Direction"));

    m_directionHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldSort::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_directionHasBeenSet)
  {
   payload.WithString("Direction", SortDirectionMapper::GetNameForSortDirection(m_direction));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
