/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchGetThreatModelJobsRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetThreatModelJobsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_threatModelJobIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> threatModelJobIdsJsonList(m_threatModelJobIds.size());
    for (unsigned threatModelJobIdsIndex = 0; threatModelJobIdsIndex < threatModelJobIdsJsonList.GetLength(); ++threatModelJobIdsIndex) {
      threatModelJobIdsJsonList[threatModelJobIdsIndex].AsString(m_threatModelJobIds[threatModelJobIdsIndex]);
    }
    payload.WithArray("threatModelJobIds", std::move(threatModelJobIdsJsonList));
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  return payload.View().WriteReadable();
}
