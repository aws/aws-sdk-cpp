﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsResult.h>
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

GetQueryResultsWorkloadInsightsTopContributorsResult::GetQueryResultsWorkloadInsightsTopContributorsResult()
{
}

GetQueryResultsWorkloadInsightsTopContributorsResult::GetQueryResultsWorkloadInsightsTopContributorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetQueryResultsWorkloadInsightsTopContributorsResult& GetQueryResultsWorkloadInsightsTopContributorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("topContributors"))
  {
    Aws::Utils::Array<JsonView> topContributorsJsonList = jsonValue.GetArray("topContributors");
    for(unsigned topContributorsIndex = 0; topContributorsIndex < topContributorsJsonList.GetLength(); ++topContributorsIndex)
    {
      m_topContributors.push_back(topContributorsJsonList[topContributorsIndex].AsObject());
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
