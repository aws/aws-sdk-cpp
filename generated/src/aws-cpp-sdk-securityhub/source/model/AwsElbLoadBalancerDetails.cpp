/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElbLoadBalancerDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsElbLoadBalancerDetails::AwsElbLoadBalancerDetails() : 
    m_availabilityZonesHasBeenSet(false),
    m_backendServerDescriptionsHasBeenSet(false),
    m_canonicalHostedZoneNameHasBeenSet(false),
    m_canonicalHostedZoneNameIDHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_listenerDescriptionsHasBeenSet(false),
    m_loadBalancerAttributesHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_policiesHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_sourceSecurityGroupHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

AwsElbLoadBalancerDetails::AwsElbLoadBalancerDetails(JsonView jsonValue) : 
    m_availabilityZonesHasBeenSet(false),
    m_backendServerDescriptionsHasBeenSet(false),
    m_canonicalHostedZoneNameHasBeenSet(false),
    m_canonicalHostedZoneNameIDHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_listenerDescriptionsHasBeenSet(false),
    m_loadBalancerAttributesHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_policiesHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_sourceSecurityGroupHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElbLoadBalancerDetails& AwsElbLoadBalancerDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailabilityZones"))
  {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("AvailabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackendServerDescriptions"))
  {
    Aws::Utils::Array<JsonView> backendServerDescriptionsJsonList = jsonValue.GetArray("BackendServerDescriptions");
    for(unsigned backendServerDescriptionsIndex = 0; backendServerDescriptionsIndex < backendServerDescriptionsJsonList.GetLength(); ++backendServerDescriptionsIndex)
    {
      m_backendServerDescriptions.push_back(backendServerDescriptionsJsonList[backendServerDescriptionsIndex].AsObject());
    }
    m_backendServerDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CanonicalHostedZoneName"))
  {
    m_canonicalHostedZoneName = jsonValue.GetString("CanonicalHostedZoneName");

    m_canonicalHostedZoneNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CanonicalHostedZoneNameID"))
  {
    m_canonicalHostedZoneNameID = jsonValue.GetString("CanonicalHostedZoneNameID");

    m_canonicalHostedZoneNameIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetString("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsName"))
  {
    m_dnsName = jsonValue.GetString("DnsName");

    m_dnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthCheck"))
  {
    m_healthCheck = jsonValue.GetObject("HealthCheck");

    m_healthCheckHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Instances"))
  {
    Aws::Utils::Array<JsonView> instancesJsonList = jsonValue.GetArray("Instances");
    for(unsigned instancesIndex = 0; instancesIndex < instancesJsonList.GetLength(); ++instancesIndex)
    {
      m_instances.push_back(instancesJsonList[instancesIndex].AsObject());
    }
    m_instancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListenerDescriptions"))
  {
    Aws::Utils::Array<JsonView> listenerDescriptionsJsonList = jsonValue.GetArray("ListenerDescriptions");
    for(unsigned listenerDescriptionsIndex = 0; listenerDescriptionsIndex < listenerDescriptionsJsonList.GetLength(); ++listenerDescriptionsIndex)
    {
      m_listenerDescriptions.push_back(listenerDescriptionsJsonList[listenerDescriptionsIndex].AsObject());
    }
    m_listenerDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoadBalancerAttributes"))
  {
    m_loadBalancerAttributes = jsonValue.GetObject("LoadBalancerAttributes");

    m_loadBalancerAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoadBalancerName"))
  {
    m_loadBalancerName = jsonValue.GetString("LoadBalancerName");

    m_loadBalancerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Policies"))
  {
    m_policies = jsonValue.GetObject("Policies");

    m_policiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scheme"))
  {
    m_scheme = jsonValue.GetString("Scheme");

    m_schemeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceSecurityGroup"))
  {
    m_sourceSecurityGroup = jsonValue.GetObject("SourceSecurityGroup");

    m_sourceSecurityGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subnets"))
  {
    Aws::Utils::Array<JsonView> subnetsJsonList = jsonValue.GetArray("Subnets");
    for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
    {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsString());
    }
    m_subnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElbLoadBalancerDetails::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
   }
   payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_backendServerDescriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> backendServerDescriptionsJsonList(m_backendServerDescriptions.size());
   for(unsigned backendServerDescriptionsIndex = 0; backendServerDescriptionsIndex < backendServerDescriptionsJsonList.GetLength(); ++backendServerDescriptionsIndex)
   {
     backendServerDescriptionsJsonList[backendServerDescriptionsIndex].AsObject(m_backendServerDescriptions[backendServerDescriptionsIndex].Jsonize());
   }
   payload.WithArray("BackendServerDescriptions", std::move(backendServerDescriptionsJsonList));

  }

  if(m_canonicalHostedZoneNameHasBeenSet)
  {
   payload.WithString("CanonicalHostedZoneName", m_canonicalHostedZoneName);

  }

  if(m_canonicalHostedZoneNameIDHasBeenSet)
  {
   payload.WithString("CanonicalHostedZoneNameID", m_canonicalHostedZoneNameID);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("CreatedTime", m_createdTime);

  }

  if(m_dnsNameHasBeenSet)
  {
   payload.WithString("DnsName", m_dnsName);

  }

  if(m_healthCheckHasBeenSet)
  {
   payload.WithObject("HealthCheck", m_healthCheck.Jsonize());

  }

  if(m_instancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instancesJsonList(m_instances.size());
   for(unsigned instancesIndex = 0; instancesIndex < instancesJsonList.GetLength(); ++instancesIndex)
   {
     instancesJsonList[instancesIndex].AsObject(m_instances[instancesIndex].Jsonize());
   }
   payload.WithArray("Instances", std::move(instancesJsonList));

  }

  if(m_listenerDescriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> listenerDescriptionsJsonList(m_listenerDescriptions.size());
   for(unsigned listenerDescriptionsIndex = 0; listenerDescriptionsIndex < listenerDescriptionsJsonList.GetLength(); ++listenerDescriptionsIndex)
   {
     listenerDescriptionsJsonList[listenerDescriptionsIndex].AsObject(m_listenerDescriptions[listenerDescriptionsIndex].Jsonize());
   }
   payload.WithArray("ListenerDescriptions", std::move(listenerDescriptionsJsonList));

  }

  if(m_loadBalancerAttributesHasBeenSet)
  {
   payload.WithObject("LoadBalancerAttributes", m_loadBalancerAttributes.Jsonize());

  }

  if(m_loadBalancerNameHasBeenSet)
  {
   payload.WithString("LoadBalancerName", m_loadBalancerName);

  }

  if(m_policiesHasBeenSet)
  {
   payload.WithObject("Policies", m_policies.Jsonize());

  }

  if(m_schemeHasBeenSet)
  {
   payload.WithString("Scheme", m_scheme);

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("SecurityGroups", std::move(securityGroupsJsonList));

  }

  if(m_sourceSecurityGroupHasBeenSet)
  {
   payload.WithObject("SourceSecurityGroup", m_sourceSecurityGroup.Jsonize());

  }

  if(m_subnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("Subnets", std::move(subnetsJsonList));

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
