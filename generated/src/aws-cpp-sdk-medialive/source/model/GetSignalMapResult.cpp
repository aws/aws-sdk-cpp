/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/GetSignalMapResult.h>
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

GetSignalMapResult::GetSignalMapResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSignalMapResult& GetSignalMapResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cloudWatchAlarmTemplateGroupIds"))
  {
    Aws::Utils::Array<JsonView> cloudWatchAlarmTemplateGroupIdsJsonList = jsonValue.GetArray("cloudWatchAlarmTemplateGroupIds");
    for(unsigned cloudWatchAlarmTemplateGroupIdsIndex = 0; cloudWatchAlarmTemplateGroupIdsIndex < cloudWatchAlarmTemplateGroupIdsJsonList.GetLength(); ++cloudWatchAlarmTemplateGroupIdsIndex)
    {
      m_cloudWatchAlarmTemplateGroupIds.push_back(cloudWatchAlarmTemplateGroupIdsJsonList[cloudWatchAlarmTemplateGroupIdsIndex].AsString());
    }
    m_cloudWatchAlarmTemplateGroupIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("discoveryEntryPointArn"))
  {
    m_discoveryEntryPointArn = jsonValue.GetString("discoveryEntryPointArn");
    m_discoveryEntryPointArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventBridgeRuleTemplateGroupIds"))
  {
    Aws::Utils::Array<JsonView> eventBridgeRuleTemplateGroupIdsJsonList = jsonValue.GetArray("eventBridgeRuleTemplateGroupIds");
    for(unsigned eventBridgeRuleTemplateGroupIdsIndex = 0; eventBridgeRuleTemplateGroupIdsIndex < eventBridgeRuleTemplateGroupIdsJsonList.GetLength(); ++eventBridgeRuleTemplateGroupIdsIndex)
    {
      m_eventBridgeRuleTemplateGroupIds.push_back(eventBridgeRuleTemplateGroupIdsJsonList[eventBridgeRuleTemplateGroupIdsIndex].AsString());
    }
    m_eventBridgeRuleTemplateGroupIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failedMediaResourceMap"))
  {
    Aws::Map<Aws::String, JsonView> failedMediaResourceMapJsonMap = jsonValue.GetObject("failedMediaResourceMap").GetAllObjects();
    for(auto& failedMediaResourceMapItem : failedMediaResourceMapJsonMap)
    {
      m_failedMediaResourceMap[failedMediaResourceMapItem.first] = failedMediaResourceMapItem.second.AsObject();
    }
    m_failedMediaResourceMapHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastDiscoveredAt"))
  {
    m_lastDiscoveredAt = jsonValue.GetString("lastDiscoveredAt");
    m_lastDiscoveredAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastSuccessfulMonitorDeployment"))
  {
    m_lastSuccessfulMonitorDeployment = jsonValue.GetObject("lastSuccessfulMonitorDeployment");
    m_lastSuccessfulMonitorDeploymentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mediaResourceMap"))
  {
    Aws::Map<Aws::String, JsonView> mediaResourceMapJsonMap = jsonValue.GetObject("mediaResourceMap").GetAllObjects();
    for(auto& mediaResourceMapItem : mediaResourceMapJsonMap)
    {
      m_mediaResourceMap[mediaResourceMapItem.first] = mediaResourceMapItem.second.AsObject();
    }
    m_mediaResourceMapHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("monitorChangesPendingDeployment"))
  {
    m_monitorChangesPendingDeployment = jsonValue.GetBool("monitorChangesPendingDeployment");
    m_monitorChangesPendingDeploymentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("monitorDeployment"))
  {
    m_monitorDeployment = jsonValue.GetObject("monitorDeployment");
    m_monitorDeploymentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = SignalMapStatusMapper::GetSignalMapStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
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
