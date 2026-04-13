/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/SearchListingsRequest.h>

#include <utility>

using namespace Aws::MarketplaceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SearchListingsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_searchTextHasBeenSet) {
    payload.WithString("searchText", m_searchText);
  }

  if (m_filtersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
    }
    payload.WithArray("filters", std::move(filtersJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("sortBy", SearchListingsSortByMapper::GetNameForSearchListingsSortBy(m_sortBy));
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("sortOrder", SearchListingsSortOrderMapper::GetNameForSearchListingsSortOrder(m_sortOrder));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
