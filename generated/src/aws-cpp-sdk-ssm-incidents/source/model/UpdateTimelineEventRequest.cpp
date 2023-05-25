/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/UpdateTimelineEventRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTimelineEventRequest::UpdateTimelineEventRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_eventDataHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_eventReferencesHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_incidentRecordArnHasBeenSet(false)
{
}

Aws::String UpdateTimelineEventRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_eventDataHasBeenSet)
  {
   payload.WithString("eventData", m_eventData);

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_eventReferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventReferencesJsonList(m_eventReferences.size());
   for(unsigned eventReferencesIndex = 0; eventReferencesIndex < eventReferencesJsonList.GetLength(); ++eventReferencesIndex)
   {
     eventReferencesJsonList[eventReferencesIndex].AsObject(m_eventReferences[eventReferencesIndex].Jsonize());
   }
   payload.WithArray("eventReferences", std::move(eventReferencesJsonList));

  }

  if(m_eventTimeHasBeenSet)
  {
   payload.WithDouble("eventTime", m_eventTime.SecondsWithMSPrecision());
  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", m_eventType);

  }

  if(m_incidentRecordArnHasBeenSet)
  {
   payload.WithString("incidentRecordArn", m_incidentRecordArn);

  }

  return payload.View().WriteReadable();
}




