/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DescribeBrokerEngineTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBrokerEngineTypesResult::DescribeBrokerEngineTypesResult() : 
    m_maxResults(0)
{
}

DescribeBrokerEngineTypesResult::DescribeBrokerEngineTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_maxResults(0)
{
  *this = result;
}

DescribeBrokerEngineTypesResult& DescribeBrokerEngineTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("brokerEngineTypes"))
  {
    Aws::Utils::Array<JsonView> brokerEngineTypesJsonList = jsonValue.GetArray("brokerEngineTypes");
    for(unsigned brokerEngineTypesIndex = 0; brokerEngineTypesIndex < brokerEngineTypesJsonList.GetLength(); ++brokerEngineTypesIndex)
    {
      m_brokerEngineTypes.push_back(brokerEngineTypesJsonList[brokerEngineTypesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("maxResults"))
  {
    m_maxResults = jsonValue.GetInteger("maxResults");

  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
