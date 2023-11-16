/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DiscardRegistrationVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DiscardRegistrationVersionRequest::DiscardRegistrationVersionRequest() : 
    m_registrationIdHasBeenSet(false)
{
}

Aws::String DiscardRegistrationVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registrationIdHasBeenSet)
  {
   payload.WithString("RegistrationId", m_registrationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DiscardRegistrationVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DiscardRegistrationVersion"));
  return headers;

}




