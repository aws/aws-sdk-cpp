/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchGetThreatModelsRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetThreatModelsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_threatModelIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> threatModelIdsJsonList(m_threatModelIds.size());
    for (unsigned threatModelIdsIndex = 0; threatModelIdsIndex < threatModelIdsJsonList.GetLength(); ++threatModelIdsIndex) {
      threatModelIdsJsonList[threatModelIdsIndex].AsString(m_threatModelIds[threatModelIdsIndex]);
    }
    payload.WithArray("threatModelIds", std::move(threatModelIdsJsonList));
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  return payload.View().WriteReadable();
}
