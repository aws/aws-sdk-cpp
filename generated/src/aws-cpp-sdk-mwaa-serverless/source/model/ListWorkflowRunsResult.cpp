/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mwaa-serverless/model/ListWorkflowRunsResult.h>

#include <utility>

using namespace Aws::MWAAServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkflowRunsResult::ListWorkflowRunsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListWorkflowRunsResult& ListWorkflowRunsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("WorkflowRuns")) {
    Aws::Utils::Array<JsonView> workflowRunsJsonList = jsonValue.GetArray("WorkflowRuns");
    for (unsigned workflowRunsIndex = 0; workflowRunsIndex < workflowRunsJsonList.GetLength(); ++workflowRunsIndex) {
      m_workflowRuns.push_back(workflowRunsJsonList[workflowRunsIndex].AsObject());
    }
    m_workflowRunsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
