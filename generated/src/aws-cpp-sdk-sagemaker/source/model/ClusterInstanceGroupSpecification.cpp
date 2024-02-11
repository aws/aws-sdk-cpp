/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterInstanceGroupSpecification.h>
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

ClusterInstanceGroupSpecification::ClusterInstanceGroupSpecification() : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceGroupNameHasBeenSet(false),
    m_instanceType(ClusterInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_lifeCycleConfigHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_threadsPerCore(0),
    m_threadsPerCoreHasBeenSet(false)
{
}

ClusterInstanceGroupSpecification::ClusterInstanceGroupSpecification(JsonView jsonValue) : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
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

ClusterInstanceGroupSpecification& ClusterInstanceGroupSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");

    m_instanceCountHasBeenSet = true;
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

JsonValue ClusterInstanceGroupSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

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
