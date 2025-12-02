/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/WorkflowDefinitionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {

WorkflowDefinitionSummary::WorkflowDefinitionSummary(JsonView jsonValue) { *this = jsonValue; }

WorkflowDefinitionSummary& WorkflowDefinitionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("workflowDefinitionArn")) {
    m_workflowDefinitionArn = jsonValue.GetString("workflowDefinitionArn");
    m_workflowDefinitionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workflowDefinitionName")) {
    m_workflowDefinitionName = jsonValue.GetString("workflowDefinitionName");
    m_workflowDefinitionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = WorkflowDefinitionStatusMapper::GetWorkflowDefinitionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkflowDefinitionSummary::Jsonize() const {
  JsonValue payload;

  if (m_workflowDefinitionArnHasBeenSet) {
    payload.WithString("workflowDefinitionArn", m_workflowDefinitionArn);
  }

  if (m_workflowDefinitionNameHasBeenSet) {
    payload.WithString("workflowDefinitionName", m_workflowDefinitionName);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", WorkflowDefinitionStatusMapper::GetNameForWorkflowDefinitionStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
