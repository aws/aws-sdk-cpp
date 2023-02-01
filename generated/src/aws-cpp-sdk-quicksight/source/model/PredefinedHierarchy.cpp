/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PredefinedHierarchy.h>
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

PredefinedHierarchy::PredefinedHierarchy() : 
    m_hierarchyIdHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_drillDownFiltersHasBeenSet(false)
{
}

PredefinedHierarchy::PredefinedHierarchy(JsonView jsonValue) : 
    m_hierarchyIdHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_drillDownFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

PredefinedHierarchy& PredefinedHierarchy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HierarchyId"))
  {
    m_hierarchyId = jsonValue.GetString("HierarchyId");

    m_hierarchyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Columns"))
  {
    Aws::Utils::Array<JsonView> columnsJsonList = jsonValue.GetArray("Columns");
    for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
    {
      m_columns.push_back(columnsJsonList[columnsIndex].AsObject());
    }
    m_columnsHasBeenSet = true;
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

JsonValue PredefinedHierarchy::Jsonize() const
{
  JsonValue payload;

  if(m_hierarchyIdHasBeenSet)
  {
   payload.WithString("HierarchyId", m_hierarchyId);

  }

  if(m_columnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnsJsonList(m_columns.size());
   for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
   {
     columnsJsonList[columnsIndex].AsObject(m_columns[columnsIndex].Jsonize());
   }
   payload.WithArray("Columns", std::move(columnsJsonList));

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
