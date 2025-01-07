/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/GetMonitorResult.h>
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

GetMonitorResult::GetMonitorResult() : 
    m_monitorStatus(MonitorStatus::NOT_SET)
{
}

GetMonitorResult::GetMonitorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetMonitorResult()
{
  *this = result;
}

GetMonitorResult& GetMonitorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("monitorArn"))
  {
    m_monitorArn = jsonValue.GetString("monitorArn");

  }

  if(jsonValue.ValueExists("monitorName"))
  {
    m_monitorName = jsonValue.GetString("monitorName");

  }

  if(jsonValue.ValueExists("monitorStatus"))
  {
    m_monitorStatus = MonitorStatusMapper::GetMonitorStatusForName(jsonValue.GetString("monitorStatus"));

  }

  if(jsonValue.ValueExists("localResources"))
  {
    Aws::Utils::Array<JsonView> localResourcesJsonList = jsonValue.GetArray("localResources");
    for(unsigned localResourcesIndex = 0; localResourcesIndex < localResourcesJsonList.GetLength(); ++localResourcesIndex)
    {
      m_localResources.push_back(localResourcesJsonList[localResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("remoteResources"))
  {
    Aws::Utils::Array<JsonView> remoteResourcesJsonList = jsonValue.GetArray("remoteResources");
    for(unsigned remoteResourcesIndex = 0; remoteResourcesIndex < remoteResourcesJsonList.GetLength(); ++remoteResourcesIndex)
    {
      m_remoteResources.push_back(remoteResourcesJsonList[remoteResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");

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
