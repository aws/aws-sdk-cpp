/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/GetInsightImpactGraphResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInsightImpactGraphResult::GetInsightImpactGraphResult()
{
}

GetInsightImpactGraphResult::GetInsightImpactGraphResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetInsightImpactGraphResult& GetInsightImpactGraphResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InsightId"))
  {
    m_insightId = jsonValue.GetString("InsightId");

  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

  }

  if(jsonValue.ValueExists("ServiceGraphStartTime"))
  {
    m_serviceGraphStartTime = jsonValue.GetDouble("ServiceGraphStartTime");

  }

  if(jsonValue.ValueExists("ServiceGraphEndTime"))
  {
    m_serviceGraphEndTime = jsonValue.GetDouble("ServiceGraphEndTime");

  }

  if(jsonValue.ValueExists("Services"))
  {
    Aws::Utils::Array<JsonView> servicesJsonList = jsonValue.GetArray("Services");
    for(unsigned servicesIndex = 0; servicesIndex < servicesJsonList.GetLength(); ++servicesIndex)
    {
      m_services.push_back(servicesJsonList[servicesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
