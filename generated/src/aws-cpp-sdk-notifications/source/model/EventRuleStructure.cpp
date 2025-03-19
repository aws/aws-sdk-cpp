/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/EventRuleStructure.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Notifications
{
namespace Model
{

EventRuleStructure::EventRuleStructure(JsonView jsonValue)
{
  *this = jsonValue;
}

EventRuleStructure& EventRuleStructure::operator =(JsonView jsonValue)
{
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
  return *this;
}

JsonValue EventRuleStructure::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_notificationConfigurationArnHasBeenSet)
  {
   payload.WithString("notificationConfigurationArn", m_notificationConfigurationArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", m_eventType);

  }

  if(m_eventPatternHasBeenSet)
  {
   payload.WithString("eventPattern", m_eventPattern);

  }

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("regions", std::move(regionsJsonList));

  }

  if(m_managedRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> managedRulesJsonList(m_managedRules.size());
   for(unsigned managedRulesIndex = 0; managedRulesIndex < managedRulesJsonList.GetLength(); ++managedRulesIndex)
   {
     managedRulesJsonList[managedRulesIndex].AsString(m_managedRules[managedRulesIndex]);
   }
   payload.WithArray("managedRules", std::move(managedRulesJsonList));

  }

  if(m_statusSummaryByRegionHasBeenSet)
  {
   JsonValue statusSummaryByRegionJsonMap;
   for(auto& statusSummaryByRegionItem : m_statusSummaryByRegion)
   {
     statusSummaryByRegionJsonMap.WithObject(statusSummaryByRegionItem.first, statusSummaryByRegionItem.second.Jsonize());
   }
   payload.WithObject("statusSummaryByRegion", std::move(statusSummaryByRegionJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
