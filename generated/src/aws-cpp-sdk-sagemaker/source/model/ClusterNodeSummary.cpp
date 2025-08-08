/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterNodeSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ClusterNodeSummary::ClusterNodeSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterNodeSummary& ClusterNodeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceGroupName"))
  {
    m_instanceGroupName = jsonValue.GetString("InstanceGroupName");
    m_instanceGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");
    m_instanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NodeLogicalId"))
  {
    m_nodeLogicalId = jsonValue.GetString("NodeLogicalId");
    m_nodeLogicalIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = ClusterInstanceTypeMapper::GetClusterInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LaunchTime"))
  {
    m_launchTime = jsonValue.GetDouble("LaunchTime");
    m_launchTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastSoftwareUpdateTime"))
  {
    m_lastSoftwareUpdateTime = jsonValue.GetDouble("LastSoftwareUpdateTime");
    m_lastSoftwareUpdateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceStatus"))
  {
    m_instanceStatus = jsonValue.GetObject("InstanceStatus");
    m_instanceStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UltraServerInfo"))
  {
    m_ultraServerInfo = jsonValue.GetObject("UltraServerInfo");
    m_ultraServerInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterNodeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_instanceGroupNameHasBeenSet)
  {
   payload.WithString("InstanceGroupName", m_instanceGroupName);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_nodeLogicalIdHasBeenSet)
  {
   payload.WithString("NodeLogicalId", m_nodeLogicalId);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ClusterInstanceTypeMapper::GetNameForClusterInstanceType(m_instanceType));
  }

  if(m_launchTimeHasBeenSet)
  {
   payload.WithDouble("LaunchTime", m_launchTime.SecondsWithMSPrecision());
  }

  if(m_lastSoftwareUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastSoftwareUpdateTime", m_lastSoftwareUpdateTime.SecondsWithMSPrecision());
  }

  if(m_instanceStatusHasBeenSet)
  {
   payload.WithObject("InstanceStatus", m_instanceStatus.Jsonize());

  }

  if(m_ultraServerInfoHasBeenSet)
  {
   payload.WithObject("UltraServerInfo", m_ultraServerInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
