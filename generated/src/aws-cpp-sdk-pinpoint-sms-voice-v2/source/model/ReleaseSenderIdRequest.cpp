/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ReleaseSenderIdRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ReleaseSenderIdRequest::ReleaseSenderIdRequest() : 
    m_senderIdHasBeenSet(false),
    m_isoCountryCodeHasBeenSet(false)
{
}

Aws::String ReleaseSenderIdRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_senderIdHasBeenSet)
  {
   payload.WithString("SenderId", m_senderId);

  }

  if(m_isoCountryCodeHasBeenSet)
  {
   payload.WithString("IsoCountryCode", m_isoCountryCode);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ReleaseSenderIdRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.ReleaseSenderId"));
  return headers;

}




