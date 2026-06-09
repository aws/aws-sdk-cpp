/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchGetCodeReviewJobsRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetCodeReviewJobsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_codeReviewJobIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> codeReviewJobIdsJsonList(m_codeReviewJobIds.size());
    for (unsigned codeReviewJobIdsIndex = 0; codeReviewJobIdsIndex < codeReviewJobIdsJsonList.GetLength(); ++codeReviewJobIdsIndex) {
      codeReviewJobIdsJsonList[codeReviewJobIdsIndex].AsString(m_codeReviewJobIds[codeReviewJobIdsIndex]);
    }
    payload.WithArray("codeReviewJobIds", std::move(codeReviewJobIdsJsonList));
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  return payload.View().WriteReadable();
}
