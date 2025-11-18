/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mwaa-serverless/model/UpdateWorkflowResult.h>

#include <utility>

using namespace Aws::MWAAServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateWorkflowResult::UpdateWorkflowResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateWorkflowResult& UpdateWorkflowResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("WorkflowArn")) {
    m_workflowArn = jsonValue.GetString("WorkflowArn");
    m_workflowArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModifiedAt")) {
    m_modifiedAt = jsonValue.GetString("ModifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WorkflowVersion")) {
    m_workflowVersion = jsonValue.GetString("WorkflowVersion");
    m_workflowVersionHasBeenSet = true;
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
