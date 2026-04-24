/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/Finding.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

Finding::Finding(JsonView jsonValue) { *this = jsonValue; }

Finding& Finding::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("findingId")) {
    m_findingId = jsonValue.GetString("findingId");
    m_findingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pentestId")) {
    m_pentestId = jsonValue.GetString("pentestId");
    m_pentestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pentestJobId")) {
    m_pentestJobId = jsonValue.GetString("pentestJobId");
    m_pentestJobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskId")) {
    m_taskId = jsonValue.GetString("taskId");
    m_taskIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = FindingStatusMapper::GetFindingStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("riskType")) {
    m_riskType = jsonValue.GetString("riskType");
    m_riskTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("riskLevel")) {
    m_riskLevel = RiskLevelMapper::GetRiskLevelForName(jsonValue.GetString("riskLevel"));
    m_riskLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("riskScore")) {
    m_riskScore = jsonValue.GetString("riskScore");
    m_riskScoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reasoning")) {
    m_reasoning = jsonValue.GetString("reasoning");
    m_reasoningHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidence")) {
    m_confidence = ConfidenceLevelMapper::GetConfidenceLevelForName(jsonValue.GetString("confidence"));
    m_confidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attackScript")) {
    m_attackScript = jsonValue.GetString("attackScript");
    m_attackScriptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeRemediationTask")) {
    m_codeRemediationTask = jsonValue.GetObject("codeRemediationTask");
    m_codeRemediationTaskHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedBy")) {
    m_lastUpdatedBy = jsonValue.GetString("lastUpdatedBy");
    m_lastUpdatedByHasBeenSet = true;
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

JsonValue Finding::Jsonize() const {
  JsonValue payload;

  if (m_findingIdHasBeenSet) {
    payload.WithString("findingId", m_findingId);
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_pentestIdHasBeenSet) {
    payload.WithString("pentestId", m_pentestId);
  }

  if (m_pentestJobIdHasBeenSet) {
    payload.WithString("pentestJobId", m_pentestJobId);
  }

  if (m_taskIdHasBeenSet) {
    payload.WithString("taskId", m_taskId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", FindingStatusMapper::GetNameForFindingStatus(m_status));
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

  if (m_reasoningHasBeenSet) {
    payload.WithString("reasoning", m_reasoning);
  }

  if (m_confidenceHasBeenSet) {
    payload.WithString("confidence", ConfidenceLevelMapper::GetNameForConfidenceLevel(m_confidence));
  }

  if (m_attackScriptHasBeenSet) {
    payload.WithString("attackScript", m_attackScript);
  }

  if (m_codeRemediationTaskHasBeenSet) {
    payload.WithObject("codeRemediationTask", m_codeRemediationTask.Jsonize());
  }

  if (m_lastUpdatedByHasBeenSet) {
    payload.WithString("lastUpdatedBy", m_lastUpdatedBy);
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
