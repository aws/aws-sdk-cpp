/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/TaskSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

TaskSummary::TaskSummary(JsonView jsonValue) { *this = jsonValue; }

TaskSummary& TaskSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("taskId")) {
    m_taskId = jsonValue.GetString("taskId");
    m_taskIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pentestId")) {
    m_pentestId = jsonValue.GetString("pentestId");
    m_pentestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pentestJobId")) {
    m_pentestJobId = jsonValue.GetString("pentestJobId");
    m_pentestJobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("riskType")) {
    m_riskType = RiskTypeMapper::GetRiskTypeForName(jsonValue.GetString("riskType"));
    m_riskTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionStatus")) {
    m_executionStatus = TaskExecutionStatusMapper::GetTaskExecutionStatusForName(jsonValue.GetString("executionStatus"));
    m_executionStatusHasBeenSet = true;
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

JsonValue TaskSummary::Jsonize() const {
  JsonValue payload;

  if (m_taskIdHasBeenSet) {
    payload.WithString("taskId", m_taskId);
  }

  if (m_pentestIdHasBeenSet) {
    payload.WithString("pentestId", m_pentestId);
  }

  if (m_pentestJobIdHasBeenSet) {
    payload.WithString("pentestJobId", m_pentestJobId);
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_riskTypeHasBeenSet) {
    payload.WithString("riskType", RiskTypeMapper::GetNameForRiskType(m_riskType));
  }

  if (m_executionStatusHasBeenSet) {
    payload.WithString("executionStatus", TaskExecutionStatusMapper::GetNameForTaskExecutionStatus(m_executionStatus));
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
