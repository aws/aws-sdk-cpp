/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/UpdateSenderIdRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSenderIdRequest::UpdateSenderIdRequest() : 
    m_senderIdHasBeenSet(false),
    m_isoCountryCodeHasBeenSet(false),
    m_deletionProtectionEnabled(false),
    m_deletionProtectionEnabledHasBeenSet(false)
{
}

Aws::String UpdateSenderIdRequest::SerializePayload() const
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

  if(m_deletionProtectionEnabledHasBeenSet)
  {
   payload.WithBool("DeletionProtectionEnabled", m_deletionProtectionEnabled);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSenderIdRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.UpdateSenderId"));
  return headers;

}




