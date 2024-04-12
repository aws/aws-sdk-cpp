/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateEventBridgeRuleTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEventBridgeRuleTemplateRequest::UpdateEventBridgeRuleTemplateRequest() : 
    m_descriptionHasBeenSet(false),
    m_eventTargetsHasBeenSet(false),
    m_eventType(EventBridgeRuleTemplateEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_groupIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateEventBridgeRuleTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_eventTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventTargetsJsonList(m_eventTargets.size());
   for(unsigned eventTargetsIndex = 0; eventTargetsIndex < eventTargetsJsonList.GetLength(); ++eventTargetsIndex)
   {
     eventTargetsJsonList[eventTargetsIndex].AsObject(m_eventTargets[eventTargetsIndex].Jsonize());
   }
   payload.WithArray("eventTargets", std::move(eventTargetsJsonList));

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", EventBridgeRuleTemplateEventTypeMapper::GetNameForEventBridgeRuleTemplateEventType(m_eventType));
  }

  if(m_groupIdentifierHasBeenSet)
  {
   payload.WithString("groupIdentifier", m_groupIdentifier);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload.View().WriteReadable();
}




