/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/GetEventBridgeRuleTemplateResult.h>
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

GetEventBridgeRuleTemplateResult::GetEventBridgeRuleTemplateResult() : 
    m_eventType(EventBridgeRuleTemplateEventType::NOT_SET)
{
}

GetEventBridgeRuleTemplateResult::GetEventBridgeRuleTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_eventType(EventBridgeRuleTemplateEventType::NOT_SET)
{
  *this = result;
}

GetEventBridgeRuleTemplateResult& GetEventBridgeRuleTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("eventTargets"))
  {
    Aws::Utils::Array<JsonView> eventTargetsJsonList = jsonValue.GetArray("eventTargets");
    for(unsigned eventTargetsIndex = 0; eventTargetsIndex < eventTargetsJsonList.GetLength(); ++eventTargetsIndex)
    {
      m_eventTargets.push_back(eventTargetsJsonList[eventTargetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = EventBridgeRuleTemplateEventTypeMapper::GetEventBridgeRuleTemplateEventTypeForName(jsonValue.GetString("eventType"));

  }

  if(jsonValue.ValueExists("groupId"))
  {
    m_groupId = jsonValue.GetString("groupId");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

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
