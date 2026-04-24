/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/CreateWorkflowRunRequest.h>

#include <utility>

using namespace Aws::NovaAct::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateWorkflowRunRequest::SerializePayload() const {
  JsonValue payload;

  if (m_modelIdHasBeenSet) {
    payload.WithString("modelId", m_modelId);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_logGroupNameHasBeenSet) {
    payload.WithString("logGroupName", m_logGroupName);
  }

  if (m_clientInfoHasBeenSet) {
    payload.WithObject("clientInfo", m_clientInfo.Jsonize());
  }

  return payload.View().WriteReadable();
}
