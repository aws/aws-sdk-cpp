/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DateTimeHierarchy.h>
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

DateTimeHierarchy::DateTimeHierarchy() : 
    m_hierarchyIdHasBeenSet(false),
    m_drillDownFiltersHasBeenSet(false)
{
}

DateTimeHierarchy::DateTimeHierarchy(JsonView jsonValue) : 
    m_hierarchyIdHasBeenSet(false),
    m_drillDownFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

DateTimeHierarchy& DateTimeHierarchy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HierarchyId"))
  {
    m_hierarchyId = jsonValue.GetString("HierarchyId");

    m_hierarchyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DrillDownFilters"))
  {
    Aws::Utils::Array<JsonView> drillDownFiltersJsonList = jsonValue.GetArray("DrillDownFilters");
    for(unsigned drillDownFiltersIndex = 0; drillDownFiltersIndex < drillDownFiltersJsonList.GetLength(); ++drillDownFiltersIndex)
    {
      m_drillDownFilters.push_back(drillDownFiltersJsonList[drillDownFiltersIndex].AsObject());
    }
    m_drillDownFiltersHasBeenSet = true;
  }

  return *this;
}

JsonValue DateTimeHierarchy::Jsonize() const
{
  JsonValue payload;

  if(m_hierarchyIdHasBeenSet)
  {
   payload.WithString("HierarchyId", m_hierarchyId);

  }

  if(m_drillDownFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> drillDownFiltersJsonList(m_drillDownFilters.size());
   for(unsigned drillDownFiltersIndex = 0; drillDownFiltersIndex < drillDownFiltersJsonList.GetLength(); ++drillDownFiltersIndex)
   {
     drillDownFiltersJsonList[drillDownFiltersIndex].AsObject(m_drillDownFilters[drillDownFiltersIndex].Jsonize());
   }
   payload.WithArray("DrillDownFilters", std::move(drillDownFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
