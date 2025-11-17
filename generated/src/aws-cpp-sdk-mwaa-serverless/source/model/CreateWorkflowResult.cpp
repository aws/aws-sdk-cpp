/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mwaa-serverless/model/CreateWorkflowResult.h>

#include <utility>

using namespace Aws::MWAAServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateWorkflowResult::CreateWorkflowResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateWorkflowResult& CreateWorkflowResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("WorkflowArn")) {
    m_workflowArn = jsonValue.GetString("WorkflowArn");
    m_workflowArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RevisionId")) {
    m_revisionId = jsonValue.GetString("RevisionId");
    m_revisionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkflowStatus")) {
    m_workflowStatus = WorkflowStatusMapper::GetWorkflowStatusForName(jsonValue.GetString("WorkflowStatus"));
    m_workflowStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkflowVersion")) {
    m_workflowVersion = jsonValue.GetString("WorkflowVersion");
    m_workflowVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsLatestVersion")) {
    m_isLatestVersion = jsonValue.GetBool("IsLatestVersion");
    m_isLatestVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Warnings")) {
    Aws::Utils::Array<JsonView> warningsJsonList = jsonValue.GetArray("Warnings");
    for (unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex) {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsString());
    }
    m_warningsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
