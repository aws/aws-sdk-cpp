/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchDeleteCodeReviewsRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchDeleteCodeReviewsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_codeReviewIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> codeReviewIdsJsonList(m_codeReviewIds.size());
    for (unsigned codeReviewIdsIndex = 0; codeReviewIdsIndex < codeReviewIdsJsonList.GetLength(); ++codeReviewIdsIndex) {
      codeReviewIdsJsonList[codeReviewIdsIndex].AsString(m_codeReviewIds[codeReviewIdsIndex]);
    }
    payload.WithArray("codeReviewIds", std::move(codeReviewIdsJsonList));
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  return payload.View().WriteReadable();
}
