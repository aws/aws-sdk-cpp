/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SendTextMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendTextMessageRequest::SerializePayload() const
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

  if(m_messageTypeHasBeenSet)
  {
   payload.WithString("MessageType", MessageTypeMapper::GetNameForMessageType(m_messageType));
  }

  if(m_keywordHasBeenSet)
  {
   payload.WithString("Keyword", m_keyword);

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

  if(m_destinationCountryParametersHasBeenSet)
  {
   JsonValue destinationCountryParametersJsonMap;
   for(auto& destinationCountryParametersItem : m_destinationCountryParameters)
   {
     destinationCountryParametersJsonMap.WithString(DestinationCountryParameterKeyMapper::GetNameForDestinationCountryParameterKey(destinationCountryParametersItem.first), destinationCountryParametersItem.second);
   }
   payload.WithObject("DestinationCountryParameters", std::move(destinationCountryParametersJsonMap));

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  if(m_protectConfigurationIdHasBeenSet)
  {
   payload.WithString("ProtectConfigurationId", m_protectConfigurationId);

  }

  if(m_messageFeedbackEnabledHasBeenSet)
  {
   payload.WithBool("MessageFeedbackEnabled", m_messageFeedbackEnabled);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendTextMessageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.SendTextMessage"));
  return headers;

}




