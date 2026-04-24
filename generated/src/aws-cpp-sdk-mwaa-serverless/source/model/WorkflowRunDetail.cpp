/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa-serverless/model/WorkflowRunDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MWAAServerless {
namespace Model {

WorkflowRunDetail::WorkflowRunDetail(JsonView jsonValue) { *this = jsonValue; }

WorkflowRunDetail& WorkflowRunDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WorkflowArn")) {
    m_workflowArn = jsonValue.GetString("WorkflowArn");
    m_workflowArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkflowVersion")) {
    m_workflowVersion = jsonValue.GetString("WorkflowVersion");
    m_workflowVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RunId")) {
    m_runId = jsonValue.GetString("RunId");
    m_runIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RunType")) {
    m_runType = RunTypeMapper::GetRunTypeForName(jsonValue.GetString("RunType"));
    m_runTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedOn")) {
    m_startedOn = jsonValue.GetString("StartedOn");
    m_startedOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CompletedOn")) {
    m_completedOn = jsonValue.GetString("CompletedOn");
    m_completedOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModifiedAt")) {
    m_modifiedAt = jsonValue.GetString("ModifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Duration")) {
    m_duration = jsonValue.GetInteger("Duration");
    m_durationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TaskInstances")) {
    Aws::Utils::Array<JsonView> taskInstancesJsonList = jsonValue.GetArray("TaskInstances");
    for (unsigned taskInstancesIndex = 0; taskInstancesIndex < taskInstancesJsonList.GetLength(); ++taskInstancesIndex) {
      m_taskInstances.push_back(taskInstancesJsonList[taskInstancesIndex].AsString());
    }
    m_taskInstancesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RunState")) {
    m_runState = WorkflowRunStatusMapper::GetWorkflowRunStatusForName(jsonValue.GetString("RunState"));
    m_runStateHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkflowRunDetail::Jsonize() const {
  JsonValue payload;

  if (m_workflowArnHasBeenSet) {
    payload.WithString("WorkflowArn", m_workflowArn);
  }

  if (m_workflowVersionHasBeenSet) {
    payload.WithString("WorkflowVersion", m_workflowVersion);
  }

  if (m_runIdHasBeenSet) {
    payload.WithString("RunId", m_runId);
  }

  if (m_runTypeHasBeenSet) {
    payload.WithString("RunType", RunTypeMapper::GetNameForRunType(m_runType));
  }

  if (m_startedOnHasBeenSet) {
    payload.WithString("StartedOn", m_startedOn.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_completedOnHasBeenSet) {
    payload.WithString("CompletedOn", m_completedOn.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_modifiedAtHasBeenSet) {
    payload.WithString("ModifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_durationHasBeenSet) {
    payload.WithInteger("Duration", m_duration);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("ErrorMessage", m_errorMessage);
  }

  if (m_taskInstancesHasBeenSet) {
    Aws::Utils::Array<JsonValue> taskInstancesJsonList(m_taskInstances.size());
    for (unsigned taskInstancesIndex = 0; taskInstancesIndex < taskInstancesJsonList.GetLength(); ++taskInstancesIndex) {
      taskInstancesJsonList[taskInstancesIndex].AsString(m_taskInstances[taskInstancesIndex]);
    }
    payload.WithArray("TaskInstances", std::move(taskInstancesJsonList));
  }

  if (m_runStateHasBeenSet) {
    payload.WithString("RunState", WorkflowRunStatusMapper::GetNameForWorkflowRunStatus(m_runState));
  }

  return payload;
}

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
