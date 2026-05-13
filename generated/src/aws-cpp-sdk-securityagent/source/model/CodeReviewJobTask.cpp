/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CodeReviewJobTask.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

CodeReviewJobTask::CodeReviewJobTask(JsonView jsonValue) { *this = jsonValue; }

CodeReviewJobTask& CodeReviewJobTask::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("taskId")) {
    m_taskId = jsonValue.GetString("taskId");
    m_taskIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeReviewId")) {
    m_codeReviewId = jsonValue.GetString("codeReviewId");
    m_codeReviewIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeReviewJobId")) {
    m_codeReviewJobId = jsonValue.GetString("codeReviewJobId");
    m_codeReviewJobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("categories")) {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("categories");
    for (unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex) {
      m_categories.push_back(categoriesJsonList[categoriesIndex].AsObject());
    }
    m_categoriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("riskType")) {
    m_riskType = RiskTypeMapper::GetRiskTypeForName(jsonValue.GetString("riskType"));
    m_riskTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionStatus")) {
    m_executionStatus = TaskExecutionStatusMapper::GetTaskExecutionStatusForName(jsonValue.GetString("executionStatus"));
    m_executionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logsLocation")) {
    m_logsLocation = jsonValue.GetObject("logsLocation");
    m_logsLocationHasBeenSet = true;
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

JsonValue CodeReviewJobTask::Jsonize() const {
  JsonValue payload;

  if (m_taskIdHasBeenSet) {
    payload.WithString("taskId", m_taskId);
  }

  if (m_codeReviewIdHasBeenSet) {
    payload.WithString("codeReviewId", m_codeReviewId);
  }

  if (m_codeReviewJobIdHasBeenSet) {
    payload.WithString("codeReviewJobId", m_codeReviewJobId);
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_categoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
    for (unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex) {
      categoriesJsonList[categoriesIndex].AsObject(m_categories[categoriesIndex].Jsonize());
    }
    payload.WithArray("categories", std::move(categoriesJsonList));
  }

  if (m_riskTypeHasBeenSet) {
    payload.WithString("riskType", RiskTypeMapper::GetNameForRiskType(m_riskType));
  }

  if (m_executionStatusHasBeenSet) {
    payload.WithString("executionStatus", TaskExecutionStatusMapper::GetNameForTaskExecutionStatus(m_executionStatus));
  }

  if (m_logsLocationHasBeenSet) {
    payload.WithObject("logsLocation", m_logsLocation.Jsonize());
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
