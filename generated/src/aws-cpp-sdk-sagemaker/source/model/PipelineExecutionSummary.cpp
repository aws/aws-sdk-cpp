/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/PipelineExecutionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

PipelineExecutionSummary::PipelineExecutionSummary(JsonView jsonValue) { *this = jsonValue; }

PipelineExecutionSummary& PipelineExecutionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PipelineExecutionArn")) {
    m_pipelineExecutionArn = jsonValue.GetString("PipelineExecutionArn");
    m_pipelineExecutionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PipelineExecutionStatus")) {
    m_pipelineExecutionStatus =
        PipelineExecutionStatusMapper::GetPipelineExecutionStatusForName(jsonValue.GetString("PipelineExecutionStatus"));
    m_pipelineExecutionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PipelineExecutionDescription")) {
    m_pipelineExecutionDescription = jsonValue.GetString("PipelineExecutionDescription");
    m_pipelineExecutionDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PipelineExecutionDisplayName")) {
    m_pipelineExecutionDisplayName = jsonValue.GetString("PipelineExecutionDisplayName");
    m_pipelineExecutionDisplayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PipelineExecutionFailureReason")) {
    m_pipelineExecutionFailureReason = jsonValue.GetString("PipelineExecutionFailureReason");
    m_pipelineExecutionFailureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PipelineVersionAliases")) {
    Aws::Utils::Array<JsonView> pipelineVersionAliasesJsonList = jsonValue.GetArray("PipelineVersionAliases");
    for (unsigned pipelineVersionAliasesIndex = 0; pipelineVersionAliasesIndex < pipelineVersionAliasesJsonList.GetLength();
         ++pipelineVersionAliasesIndex) {
      m_pipelineVersionAliases.push_back(pipelineVersionAliasesJsonList[pipelineVersionAliasesIndex].AsString());
    }
    m_pipelineVersionAliasesHasBeenSet = true;
  }
  return *this;
}

JsonValue PipelineExecutionSummary::Jsonize() const {
  JsonValue payload;

  if (m_pipelineExecutionArnHasBeenSet) {
    payload.WithString("PipelineExecutionArn", m_pipelineExecutionArn);
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_pipelineExecutionStatusHasBeenSet) {
    payload.WithString("PipelineExecutionStatus",
                       PipelineExecutionStatusMapper::GetNameForPipelineExecutionStatus(m_pipelineExecutionStatus));
  }

  if (m_pipelineExecutionDescriptionHasBeenSet) {
    payload.WithString("PipelineExecutionDescription", m_pipelineExecutionDescription);
  }

  if (m_pipelineExecutionDisplayNameHasBeenSet) {
    payload.WithString("PipelineExecutionDisplayName", m_pipelineExecutionDisplayName);
  }

  if (m_pipelineExecutionFailureReasonHasBeenSet) {
    payload.WithString("PipelineExecutionFailureReason", m_pipelineExecutionFailureReason);
  }

  if (m_pipelineVersionAliasesHasBeenSet) {
    Aws::Utils::Array<JsonValue> pipelineVersionAliasesJsonList(m_pipelineVersionAliases.size());
    for (unsigned pipelineVersionAliasesIndex = 0; pipelineVersionAliasesIndex < pipelineVersionAliasesJsonList.GetLength();
         ++pipelineVersionAliasesIndex) {
      pipelineVersionAliasesJsonList[pipelineVersionAliasesIndex].AsString(m_pipelineVersionAliases[pipelineVersionAliasesIndex]);
    }
    payload.WithArray("PipelineVersionAliases", std::move(pipelineVersionAliasesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
