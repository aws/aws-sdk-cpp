/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-selling/model/ListOpportunityBulkJobsResult.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOpportunityBulkJobsResult::ListOpportunityBulkJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListOpportunityBulkJobsResult& ListOpportunityBulkJobsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("OpportunityBulkJobSummaries")) {
    Aws::Utils::Array<JsonView> opportunityBulkJobSummariesJsonList = jsonValue.GetArray("OpportunityBulkJobSummaries");
    for (unsigned opportunityBulkJobSummariesIndex = 0; opportunityBulkJobSummariesIndex < opportunityBulkJobSummariesJsonList.GetLength();
         ++opportunityBulkJobSummariesIndex) {
      m_opportunityBulkJobSummaries.push_back(opportunityBulkJobSummariesJsonList[opportunityBulkJobSummariesIndex].AsObject());
    }
    m_opportunityBulkJobSummariesHasBeenSet = true;
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
