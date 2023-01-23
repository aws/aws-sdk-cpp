/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetTransitGatewayConnectPeerAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTransitGatewayConnectPeerAssociationsResult::GetTransitGatewayConnectPeerAssociationsResult()
{
}

GetTransitGatewayConnectPeerAssociationsResult::GetTransitGatewayConnectPeerAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTransitGatewayConnectPeerAssociationsResult& GetTransitGatewayConnectPeerAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TransitGatewayConnectPeerAssociations"))
  {
    Aws::Utils::Array<JsonView> transitGatewayConnectPeerAssociationsJsonList = jsonValue.GetArray("TransitGatewayConnectPeerAssociations");
    for(unsigned transitGatewayConnectPeerAssociationsIndex = 0; transitGatewayConnectPeerAssociationsIndex < transitGatewayConnectPeerAssociationsJsonList.GetLength(); ++transitGatewayConnectPeerAssociationsIndex)
    {
      m_transitGatewayConnectPeerAssociations.push_back(transitGatewayConnectPeerAssociationsJsonList[transitGatewayConnectPeerAssociationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
