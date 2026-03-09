/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wafv2/model/GetTopPathStatisticsByTrafficResult.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTopPathStatisticsByTrafficResult::GetTopPathStatisticsByTrafficResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetTopPathStatisticsByTrafficResult& GetTopPathStatisticsByTrafficResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("PathStatistics")) {
    Aws::Utils::Array<JsonView> pathStatisticsJsonList = jsonValue.GetArray("PathStatistics");
    for (unsigned pathStatisticsIndex = 0; pathStatisticsIndex < pathStatisticsJsonList.GetLength(); ++pathStatisticsIndex) {
      m_pathStatistics.push_back(pathStatisticsJsonList[pathStatisticsIndex].AsObject());
    }
    m_pathStatisticsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalRequestCount")) {
    m_totalRequestCount = jsonValue.GetInt64("TotalRequestCount");
    m_totalRequestCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextMarker")) {
    m_nextMarker = jsonValue.GetString("NextMarker");
    m_nextMarkerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TopCategories")) {
    Aws::Utils::Array<JsonView> topCategoriesJsonList = jsonValue.GetArray("TopCategories");
    for (unsigned topCategoriesIndex = 0; topCategoriesIndex < topCategoriesJsonList.GetLength(); ++topCategoriesIndex) {
      m_topCategories.push_back(topCategoriesJsonList[topCategoriesIndex].AsObject());
    }
    m_topCategoriesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
