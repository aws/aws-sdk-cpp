﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/GetSampledRequestsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSampledRequestsResult::GetSampledRequestsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSampledRequestsResult& GetSampledRequestsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SampledRequests"))
  {
    Aws::Utils::Array<JsonView> sampledRequestsJsonList = jsonValue.GetArray("SampledRequests");
    for(unsigned sampledRequestsIndex = 0; sampledRequestsIndex < sampledRequestsJsonList.GetLength(); ++sampledRequestsIndex)
    {
      m_sampledRequests.push_back(sampledRequestsJsonList[sampledRequestsIndex].AsObject());
    }
    m_sampledRequestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PopulationSize"))
  {
    m_populationSize = jsonValue.GetInt64("PopulationSize");
    m_populationSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeWindow"))
  {
    m_timeWindow = jsonValue.GetObject("TimeWindow");
    m_timeWindowHasBeenSet = true;
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
