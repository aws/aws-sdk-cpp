/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRcsAgentCountryLaunchStatusRequest.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeRcsAgentCountryLaunchStatusRequest::SerializePayload() const {
  JsonValue payload;

  if (m_rcsAgentIdHasBeenSet) {
    payload.WithString("RcsAgentId", m_rcsAgentId);
  }

  if (m_isoCountryCodesHasBeenSet) {
    Aws::Utils::Array<JsonValue> isoCountryCodesJsonList(m_isoCountryCodes.size());
    for (unsigned isoCountryCodesIndex = 0; isoCountryCodesIndex < isoCountryCodesJsonList.GetLength(); ++isoCountryCodesIndex) {
      isoCountryCodesJsonList[isoCountryCodesIndex].AsString(m_isoCountryCodes[isoCountryCodesIndex]);
    }
    payload.WithArray("IsoCountryCodes", std::move(isoCountryCodesJsonList));
  }

  if (m_filtersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
    }
    payload.WithArray("Filters", std::move(filtersJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRcsAgentCountryLaunchStatusRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DescribeRcsAgentCountryLaunchStatus"));
  return headers;
}
