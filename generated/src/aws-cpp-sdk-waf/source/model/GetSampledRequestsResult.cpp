/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/GetSampledRequestsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSampledRequestsResult::GetSampledRequestsResult() : 
    m_populationSize(0)
{
}

GetSampledRequestsResult::GetSampledRequestsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_populationSize(0)
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
  }

  if(jsonValue.ValueExists("PopulationSize"))
  {
    m_populationSize = jsonValue.GetInt64("PopulationSize");

  }

  if(jsonValue.ValueExists("TimeWindow"))
  {
    m_timeWindow = jsonValue.GetObject("TimeWindow");

  }



  return *this;
}
