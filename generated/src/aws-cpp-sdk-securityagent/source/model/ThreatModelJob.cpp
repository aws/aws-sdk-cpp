/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ThreatModelJob.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ThreatModelJob::ThreatModelJob(JsonView jsonValue) { *this = jsonValue; }

ThreatModelJob& ThreatModelJob::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("threatModelJobId")) {
    m_threatModelJobId = jsonValue.GetString("threatModelJobId");
    m_threatModelJobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("threatModelId")) {
    m_threatModelId = jsonValue.GetString("threatModelId");
    m_threatModelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionStartTime")) {
    m_executionStartTime = jsonValue.GetString("executionStartTime");
    m_executionStartTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionEndTime")) {
    m_executionEndTime = jsonValue.GetString("executionEndTime");
    m_executionEndTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceCode")) {
    Aws::Utils::Array<JsonView> sourceCodeJsonList = jsonValue.GetArray("sourceCode");
    for (unsigned sourceCodeIndex = 0; sourceCodeIndex < sourceCodeJsonList.GetLength(); ++sourceCodeIndex) {
      m_sourceCode.push_back(sourceCodeJsonList[sourceCodeIndex].AsObject());
    }
    m_sourceCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("integratedRepositories")) {
    Aws::Utils::Array<JsonView> integratedRepositoriesJsonList = jsonValue.GetArray("integratedRepositories");
    for (unsigned integratedRepositoriesIndex = 0; integratedRepositoriesIndex < integratedRepositoriesJsonList.GetLength();
         ++integratedRepositoriesIndex) {
      m_integratedRepositories.push_back(integratedRepositoriesJsonList[integratedRepositoriesIndex].AsObject());
    }
    m_integratedRepositoriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("documents")) {
    Aws::Utils::Array<JsonView> documentsJsonList = jsonValue.GetArray("documents");
    for (unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex) {
      m_documents.push_back(documentsJsonList[documentsIndex].AsObject());
    }
    m_documentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeDocs")) {
    Aws::Utils::Array<JsonView> scopeDocsJsonList = jsonValue.GetArray("scopeDocs");
    for (unsigned scopeDocsIndex = 0; scopeDocsIndex < scopeDocsJsonList.GetLength(); ++scopeDocsIndex) {
      m_scopeDocs.push_back(scopeDocsJsonList[scopeDocsIndex].AsObject());
    }
    m_scopeDocsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorInformation")) {
    m_errorInformation = jsonValue.GetObject("errorInformation");
    m_errorInformationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemOverview")) {
    m_systemOverview = jsonValue.GetString("systemOverview");
    m_systemOverviewHasBeenSet = true;
  }
  return *this;
}

JsonValue ThreatModelJob::Jsonize() const {
  JsonValue payload;

  if (m_threatModelJobIdHasBeenSet) {
    payload.WithString("threatModelJobId", m_threatModelJobId);
  }

  if (m_threatModelIdHasBeenSet) {
    payload.WithString("threatModelId", m_threatModelId);
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_executionStartTimeHasBeenSet) {
    payload.WithString("executionStartTime", m_executionStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_executionEndTimeHasBeenSet) {
    payload.WithString("executionEndTime", m_executionEndTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_sourceCodeHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceCodeJsonList(m_sourceCode.size());
    for (unsigned sourceCodeIndex = 0; sourceCodeIndex < sourceCodeJsonList.GetLength(); ++sourceCodeIndex) {
      sourceCodeJsonList[sourceCodeIndex].AsObject(m_sourceCode[sourceCodeIndex].Jsonize());
    }
    payload.WithArray("sourceCode", std::move(sourceCodeJsonList));
  }

  if (m_integratedRepositoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> integratedRepositoriesJsonList(m_integratedRepositories.size());
    for (unsigned integratedRepositoriesIndex = 0; integratedRepositoriesIndex < integratedRepositoriesJsonList.GetLength();
         ++integratedRepositoriesIndex) {
      integratedRepositoriesJsonList[integratedRepositoriesIndex].AsObject(m_integratedRepositories[integratedRepositoriesIndex].Jsonize());
    }
    payload.WithArray("integratedRepositories", std::move(integratedRepositoriesJsonList));
  }

  if (m_documentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> documentsJsonList(m_documents.size());
    for (unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex) {
      documentsJsonList[documentsIndex].AsObject(m_documents[documentsIndex].Jsonize());
    }
    payload.WithArray("documents", std::move(documentsJsonList));
  }

  if (m_scopeDocsHasBeenSet) {
    Aws::Utils::Array<JsonValue> scopeDocsJsonList(m_scopeDocs.size());
    for (unsigned scopeDocsIndex = 0; scopeDocsIndex < scopeDocsJsonList.GetLength(); ++scopeDocsIndex) {
      scopeDocsJsonList[scopeDocsIndex].AsObject(m_scopeDocs[scopeDocsIndex].Jsonize());
    }
    payload.WithArray("scopeDocs", std::move(scopeDocsJsonList));
  }

  if (m_errorInformationHasBeenSet) {
    payload.WithObject("errorInformation", m_errorInformation.Jsonize());
  }

  if (m_systemOverviewHasBeenSet) {
    payload.WithString("systemOverview", m_systemOverview);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
