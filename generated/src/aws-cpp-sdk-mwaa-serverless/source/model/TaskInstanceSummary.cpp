/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa-serverless/model/TaskInstanceSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MWAAServerless {
namespace Model {

TaskInstanceSummary::TaskInstanceSummary(JsonView jsonValue) { *this = jsonValue; }

TaskInstanceSummary& TaskInstanceSummary::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("TaskInstanceId")) {
    m_taskInstanceId = jsonValue.GetString("TaskInstanceId");
    m_taskInstanceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = TaskInstanceStatusMapper::GetTaskInstanceStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DurationInSeconds")) {
    m_durationInSeconds = jsonValue.GetInteger("DurationInSeconds");
    m_durationInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OperatorName")) {
    m_operatorName = jsonValue.GetString("OperatorName");
    m_operatorNameHasBeenSet = true;
  }
  return *this;
}

JsonValue TaskInstanceSummary::Jsonize() const {
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

  if (m_taskInstanceIdHasBeenSet) {
    payload.WithString("TaskInstanceId", m_taskInstanceId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", TaskInstanceStatusMapper::GetNameForTaskInstanceStatus(m_status));
  }

  if (m_durationInSecondsHasBeenSet) {
    payload.WithInteger("DurationInSeconds", m_durationInSeconds);
  }

  if (m_operatorNameHasBeenSet) {
    payload.WithString("OperatorName", m_operatorName);
  }

  return payload;
}

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
