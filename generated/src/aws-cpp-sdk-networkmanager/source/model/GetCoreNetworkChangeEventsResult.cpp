/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetCoreNetworkChangeEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCoreNetworkChangeEventsResult::GetCoreNetworkChangeEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCoreNetworkChangeEventsResult& GetCoreNetworkChangeEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CoreNetworkChangeEvents"))
  {
    Aws::Utils::Array<JsonView> coreNetworkChangeEventsJsonList = jsonValue.GetArray("CoreNetworkChangeEvents");
    for(unsigned coreNetworkChangeEventsIndex = 0; coreNetworkChangeEventsIndex < coreNetworkChangeEventsJsonList.GetLength(); ++coreNetworkChangeEventsIndex)
    {
      m_coreNetworkChangeEvents.push_back(coreNetworkChangeEventsJsonList[coreNetworkChangeEventsIndex].AsObject());
    }
    m_coreNetworkChangeEventsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
