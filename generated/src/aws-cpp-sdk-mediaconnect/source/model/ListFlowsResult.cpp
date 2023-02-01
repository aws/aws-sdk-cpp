/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/ListFlowsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFlowsResult::ListFlowsResult()
{
}

ListFlowsResult::ListFlowsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFlowsResult& ListFlowsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("flows"))
  {
    Aws::Utils::Array<JsonView> flowsJsonList = jsonValue.GetArray("flows");
    for(unsigned flowsIndex = 0; flowsIndex < flowsJsonList.GetLength(); ++flowsIndex)
    {
      m_flows.push_back(flowsJsonList[flowsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
