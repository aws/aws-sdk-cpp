/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchGetCodeReviewJobTasksRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetCodeReviewJobTasksRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_codeReviewJobTaskIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> codeReviewJobTaskIdsJsonList(m_codeReviewJobTaskIds.size());
    for (unsigned codeReviewJobTaskIdsIndex = 0; codeReviewJobTaskIdsIndex < codeReviewJobTaskIdsJsonList.GetLength();
         ++codeReviewJobTaskIdsIndex) {
      codeReviewJobTaskIdsJsonList[codeReviewJobTaskIdsIndex].AsString(m_codeReviewJobTaskIds[codeReviewJobTaskIdsIndex]);
    }
    payload.WithArray("codeReviewJobTaskIds", std::move(codeReviewJobTaskIdsJsonList));
  }

  return payload.View().WriteReadable();
}
