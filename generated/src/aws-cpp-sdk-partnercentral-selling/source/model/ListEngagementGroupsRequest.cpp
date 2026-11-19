/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/ListEngagementGroupsRequest.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListEngagementGroupsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_readinessLevelHasBeenSet) {
    payload.WithString("ReadinessLevel", ReadinessLevelMapper::GetNameForReadinessLevel(m_readinessLevel));
  }

  if (m_sortHasBeenSet) {
    payload.WithObject("Sort", m_sort.Jsonize());
  }

  if (m_engagementGroupIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> engagementGroupIdentifiersJsonList(m_engagementGroupIdentifiers.size());
    for (unsigned engagementGroupIdentifiersIndex = 0; engagementGroupIdentifiersIndex < engagementGroupIdentifiersJsonList.GetLength();
         ++engagementGroupIdentifiersIndex) {
      engagementGroupIdentifiersJsonList[engagementGroupIdentifiersIndex].AsString(
          m_engagementGroupIdentifiers[engagementGroupIdentifiersIndex]);
    }
    payload.WithArray("EngagementGroupIdentifiers", std::move(engagementGroupIdentifiersJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEngagementGroupsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.ListEngagementGroups"));
  return headers;
}
