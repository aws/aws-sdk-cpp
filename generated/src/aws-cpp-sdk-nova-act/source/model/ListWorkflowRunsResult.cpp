/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/nova-act/model/ListWorkflowRunsResult.h>

#include <utility>

using namespace Aws::NovaAct::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkflowRunsResult::ListWorkflowRunsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListWorkflowRunsResult& ListWorkflowRunsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("workflowRunSummaries")) {
    Aws::Utils::Array<JsonView> workflowRunSummariesJsonList = jsonValue.GetArray("workflowRunSummaries");
    for (unsigned workflowRunSummariesIndex = 0; workflowRunSummariesIndex < workflowRunSummariesJsonList.GetLength();
         ++workflowRunSummariesIndex) {
      m_workflowRunSummaries.push_back(workflowRunSummariesJsonList[workflowRunSummariesIndex].AsObject());
    }
    m_workflowRunSummariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
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
