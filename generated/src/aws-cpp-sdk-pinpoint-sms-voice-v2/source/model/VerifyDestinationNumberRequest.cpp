/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/VerifyDestinationNumberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

VerifyDestinationNumberRequest::VerifyDestinationNumberRequest() : 
    m_verifiedDestinationNumberIdHasBeenSet(false),
    m_verificationCodeHasBeenSet(false)
{
}

Aws::String VerifyDestinationNumberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_verifiedDestinationNumberIdHasBeenSet)
  {
   payload.WithString("VerifiedDestinationNumberId", m_verifiedDestinationNumberId);

  }

  if(m_verificationCodeHasBeenSet)
  {
   payload.WithString("VerificationCode", m_verificationCode);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection VerifyDestinationNumberRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.VerifyDestinationNumber"));
  return headers;

}




