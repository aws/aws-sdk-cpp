/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ListCodeReviewJobTasksRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListCodeReviewJobTasksRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_codeReviewJobIdHasBeenSet) {
    payload.WithString("codeReviewJobId", m_codeReviewJobId);
  }

  if (m_stepNameHasBeenSet) {
    payload.WithString("stepName", StepNameMapper::GetNameForStepName(m_stepName));
  }

  if (m_categoryNameHasBeenSet) {
    payload.WithString("categoryName", m_categoryName);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
