﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/ElasticLoadBalancer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

ElasticLoadBalancer::ElasticLoadBalancer(JsonView jsonValue)
{
  *this = jsonValue;
}

ElasticLoadBalancer& ElasticLoadBalancer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ElasticLoadBalancerName"))
  {
    m_elasticLoadBalancerName = jsonValue.GetString("ElasticLoadBalancerName");
    m_elasticLoadBalancerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DnsName"))
  {
    m_dnsName = jsonValue.GetString("DnsName");
    m_dnsNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StackId"))
  {
    m_stackId = jsonValue.GetString("StackId");
    m_stackIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LayerId"))
  {
    m_layerId = jsonValue.GetString("LayerId");
    m_layerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");
    m_vpcIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailabilityZones"))
  {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("AvailabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
    m_availabilityZonesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ec2InstanceIds"))
  {
    Aws::Utils::Array<JsonView> ec2InstanceIdsJsonList = jsonValue.GetArray("Ec2InstanceIds");
    for(unsigned ec2InstanceIdsIndex = 0; ec2InstanceIdsIndex < ec2InstanceIdsJsonList.GetLength(); ++ec2InstanceIdsIndex)
    {
      m_ec2InstanceIds.push_back(ec2InstanceIdsJsonList[ec2InstanceIdsIndex].AsString());
    }
    m_ec2InstanceIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue ElasticLoadBalancer::Jsonize() const
{
  JsonValue payload;

  if(m_elasticLoadBalancerNameHasBeenSet)
  {
   payload.WithString("ElasticLoadBalancerName", m_elasticLoadBalancerName);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_dnsNameHasBeenSet)
  {
   payload.WithString("DnsName", m_dnsName);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_layerIdHasBeenSet)
  {
   payload.WithString("LayerId", m_layerId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_availabilityZonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
   }
   payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_ec2InstanceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ec2InstanceIdsJsonList(m_ec2InstanceIds.size());
   for(unsigned ec2InstanceIdsIndex = 0; ec2InstanceIdsIndex < ec2InstanceIdsJsonList.GetLength(); ++ec2InstanceIdsIndex)
   {
     ec2InstanceIdsJsonList[ec2InstanceIdsIndex].AsString(m_ec2InstanceIds[ec2InstanceIdsIndex]);
   }
   payload.WithArray("Ec2InstanceIds", std::move(ec2InstanceIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
