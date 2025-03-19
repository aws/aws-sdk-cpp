/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeAnywhereSettings.h>
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

DescribeAnywhereSettings::DescribeAnywhereSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

DescribeAnywhereSettings& DescribeAnywhereSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelPlacementGroupId"))
  {
    m_channelPlacementGroupId = jsonValue.GetString("channelPlacementGroupId");
    m_channelPlacementGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterId"))
  {
    m_clusterId = jsonValue.GetString("clusterId");
    m_clusterIdHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribeAnywhereSettings::Jsonize() const
{
  JsonValue payload;

  if(m_channelPlacementGroupIdHasBeenSet)
  {
   payload.WithString("channelPlacementGroupId", m_channelPlacementGroupId);

  }

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("clusterId", m_clusterId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
