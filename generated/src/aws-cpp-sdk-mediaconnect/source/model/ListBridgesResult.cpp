/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/ListBridgesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBridgesResult::ListBridgesResult()
{
}

ListBridgesResult::ListBridgesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBridgesResult& ListBridgesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("bridges"))
  {
    Aws::Utils::Array<JsonView> bridgesJsonList = jsonValue.GetArray("bridges");
    for(unsigned bridgesIndex = 0; bridgesIndex < bridgesJsonList.GetLength(); ++bridgesIndex)
    {
      m_bridges.push_back(bridgesJsonList[bridgesIndex].AsObject());
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
