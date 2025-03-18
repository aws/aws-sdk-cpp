/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/GetEventRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEventRuleResult::GetEventRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEventRuleResult& GetEventRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notificationConfigurationArn"))
  {
    m_notificationConfigurationArn = jsonValue.GetString("notificationConfigurationArn");
    m_notificationConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = jsonValue.GetString("eventType");
    m_eventTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventPattern"))
  {
    m_eventPattern = jsonValue.GetString("eventPattern");
    m_eventPatternHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regions"))
  {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedRules"))
  {
    Aws::Utils::Array<JsonView> managedRulesJsonList = jsonValue.GetArray("managedRules");
    for(unsigned managedRulesIndex = 0; managedRulesIndex < managedRulesJsonList.GetLength(); ++managedRulesIndex)
    {
      m_managedRules.push_back(managedRulesJsonList[managedRulesIndex].AsString());
    }
    m_managedRulesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusSummaryByRegion"))
  {
    Aws::Map<Aws::String, JsonView> statusSummaryByRegionJsonMap = jsonValue.GetObject("statusSummaryByRegion").GetAllObjects();
    for(auto& statusSummaryByRegionItem : statusSummaryByRegionJsonMap)
    {
      m_statusSummaryByRegion[statusSummaryByRegionItem.first] = statusSummaryByRegionItem.second.AsObject();
    }
    m_statusSummaryByRegionHasBeenSet = true;
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
