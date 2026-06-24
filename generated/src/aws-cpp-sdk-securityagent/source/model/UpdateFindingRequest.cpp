/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/UpdateFindingRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateFindingRequest::SerializePayload() const {
  JsonValue payload;

  if (m_findingIdHasBeenSet) {
    payload.WithString("findingId", m_findingId);
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_riskTypeHasBeenSet) {
    payload.WithString("riskType", m_riskType);
  }

  if (m_riskLevelHasBeenSet) {
    payload.WithString("riskLevel", RiskLevelMapper::GetNameForRiskLevel(m_riskLevel));
  }

  if (m_riskScoreHasBeenSet) {
    payload.WithString("riskScore", m_riskScore);
  }

  if (m_attackScriptHasBeenSet) {
    payload.WithString("attackScript", m_attackScript);
  }

  if (m_reasoningHasBeenSet) {
    payload.WithString("reasoning", m_reasoning);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", FindingStatusMapper::GetNameForFindingStatus(m_status));
  }

  if (m_customerNoteHasBeenSet) {
    payload.WithString("customerNote", m_customerNote);
  }

  return payload.View().WriteReadable();
}
