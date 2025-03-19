/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetNetworkRoutesResult.h>
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

GetNetworkRoutesResult::GetNetworkRoutesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetNetworkRoutesResult& GetNetworkRoutesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RouteTableArn"))
  {
    m_routeTableArn = jsonValue.GetString("RouteTableArn");
    m_routeTableArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CoreNetworkSegmentEdge"))
  {
    m_coreNetworkSegmentEdge = jsonValue.GetObject("CoreNetworkSegmentEdge");
    m_coreNetworkSegmentEdgeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RouteTableType"))
  {
    m_routeTableType = RouteTableTypeMapper::GetRouteTableTypeForName(jsonValue.GetString("RouteTableType"));
    m_routeTableTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RouteTableTimestamp"))
  {
    m_routeTableTimestamp = jsonValue.GetDouble("RouteTableTimestamp");
    m_routeTableTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NetworkRoutes"))
  {
    Aws::Utils::Array<JsonView> networkRoutesJsonList = jsonValue.GetArray("NetworkRoutes");
    for(unsigned networkRoutesIndex = 0; networkRoutesIndex < networkRoutesJsonList.GetLength(); ++networkRoutesIndex)
    {
      m_networkRoutes.push_back(networkRoutesJsonList[networkRoutesIndex].AsObject());
    }
    m_networkRoutesHasBeenSet = true;
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
