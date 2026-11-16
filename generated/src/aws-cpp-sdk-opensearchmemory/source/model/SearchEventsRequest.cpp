/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/SearchEventsRequest.h>

#include <utility>

using namespace Aws::OpenSearchMemory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SearchEventsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_spaceIdHasBeenSet) {
    payload.WithString("spaceId", m_spaceId);
  }

  if (m_actorIdHasBeenSet) {
    payload.WithString("actorId", m_actorId);
  }

  if (m_sessionIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sessionIdsJsonList(m_sessionIds.size());
    for (unsigned sessionIdsIndex = 0; sessionIdsIndex < sessionIdsJsonList.GetLength(); ++sessionIdsIndex) {
      sessionIdsJsonList[sessionIdsIndex].AsString(m_sessionIds[sessionIdsIndex]);
    }
    payload.WithArray("sessionIds", std::move(sessionIdsJsonList));
  }

  if (m_queryHasBeenSet) {
    if (!m_query.View().IsNull()) {
      payload.WithObject("query", JsonValue(m_query.View()));
    }
  }

  if (m_sortHasBeenSet) {
    if (!m_sort.View().IsNull()) {
      payload.WithObject("sort", JsonValue(m_sort.View()));
    }
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SearchEventsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchMemory.SearchEvents"));
  return headers;
}

SearchEventsRequest::EndpointParameters SearchEventsRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (SpaceIdHasBeenSet()) {
    parameters.emplace_back(Aws::String("SpaceId"), this->GetSpaceId(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
