/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/StartUpdateSignalMapRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartUpdateSignalMapRequest::StartUpdateSignalMapRequest() : 
    m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_discoveryEntryPointArnHasBeenSet(false),
    m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet(false),
    m_forceRediscovery(false),
    m_forceRediscoveryHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String StartUpdateSignalMapRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cloudWatchAlarmTemplateGroupIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cloudWatchAlarmTemplateGroupIdentifiersJsonList(m_cloudWatchAlarmTemplateGroupIdentifiers.size());
   for(unsigned cloudWatchAlarmTemplateGroupIdentifiersIndex = 0; cloudWatchAlarmTemplateGroupIdentifiersIndex < cloudWatchAlarmTemplateGroupIdentifiersJsonList.GetLength(); ++cloudWatchAlarmTemplateGroupIdentifiersIndex)
   {
     cloudWatchAlarmTemplateGroupIdentifiersJsonList[cloudWatchAlarmTemplateGroupIdentifiersIndex].AsString(m_cloudWatchAlarmTemplateGroupIdentifiers[cloudWatchAlarmTemplateGroupIdentifiersIndex]);
   }
   payload.WithArray("cloudWatchAlarmTemplateGroupIdentifiers", std::move(cloudWatchAlarmTemplateGroupIdentifiersJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_discoveryEntryPointArnHasBeenSet)
  {
   payload.WithString("discoveryEntryPointArn", m_discoveryEntryPointArn);

  }

  if(m_eventBridgeRuleTemplateGroupIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventBridgeRuleTemplateGroupIdentifiersJsonList(m_eventBridgeRuleTemplateGroupIdentifiers.size());
   for(unsigned eventBridgeRuleTemplateGroupIdentifiersIndex = 0; eventBridgeRuleTemplateGroupIdentifiersIndex < eventBridgeRuleTemplateGroupIdentifiersJsonList.GetLength(); ++eventBridgeRuleTemplateGroupIdentifiersIndex)
   {
     eventBridgeRuleTemplateGroupIdentifiersJsonList[eventBridgeRuleTemplateGroupIdentifiersIndex].AsString(m_eventBridgeRuleTemplateGroupIdentifiers[eventBridgeRuleTemplateGroupIdentifiersIndex]);
   }
   payload.WithArray("eventBridgeRuleTemplateGroupIdentifiers", std::move(eventBridgeRuleTemplateGroupIdentifiersJsonList));

  }

  if(m_forceRediscoveryHasBeenSet)
  {
   payload.WithBool("forceRediscovery", m_forceRediscovery);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload.View().WriteReadable();
}




