/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdateNotifyConfigurationRequest.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateNotifyConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_notifyConfigurationIdHasBeenSet) {
    payload.WithString("NotifyConfigurationId", m_notifyConfigurationId);
  }

  if (m_defaultTemplateIdHasBeenSet) {
    payload.WithString("DefaultTemplateId", m_defaultTemplateId);
  }

  if (m_poolIdHasBeenSet) {
    payload.WithString("PoolId", m_poolId);
  }

  if (m_enabledCountriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> enabledCountriesJsonList(m_enabledCountries.size());
    for (unsigned enabledCountriesIndex = 0; enabledCountriesIndex < enabledCountriesJsonList.GetLength(); ++enabledCountriesIndex) {
      enabledCountriesJsonList[enabledCountriesIndex].AsString(m_enabledCountries[enabledCountriesIndex]);
    }
    payload.WithArray("EnabledCountries", std::move(enabledCountriesJsonList));
  }

  if (m_enabledChannelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> enabledChannelsJsonList(m_enabledChannels.size());
    for (unsigned enabledChannelsIndex = 0; enabledChannelsIndex < enabledChannelsJsonList.GetLength(); ++enabledChannelsIndex) {
      enabledChannelsJsonList[enabledChannelsIndex].AsString(
          NumberCapabilityMapper::GetNameForNumberCapability(m_enabledChannels[enabledChannelsIndex]));
    }
    payload.WithArray("EnabledChannels", std::move(enabledChannelsJsonList));
  }

  if (m_deletionProtectionEnabledHasBeenSet) {
    payload.WithBool("DeletionProtectionEnabled", m_deletionProtectionEnabled);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateNotifyConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.UpdateNotifyConfiguration"));
  return headers;
}
