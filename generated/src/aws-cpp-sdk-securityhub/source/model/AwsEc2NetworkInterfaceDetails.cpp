/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2NetworkInterfaceDetails.h>
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

AwsEc2NetworkInterfaceDetails::AwsEc2NetworkInterfaceDetails() : 
    m_attachmentHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_sourceDestCheck(false),
    m_sourceDestCheckHasBeenSet(false),
    m_ipV6AddressesHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_publicDnsNameHasBeenSet(false),
    m_publicIpHasBeenSet(false)
{
}

AwsEc2NetworkInterfaceDetails::AwsEc2NetworkInterfaceDetails(JsonView jsonValue) : 
    m_attachmentHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_sourceDestCheck(false),
    m_sourceDestCheckHasBeenSet(false),
    m_ipV6AddressesHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_publicDnsNameHasBeenSet(false),
    m_publicIpHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2NetworkInterfaceDetails& AwsEc2NetworkInterfaceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attachment"))
  {
    m_attachment = jsonValue.GetObject("Attachment");

    m_attachmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("NetworkInterfaceId");

    m_networkInterfaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsObject());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceDestCheck"))
  {
    m_sourceDestCheck = jsonValue.GetBool("SourceDestCheck");

    m_sourceDestCheckHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpV6Addresses"))
  {
    Aws::Utils::Array<JsonView> ipV6AddressesJsonList = jsonValue.GetArray("IpV6Addresses");
    for(unsigned ipV6AddressesIndex = 0; ipV6AddressesIndex < ipV6AddressesJsonList.GetLength(); ++ipV6AddressesIndex)
    {
      m_ipV6Addresses.push_back(ipV6AddressesJsonList[ipV6AddressesIndex].AsObject());
    }
    m_ipV6AddressesHasBeenSet = true;
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

  if(jsonValue.ValueExists("PublicDnsName"))
  {
    m_publicDnsName = jsonValue.GetString("PublicDnsName");

    m_publicDnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicIp"))
  {
    m_publicIp = jsonValue.GetString("PublicIp");

    m_publicIpHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2NetworkInterfaceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentHasBeenSet)
  {
   payload.WithObject("Attachment", m_attachment.Jsonize());

  }

  if(m_networkInterfaceIdHasBeenSet)
  {
   payload.WithString("NetworkInterfaceId", m_networkInterfaceId);

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsObject(m_securityGroups[securityGroupsIndex].Jsonize());
   }
   payload.WithArray("SecurityGroups", std::move(securityGroupsJsonList));

  }

  if(m_sourceDestCheckHasBeenSet)
  {
   payload.WithBool("SourceDestCheck", m_sourceDestCheck);

  }

  if(m_ipV6AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipV6AddressesJsonList(m_ipV6Addresses.size());
   for(unsigned ipV6AddressesIndex = 0; ipV6AddressesIndex < ipV6AddressesJsonList.GetLength(); ++ipV6AddressesIndex)
   {
     ipV6AddressesJsonList[ipV6AddressesIndex].AsObject(m_ipV6Addresses[ipV6AddressesIndex].Jsonize());
   }
   payload.WithArray("IpV6Addresses", std::move(ipV6AddressesJsonList));

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

  if(m_publicDnsNameHasBeenSet)
  {
   payload.WithString("PublicDnsName", m_publicDnsName);

  }

  if(m_publicIpHasBeenSet)
  {
   payload.WithString("PublicIp", m_publicIp);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
