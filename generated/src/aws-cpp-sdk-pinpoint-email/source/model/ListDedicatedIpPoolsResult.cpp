/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/ListDedicatedIpPoolsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDedicatedIpPoolsResult::ListDedicatedIpPoolsResult()
{
}

ListDedicatedIpPoolsResult::ListDedicatedIpPoolsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDedicatedIpPoolsResult& ListDedicatedIpPoolsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DedicatedIpPools"))
  {
    Aws::Utils::Array<JsonView> dedicatedIpPoolsJsonList = jsonValue.GetArray("DedicatedIpPools");
    for(unsigned dedicatedIpPoolsIndex = 0; dedicatedIpPoolsIndex < dedicatedIpPoolsJsonList.GetLength(); ++dedicatedIpPoolsIndex)
    {
      m_dedicatedIpPools.push_back(dedicatedIpPoolsJsonList[dedicatedIpPoolsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
