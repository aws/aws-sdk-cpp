/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/ListBrokersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBrokersResult::ListBrokersResult()
{
}

ListBrokersResult::ListBrokersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBrokersResult& ListBrokersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("brokerSummaries"))
  {
    Aws::Utils::Array<JsonView> brokerSummariesJsonList = jsonValue.GetArray("brokerSummaries");
    for(unsigned brokerSummariesIndex = 0; brokerSummariesIndex < brokerSummariesJsonList.GetLength(); ++brokerSummariesIndex)
    {
      m_brokerSummaries.push_back(brokerSummariesJsonList[brokerSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
