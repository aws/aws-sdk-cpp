/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterNodeDetails.h>
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

ClusterNodeDetails::ClusterNodeDetails() : 
    m_instanceGroupNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_instanceType(ClusterInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_launchTimeHasBeenSet(false),
    m_lifeCycleConfigHasBeenSet(false),
    m_threadsPerCore(0),
    m_threadsPerCoreHasBeenSet(false)
{
}

ClusterNodeDetails::ClusterNodeDetails(JsonView jsonValue) : 
    m_instanceGroupNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_instanceType(ClusterInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_launchTimeHasBeenSet(false),
    m_lifeCycleConfigHasBeenSet(false),
    m_threadsPerCore(0),
    m_threadsPerCoreHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterNodeDetails& ClusterNodeDetails::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("InstanceStatus"))
  {
    m_instanceStatus = jsonValue.GetObject("InstanceStatus");

    m_instanceStatusHasBeenSet = true;
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

  if(jsonValue.ValueExists("LifeCycleConfig"))
  {
    m_lifeCycleConfig = jsonValue.GetObject("LifeCycleConfig");

    m_lifeCycleConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThreadsPerCore"))
  {
    m_threadsPerCore = jsonValue.GetInteger("ThreadsPerCore");

    m_threadsPerCoreHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterNodeDetails::Jsonize() const
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

  if(m_instanceStatusHasBeenSet)
  {
   payload.WithObject("InstanceStatus", m_instanceStatus.Jsonize());

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ClusterInstanceTypeMapper::GetNameForClusterInstanceType(m_instanceType));
  }

  if(m_launchTimeHasBeenSet)
  {
   payload.WithDouble("LaunchTime", m_launchTime.SecondsWithMSPrecision());
  }

  if(m_lifeCycleConfigHasBeenSet)
  {
   payload.WithObject("LifeCycleConfig", m_lifeCycleConfig.Jsonize());

  }

  if(m_threadsPerCoreHasBeenSet)
  {
   payload.WithInteger("ThreadsPerCore", m_threadsPerCore);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
