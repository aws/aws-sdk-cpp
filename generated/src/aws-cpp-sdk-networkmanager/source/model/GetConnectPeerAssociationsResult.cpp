/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetConnectPeerAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConnectPeerAssociationsResult::GetConnectPeerAssociationsResult()
{
}

GetConnectPeerAssociationsResult::GetConnectPeerAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConnectPeerAssociationsResult& GetConnectPeerAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConnectPeerAssociations"))
  {
    Aws::Utils::Array<JsonView> connectPeerAssociationsJsonList = jsonValue.GetArray("ConnectPeerAssociations");
    for(unsigned connectPeerAssociationsIndex = 0; connectPeerAssociationsIndex < connectPeerAssociationsJsonList.GetLength(); ++connectPeerAssociationsIndex)
    {
      m_connectPeerAssociations.push_back(connectPeerAssociationsJsonList[connectPeerAssociationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
