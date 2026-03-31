/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchGetArtifactMetadataRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetArtifactMetadataRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_artifactIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> artifactIdsJsonList(m_artifactIds.size());
    for (unsigned artifactIdsIndex = 0; artifactIdsIndex < artifactIdsJsonList.GetLength(); ++artifactIdsIndex) {
      artifactIdsJsonList[artifactIdsIndex].AsString(m_artifactIds[artifactIdsIndex]);
    }
    payload.WithArray("artifactIds", std::move(artifactIdsJsonList));
  }

  return payload.View().WriteReadable();
}
