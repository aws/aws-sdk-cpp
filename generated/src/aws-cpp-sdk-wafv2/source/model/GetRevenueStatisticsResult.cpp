/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wafv2/model/GetRevenueStatisticsResult.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRevenueStatisticsResult::GetRevenueStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetRevenueStatisticsResult& GetRevenueStatisticsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("SourceStatistics")) {
    Aws::Utils::Array<JsonView> sourceStatisticsJsonList = jsonValue.GetArray("SourceStatistics");
    for (unsigned sourceStatisticsIndex = 0; sourceStatisticsIndex < sourceStatisticsJsonList.GetLength(); ++sourceStatisticsIndex) {
      m_sourceStatistics.push_back(sourceStatisticsJsonList[sourceStatisticsIndex].AsObject());
    }
    m_sourceStatisticsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RevenuePathStatistics")) {
    Aws::Utils::Array<JsonView> revenuePathStatisticsJsonList = jsonValue.GetArray("RevenuePathStatistics");
    for (unsigned revenuePathStatisticsIndex = 0; revenuePathStatisticsIndex < revenuePathStatisticsJsonList.GetLength();
         ++revenuePathStatisticsIndex) {
      m_revenuePathStatistics.push_back(revenuePathStatisticsJsonList[revenuePathStatisticsIndex].AsObject());
    }
    m_revenuePathStatisticsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextMarker")) {
    m_nextMarker = jsonValue.GetString("NextMarker");
    m_nextMarkerHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
