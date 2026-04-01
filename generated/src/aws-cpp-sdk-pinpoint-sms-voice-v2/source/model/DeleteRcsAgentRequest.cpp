/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteRcsAgentRequest.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteRcsAgentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_rcsAgentIdHasBeenSet) {
    payload.WithString("RcsAgentId", m_rcsAgentId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteRcsAgentRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DeleteRcsAgent"));
  return headers;
}
