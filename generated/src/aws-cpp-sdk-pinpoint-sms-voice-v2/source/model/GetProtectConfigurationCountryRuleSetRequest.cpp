/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/GetProtectConfigurationCountryRuleSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetProtectConfigurationCountryRuleSetRequest::GetProtectConfigurationCountryRuleSetRequest() : 
    m_protectConfigurationIdHasBeenSet(false),
    m_numberCapability(NumberCapability::NOT_SET),
    m_numberCapabilityHasBeenSet(false)
{
}

Aws::String GetProtectConfigurationCountryRuleSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_protectConfigurationIdHasBeenSet)
  {
   payload.WithString("ProtectConfigurationId", m_protectConfigurationId);

  }

  if(m_numberCapabilityHasBeenSet)
  {
   payload.WithString("NumberCapability", NumberCapabilityMapper::GetNameForNumberCapability(m_numberCapability));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetProtectConfigurationCountryRuleSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.GetProtectConfigurationCountryRuleSet"));
  return headers;

}




