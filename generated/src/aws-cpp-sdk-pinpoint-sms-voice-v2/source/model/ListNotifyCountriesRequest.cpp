/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/ListNotifyCountriesRequest.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListNotifyCountriesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_channelsHasBeenSet) {
    Aws::Utils::Array<JsonValue> channelsJsonList(m_channels.size());
    for (unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex) {
      channelsJsonList[channelsIndex].AsString(NumberCapabilityMapper::GetNameForNumberCapability(m_channels[channelsIndex]));
    }
    payload.WithArray("Channels", std::move(channelsJsonList));
  }

  if (m_useCasesHasBeenSet) {
    Aws::Utils::Array<JsonValue> useCasesJsonList(m_useCases.size());
    for (unsigned useCasesIndex = 0; useCasesIndex < useCasesJsonList.GetLength(); ++useCasesIndex) {
      useCasesJsonList[useCasesIndex].AsString(
          NotifyConfigurationUseCaseMapper::GetNameForNotifyConfigurationUseCase(m_useCases[useCasesIndex]));
    }
    payload.WithArray("UseCases", std::move(useCasesJsonList));
  }

  if (m_tierHasBeenSet) {
    payload.WithString("Tier", NotifyConfigurationTierMapper::GetNameForNotifyConfigurationTier(m_tier));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListNotifyCountriesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.ListNotifyCountries"));
  return headers;
}
