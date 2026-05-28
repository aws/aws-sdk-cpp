/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/resiliencehubv2/model/ListFailureModeAssessmentsResult.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFailureModeAssessmentsResult::ListFailureModeAssessmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListFailureModeAssessmentsResult& ListFailureModeAssessmentsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("assessmentSummaries")) {
    Aws::Utils::Array<JsonView> assessmentSummariesJsonList = jsonValue.GetArray("assessmentSummaries");
    for (unsigned assessmentSummariesIndex = 0; assessmentSummariesIndex < assessmentSummariesJsonList.GetLength();
         ++assessmentSummariesIndex) {
      m_assessmentSummaries.push_back(assessmentSummariesJsonList[assessmentSummariesIndex].AsObject());
    }
    m_assessmentSummariesHasBeenSet = true;
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
