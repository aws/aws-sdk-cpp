/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataPathSort.h>
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

DataPathSort::DataPathSort() : 
    m_direction(SortDirection::NOT_SET),
    m_directionHasBeenSet(false),
    m_sortPathsHasBeenSet(false)
{
}

DataPathSort::DataPathSort(JsonView jsonValue) : 
    m_direction(SortDirection::NOT_SET),
    m_directionHasBeenSet(false),
    m_sortPathsHasBeenSet(false)
{
  *this = jsonValue;
}

DataPathSort& DataPathSort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Direction"))
  {
    m_direction = SortDirectionMapper::GetSortDirectionForName(jsonValue.GetString("Direction"));

    m_directionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortPaths"))
  {
    Aws::Utils::Array<JsonView> sortPathsJsonList = jsonValue.GetArray("SortPaths");
    for(unsigned sortPathsIndex = 0; sortPathsIndex < sortPathsJsonList.GetLength(); ++sortPathsIndex)
    {
      m_sortPaths.push_back(sortPathsJsonList[sortPathsIndex].AsObject());
    }
    m_sortPathsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataPathSort::Jsonize() const
{
  JsonValue payload;

  if(m_directionHasBeenSet)
  {
   payload.WithString("Direction", SortDirectionMapper::GetNameForSortDirection(m_direction));
  }

  if(m_sortPathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sortPathsJsonList(m_sortPaths.size());
   for(unsigned sortPathsIndex = 0; sortPathsIndex < sortPathsJsonList.GetLength(); ++sortPathsIndex)
   {
     sortPathsJsonList[sortPathsIndex].AsObject(m_sortPaths[sortPathsIndex].Jsonize());
   }
   payload.WithArray("SortPaths", std::move(sortPathsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
