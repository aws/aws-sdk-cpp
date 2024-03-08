/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DeleteRegistrationAttachmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRegistrationAttachmentRequest::DeleteRegistrationAttachmentRequest() : 
    m_registrationAttachmentIdHasBeenSet(false)
{
}

Aws::String DeleteRegistrationAttachmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registrationAttachmentIdHasBeenSet)
  {
   payload.WithString("RegistrationAttachmentId", m_registrationAttachmentId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteRegistrationAttachmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DeleteRegistrationAttachment"));
  return headers;

}




