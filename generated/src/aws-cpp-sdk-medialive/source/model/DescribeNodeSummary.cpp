/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeNodeSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

DescribeNodeSummary::DescribeNodeSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

DescribeNodeSummary& DescribeNodeSummary::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("managedInstanceId"))
  {
    m_managedInstanceId = jsonValue.GetString("managedInstanceId");
    m_managedInstanceIdHasBeenSet = true;
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
  return *this;
}

JsonValue DescribeNodeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_channelPlacementGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelPlacementGroupsJsonList(m_channelPlacementGroups.size());
   for(unsigned channelPlacementGroupsIndex = 0; channelPlacementGroupsIndex < channelPlacementGroupsJsonList.GetLength(); ++channelPlacementGroupsIndex)
   {
     channelPlacementGroupsJsonList[channelPlacementGroupsIndex].AsString(m_channelPlacementGroups[channelPlacementGroupsIndex]);
   }
   payload.WithArray("channelPlacementGroups", std::move(channelPlacementGroupsJsonList));

  }

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("clusterId", m_clusterId);

  }

  if(m_connectionStateHasBeenSet)
  {
   payload.WithString("connectionState", NodeConnectionStateMapper::GetNameForNodeConnectionState(m_connectionState));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("instanceArn", m_instanceArn);

  }

  if(m_managedInstanceIdHasBeenSet)
  {
   payload.WithString("managedInstanceId", m_managedInstanceId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_nodeInterfaceMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodeInterfaceMappingsJsonList(m_nodeInterfaceMappings.size());
   for(unsigned nodeInterfaceMappingsIndex = 0; nodeInterfaceMappingsIndex < nodeInterfaceMappingsJsonList.GetLength(); ++nodeInterfaceMappingsIndex)
   {
     nodeInterfaceMappingsJsonList[nodeInterfaceMappingsIndex].AsObject(m_nodeInterfaceMappings[nodeInterfaceMappingsIndex].Jsonize());
   }
   payload.WithArray("nodeInterfaceMappings", std::move(nodeInterfaceMappingsJsonList));

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("role", NodeRoleMapper::GetNameForNodeRole(m_role));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", NodeStateMapper::GetNameForNodeState(m_state));
  }

  if(m_sdiSourceMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sdiSourceMappingsJsonList(m_sdiSourceMappings.size());
   for(unsigned sdiSourceMappingsIndex = 0; sdiSourceMappingsIndex < sdiSourceMappingsJsonList.GetLength(); ++sdiSourceMappingsIndex)
   {
     sdiSourceMappingsJsonList[sdiSourceMappingsIndex].AsObject(m_sdiSourceMappings[sdiSourceMappingsIndex].Jsonize());
   }
   payload.WithArray("sdiSourceMappings", std::move(sdiSourceMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
