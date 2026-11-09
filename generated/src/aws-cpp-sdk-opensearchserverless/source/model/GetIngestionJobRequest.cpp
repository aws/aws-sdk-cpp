/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/model/GetIngestionJobRequest.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetIngestionJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_collectionIdHasBeenSet) {
    payload.WithString("collectionId", m_collectionId);
  }

  if (m_ingestionJobIdHasBeenSet) {
    payload.WithString("ingestionJobId", m_ingestionJobId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetIngestionJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchServerless.GetIngestionJob"));
  return headers;
}
