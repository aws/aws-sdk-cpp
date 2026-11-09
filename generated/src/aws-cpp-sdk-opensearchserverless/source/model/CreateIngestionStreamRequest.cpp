/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/model/CreateIngestionStreamRequest.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateIngestionStreamRequest::SerializePayload() const {
  JsonValue payload;

  if (m_collectionIdHasBeenSet) {
    payload.WithString("collectionId", m_collectionId);
  }

  if (m_ingestionStreamNameHasBeenSet) {
    payload.WithString("ingestionStreamName", m_ingestionStreamName);
  }

  if (m_indexNameHasBeenSet) {
    payload.WithString("indexName", m_indexName);
  }

  if (m_failureIndexNameHasBeenSet) {
    payload.WithString("failureIndexName", m_failureIndexName);
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
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

Aws::Http::HeaderValueCollection CreateIngestionStreamRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchServerless.CreateIngestionStream"));
  return headers;
}
