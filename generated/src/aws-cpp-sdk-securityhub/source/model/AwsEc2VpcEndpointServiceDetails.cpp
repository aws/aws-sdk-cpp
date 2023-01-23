/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2VpcEndpointServiceDetails.h>
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

AwsEc2VpcEndpointServiceDetails::AwsEc2VpcEndpointServiceDetails() : 
    m_acceptanceRequired(false),
    m_acceptanceRequiredHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_baseEndpointDnsNamesHasBeenSet(false),
    m_managesVpcEndpoints(false),
    m_managesVpcEndpointsHasBeenSet(false),
    m_gatewayLoadBalancerArnsHasBeenSet(false),
    m_networkLoadBalancerArnsHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceStateHasBeenSet(false),
    m_serviceTypeHasBeenSet(false)
{
}

AwsEc2VpcEndpointServiceDetails::AwsEc2VpcEndpointServiceDetails(JsonView jsonValue) : 
    m_acceptanceRequired(false),
    m_acceptanceRequiredHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_baseEndpointDnsNamesHasBeenSet(false),
    m_managesVpcEndpoints(false),
    m_managesVpcEndpointsHasBeenSet(false),
    m_gatewayLoadBalancerArnsHasBeenSet(false),
    m_networkLoadBalancerArnsHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceStateHasBeenSet(false),
    m_serviceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2VpcEndpointServiceDetails& AwsEc2VpcEndpointServiceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AcceptanceRequired"))
  {
    m_acceptanceRequired = jsonValue.GetBool("AcceptanceRequired");

    m_acceptanceRequiredHasBeenSet = true;
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

  if(jsonValue.ValueExists("BaseEndpointDnsNames"))
  {
    Aws::Utils::Array<JsonView> baseEndpointDnsNamesJsonList = jsonValue.GetArray("BaseEndpointDnsNames");
    for(unsigned baseEndpointDnsNamesIndex = 0; baseEndpointDnsNamesIndex < baseEndpointDnsNamesJsonList.GetLength(); ++baseEndpointDnsNamesIndex)
    {
      m_baseEndpointDnsNames.push_back(baseEndpointDnsNamesJsonList[baseEndpointDnsNamesIndex].AsString());
    }
    m_baseEndpointDnsNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManagesVpcEndpoints"))
  {
    m_managesVpcEndpoints = jsonValue.GetBool("ManagesVpcEndpoints");

    m_managesVpcEndpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayLoadBalancerArns"))
  {
    Aws::Utils::Array<JsonView> gatewayLoadBalancerArnsJsonList = jsonValue.GetArray("GatewayLoadBalancerArns");
    for(unsigned gatewayLoadBalancerArnsIndex = 0; gatewayLoadBalancerArnsIndex < gatewayLoadBalancerArnsJsonList.GetLength(); ++gatewayLoadBalancerArnsIndex)
    {
      m_gatewayLoadBalancerArns.push_back(gatewayLoadBalancerArnsJsonList[gatewayLoadBalancerArnsIndex].AsString());
    }
    m_gatewayLoadBalancerArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkLoadBalancerArns"))
  {
    Aws::Utils::Array<JsonView> networkLoadBalancerArnsJsonList = jsonValue.GetArray("NetworkLoadBalancerArns");
    for(unsigned networkLoadBalancerArnsIndex = 0; networkLoadBalancerArnsIndex < networkLoadBalancerArnsJsonList.GetLength(); ++networkLoadBalancerArnsIndex)
    {
      m_networkLoadBalancerArns.push_back(networkLoadBalancerArnsJsonList[networkLoadBalancerArnsIndex].AsString());
    }
    m_networkLoadBalancerArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateDnsName"))
  {
    m_privateDnsName = jsonValue.GetString("PrivateDnsName");

    m_privateDnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceId"))
  {
    m_serviceId = jsonValue.GetString("ServiceId");

    m_serviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceName"))
  {
    m_serviceName = jsonValue.GetString("ServiceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceState"))
  {
    m_serviceState = jsonValue.GetString("ServiceState");

    m_serviceStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceType"))
  {
    Aws::Utils::Array<JsonView> serviceTypeJsonList = jsonValue.GetArray("ServiceType");
    for(unsigned serviceTypeIndex = 0; serviceTypeIndex < serviceTypeJsonList.GetLength(); ++serviceTypeIndex)
    {
      m_serviceType.push_back(serviceTypeJsonList[serviceTypeIndex].AsObject());
    }
    m_serviceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2VpcEndpointServiceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_acceptanceRequiredHasBeenSet)
  {
   payload.WithBool("AcceptanceRequired", m_acceptanceRequired);

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

  if(m_baseEndpointDnsNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> baseEndpointDnsNamesJsonList(m_baseEndpointDnsNames.size());
   for(unsigned baseEndpointDnsNamesIndex = 0; baseEndpointDnsNamesIndex < baseEndpointDnsNamesJsonList.GetLength(); ++baseEndpointDnsNamesIndex)
   {
     baseEndpointDnsNamesJsonList[baseEndpointDnsNamesIndex].AsString(m_baseEndpointDnsNames[baseEndpointDnsNamesIndex]);
   }
   payload.WithArray("BaseEndpointDnsNames", std::move(baseEndpointDnsNamesJsonList));

  }

  if(m_managesVpcEndpointsHasBeenSet)
  {
   payload.WithBool("ManagesVpcEndpoints", m_managesVpcEndpoints);

  }

  if(m_gatewayLoadBalancerArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gatewayLoadBalancerArnsJsonList(m_gatewayLoadBalancerArns.size());
   for(unsigned gatewayLoadBalancerArnsIndex = 0; gatewayLoadBalancerArnsIndex < gatewayLoadBalancerArnsJsonList.GetLength(); ++gatewayLoadBalancerArnsIndex)
   {
     gatewayLoadBalancerArnsJsonList[gatewayLoadBalancerArnsIndex].AsString(m_gatewayLoadBalancerArns[gatewayLoadBalancerArnsIndex]);
   }
   payload.WithArray("GatewayLoadBalancerArns", std::move(gatewayLoadBalancerArnsJsonList));

  }

  if(m_networkLoadBalancerArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkLoadBalancerArnsJsonList(m_networkLoadBalancerArns.size());
   for(unsigned networkLoadBalancerArnsIndex = 0; networkLoadBalancerArnsIndex < networkLoadBalancerArnsJsonList.GetLength(); ++networkLoadBalancerArnsIndex)
   {
     networkLoadBalancerArnsJsonList[networkLoadBalancerArnsIndex].AsString(m_networkLoadBalancerArns[networkLoadBalancerArnsIndex]);
   }
   payload.WithArray("NetworkLoadBalancerArns", std::move(networkLoadBalancerArnsJsonList));

  }

  if(m_privateDnsNameHasBeenSet)
  {
   payload.WithString("PrivateDnsName", m_privateDnsName);

  }

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("ServiceId", m_serviceId);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", m_serviceName);

  }

  if(m_serviceStateHasBeenSet)
  {
   payload.WithString("ServiceState", m_serviceState);

  }

  if(m_serviceTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceTypeJsonList(m_serviceType.size());
   for(unsigned serviceTypeIndex = 0; serviceTypeIndex < serviceTypeJsonList.GetLength(); ++serviceTypeIndex)
   {
     serviceTypeJsonList[serviceTypeIndex].AsObject(m_serviceType[serviceTypeIndex].Jsonize());
   }
   payload.WithArray("ServiceType", std::move(serviceTypeJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
