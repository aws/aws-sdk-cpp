/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterInstanceGroupDetails.h>
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

ClusterInstanceGroupDetails::ClusterInstanceGroupDetails() : 
    m_currentCount(0),
    m_currentCountHasBeenSet(false),
    m_targetCount(0),
    m_targetCountHasBeenSet(false),
    m_instanceGroupNameHasBeenSet(false),
    m_instanceType(ClusterInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_lifeCycleConfigHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_threadsPerCore(0),
    m_threadsPerCoreHasBeenSet(false)
{
}

ClusterInstanceGroupDetails::ClusterInstanceGroupDetails(JsonView jsonValue) : 
    m_currentCount(0),
    m_currentCountHasBeenSet(false),
    m_targetCount(0),
    m_targetCountHasBeenSet(false),
    m_instanceGroupNameHasBeenSet(false),
    m_instanceType(ClusterInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_lifeCycleConfigHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_threadsPerCore(0),
    m_threadsPerCoreHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterInstanceGroupDetails& ClusterInstanceGroupDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CurrentCount"))
  {
    m_currentCount = jsonValue.GetInteger("CurrentCount");

    m_currentCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetCount"))
  {
    m_targetCount = jsonValue.GetInteger("TargetCount");

    m_targetCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceGroupName"))
  {
    m_instanceGroupName = jsonValue.GetString("InstanceGroupName");

    m_instanceGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = ClusterInstanceTypeMapper::GetClusterInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LifeCycleConfig"))
  {
    m_lifeCycleConfig = jsonValue.GetObject("LifeCycleConfig");

    m_lifeCycleConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionRole"))
  {
    m_executionRole = jsonValue.GetString("ExecutionRole");

    m_executionRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThreadsPerCore"))
  {
    m_threadsPerCore = jsonValue.GetInteger("ThreadsPerCore");

    m_threadsPerCoreHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterInstanceGroupDetails::Jsonize() const
{
  JsonValue payload;

  if(m_currentCountHasBeenSet)
  {
   payload.WithInteger("CurrentCount", m_currentCount);

  }

  if(m_targetCountHasBeenSet)
  {
   payload.WithInteger("TargetCount", m_targetCount);

  }

  if(m_instanceGroupNameHasBeenSet)
  {
   payload.WithString("InstanceGroupName", m_instanceGroupName);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ClusterInstanceTypeMapper::GetNameForClusterInstanceType(m_instanceType));
  }

  if(m_lifeCycleConfigHasBeenSet)
  {
   payload.WithObject("LifeCycleConfig", m_lifeCycleConfig.Jsonize());

  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("ExecutionRole", m_executionRole);

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
