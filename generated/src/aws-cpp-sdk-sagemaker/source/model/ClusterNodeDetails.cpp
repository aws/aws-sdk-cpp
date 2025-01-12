﻿/**
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
    m_overrideVpcConfigHasBeenSet(false),
    m_threadsPerCore(0),
    m_threadsPerCoreHasBeenSet(false),
    m_instanceStorageConfigsHasBeenSet(false),
    m_privatePrimaryIpHasBeenSet(false),
    m_privatePrimaryIpv6HasBeenSet(false),
    m_privateDnsHostnameHasBeenSet(false),
    m_placementHasBeenSet(false)
{
}

ClusterNodeDetails::ClusterNodeDetails(JsonView jsonValue)
  : ClusterNodeDetails()
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

  if(jsonValue.ValueExists("OverrideVpcConfig"))
  {
    m_overrideVpcConfig = jsonValue.GetObject("OverrideVpcConfig");

    m_overrideVpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThreadsPerCore"))
  {
    m_threadsPerCore = jsonValue.GetInteger("ThreadsPerCore");

    m_threadsPerCoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceStorageConfigs"))
  {
    Aws::Utils::Array<JsonView> instanceStorageConfigsJsonList = jsonValue.GetArray("InstanceStorageConfigs");
    for(unsigned instanceStorageConfigsIndex = 0; instanceStorageConfigsIndex < instanceStorageConfigsJsonList.GetLength(); ++instanceStorageConfigsIndex)
    {
      m_instanceStorageConfigs.push_back(instanceStorageConfigsJsonList[instanceStorageConfigsIndex].AsObject());
    }
    m_instanceStorageConfigsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivatePrimaryIp"))
  {
    m_privatePrimaryIp = jsonValue.GetString("PrivatePrimaryIp");

    m_privatePrimaryIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivatePrimaryIpv6"))
  {
    m_privatePrimaryIpv6 = jsonValue.GetString("PrivatePrimaryIpv6");

    m_privatePrimaryIpv6HasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateDnsHostname"))
  {
    m_privateDnsHostname = jsonValue.GetString("PrivateDnsHostname");

    m_privateDnsHostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Placement"))
  {
    m_placement = jsonValue.GetObject("Placement");

    m_placementHasBeenSet = true;
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

  if(m_overrideVpcConfigHasBeenSet)
  {
   payload.WithObject("OverrideVpcConfig", m_overrideVpcConfig.Jsonize());

  }

  if(m_threadsPerCoreHasBeenSet)
  {
   payload.WithInteger("ThreadsPerCore", m_threadsPerCore);

  }

  if(m_instanceStorageConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceStorageConfigsJsonList(m_instanceStorageConfigs.size());
   for(unsigned instanceStorageConfigsIndex = 0; instanceStorageConfigsIndex < instanceStorageConfigsJsonList.GetLength(); ++instanceStorageConfigsIndex)
   {
     instanceStorageConfigsJsonList[instanceStorageConfigsIndex].AsObject(m_instanceStorageConfigs[instanceStorageConfigsIndex].Jsonize());
   }
   payload.WithArray("InstanceStorageConfigs", std::move(instanceStorageConfigsJsonList));

  }

  if(m_privatePrimaryIpHasBeenSet)
  {
   payload.WithString("PrivatePrimaryIp", m_privatePrimaryIp);

  }

  if(m_privatePrimaryIpv6HasBeenSet)
  {
   payload.WithString("PrivatePrimaryIpv6", m_privatePrimaryIpv6);

  }

  if(m_privateDnsHostnameHasBeenSet)
  {
   payload.WithString("PrivateDnsHostname", m_privateDnsHostname);

  }

  if(m_placementHasBeenSet)
  {
   payload.WithObject("Placement", m_placement.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
