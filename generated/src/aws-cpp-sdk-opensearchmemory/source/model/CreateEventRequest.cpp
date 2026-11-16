/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/CreateEventRequest.h>

#include <utility>

using namespace Aws::OpenSearchMemory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateEventRequest::SerializePayload() const {
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

  if (m_eventTimestampHasBeenSet) {
    payload.WithString("eventTimestamp", m_eventTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_payloadHasBeenSet) {
    payload.WithObject("payload", m_payload.Jsonize());
  }

  if (m_metadataHasBeenSet) {
    JsonValue metadataJsonMap;
    for (auto& metadataItem : m_metadata) {
      metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
    }
    payload.WithObject("metadata", std::move(metadataJsonMap));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_inferHasBeenSet) {
    payload.WithBool("infer", m_infer);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEventRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchMemory.CreateEvent"));
  return headers;
}

CreateEventRequest::EndpointParameters CreateEventRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (SpaceIdHasBeenSet()) {
    parameters.emplace_back(Aws::String("SpaceId"), this->GetSpaceId(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
