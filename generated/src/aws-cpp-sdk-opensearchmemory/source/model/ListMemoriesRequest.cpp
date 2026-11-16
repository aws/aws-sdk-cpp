/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/ListMemoriesRequest.h>

#include <utility>

using namespace Aws::OpenSearchMemory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListMemoriesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_spaceIdHasBeenSet) {
    payload.WithString("spaceId", m_spaceId);
  }

  if (m_memoryStrategiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> memoryStrategiesJsonList(m_memoryStrategies.size());
    for (unsigned memoryStrategiesIndex = 0; memoryStrategiesIndex < memoryStrategiesJsonList.GetLength(); ++memoryStrategiesIndex) {
      memoryStrategiesJsonList[memoryStrategiesIndex].AsObject(m_memoryStrategies[memoryStrategiesIndex].Jsonize());
    }
    payload.WithArray("memoryStrategies", std::move(memoryStrategiesJsonList));
  }

  if (m_actorIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> actorIdsJsonList(m_actorIds.size());
    for (unsigned actorIdsIndex = 0; actorIdsIndex < actorIdsJsonList.GetLength(); ++actorIdsIndex) {
      actorIdsJsonList[actorIdsIndex].AsString(m_actorIds[actorIdsIndex]);
    }
    payload.WithArray("actorIds", std::move(actorIdsJsonList));
  }

  if (m_sessionIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sessionIdsJsonList(m_sessionIds.size());
    for (unsigned sessionIdsIndex = 0; sessionIdsIndex < sessionIdsJsonList.GetLength(); ++sessionIdsIndex) {
      sessionIdsJsonList[sessionIdsIndex].AsString(m_sessionIds[sessionIdsIndex]);
    }
    payload.WithArray("sessionIds", std::move(sessionIdsJsonList));
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("sortBy", MemorySortFieldMapper::GetNameForMemorySortField(m_sortBy));
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListMemoriesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchMemory.ListMemories"));
  return headers;
}

ListMemoriesRequest::EndpointParameters ListMemoriesRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (SpaceIdHasBeenSet()) {
    parameters.emplace_back(Aws::String("SpaceId"), this->GetSpaceId(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
