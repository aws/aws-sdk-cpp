/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-selling/model/SearchEngagementsResult.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchEngagementsResult::SearchEngagementsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SearchEngagementsResult& SearchEngagementsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("EngagementSearchSummaries")) {
    Aws::Utils::Array<JsonView> engagementSearchSummariesJsonList = jsonValue.GetArray("EngagementSearchSummaries");
    for (unsigned engagementSearchSummariesIndex = 0; engagementSearchSummariesIndex < engagementSearchSummariesJsonList.GetLength();
         ++engagementSearchSummariesIndex) {
      m_engagementSearchSummaries.push_back(engagementSearchSummariesJsonList[engagementSearchSummariesIndex].AsObject());
    }
    m_engagementSearchSummariesHasBeenSet = true;
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
