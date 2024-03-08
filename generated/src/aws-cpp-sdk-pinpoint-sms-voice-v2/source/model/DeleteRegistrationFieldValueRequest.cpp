/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DeleteRegistrationFieldValueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRegistrationFieldValueRequest::DeleteRegistrationFieldValueRequest() : 
    m_registrationIdHasBeenSet(false),
    m_fieldPathHasBeenSet(false)
{
}

Aws::String DeleteRegistrationFieldValueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registrationIdHasBeenSet)
  {
   payload.WithString("RegistrationId", m_registrationId);

  }

  if(m_fieldPathHasBeenSet)
  {
   payload.WithString("FieldPath", m_fieldPath);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteRegistrationFieldValueRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DeleteRegistrationFieldValue"));
  return headers;

}




