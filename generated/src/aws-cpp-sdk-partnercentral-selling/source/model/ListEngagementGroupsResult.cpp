/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-selling/model/ListEngagementGroupsResult.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEngagementGroupsResult::ListEngagementGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListEngagementGroupsResult& ListEngagementGroupsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("EngagementGroupSummaries")) {
    Aws::Utils::Array<JsonView> engagementGroupSummariesJsonList = jsonValue.GetArray("EngagementGroupSummaries");
    for (unsigned engagementGroupSummariesIndex = 0; engagementGroupSummariesIndex < engagementGroupSummariesJsonList.GetLength();
         ++engagementGroupSummariesIndex) {
      m_engagementGroupSummaries.push_back(engagementGroupSummariesJsonList[engagementGroupSummariesIndex].AsObject());
    }
    m_engagementGroupSummariesHasBeenSet = true;
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
