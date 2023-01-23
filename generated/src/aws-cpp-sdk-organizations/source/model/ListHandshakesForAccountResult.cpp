/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/ListHandshakesForAccountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListHandshakesForAccountResult::ListHandshakesForAccountResult()
{
}

ListHandshakesForAccountResult::ListHandshakesForAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListHandshakesForAccountResult& ListHandshakesForAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Handshakes"))
  {
    Aws::Utils::Array<JsonView> handshakesJsonList = jsonValue.GetArray("Handshakes");
    for(unsigned handshakesIndex = 0; handshakesIndex < handshakesJsonList.GetLength(); ++handshakesIndex)
    {
      m_handshakes.push_back(handshakesJsonList[handshakesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
