/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DescribeBrokerInstanceOptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBrokerInstanceOptionsResult::DescribeBrokerInstanceOptionsResult() : 
    m_maxResults(0)
{
}

DescribeBrokerInstanceOptionsResult::DescribeBrokerInstanceOptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_maxResults(0)
{
  *this = result;
}

DescribeBrokerInstanceOptionsResult& DescribeBrokerInstanceOptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("brokerInstanceOptions"))
  {
    Aws::Utils::Array<JsonView> brokerInstanceOptionsJsonList = jsonValue.GetArray("brokerInstanceOptions");
    for(unsigned brokerInstanceOptionsIndex = 0; brokerInstanceOptionsIndex < brokerInstanceOptionsJsonList.GetLength(); ++brokerInstanceOptionsIndex)
    {
      m_brokerInstanceOptions.push_back(brokerInstanceOptionsJsonList[brokerInstanceOptionsIndex].AsObject());
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
