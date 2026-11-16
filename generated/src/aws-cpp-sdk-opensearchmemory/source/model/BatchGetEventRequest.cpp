/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/BatchGetEventRequest.h>

#include <utility>

using namespace Aws::OpenSearchMemory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetEventRequest::SerializePayload() const {
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

  if (m_eventIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> eventIdsJsonList(m_eventIds.size());
    for (unsigned eventIdsIndex = 0; eventIdsIndex < eventIdsJsonList.GetLength(); ++eventIdsIndex) {
      eventIdsJsonList[eventIdsIndex].AsString(m_eventIds[eventIdsIndex]);
    }
    payload.WithArray("eventIds", std::move(eventIdsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetEventRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchMemory.BatchGetEvent"));
  return headers;
}

BatchGetEventRequest::EndpointParameters BatchGetEventRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (SpaceIdHasBeenSet()) {
    parameters.emplace_back(Aws::String("SpaceId"), this->GetSpaceId(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
