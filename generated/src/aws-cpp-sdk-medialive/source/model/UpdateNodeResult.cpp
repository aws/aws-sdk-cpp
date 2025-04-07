/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateNodeResult.h>
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

UpdateNodeResult::UpdateNodeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateNodeResult& UpdateNodeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelPlacementGroups"))
  {
    Aws::Utils::Array<JsonView> channelPlacementGroupsJsonList = jsonValue.GetArray("channelPlacementGroups");
    for(unsigned channelPlacementGroupsIndex = 0; channelPlacementGroupsIndex < channelPlacementGroupsJsonList.GetLength(); ++channelPlacementGroupsIndex)
    {
      m_channelPlacementGroups.push_back(channelPlacementGroupsJsonList[channelPlacementGroupsIndex].AsString());
    }
    m_channelPlacementGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterId"))
  {
    m_clusterId = jsonValue.GetString("clusterId");
    m_clusterIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectionState"))
  {
    m_connectionState = NodeConnectionStateMapper::GetNodeConnectionStateForName(jsonValue.GetString("connectionState"));
    m_connectionStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceArn"))
  {
    m_instanceArn = jsonValue.GetString("instanceArn");
    m_instanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeInterfaceMappings"))
  {
    Aws::Utils::Array<JsonView> nodeInterfaceMappingsJsonList = jsonValue.GetArray("nodeInterfaceMappings");
    for(unsigned nodeInterfaceMappingsIndex = 0; nodeInterfaceMappingsIndex < nodeInterfaceMappingsJsonList.GetLength(); ++nodeInterfaceMappingsIndex)
    {
      m_nodeInterfaceMappings.push_back(nodeInterfaceMappingsJsonList[nodeInterfaceMappingsIndex].AsObject());
    }
    m_nodeInterfaceMappingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("role"))
  {
    m_role = NodeRoleMapper::GetNodeRoleForName(jsonValue.GetString("role"));
    m_roleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = NodeStateMapper::GetNodeStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sdiSourceMappings"))
  {
    Aws::Utils::Array<JsonView> sdiSourceMappingsJsonList = jsonValue.GetArray("sdiSourceMappings");
    for(unsigned sdiSourceMappingsIndex = 0; sdiSourceMappingsIndex < sdiSourceMappingsJsonList.GetLength(); ++sdiSourceMappingsIndex)
    {
      m_sdiSourceMappings.push_back(sdiSourceMappingsJsonList[sdiSourceMappingsIndex].AsObject());
    }
    m_sdiSourceMappingsHasBeenSet = true;
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
