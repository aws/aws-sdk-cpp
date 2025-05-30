﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/CreateCellResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateCellResult::CreateCellResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateCellResult& CreateCellResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
