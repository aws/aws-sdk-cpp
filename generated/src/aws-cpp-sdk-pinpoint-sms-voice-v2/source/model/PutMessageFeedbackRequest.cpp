/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/PutMessageFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutMessageFeedbackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("MessageId", m_messageId);

  }

  if(m_messageFeedbackStatusHasBeenSet)
  {
   payload.WithString("MessageFeedbackStatus", MessageFeedbackStatusMapper::GetNameForMessageFeedbackStatus(m_messageFeedbackStatus));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutMessageFeedbackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.PutMessageFeedback"));
  return headers;

}




