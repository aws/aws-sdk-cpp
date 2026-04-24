/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa-serverless/model/StartWorkflowRunRequest.h>

#include <utility>

using namespace Aws::MWAAServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartWorkflowRunRequest::SerializePayload() const {
  JsonValue payload;

  if (m_workflowArnHasBeenSet) {
    payload.WithString("WorkflowArn", m_workflowArn);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_overrideParametersHasBeenSet) {
    JsonValue overrideParametersJsonMap;
    for (auto& overrideParametersItem : m_overrideParameters) {
      overrideParametersJsonMap.WithObject(overrideParametersItem.first, overrideParametersItem.second.View());
    }
    payload.WithObject("OverrideParameters", std::move(overrideParametersJsonMap));
  }

  if (m_workflowVersionHasBeenSet) {
    payload.WithString("WorkflowVersion", m_workflowVersion);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartWorkflowRunRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMWAAServerless.StartWorkflowRun"));
  return headers;
}
