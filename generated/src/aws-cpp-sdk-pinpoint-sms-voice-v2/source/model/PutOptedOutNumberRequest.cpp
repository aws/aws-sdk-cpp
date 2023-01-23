/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/PutOptedOutNumberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutOptedOutNumberRequest::PutOptedOutNumberRequest() : 
    m_optOutListNameHasBeenSet(false),
    m_optedOutNumberHasBeenSet(false)
{
}

Aws::String PutOptedOutNumberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_optOutListNameHasBeenSet)
  {
   payload.WithString("OptOutListName", m_optOutListName);

  }

  if(m_optedOutNumberHasBeenSet)
  {
   payload.WithString("OptedOutNumber", m_optedOutNumber);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutOptedOutNumberRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.PutOptedOutNumber"));
  return headers;

}




