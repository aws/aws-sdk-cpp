/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/GetResourceMetricsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceMetricsResult::GetResourceMetricsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourceMetricsResult& GetResourceMetricsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AlignedStartTime"))
  {
    m_alignedStartTime = jsonValue.GetDouble("AlignedStartTime");
    m_alignedStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AlignedEndTime"))
  {
    m_alignedEndTime = jsonValue.GetDouble("AlignedEndTime");
    m_alignedEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");
    m_identifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricList"))
  {
    Aws::Utils::Array<JsonView> metricListJsonList = jsonValue.GetArray("MetricList");
    for(unsigned metricListIndex = 0; metricListIndex < metricListJsonList.GetLength(); ++metricListIndex)
    {
      m_metricList.push_back(metricListJsonList[metricListIndex].AsObject());
    }
    m_metricListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
