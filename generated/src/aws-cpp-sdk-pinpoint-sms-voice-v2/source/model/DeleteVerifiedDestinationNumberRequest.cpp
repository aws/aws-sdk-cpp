/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DeleteVerifiedDestinationNumberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteVerifiedDestinationNumberRequest::DeleteVerifiedDestinationNumberRequest() : 
    m_verifiedDestinationNumberIdHasBeenSet(false)
{
}

Aws::String DeleteVerifiedDestinationNumberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_verifiedDestinationNumberIdHasBeenSet)
  {
   payload.WithString("VerifiedDestinationNumberId", m_verifiedDestinationNumberId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteVerifiedDestinationNumberRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DeleteVerifiedDestinationNumber"));
  return headers;

}




