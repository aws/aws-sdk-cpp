﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/UpdateScopeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkFlowMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateScopeResult::UpdateScopeResult() : 
    m_status(ScopeStatus::NOT_SET)
{
}

UpdateScopeResult::UpdateScopeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateScopeResult()
{
  *this = result;
}

UpdateScopeResult& UpdateScopeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("scopeId"))
  {
    m_scopeId = jsonValue.GetString("scopeId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ScopeStatusMapper::GetScopeStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("scopeArn"))
  {
    m_scopeArn = jsonValue.GetString("scopeArn");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
