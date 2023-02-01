/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/UpdateEventDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEventDestinationRequest::UpdateEventDestinationRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_eventDestinationNameHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_matchingEventTypesHasBeenSet(false),
    m_cloudWatchLogsDestinationHasBeenSet(false),
    m_kinesisFirehoseDestinationHasBeenSet(false),
    m_snsDestinationHasBeenSet(false)
{
}

Aws::String UpdateEventDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationSetNameHasBeenSet)
  {
   payload.WithString("ConfigurationSetName", m_configurationSetName);

  }

  if(m_eventDestinationNameHasBeenSet)
  {
   payload.WithString("EventDestinationName", m_eventDestinationName);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_matchingEventTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchingEventTypesJsonList(m_matchingEventTypes.size());
   for(unsigned matchingEventTypesIndex = 0; matchingEventTypesIndex < matchingEventTypesJsonList.GetLength(); ++matchingEventTypesIndex)
   {
     matchingEventTypesJsonList[matchingEventTypesIndex].AsString(EventTypeMapper::GetNameForEventType(m_matchingEventTypes[matchingEventTypesIndex]));
   }
   payload.WithArray("MatchingEventTypes", std::move(matchingEventTypesJsonList));

  }

  if(m_cloudWatchLogsDestinationHasBeenSet)
  {
   payload.WithObject("CloudWatchLogsDestination", m_cloudWatchLogsDestination.Jsonize());

  }

  if(m_kinesisFirehoseDestinationHasBeenSet)
  {
   payload.WithObject("KinesisFirehoseDestination", m_kinesisFirehoseDestination.Jsonize());

  }

  if(m_snsDestinationHasBeenSet)
  {
   payload.WithObject("SnsDestination", m_snsDestination.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEventDestinationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.UpdateEventDestination"));
  return headers;

}




