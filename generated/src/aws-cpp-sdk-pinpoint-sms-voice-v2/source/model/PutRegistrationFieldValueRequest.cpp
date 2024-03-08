/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/PutRegistrationFieldValueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRegistrationFieldValueRequest::PutRegistrationFieldValueRequest() : 
    m_registrationIdHasBeenSet(false),
    m_fieldPathHasBeenSet(false),
    m_selectChoicesHasBeenSet(false),
    m_textValueHasBeenSet(false),
    m_registrationAttachmentIdHasBeenSet(false)
{
}

Aws::String PutRegistrationFieldValueRequest::SerializePayload() const
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

  if(m_selectChoicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectChoicesJsonList(m_selectChoices.size());
   for(unsigned selectChoicesIndex = 0; selectChoicesIndex < selectChoicesJsonList.GetLength(); ++selectChoicesIndex)
   {
     selectChoicesJsonList[selectChoicesIndex].AsString(m_selectChoices[selectChoicesIndex]);
   }
   payload.WithArray("SelectChoices", std::move(selectChoicesJsonList));

  }

  if(m_textValueHasBeenSet)
  {
   payload.WithString("TextValue", m_textValue);

  }

  if(m_registrationAttachmentIdHasBeenSet)
  {
   payload.WithString("RegistrationAttachmentId", m_registrationAttachmentId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutRegistrationFieldValueRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.PutRegistrationFieldValue"));
  return headers;

}




