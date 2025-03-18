/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeClusterSummary.h>
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

DescribeClusterSummary::DescribeClusterSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

DescribeClusterSummary& DescribeClusterSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelIds"))
  {
    Aws::Utils::Array<JsonView> channelIdsJsonList = jsonValue.GetArray("channelIds");
    for(unsigned channelIdsIndex = 0; channelIdsIndex < channelIdsJsonList.GetLength(); ++channelIdsIndex)
    {
      m_channelIds.push_back(channelIdsJsonList[channelIdsIndex].AsString());
    }
    m_channelIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterType"))
  {
    m_clusterType = ClusterTypeMapper::GetClusterTypeForName(jsonValue.GetString("clusterType"));
    m_clusterTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceRoleArn"))
  {
    m_instanceRoleArn = jsonValue.GetString("instanceRoleArn");
    m_instanceRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkSettings"))
  {
    m_networkSettings = jsonValue.GetObject("networkSettings");
    m_networkSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = ClusterStateMapper::GetClusterStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribeClusterSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_channelIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelIdsJsonList(m_channelIds.size());
   for(unsigned channelIdsIndex = 0; channelIdsIndex < channelIdsJsonList.GetLength(); ++channelIdsIndex)
   {
     channelIdsJsonList[channelIdsIndex].AsString(m_channelIds[channelIdsIndex]);
   }
   payload.WithArray("channelIds", std::move(channelIdsJsonList));

  }

  if(m_clusterTypeHasBeenSet)
  {
   payload.WithString("clusterType", ClusterTypeMapper::GetNameForClusterType(m_clusterType));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_instanceRoleArnHasBeenSet)
  {
   payload.WithString("instanceRoleArn", m_instanceRoleArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_networkSettingsHasBeenSet)
  {
   payload.WithObject("networkSettings", m_networkSettings.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ClusterStateMapper::GetNameForClusterState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
