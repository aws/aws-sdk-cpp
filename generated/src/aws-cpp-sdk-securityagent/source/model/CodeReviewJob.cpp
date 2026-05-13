/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CodeReviewJob.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

CodeReviewJob::CodeReviewJob(JsonView jsonValue) { *this = jsonValue; }

CodeReviewJob& CodeReviewJob::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("codeReviewJobId")) {
    m_codeReviewJobId = jsonValue.GetString("codeReviewJobId");
    m_codeReviewJobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeReviewId")) {
    m_codeReviewId = jsonValue.GetString("codeReviewId");
    m_codeReviewIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("overview")) {
    m_overview = jsonValue.GetString("overview");
    m_overviewHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("documents")) {
    Aws::Utils::Array<JsonView> documentsJsonList = jsonValue.GetArray("documents");
    for (unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex) {
      m_documents.push_back(documentsJsonList[documentsIndex].AsObject());
    }
    m_documentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceCode")) {
    Aws::Utils::Array<JsonView> sourceCodeJsonList = jsonValue.GetArray("sourceCode");
    for (unsigned sourceCodeIndex = 0; sourceCodeIndex < sourceCodeJsonList.GetLength(); ++sourceCodeIndex) {
      m_sourceCode.push_back(sourceCodeJsonList[sourceCodeIndex].AsObject());
    }
    m_sourceCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("steps")) {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("steps");
    for (unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex) {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
    m_stepsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionContext")) {
    Aws::Utils::Array<JsonView> executionContextJsonList = jsonValue.GetArray("executionContext");
    for (unsigned executionContextIndex = 0; executionContextIndex < executionContextJsonList.GetLength(); ++executionContextIndex) {
      m_executionContext.push_back(executionContextJsonList[executionContextIndex].AsObject());
    }
    m_executionContextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceRole")) {
    m_serviceRole = jsonValue.GetString("serviceRole");
    m_serviceRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logConfig")) {
    m_logConfig = jsonValue.GetObject("logConfig");
    m_logConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorInformation")) {
    m_errorInformation = jsonValue.GetObject("errorInformation");
    m_errorInformationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("integratedRepositories")) {
    Aws::Utils::Array<JsonView> integratedRepositoriesJsonList = jsonValue.GetArray("integratedRepositories");
    for (unsigned integratedRepositoriesIndex = 0; integratedRepositoriesIndex < integratedRepositoriesJsonList.GetLength();
         ++integratedRepositoriesIndex) {
      m_integratedRepositories.push_back(integratedRepositoriesJsonList[integratedRepositoriesIndex].AsObject());
    }
    m_integratedRepositoriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeRemediationStrategy")) {
    m_codeRemediationStrategy =
        CodeRemediationStrategyMapper::GetCodeRemediationStrategyForName(jsonValue.GetString("codeRemediationStrategy"));
    m_codeRemediationStrategyHasBeenSet = true;
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

JsonValue CodeReviewJob::Jsonize() const {
  JsonValue payload;

  if (m_codeReviewJobIdHasBeenSet) {
    payload.WithString("codeReviewJobId", m_codeReviewJobId);
  }

  if (m_codeReviewIdHasBeenSet) {
    payload.WithString("codeReviewId", m_codeReviewId);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_overviewHasBeenSet) {
    payload.WithString("overview", m_overview);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if (m_documentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> documentsJsonList(m_documents.size());
    for (unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex) {
      documentsJsonList[documentsIndex].AsObject(m_documents[documentsIndex].Jsonize());
    }
    payload.WithArray("documents", std::move(documentsJsonList));
  }

  if (m_sourceCodeHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceCodeJsonList(m_sourceCode.size());
    for (unsigned sourceCodeIndex = 0; sourceCodeIndex < sourceCodeJsonList.GetLength(); ++sourceCodeIndex) {
      sourceCodeJsonList[sourceCodeIndex].AsObject(m_sourceCode[sourceCodeIndex].Jsonize());
    }
    payload.WithArray("sourceCode", std::move(sourceCodeJsonList));
  }

  if (m_stepsHasBeenSet) {
    Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
    for (unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex) {
      stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
    }
    payload.WithArray("steps", std::move(stepsJsonList));
  }

  if (m_executionContextHasBeenSet) {
    Aws::Utils::Array<JsonValue> executionContextJsonList(m_executionContext.size());
    for (unsigned executionContextIndex = 0; executionContextIndex < executionContextJsonList.GetLength(); ++executionContextIndex) {
      executionContextJsonList[executionContextIndex].AsObject(m_executionContext[executionContextIndex].Jsonize());
    }
    payload.WithArray("executionContext", std::move(executionContextJsonList));
  }

  if (m_serviceRoleHasBeenSet) {
    payload.WithString("serviceRole", m_serviceRole);
  }

  if (m_logConfigHasBeenSet) {
    payload.WithObject("logConfig", m_logConfig.Jsonize());
  }

  if (m_errorInformationHasBeenSet) {
    payload.WithObject("errorInformation", m_errorInformation.Jsonize());
  }

  if (m_integratedRepositoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> integratedRepositoriesJsonList(m_integratedRepositories.size());
    for (unsigned integratedRepositoriesIndex = 0; integratedRepositoriesIndex < integratedRepositoriesJsonList.GetLength();
         ++integratedRepositoriesIndex) {
      integratedRepositoriesJsonList[integratedRepositoriesIndex].AsObject(m_integratedRepositories[integratedRepositoriesIndex].Jsonize());
    }
    payload.WithArray("integratedRepositories", std::move(integratedRepositoriesJsonList));
  }

  if (m_codeRemediationStrategyHasBeenSet) {
    payload.WithString("codeRemediationStrategy",
                       CodeRemediationStrategyMapper::GetNameForCodeRemediationStrategy(m_codeRemediationStrategy));
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
