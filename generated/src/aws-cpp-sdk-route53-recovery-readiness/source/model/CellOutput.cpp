/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/CellOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

CellOutput::CellOutput() : 
    m_cellArnHasBeenSet(false),
    m_cellNameHasBeenSet(false),
    m_cellsHasBeenSet(false),
    m_parentReadinessScopesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CellOutput::CellOutput(JsonView jsonValue) : 
    m_cellArnHasBeenSet(false),
    m_cellNameHasBeenSet(false),
    m_cellsHasBeenSet(false),
    m_parentReadinessScopesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

CellOutput& CellOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cellArn"))
  {
    m_cellArn = jsonValue.GetString("cellArn");

    m_cellArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cellName"))
  {
    m_cellName = jsonValue.GetString("cellName");

    m_cellNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cells"))
  {
    Aws::Utils::Array<JsonView> cellsJsonList = jsonValue.GetArray("cells");
    for(unsigned cellsIndex = 0; cellsIndex < cellsJsonList.GetLength(); ++cellsIndex)
    {
      m_cells.push_back(cellsJsonList[cellsIndex].AsString());
    }
    m_cellsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentReadinessScopes"))
  {
    Aws::Utils::Array<JsonView> parentReadinessScopesJsonList = jsonValue.GetArray("parentReadinessScopes");
    for(unsigned parentReadinessScopesIndex = 0; parentReadinessScopesIndex < parentReadinessScopesJsonList.GetLength(); ++parentReadinessScopesIndex)
    {
      m_parentReadinessScopes.push_back(parentReadinessScopesJsonList[parentReadinessScopesIndex].AsString());
    }
    m_parentReadinessScopesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue CellOutput::Jsonize() const
{
  JsonValue payload;

  if(m_cellArnHasBeenSet)
  {
   payload.WithString("cellArn", m_cellArn);

  }

  if(m_cellNameHasBeenSet)
  {
   payload.WithString("cellName", m_cellName);

  }

  if(m_cellsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cellsJsonList(m_cells.size());
   for(unsigned cellsIndex = 0; cellsIndex < cellsJsonList.GetLength(); ++cellsIndex)
   {
     cellsJsonList[cellsIndex].AsString(m_cells[cellsIndex]);
   }
   payload.WithArray("cells", std::move(cellsJsonList));

  }

  if(m_parentReadinessScopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parentReadinessScopesJsonList(m_parentReadinessScopes.size());
   for(unsigned parentReadinessScopesIndex = 0; parentReadinessScopesIndex < parentReadinessScopesJsonList.GetLength(); ++parentReadinessScopesIndex)
   {
     parentReadinessScopesJsonList[parentReadinessScopesIndex].AsString(m_parentReadinessScopes[parentReadinessScopesIndex]);
   }
   payload.WithArray("parentReadinessScopes", std::move(parentReadinessScopesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
