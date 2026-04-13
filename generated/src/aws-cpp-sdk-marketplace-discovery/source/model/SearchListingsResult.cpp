/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/marketplace-discovery/model/SearchListingsResult.h>

#include <utility>

using namespace Aws::MarketplaceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchListingsResult::SearchListingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SearchListingsResult& SearchListingsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("totalResults")) {
    m_totalResults = jsonValue.GetInt64("totalResults");
    m_totalResultsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listingSummaries")) {
    Aws::Utils::Array<JsonView> listingSummariesJsonList = jsonValue.GetArray("listingSummaries");
    for (unsigned listingSummariesIndex = 0; listingSummariesIndex < listingSummariesJsonList.GetLength(); ++listingSummariesIndex) {
      m_listingSummaries.push_back(listingSummariesJsonList[listingSummariesIndex].AsObject());
    }
    m_listingSummariesHasBeenSet = true;
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
