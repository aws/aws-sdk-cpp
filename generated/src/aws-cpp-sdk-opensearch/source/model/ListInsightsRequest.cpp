/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/ListInsightsRequest.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListInsightsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_entityHasBeenSet) {
    payload.WithObject("Entity", m_entity.Jsonize());
  }

  if (m_timeRangeHasBeenSet) {
    payload.WithObject("TimeRange", m_timeRange.Jsonize());
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("SortOrder", InsightSortOrderMapper::GetNameForInsightSortOrder(m_sortOrder));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
