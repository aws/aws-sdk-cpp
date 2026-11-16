/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/ListEventsRequest.h>

#include <utility>

using namespace Aws::OpenSearchMemory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListEventsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_spaceIdHasBeenSet) {
    payload.WithString("spaceId", m_spaceId);
  }

  if (m_actorIdHasBeenSet) {
    payload.WithString("actorId", m_actorId);
  }

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_eventTimestampBeforeHasBeenSet) {
    payload.WithString("eventTimestampBefore", m_eventTimestampBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_eventTimestampAfterHasBeenSet) {
    payload.WithString("eventTimestampAfter", m_eventTimestampAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if (m_metadataFiltersHasBeenSet) {
    JsonValue metadataFiltersJsonMap;
    for (auto& metadataFiltersItem : m_metadataFilters) {
      metadataFiltersJsonMap.WithString(metadataFiltersItem.first, metadataFiltersItem.second);
    }
    payload.WithObject("metadataFilters", std::move(metadataFiltersJsonMap));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEventsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchMemory.ListEvents"));
  return headers;
}

ListEventsRequest::EndpointParameters ListEventsRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (SpaceIdHasBeenSet()) {
    parameters.emplace_back(Aws::String("SpaceId"), this->GetSpaceId(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
