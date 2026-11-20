/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/ListEventActorsRequest.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListEventActorsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_scopeHasBeenSet) {
    payload.WithString("Scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if (m_timeWindowHasBeenSet) {
    payload.WithObject("TimeWindow", m_timeWindow.Jsonize());
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("SortBy", EventActorSortByMapper::GetNameForEventActorSortBy(m_sortBy));
  }

  if (m_limitHasBeenSet) {
    payload.WithInteger("Limit", m_limit);
  }

  if (m_nextMarkerHasBeenSet) {
    payload.WithString("NextMarker", m_nextMarker);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEventActorsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.ListEventActors"));
  return headers;
}
