/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa-serverless/model/GetTaskInstanceRequest.h>

#include <utility>

using namespace Aws::MWAAServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetTaskInstanceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_workflowArnHasBeenSet) {
    payload.WithString("WorkflowArn", m_workflowArn);
  }

  if (m_taskInstanceIdHasBeenSet) {
    payload.WithString("TaskInstanceId", m_taskInstanceId);
  }

  if (m_runIdHasBeenSet) {
    payload.WithString("RunId", m_runId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTaskInstanceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMWAAServerless.GetTaskInstance"));
  return headers;
}
