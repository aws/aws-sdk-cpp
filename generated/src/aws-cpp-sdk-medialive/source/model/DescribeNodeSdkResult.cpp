/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeNodeSdkResult.h>
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

DescribeNodeSdkResult::DescribeNodeSdkResult() : 
    m_connectionState(NodeConnectionState::NOT_SET),
    m_role(NodeRole::NOT_SET),
    m_state(NodeState::NOT_SET)
{
}

DescribeNodeSdkResult::DescribeNodeSdkResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeNodeSdkResult()
{
  *this = result;
}

DescribeNodeSdkResult& DescribeNodeSdkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("channelPlacementGroups"))
  {
    Aws::Utils::Array<JsonView> channelPlacementGroupsJsonList = jsonValue.GetArray("channelPlacementGroups");
    for(unsigned channelPlacementGroupsIndex = 0; channelPlacementGroupsIndex < channelPlacementGroupsJsonList.GetLength(); ++channelPlacementGroupsIndex)
    {
      m_channelPlacementGroups.push_back(channelPlacementGroupsJsonList[channelPlacementGroupsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("clusterId"))
  {
    m_clusterId = jsonValue.GetString("clusterId");

  }

  if(jsonValue.ValueExists("connectionState"))
  {
    m_connectionState = NodeConnectionStateMapper::GetNodeConnectionStateForName(jsonValue.GetString("connectionState"));

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("instanceArn"))
  {
    m_instanceArn = jsonValue.GetString("instanceArn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("nodeInterfaceMappings"))
  {
    Aws::Utils::Array<JsonView> nodeInterfaceMappingsJsonList = jsonValue.GetArray("nodeInterfaceMappings");
    for(unsigned nodeInterfaceMappingsIndex = 0; nodeInterfaceMappingsIndex < nodeInterfaceMappingsJsonList.GetLength(); ++nodeInterfaceMappingsIndex)
    {
      m_nodeInterfaceMappings.push_back(nodeInterfaceMappingsJsonList[nodeInterfaceMappingsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("role"))
  {
    m_role = NodeRoleMapper::GetNodeRoleForName(jsonValue.GetString("role"));

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = NodeStateMapper::GetNodeStateForName(jsonValue.GetString("state"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
