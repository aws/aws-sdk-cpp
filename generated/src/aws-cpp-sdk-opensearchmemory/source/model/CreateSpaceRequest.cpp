/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/CreateSpaceRequest.h>

#include <utility>

using namespace Aws::OpenSearchMemory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSpaceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
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

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("tags", std::move(tagsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSpaceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchMemory.CreateSpace"));
  return headers;
}
