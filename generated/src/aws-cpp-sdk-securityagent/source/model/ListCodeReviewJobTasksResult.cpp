/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/ListCodeReviewJobTasksResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCodeReviewJobTasksResult::ListCodeReviewJobTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListCodeReviewJobTasksResult& ListCodeReviewJobTasksResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("codeReviewJobTaskSummaries")) {
    Aws::Utils::Array<JsonView> codeReviewJobTaskSummariesJsonList = jsonValue.GetArray("codeReviewJobTaskSummaries");
    for (unsigned codeReviewJobTaskSummariesIndex = 0; codeReviewJobTaskSummariesIndex < codeReviewJobTaskSummariesJsonList.GetLength();
         ++codeReviewJobTaskSummariesIndex) {
      m_codeReviewJobTaskSummaries.push_back(codeReviewJobTaskSummariesJsonList[codeReviewJobTaskSummariesIndex].AsObject());
    }
    m_codeReviewJobTaskSummariesHasBeenSet = true;
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
