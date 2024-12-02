/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkFlowMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQueryResultsWorkloadInsightsTopContributorsDataResult::GetQueryResultsWorkloadInsightsTopContributorsDataResult() : 
    m_unit(MetricUnit::NOT_SET)
{
}

GetQueryResultsWorkloadInsightsTopContributorsDataResult::GetQueryResultsWorkloadInsightsTopContributorsDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetQueryResultsWorkloadInsightsTopContributorsDataResult()
{
  *this = result;
}

GetQueryResultsWorkloadInsightsTopContributorsDataResult& GetQueryResultsWorkloadInsightsTopContributorsDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = MetricUnitMapper::GetMetricUnitForName(jsonValue.GetString("unit"));

  }

  if(jsonValue.ValueExists("datapoints"))
  {
    Aws::Utils::Array<JsonView> datapointsJsonList = jsonValue.GetArray("datapoints");
    for(unsigned datapointsIndex = 0; datapointsIndex < datapointsJsonList.GetLength(); ++datapointsIndex)
    {
      m_datapoints.push_back(datapointsJsonList[datapointsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
