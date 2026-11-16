/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/UpdateSpaceRequest.h>

#include <utility>

using namespace Aws::OpenSearchMemory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSpaceRequest::SerializePayload() const {
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

  if (m_eventExpiryDaysHasBeenSet) {
    payload.WithInteger("eventExpiryDays", m_eventExpiryDays);
  }

  if (m_memoryExpiryDaysHasBeenSet) {
    payload.WithInteger("memoryExpiryDays", m_memoryExpiryDays);
  }

  if (m_extractionModelIdHasBeenSet) {
    payload.WithString("extractionModelId", m_extractionModelId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSpaceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchMemory.UpdateSpace"));
  return headers;
}
