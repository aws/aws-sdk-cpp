/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/UpdateMemoryRequest.h>

#include <utility>

using namespace Aws::OpenSearchMemory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMemoryRequest::SerializePayload() const {
  JsonValue payload;

  if (m_spaceIdHasBeenSet) {
    payload.WithString("spaceId", m_spaceId);
  }

  if (m_memoryIdHasBeenSet) {
    payload.WithString("memoryId", m_memoryId);
  }

  if (m_contentHasBeenSet) {
    payload.WithString("content", m_content);
  }

  if (m_metadataHasBeenSet) {
    JsonValue metadataJsonMap;
    for (auto& metadataItem : m_metadata) {
      metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
    }
    payload.WithObject("metadata", std::move(metadataJsonMap));
  }

  if (m_metadataModeHasBeenSet) {
    payload.WithString("metadataMode", MetadataModeMapper::GetNameForMetadataMode(m_metadataMode));
  }

  if (m_actorIdHasBeenSet) {
    payload.WithString("actorId", m_actorId);
  }

  if (m_strategyNameHasBeenSet) {
    payload.WithString("strategyName", m_strategyName);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMemoryRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchMemory.UpdateMemory"));
  return headers;
}

UpdateMemoryRequest::EndpointParameters UpdateMemoryRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (SpaceIdHasBeenSet()) {
    parameters.emplace_back(Aws::String("SpaceId"), this->GetSpaceId(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
