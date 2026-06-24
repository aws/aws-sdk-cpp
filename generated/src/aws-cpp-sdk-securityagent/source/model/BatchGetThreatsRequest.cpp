/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchGetThreatsRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetThreatsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_threatIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> threatIdsJsonList(m_threatIds.size());
    for (unsigned threatIdsIndex = 0; threatIdsIndex < threatIdsJsonList.GetLength(); ++threatIdsIndex) {
      threatIdsJsonList[threatIdsIndex].AsString(m_threatIds[threatIdsIndex]);
    }
    payload.WithArray("threatIds", std::move(threatIdsJsonList));
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  return payload.View().WriteReadable();
}
