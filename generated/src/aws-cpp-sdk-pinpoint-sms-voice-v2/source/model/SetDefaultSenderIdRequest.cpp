/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SetDefaultSenderIdRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetDefaultSenderIdRequest::SetDefaultSenderIdRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_senderIdHasBeenSet(false)
{
}

Aws::String SetDefaultSenderIdRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationSetNameHasBeenSet)
  {
   payload.WithString("ConfigurationSetName", m_configurationSetName);

  }

  if(m_senderIdHasBeenSet)
  {
   payload.WithString("SenderId", m_senderId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetDefaultSenderIdRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.SetDefaultSenderId"));
  return headers;

}




