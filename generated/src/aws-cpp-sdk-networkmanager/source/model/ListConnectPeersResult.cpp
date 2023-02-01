/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ListConnectPeersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConnectPeersResult::ListConnectPeersResult()
{
}

ListConnectPeersResult::ListConnectPeersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListConnectPeersResult& ListConnectPeersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConnectPeers"))
  {
    Aws::Utils::Array<JsonView> connectPeersJsonList = jsonValue.GetArray("ConnectPeers");
    for(unsigned connectPeersIndex = 0; connectPeersIndex < connectPeersJsonList.GetLength(); ++connectPeersIndex)
    {
      m_connectPeers.push_back(connectPeersJsonList[connectPeersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
