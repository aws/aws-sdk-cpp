/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/ListAttachmentNatConfigurationsRequest.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAttachmentNatConfigurationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_coreNetworkIdHasBeenSet) {
    payload.WithString("CoreNetworkId", m_coreNetworkId);
  }

  if (m_attachmentIdHasBeenSet) {
    payload.WithString("AttachmentId", m_attachmentId);
  }

  if (m_filtersHasBeenSet) {
    JsonValue filtersJsonMap;
    for (auto& filtersItem : m_filters) {
      Aws::Utils::Array<JsonValue> filterValuesJsonList(filtersItem.second.size());
      for (unsigned filterValuesIndex = 0; filterValuesIndex < filterValuesJsonList.GetLength(); ++filterValuesIndex) {
        filterValuesJsonList[filterValuesIndex].AsString(filtersItem.second[filterValuesIndex]);
      }
      filtersJsonMap.WithArray(filtersItem.first, std::move(filterValuesJsonList));
    }
    payload.WithObject("Filters", std::move(filtersJsonMap));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
