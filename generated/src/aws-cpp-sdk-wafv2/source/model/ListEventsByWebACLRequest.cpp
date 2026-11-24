/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/ListEventsByWebACLRequest.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListEventsByWebACLRequest::SerializePayload() const {
  JsonValue payload;

  if (m_scopeHasBeenSet) {
    payload.WithString("Scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if (m_webAclArnHasBeenSet) {
    payload.WithString("WebAclArn", m_webAclArn);
  }

  if (m_timeWindowHasBeenSet) {
    payload.WithObject("TimeWindow", m_timeWindow.Jsonize());
  }

  if (m_filtersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
    }
    payload.WithArray("Filters", std::move(filtersJsonList));
  }

  if (m_apiPatternFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> apiPatternFiltersJsonList(m_apiPatternFilters.size());
    for (unsigned apiPatternFiltersIndex = 0; apiPatternFiltersIndex < apiPatternFiltersJsonList.GetLength(); ++apiPatternFiltersIndex) {
      apiPatternFiltersJsonList[apiPatternFiltersIndex].AsObject(m_apiPatternFilters[apiPatternFiltersIndex].Jsonize());
    }
    payload.WithArray("ApiPatternFilters", std::move(apiPatternFiltersJsonList));
  }

  if (m_limitHasBeenSet) {
    payload.WithInteger("Limit", m_limit);
  }

  if (m_nextMarkerHasBeenSet) {
    payload.WithString("NextMarker", m_nextMarker);
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("SortBy", EventSortByMapper::GetNameForEventSortBy(m_sortBy));
  }

  if (m_includeHasBeenSet) {
    Aws::Utils::Array<JsonValue> includeJsonList(m_include.size());
    for (unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex) {
      includeJsonList[includeIndex].AsString(EventIncludeFieldMapper::GetNameForEventIncludeField(m_include[includeIndex]));
    }
    payload.WithArray("Include", std::move(includeJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEventsByWebACLRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.ListEventsByWebACL"));
  return headers;
}
