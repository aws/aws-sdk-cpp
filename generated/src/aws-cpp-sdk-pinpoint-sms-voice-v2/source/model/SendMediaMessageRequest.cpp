/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SendMediaMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendMediaMessageRequest::SendMediaMessageRequest() : 
    m_destinationPhoneNumberHasBeenSet(false),
    m_originationIdentityHasBeenSet(false),
    m_messageBodyHasBeenSet(false),
    m_mediaUrlsHasBeenSet(false),
    m_configurationSetNameHasBeenSet(false),
    m_maxPriceHasBeenSet(false),
    m_timeToLive(0),
    m_timeToLiveHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_protectConfigurationIdHasBeenSet(false)
{
}

Aws::String SendMediaMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationPhoneNumberHasBeenSet)
  {
   payload.WithString("DestinationPhoneNumber", m_destinationPhoneNumber);

  }

  if(m_originationIdentityHasBeenSet)
  {
   payload.WithString("OriginationIdentity", m_originationIdentity);

  }

  if(m_messageBodyHasBeenSet)
  {
   payload.WithString("MessageBody", m_messageBody);

  }

  if(m_mediaUrlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mediaUrlsJsonList(m_mediaUrls.size());
   for(unsigned mediaUrlsIndex = 0; mediaUrlsIndex < mediaUrlsJsonList.GetLength(); ++mediaUrlsIndex)
   {
     mediaUrlsJsonList[mediaUrlsIndex].AsString(m_mediaUrls[mediaUrlsIndex]);
   }
   payload.WithArray("MediaUrls", std::move(mediaUrlsJsonList));

  }

  if(m_configurationSetNameHasBeenSet)
  {
   payload.WithString("ConfigurationSetName", m_configurationSetName);

  }

  if(m_maxPriceHasBeenSet)
  {
   payload.WithString("MaxPrice", m_maxPrice);

  }

  if(m_timeToLiveHasBeenSet)
  {
   payload.WithInteger("TimeToLive", m_timeToLive);

  }

  if(m_contextHasBeenSet)
  {
   JsonValue contextJsonMap;
   for(auto& contextItem : m_context)
   {
     contextJsonMap.WithString(contextItem.first, contextItem.second);
   }
   payload.WithObject("Context", std::move(contextJsonMap));

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  if(m_protectConfigurationIdHasBeenSet)
  {
   payload.WithString("ProtectConfigurationId", m_protectConfigurationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendMediaMessageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.SendMediaMessage"));
  return headers;

}




