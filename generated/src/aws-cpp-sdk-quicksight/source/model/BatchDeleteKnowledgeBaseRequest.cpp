/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/BatchDeleteKnowledgeBaseRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchDeleteKnowledgeBaseRequest::SerializePayload() const {
  JsonValue payload;

  if (m_knowledgeBaseIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> knowledgeBaseIdsJsonList(m_knowledgeBaseIds.size());
    for (unsigned knowledgeBaseIdsIndex = 0; knowledgeBaseIdsIndex < knowledgeBaseIdsJsonList.GetLength(); ++knowledgeBaseIdsIndex) {
      knowledgeBaseIdsJsonList[knowledgeBaseIdsIndex].AsString(m_knowledgeBaseIds[knowledgeBaseIdsIndex]);
    }
    payload.WithArray("KnowledgeBaseIds", std::move(knowledgeBaseIdsJsonList));
  }

  return payload.View().WriteReadable();
}
