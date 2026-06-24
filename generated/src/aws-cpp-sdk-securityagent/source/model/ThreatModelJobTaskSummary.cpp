/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ThreatModelJobTaskSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ThreatModelJobTaskSummary::ThreatModelJobTaskSummary(JsonView jsonValue) { *this = jsonValue; }

ThreatModelJobTaskSummary& ThreatModelJobTaskSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("taskId")) {
    m_taskId = jsonValue.GetString("taskId");
    m_taskIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("threatModelId")) {
    m_threatModelId = jsonValue.GetString("threatModelId");
    m_threatModelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("threatModelJobId")) {
    m_threatModelJobId = jsonValue.GetString("threatModelJobId");
    m_threatModelJobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
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

JsonValue ThreatModelJobTaskSummary::Jsonize() const {
  JsonValue payload;

  if (m_taskIdHasBeenSet) {
    payload.WithString("taskId", m_taskId);
  }

  if (m_threatModelIdHasBeenSet) {
    payload.WithString("threatModelId", m_threatModelId);
  }

  if (m_threatModelJobIdHasBeenSet) {
    payload.WithString("threatModelJobId", m_threatModelJobId);
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
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
