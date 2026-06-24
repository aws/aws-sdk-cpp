/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchGetThreatModelJobTasksRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetThreatModelJobTasksRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_threatModelJobTaskIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> threatModelJobTaskIdsJsonList(m_threatModelJobTaskIds.size());
    for (unsigned threatModelJobTaskIdsIndex = 0; threatModelJobTaskIdsIndex < threatModelJobTaskIdsJsonList.GetLength();
         ++threatModelJobTaskIdsIndex) {
      threatModelJobTaskIdsJsonList[threatModelJobTaskIdsIndex].AsString(m_threatModelJobTaskIds[threatModelJobTaskIdsIndex]);
    }
    payload.WithArray("threatModelJobTaskIds", std::move(threatModelJobTaskIdsJsonList));
  }

  return payload.View().WriteReadable();
}
