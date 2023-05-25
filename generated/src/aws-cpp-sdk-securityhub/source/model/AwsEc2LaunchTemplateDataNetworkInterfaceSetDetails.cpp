/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails.h>
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

AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails::AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails() : 
    m_associateCarrierIpAddress(false),
    m_associateCarrierIpAddressHasBeenSet(false),
    m_associatePublicIpAddress(false),
    m_associatePublicIpAddressHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deviceIndex(0),
    m_deviceIndexHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_interfaceTypeHasBeenSet(false),
    m_ipv4PrefixCount(0),
    m_ipv4PrefixCountHasBeenSet(false),
    m_ipv4PrefixesHasBeenSet(false),
    m_ipv6AddressCount(0),
    m_ipv6AddressCountHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_ipv6PrefixCount(0),
    m_ipv6PrefixCountHasBeenSet(false),
    m_ipv6PrefixesHasBeenSet(false),
    m_networkCardIndex(0),
    m_networkCardIndexHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_secondaryPrivateIpAddressCount(0),
    m_secondaryPrivateIpAddressCountHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails::AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails(JsonView jsonValue) : 
    m_associateCarrierIpAddress(false),
    m_associateCarrierIpAddressHasBeenSet(false),
    m_associatePublicIpAddress(false),
    m_associatePublicIpAddressHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deviceIndex(0),
    m_deviceIndexHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_interfaceTypeHasBeenSet(false),
    m_ipv4PrefixCount(0),
    m_ipv4PrefixCountHasBeenSet(false),
    m_ipv4PrefixesHasBeenSet(false),
    m_ipv6AddressCount(0),
    m_ipv6AddressCountHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_ipv6PrefixCount(0),
    m_ipv6PrefixCountHasBeenSet(false),
    m_ipv6PrefixesHasBeenSet(false),
    m_networkCardIndex(0),
    m_networkCardIndexHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_secondaryPrivateIpAddressCount(0),
    m_secondaryPrivateIpAddressCountHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociateCarrierIpAddress"))
  {
    m_associateCarrierIpAddress = jsonValue.GetBool("AssociateCarrierIpAddress");

    m_associateCarrierIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociatePublicIpAddress"))
  {
    m_associatePublicIpAddress = jsonValue.GetBool("AssociatePublicIpAddress");

    m_associatePublicIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteOnTermination"))
  {
    m_deleteOnTermination = jsonValue.GetBool("DeleteOnTermination");

    m_deleteOnTerminationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceIndex"))
  {
    m_deviceIndex = jsonValue.GetInteger("DeviceIndex");

    m_deviceIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Groups"))
  {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("Groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      m_groups.push_back(groupsJsonList[groupsIndex].AsString());
    }
    m_groupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InterfaceType"))
  {
    m_interfaceType = jsonValue.GetString("InterfaceType");

    m_interfaceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv4PrefixCount"))
  {
    m_ipv4PrefixCount = jsonValue.GetInteger("Ipv4PrefixCount");

    m_ipv4PrefixCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv4Prefixes"))
  {
    Aws::Utils::Array<JsonView> ipv4PrefixesJsonList = jsonValue.GetArray("Ipv4Prefixes");
    for(unsigned ipv4PrefixesIndex = 0; ipv4PrefixesIndex < ipv4PrefixesJsonList.GetLength(); ++ipv4PrefixesIndex)
    {
      m_ipv4Prefixes.push_back(ipv4PrefixesJsonList[ipv4PrefixesIndex].AsObject());
    }
    m_ipv4PrefixesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv6AddressCount"))
  {
    m_ipv6AddressCount = jsonValue.GetInteger("Ipv6AddressCount");

    m_ipv6AddressCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv6Addresses"))
  {
    Aws::Utils::Array<JsonView> ipv6AddressesJsonList = jsonValue.GetArray("Ipv6Addresses");
    for(unsigned ipv6AddressesIndex = 0; ipv6AddressesIndex < ipv6AddressesJsonList.GetLength(); ++ipv6AddressesIndex)
    {
      m_ipv6Addresses.push_back(ipv6AddressesJsonList[ipv6AddressesIndex].AsObject());
    }
    m_ipv6AddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv6PrefixCount"))
  {
    m_ipv6PrefixCount = jsonValue.GetInteger("Ipv6PrefixCount");

    m_ipv6PrefixCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv6Prefixes"))
  {
    Aws::Utils::Array<JsonView> ipv6PrefixesJsonList = jsonValue.GetArray("Ipv6Prefixes");
    for(unsigned ipv6PrefixesIndex = 0; ipv6PrefixesIndex < ipv6PrefixesJsonList.GetLength(); ++ipv6PrefixesIndex)
    {
      m_ipv6Prefixes.push_back(ipv6PrefixesJsonList[ipv6PrefixesIndex].AsObject());
    }
    m_ipv6PrefixesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkCardIndex"))
  {
    m_networkCardIndex = jsonValue.GetInteger("NetworkCardIndex");

    m_networkCardIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("NetworkInterfaceId");

    m_networkInterfaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("PrivateIpAddress");

    m_privateIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateIpAddresses"))
  {
    Aws::Utils::Array<JsonView> privateIpAddressesJsonList = jsonValue.GetArray("PrivateIpAddresses");
    for(unsigned privateIpAddressesIndex = 0; privateIpAddressesIndex < privateIpAddressesJsonList.GetLength(); ++privateIpAddressesIndex)
    {
      m_privateIpAddresses.push_back(privateIpAddressesJsonList[privateIpAddressesIndex].AsObject());
    }
    m_privateIpAddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryPrivateIpAddressCount"))
  {
    m_secondaryPrivateIpAddressCount = jsonValue.GetInteger("SecondaryPrivateIpAddressCount");

    m_secondaryPrivateIpAddressCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails::Jsonize() const
{
  JsonValue payload;

  if(m_associateCarrierIpAddressHasBeenSet)
  {
   payload.WithBool("AssociateCarrierIpAddress", m_associateCarrierIpAddress);

  }

  if(m_associatePublicIpAddressHasBeenSet)
  {
   payload.WithBool("AssociatePublicIpAddress", m_associatePublicIpAddress);

  }

  if(m_deleteOnTerminationHasBeenSet)
  {
   payload.WithBool("DeleteOnTermination", m_deleteOnTermination);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_deviceIndexHasBeenSet)
  {
   payload.WithInteger("DeviceIndex", m_deviceIndex);

  }

  if(m_groupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     groupsJsonList[groupsIndex].AsString(m_groups[groupsIndex]);
   }
   payload.WithArray("Groups", std::move(groupsJsonList));

  }

  if(m_interfaceTypeHasBeenSet)
  {
   payload.WithString("InterfaceType", m_interfaceType);

  }

  if(m_ipv4PrefixCountHasBeenSet)
  {
   payload.WithInteger("Ipv4PrefixCount", m_ipv4PrefixCount);

  }

  if(m_ipv4PrefixesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipv4PrefixesJsonList(m_ipv4Prefixes.size());
   for(unsigned ipv4PrefixesIndex = 0; ipv4PrefixesIndex < ipv4PrefixesJsonList.GetLength(); ++ipv4PrefixesIndex)
   {
     ipv4PrefixesJsonList[ipv4PrefixesIndex].AsObject(m_ipv4Prefixes[ipv4PrefixesIndex].Jsonize());
   }
   payload.WithArray("Ipv4Prefixes", std::move(ipv4PrefixesJsonList));

  }

  if(m_ipv6AddressCountHasBeenSet)
  {
   payload.WithInteger("Ipv6AddressCount", m_ipv6AddressCount);

  }

  if(m_ipv6AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipv6AddressesJsonList(m_ipv6Addresses.size());
   for(unsigned ipv6AddressesIndex = 0; ipv6AddressesIndex < ipv6AddressesJsonList.GetLength(); ++ipv6AddressesIndex)
   {
     ipv6AddressesJsonList[ipv6AddressesIndex].AsObject(m_ipv6Addresses[ipv6AddressesIndex].Jsonize());
   }
   payload.WithArray("Ipv6Addresses", std::move(ipv6AddressesJsonList));

  }

  if(m_ipv6PrefixCountHasBeenSet)
  {
   payload.WithInteger("Ipv6PrefixCount", m_ipv6PrefixCount);

  }

  if(m_ipv6PrefixesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipv6PrefixesJsonList(m_ipv6Prefixes.size());
   for(unsigned ipv6PrefixesIndex = 0; ipv6PrefixesIndex < ipv6PrefixesJsonList.GetLength(); ++ipv6PrefixesIndex)
   {
     ipv6PrefixesJsonList[ipv6PrefixesIndex].AsObject(m_ipv6Prefixes[ipv6PrefixesIndex].Jsonize());
   }
   payload.WithArray("Ipv6Prefixes", std::move(ipv6PrefixesJsonList));

  }

  if(m_networkCardIndexHasBeenSet)
  {
   payload.WithInteger("NetworkCardIndex", m_networkCardIndex);

  }

  if(m_networkInterfaceIdHasBeenSet)
  {
   payload.WithString("NetworkInterfaceId", m_networkInterfaceId);

  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("PrivateIpAddress", m_privateIpAddress);

  }

  if(m_privateIpAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> privateIpAddressesJsonList(m_privateIpAddresses.size());
   for(unsigned privateIpAddressesIndex = 0; privateIpAddressesIndex < privateIpAddressesJsonList.GetLength(); ++privateIpAddressesIndex)
   {
     privateIpAddressesJsonList[privateIpAddressesIndex].AsObject(m_privateIpAddresses[privateIpAddressesIndex].Jsonize());
   }
   payload.WithArray("PrivateIpAddresses", std::move(privateIpAddressesJsonList));

  }

  if(m_secondaryPrivateIpAddressCountHasBeenSet)
  {
   payload.WithInteger("SecondaryPrivateIpAddressCount", m_secondaryPrivateIpAddressCount);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
