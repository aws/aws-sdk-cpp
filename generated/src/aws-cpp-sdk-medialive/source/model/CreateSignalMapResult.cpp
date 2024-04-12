/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CreateSignalMapResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSignalMapResult::CreateSignalMapResult() : 
    m_monitorChangesPendingDeployment(false),
    m_status(SignalMapStatus::NOT_SET)
{
}

CreateSignalMapResult::CreateSignalMapResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_monitorChangesPendingDeployment(false),
    m_status(SignalMapStatus::NOT_SET)
{
  *this = result;
}

CreateSignalMapResult& CreateSignalMapResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("cloudWatchAlarmTemplateGroupIds"))
  {
    Aws::Utils::Array<JsonView> cloudWatchAlarmTemplateGroupIdsJsonList = jsonValue.GetArray("cloudWatchAlarmTemplateGroupIds");
    for(unsigned cloudWatchAlarmTemplateGroupIdsIndex = 0; cloudWatchAlarmTemplateGroupIdsIndex < cloudWatchAlarmTemplateGroupIdsJsonList.GetLength(); ++cloudWatchAlarmTemplateGroupIdsIndex)
    {
      m_cloudWatchAlarmTemplateGroupIds.push_back(cloudWatchAlarmTemplateGroupIdsJsonList[cloudWatchAlarmTemplateGroupIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("discoveryEntryPointArn"))
  {
    m_discoveryEntryPointArn = jsonValue.GetString("discoveryEntryPointArn");

  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

  }

  if(jsonValue.ValueExists("eventBridgeRuleTemplateGroupIds"))
  {
    Aws::Utils::Array<JsonView> eventBridgeRuleTemplateGroupIdsJsonList = jsonValue.GetArray("eventBridgeRuleTemplateGroupIds");
    for(unsigned eventBridgeRuleTemplateGroupIdsIndex = 0; eventBridgeRuleTemplateGroupIdsIndex < eventBridgeRuleTemplateGroupIdsJsonList.GetLength(); ++eventBridgeRuleTemplateGroupIdsIndex)
    {
      m_eventBridgeRuleTemplateGroupIds.push_back(eventBridgeRuleTemplateGroupIdsJsonList[eventBridgeRuleTemplateGroupIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("failedMediaResourceMap"))
  {
    Aws::Map<Aws::String, JsonView> failedMediaResourceMapJsonMap = jsonValue.GetObject("failedMediaResourceMap").GetAllObjects();
    for(auto& failedMediaResourceMapItem : failedMediaResourceMapJsonMap)
    {
      m_failedMediaResourceMap[failedMediaResourceMapItem.first] = failedMediaResourceMapItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("lastDiscoveredAt"))
  {
    m_lastDiscoveredAt = jsonValue.GetString("lastDiscoveredAt");

  }

  if(jsonValue.ValueExists("lastSuccessfulMonitorDeployment"))
  {
    m_lastSuccessfulMonitorDeployment = jsonValue.GetObject("lastSuccessfulMonitorDeployment");

  }

  if(jsonValue.ValueExists("mediaResourceMap"))
  {
    Aws::Map<Aws::String, JsonView> mediaResourceMapJsonMap = jsonValue.GetObject("mediaResourceMap").GetAllObjects();
    for(auto& mediaResourceMapItem : mediaResourceMapJsonMap)
    {
      m_mediaResourceMap[mediaResourceMapItem.first] = mediaResourceMapItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");

  }

  if(jsonValue.ValueExists("monitorChangesPendingDeployment"))
  {
    m_monitorChangesPendingDeployment = jsonValue.GetBool("monitorChangesPendingDeployment");

  }

  if(jsonValue.ValueExists("monitorDeployment"))
  {
    m_monitorDeployment = jsonValue.GetObject("monitorDeployment");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SignalMapStatusMapper::GetSignalMapStatusForName(jsonValue.GetString("status"));

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
