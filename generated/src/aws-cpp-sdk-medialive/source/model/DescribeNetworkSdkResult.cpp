/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeNetworkSdkResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeNetworkSdkResult::DescribeNetworkSdkResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeNetworkSdkResult& DescribeNetworkSdkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("associatedClusterIds"))
  {
    Aws::Utils::Array<JsonView> associatedClusterIdsJsonList = jsonValue.GetArray("associatedClusterIds");
    for(unsigned associatedClusterIdsIndex = 0; associatedClusterIdsIndex < associatedClusterIdsJsonList.GetLength(); ++associatedClusterIdsIndex)
    {
      m_associatedClusterIds.push_back(associatedClusterIdsJsonList[associatedClusterIdsIndex].AsString());
    }
    m_associatedClusterIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipPools"))
  {
    Aws::Utils::Array<JsonView> ipPoolsJsonList = jsonValue.GetArray("ipPools");
    for(unsigned ipPoolsIndex = 0; ipPoolsIndex < ipPoolsJsonList.GetLength(); ++ipPoolsIndex)
    {
      m_ipPools.push_back(ipPoolsJsonList[ipPoolsIndex].AsObject());
    }
    m_ipPoolsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("routes"))
  {
    Aws::Utils::Array<JsonView> routesJsonList = jsonValue.GetArray("routes");
    for(unsigned routesIndex = 0; routesIndex < routesJsonList.GetLength(); ++routesIndex)
    {
      m_routes.push_back(routesJsonList[routesIndex].AsObject());
    }
    m_routesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = NetworkStateMapper::GetNetworkStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
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
