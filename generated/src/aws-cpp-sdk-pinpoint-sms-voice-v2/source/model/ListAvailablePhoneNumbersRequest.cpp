/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/ListAvailablePhoneNumbersRequest.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAvailablePhoneNumbersRequest::SerializePayload() const {
  JsonValue payload;

  if (m_isoCountryCodeHasBeenSet) {
    payload.WithString("IsoCountryCode", m_isoCountryCode);
  }

  if (m_numberCapabilitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> numberCapabilitiesJsonList(m_numberCapabilities.size());
    for (unsigned numberCapabilitiesIndex = 0; numberCapabilitiesIndex < numberCapabilitiesJsonList.GetLength();
         ++numberCapabilitiesIndex) {
      numberCapabilitiesJsonList[numberCapabilitiesIndex].AsString(
          NumberCapabilityMapper::GetNameForNumberCapability(m_numberCapabilities[numberCapabilitiesIndex]));
    }
    payload.WithArray("NumberCapabilities", std::move(numberCapabilitiesJsonList));
  }

  if (m_numberTypeHasBeenSet) {
    payload.WithString("NumberType", SearchableNumberTypeMapper::GetNameForSearchableNumberType(m_numberType));
  }

  if (m_registrationIdHasBeenSet) {
    payload.WithString("RegistrationId", m_registrationId);
  }

  if (m_numberPreferenceHasBeenSet) {
    Aws::Utils::Array<JsonValue> numberPreferenceJsonList(m_numberPreference.size());
    for (unsigned numberPreferenceIndex = 0; numberPreferenceIndex < numberPreferenceJsonList.GetLength(); ++numberPreferenceIndex) {
      numberPreferenceJsonList[numberPreferenceIndex].AsObject(m_numberPreference[numberPreferenceIndex].Jsonize());
    }
    payload.WithArray("NumberPreference", std::move(numberPreferenceJsonList));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAvailablePhoneNumbersRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.ListAvailablePhoneNumbers"));
  return headers;
}
