/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElbv2LoadBalancerDetails.h>
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

AwsElbv2LoadBalancerDetails::AwsElbv2LoadBalancerDetails() : 
    m_availabilityZonesHasBeenSet(false),
    m_canonicalHostedZoneIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_dNSNameHasBeenSet(false),
    m_ipAddressTypeHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_loadBalancerAttributesHasBeenSet(false)
{
}

AwsElbv2LoadBalancerDetails::AwsElbv2LoadBalancerDetails(JsonView jsonValue) : 
    m_availabilityZonesHasBeenSet(false),
    m_canonicalHostedZoneIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_dNSNameHasBeenSet(false),
    m_ipAddressTypeHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_loadBalancerAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElbv2LoadBalancerDetails& AwsElbv2LoadBalancerDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailabilityZones"))
  {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("AvailabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsObject());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CanonicalHostedZoneId"))
  {
    m_canonicalHostedZoneId = jsonValue.GetString("CanonicalHostedZoneId");

    m_canonicalHostedZoneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetString("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DNSName"))
  {
    m_dNSName = jsonValue.GetString("DNSName");

    m_dNSNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddressType"))
  {
    m_ipAddressType = jsonValue.GetString("IpAddressType");

    m_ipAddressTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetObject("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoadBalancerAttributes"))
  {
    Aws::Utils::Array<JsonView> loadBalancerAttributesJsonList = jsonValue.GetArray("LoadBalancerAttributes");
    for(unsigned loadBalancerAttributesIndex = 0; loadBalancerAttributesIndex < loadBalancerAttributesJsonList.GetLength(); ++loadBalancerAttributesIndex)
    {
      m_loadBalancerAttributes.push_back(loadBalancerAttributesJsonList[loadBalancerAttributesIndex].AsObject());
    }
    m_loadBalancerAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElbv2LoadBalancerDetails::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsObject(m_availabilityZones[availabilityZonesIndex].Jsonize());
   }
   payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_canonicalHostedZoneIdHasBeenSet)
  {
   payload.WithString("CanonicalHostedZoneId", m_canonicalHostedZoneId);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("CreatedTime", m_createdTime);

  }

  if(m_dNSNameHasBeenSet)
  {
   payload.WithString("DNSName", m_dNSName);

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("IpAddressType", m_ipAddressType);

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

  if(m_stateHasBeenSet)
  {
   payload.WithObject("State", m_state.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_loadBalancerAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> loadBalancerAttributesJsonList(m_loadBalancerAttributes.size());
   for(unsigned loadBalancerAttributesIndex = 0; loadBalancerAttributesIndex < loadBalancerAttributesJsonList.GetLength(); ++loadBalancerAttributesIndex)
   {
     loadBalancerAttributesJsonList[loadBalancerAttributesIndex].AsObject(m_loadBalancerAttributes[loadBalancerAttributesIndex].Jsonize());
   }
   payload.WithArray("LoadBalancerAttributes", std::move(loadBalancerAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
