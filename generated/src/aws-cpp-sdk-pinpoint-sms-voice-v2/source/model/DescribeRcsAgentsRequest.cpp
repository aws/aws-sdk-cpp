/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRcsAgentsRequest.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeRcsAgentsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_rcsAgentIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> rcsAgentIdsJsonList(m_rcsAgentIds.size());
    for (unsigned rcsAgentIdsIndex = 0; rcsAgentIdsIndex < rcsAgentIdsJsonList.GetLength(); ++rcsAgentIdsIndex) {
      rcsAgentIdsJsonList[rcsAgentIdsIndex].AsString(m_rcsAgentIds[rcsAgentIdsIndex]);
    }
    payload.WithArray("RcsAgentIds", std::move(rcsAgentIdsJsonList));
  }

  if (m_ownerHasBeenSet) {
    payload.WithString("Owner", OwnerMapper::GetNameForOwner(m_owner));
  }

  if (m_filtersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
    }
    payload.WithArray("Filters", std::move(filtersJsonList));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRcsAgentsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DescribeRcsAgents"));
  return headers;
}
