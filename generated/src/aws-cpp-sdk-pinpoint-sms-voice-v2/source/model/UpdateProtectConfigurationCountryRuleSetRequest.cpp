/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/UpdateProtectConfigurationCountryRuleSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProtectConfigurationCountryRuleSetRequest::UpdateProtectConfigurationCountryRuleSetRequest() : 
    m_protectConfigurationIdHasBeenSet(false),
    m_numberCapability(NumberCapability::NOT_SET),
    m_numberCapabilityHasBeenSet(false),
    m_countryRuleSetUpdatesHasBeenSet(false)
{
}

Aws::String UpdateProtectConfigurationCountryRuleSetRequest::SerializePayload() const
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

  if(m_countryRuleSetUpdatesHasBeenSet)
  {
   JsonValue countryRuleSetUpdatesJsonMap;
   for(auto& countryRuleSetUpdatesItem : m_countryRuleSetUpdates)
   {
     countryRuleSetUpdatesJsonMap.WithObject(countryRuleSetUpdatesItem.first, countryRuleSetUpdatesItem.second.Jsonize());
   }
   payload.WithObject("CountryRuleSetUpdates", std::move(countryRuleSetUpdatesJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProtectConfigurationCountryRuleSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.UpdateProtectConfigurationCountryRuleSet"));
  return headers;

}




