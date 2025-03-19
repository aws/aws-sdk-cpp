/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/CreateMonitorResult.h>
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

CreateMonitorResult::CreateMonitorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateMonitorResult& CreateMonitorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("monitorArn"))
  {
    m_monitorArn = jsonValue.GetString("monitorArn");
    m_monitorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("monitorName"))
  {
    m_monitorName = jsonValue.GetString("monitorName");
    m_monitorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("monitorStatus"))
  {
    m_monitorStatus = MonitorStatusMapper::GetMonitorStatusForName(jsonValue.GetString("monitorStatus"));
    m_monitorStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("localResources"))
  {
    Aws::Utils::Array<JsonView> localResourcesJsonList = jsonValue.GetArray("localResources");
    for(unsigned localResourcesIndex = 0; localResourcesIndex < localResourcesJsonList.GetLength(); ++localResourcesIndex)
    {
      m_localResources.push_back(localResourcesJsonList[localResourcesIndex].AsObject());
    }
    m_localResourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("remoteResources"))
  {
    Aws::Utils::Array<JsonView> remoteResourcesJsonList = jsonValue.GetArray("remoteResources");
    for(unsigned remoteResourcesIndex = 0; remoteResourcesIndex < remoteResourcesJsonList.GetLength(); ++remoteResourcesIndex)
    {
      m_remoteResources.push_back(remoteResourcesJsonList[remoteResourcesIndex].AsObject());
    }
    m_remoteResourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");
    m_modifiedAtHasBeenSet = true;
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
