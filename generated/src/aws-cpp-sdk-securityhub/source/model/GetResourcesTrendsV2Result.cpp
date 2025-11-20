/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityhub/model/GetResourcesTrendsV2Result.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourcesTrendsV2Result::GetResourcesTrendsV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetResourcesTrendsV2Result& GetResourcesTrendsV2Result::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Granularity")) {
    m_granularity = GranularityFieldMapper::GetGranularityFieldForName(jsonValue.GetString("Granularity"));
    m_granularityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TrendsMetrics")) {
    Aws::Utils::Array<JsonView> trendsMetricsJsonList = jsonValue.GetArray("TrendsMetrics");
    for (unsigned trendsMetricsIndex = 0; trendsMetricsIndex < trendsMetricsJsonList.GetLength(); ++trendsMetricsIndex) {
      m_trendsMetrics.push_back(trendsMetricsJsonList[trendsMetricsIndex].AsObject());
    }
    m_trendsMetricsHasBeenSet = true;
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
