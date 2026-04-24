/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/CarrierLookupRequest.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CarrierLookupRequest::SerializePayload() const {
  JsonValue payload;

  if (m_phoneNumberHasBeenSet) {
    payload.WithString("PhoneNumber", m_phoneNumber);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CarrierLookupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.CarrierLookup"));
  return headers;
}
