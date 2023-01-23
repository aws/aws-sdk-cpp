/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/GetCellResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCellResult::GetCellResult()
{
}

GetCellResult::GetCellResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCellResult& GetCellResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("cellArn"))
  {
    m_cellArn = jsonValue.GetString("cellArn");

  }

  if(jsonValue.ValueExists("cellName"))
  {
    m_cellName = jsonValue.GetString("cellName");

  }

  if(jsonValue.ValueExists("cells"))
  {
    Aws::Utils::Array<JsonView> cellsJsonList = jsonValue.GetArray("cells");
    for(unsigned cellsIndex = 0; cellsIndex < cellsJsonList.GetLength(); ++cellsIndex)
    {
      m_cells.push_back(cellsJsonList[cellsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("parentReadinessScopes"))
  {
    Aws::Utils::Array<JsonView> parentReadinessScopesJsonList = jsonValue.GetArray("parentReadinessScopes");
    for(unsigned parentReadinessScopesIndex = 0; parentReadinessScopesIndex < parentReadinessScopesJsonList.GetLength(); ++parentReadinessScopesIndex)
    {
      m_parentReadinessScopes.push_back(parentReadinessScopesJsonList[parentReadinessScopesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
