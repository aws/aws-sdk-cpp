/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/marketplace-catalog/model/ListAssessmentsResult.h>

#include <utility>

using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssessmentsResult::ListAssessmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListAssessmentsResult& ListAssessmentsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AssessmentSummaryList")) {
    Aws::Utils::Array<JsonView> assessmentSummaryListJsonList = jsonValue.GetArray("AssessmentSummaryList");
    for (unsigned assessmentSummaryListIndex = 0; assessmentSummaryListIndex < assessmentSummaryListJsonList.GetLength();
         ++assessmentSummaryListIndex) {
      m_assessmentSummaryList.push_back(assessmentSummaryListJsonList[assessmentSummaryListIndex].AsObject());
    }
    m_assessmentSummaryListHasBeenSet = true;
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
