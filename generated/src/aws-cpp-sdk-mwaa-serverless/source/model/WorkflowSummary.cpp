/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa-serverless/model/WorkflowSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MWAAServerless {
namespace Model {

WorkflowSummary::WorkflowSummary(JsonView jsonValue) { *this = jsonValue; }

WorkflowSummary& WorkflowSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WorkflowArn")) {
    m_workflowArn = jsonValue.GetString("WorkflowArn");
    m_workflowArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkflowVersion")) {
    m_workflowVersion = jsonValue.GetString("WorkflowVersion");
    m_workflowVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModifiedAt")) {
    m_modifiedAt = jsonValue.GetString("ModifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkflowStatus")) {
    m_workflowStatus = WorkflowStatusMapper::GetWorkflowStatusForName(jsonValue.GetString("WorkflowStatus"));
    m_workflowStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TriggerMode")) {
    m_triggerMode = jsonValue.GetString("TriggerMode");
    m_triggerModeHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkflowSummary::Jsonize() const {
  JsonValue payload;

  if (m_workflowArnHasBeenSet) {
    payload.WithString("WorkflowArn", m_workflowArn);
  }

  if (m_workflowVersionHasBeenSet) {
    payload.WithString("WorkflowVersion", m_workflowVersion);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_modifiedAtHasBeenSet) {
    payload.WithString("ModifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_workflowStatusHasBeenSet) {
    payload.WithString("WorkflowStatus", WorkflowStatusMapper::GetNameForWorkflowStatus(m_workflowStatus));
  }

  if (m_triggerModeHasBeenSet) {
    payload.WithString("TriggerMode", m_triggerMode);
  }

  return payload;
}

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
