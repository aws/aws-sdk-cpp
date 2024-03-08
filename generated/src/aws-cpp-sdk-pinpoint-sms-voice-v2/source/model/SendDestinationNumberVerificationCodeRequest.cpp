/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SendDestinationNumberVerificationCodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendDestinationNumberVerificationCodeRequest::SendDestinationNumberVerificationCodeRequest() : 
    m_verifiedDestinationNumberIdHasBeenSet(false),
    m_verificationChannel(VerificationChannel::NOT_SET),
    m_verificationChannelHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_originationIdentityHasBeenSet(false),
    m_configurationSetNameHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_destinationCountryParametersHasBeenSet(false)
{
}

Aws::String SendDestinationNumberVerificationCodeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_verifiedDestinationNumberIdHasBeenSet)
  {
   payload.WithString("VerifiedDestinationNumberId", m_verifiedDestinationNumberId);

  }

  if(m_verificationChannelHasBeenSet)
  {
   payload.WithString("VerificationChannel", VerificationChannelMapper::GetNameForVerificationChannel(m_verificationChannel));
  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_languageCode));
  }

  if(m_originationIdentityHasBeenSet)
  {
   payload.WithString("OriginationIdentity", m_originationIdentity);

  }

  if(m_configurationSetNameHasBeenSet)
  {
   payload.WithString("ConfigurationSetName", m_configurationSetName);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendDestinationNumberVerificationCodeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.SendDestinationNumberVerificationCode"));
  return headers;

}




