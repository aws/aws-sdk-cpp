/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchGetAgentSpacesRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetAgentSpacesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agentSpaceIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> agentSpaceIdsJsonList(m_agentSpaceIds.size());
    for (unsigned agentSpaceIdsIndex = 0; agentSpaceIdsIndex < agentSpaceIdsJsonList.GetLength(); ++agentSpaceIdsIndex) {
      agentSpaceIdsJsonList[agentSpaceIdsIndex].AsString(m_agentSpaceIds[agentSpaceIdsIndex]);
    }
    payload.WithArray("agentSpaceIds", std::move(agentSpaceIdsJsonList));
  }

  return payload.View().WriteReadable();
}
