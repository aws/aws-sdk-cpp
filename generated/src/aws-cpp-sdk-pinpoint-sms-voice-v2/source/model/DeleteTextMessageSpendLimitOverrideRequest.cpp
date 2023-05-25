/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DeleteTextMessageSpendLimitOverrideRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTextMessageSpendLimitOverrideRequest::DeleteTextMessageSpendLimitOverrideRequest()
{
}

Aws::String DeleteTextMessageSpendLimitOverrideRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection DeleteTextMessageSpendLimitOverrideRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DeleteTextMessageSpendLimitOverride"));
  return headers;

}




