/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa-serverless/model/WorkflowRunSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MWAAServerless {
namespace Model {

WorkflowRunSummary::WorkflowRunSummary(JsonView jsonValue) { *this = jsonValue; }

WorkflowRunSummary& WorkflowRunSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RunId")) {
    m_runId = jsonValue.GetString("RunId");
    m_runIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkflowArn")) {
    m_workflowArn = jsonValue.GetString("WorkflowArn");
    m_workflowArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkflowVersion")) {
    m_workflowVersion = jsonValue.GetString("WorkflowVersion");
    m_workflowVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RunType")) {
    m_runType = RunTypeMapper::GetRunTypeForName(jsonValue.GetString("RunType"));
    m_runTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RunDetailSummary")) {
    m_runDetailSummary = jsonValue.GetObject("RunDetailSummary");
    m_runDetailSummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkflowRunSummary::Jsonize() const {
  JsonValue payload;

  if (m_runIdHasBeenSet) {
    payload.WithString("RunId", m_runId);
  }

  if (m_workflowArnHasBeenSet) {
    payload.WithString("WorkflowArn", m_workflowArn);
  }

  if (m_workflowVersionHasBeenSet) {
    payload.WithString("WorkflowVersion", m_workflowVersion);
  }

  if (m_runTypeHasBeenSet) {
    payload.WithString("RunType", RunTypeMapper::GetNameForRunType(m_runType));
  }

  if (m_runDetailSummaryHasBeenSet) {
    payload.WithObject("RunDetailSummary", m_runDetailSummary.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
