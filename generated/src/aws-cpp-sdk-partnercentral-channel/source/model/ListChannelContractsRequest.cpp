/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ListChannelContractsRequest.h>

#include <utility>

using namespace Aws::PartnerCentralChannel::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListChannelContractsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  if (m_contractTypeHasBeenSet) {
    payload.WithString("contractType", ChannelContractTypeMapper::GetNameForChannelContractType(m_contractType));
  }

  if (m_statusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusesJsonList(m_statuses.size());
    for (unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex) {
      statusesJsonList[statusesIndex].AsString(ChannelContractStatusMapper::GetNameForChannelContractStatus(m_statuses[statusesIndex]));
    }
    payload.WithArray("statuses", std::move(statusesJsonList));
  }

  if (m_contractTypeFiltersHasBeenSet) {
    payload.WithObject("contractTypeFilters", m_contractTypeFilters.Jsonize());
  }

  if (m_contractTypeSortHasBeenSet) {
    payload.WithObject("contractTypeSort", m_contractTypeSort.Jsonize());
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListChannelContractsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralChannel.ListChannelContracts"));
  return headers;
}
