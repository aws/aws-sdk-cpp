/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/UpdateWorkflowRunRequest.h>

#include <utility>

using namespace Aws::NovaAct::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWorkflowRunRequest::SerializePayload() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", WorkflowRunStatusMapper::GetNameForWorkflowRunStatus(m_status));
  }

  return payload.View().WriteReadable();
}
