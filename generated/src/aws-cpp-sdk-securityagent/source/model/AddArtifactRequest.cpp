/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/AddArtifactRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AddArtifactRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_artifactContentHasBeenSet) {
    payload.WithString("artifactContent", HashingUtils::Base64Encode(m_artifactContent));
  }

  if (m_artifactTypeHasBeenSet) {
    payload.WithString("artifactType", ArtifactTypeMapper::GetNameForArtifactType(m_artifactType));
  }

  if (m_fileNameHasBeenSet) {
    payload.WithString("fileName", m_fileName);
  }

  return payload.View().WriteReadable();
}
