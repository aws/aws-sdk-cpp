/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/CreateEventDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEventDestinationRequest::CreateEventDestinationRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_eventDestinationNameHasBeenSet(false),
    m_matchingEventTypesHasBeenSet(false),
    m_cloudWatchLogsDestinationHasBeenSet(false),
    m_kinesisFirehoseDestinationHasBeenSet(false),
    m_snsDestinationHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateEventDestinationRequest::SerializePayload() const
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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEventDestinationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.CreateEventDestination"));
  return headers;

}




