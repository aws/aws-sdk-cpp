/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/StartCodeRemediationRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartCodeRemediationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_pentestJobIdHasBeenSet) {
    payload.WithString("pentestJobId", m_pentestJobId);
  }

  if (m_findingIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> findingIdsJsonList(m_findingIds.size());
    for (unsigned findingIdsIndex = 0; findingIdsIndex < findingIdsJsonList.GetLength(); ++findingIdsIndex) {
      findingIdsJsonList[findingIdsIndex].AsString(m_findingIds[findingIdsIndex]);
    }
    payload.WithArray("findingIds", std::move(findingIdsJsonList));
  }

  return payload.View().WriteReadable();
}
