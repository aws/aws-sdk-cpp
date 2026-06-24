/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wafv2/model/GetRevenueStatisticsTimeSeriesResult.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRevenueStatisticsTimeSeriesResult::GetRevenueStatisticsTimeSeriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetRevenueStatisticsTimeSeriesResult& GetRevenueStatisticsTimeSeriesResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("DataPoints")) {
    Aws::Utils::Array<JsonView> dataPointsJsonList = jsonValue.GetArray("DataPoints");
    for (unsigned dataPointsIndex = 0; dataPointsIndex < dataPointsJsonList.GetLength(); ++dataPointsIndex) {
      m_dataPoints.push_back(dataPointsJsonList[dataPointsIndex].AsObject());
    }
    m_dataPointsHasBeenSet = true;
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
