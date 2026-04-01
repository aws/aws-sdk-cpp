/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/AgentSpace.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

AgentSpace::AgentSpace(JsonView jsonValue) { *this = jsonValue; }

AgentSpace& AgentSpace::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsResources")) {
    m_awsResources = jsonValue.GetObject("awsResources");
    m_awsResourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetDomainIds")) {
    Aws::Utils::Array<JsonView> targetDomainIdsJsonList = jsonValue.GetArray("targetDomainIds");
    for (unsigned targetDomainIdsIndex = 0; targetDomainIdsIndex < targetDomainIdsJsonList.GetLength(); ++targetDomainIdsIndex) {
      m_targetDomainIds.push_back(targetDomainIdsJsonList[targetDomainIdsIndex].AsString());
    }
    m_targetDomainIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeReviewSettings")) {
    m_codeReviewSettings = jsonValue.GetObject("codeReviewSettings");
    m_codeReviewSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyId")) {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentSpace::Jsonize() const {
  JsonValue payload;

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_awsResourcesHasBeenSet) {
    payload.WithObject("awsResources", m_awsResources.Jsonize());
  }

  if (m_targetDomainIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetDomainIdsJsonList(m_targetDomainIds.size());
    for (unsigned targetDomainIdsIndex = 0; targetDomainIdsIndex < targetDomainIdsJsonList.GetLength(); ++targetDomainIdsIndex) {
      targetDomainIdsJsonList[targetDomainIdsIndex].AsString(m_targetDomainIds[targetDomainIdsIndex]);
    }
    payload.WithArray("targetDomainIds", std::move(targetDomainIdsJsonList));
  }

  if (m_codeReviewSettingsHasBeenSet) {
    payload.WithObject("codeReviewSettings", m_codeReviewSettings.Jsonize());
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
