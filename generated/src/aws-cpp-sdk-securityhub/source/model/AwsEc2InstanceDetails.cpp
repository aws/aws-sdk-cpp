/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2InstanceDetails.h>
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

AwsEc2InstanceDetails::AwsEc2InstanceDetails() : 
    m_typeHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_ipV4AddressesHasBeenSet(false),
    m_ipV6AddressesHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_iamInstanceProfileArnHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_launchedAtHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_virtualizationTypeHasBeenSet(false),
    m_metadataOptionsHasBeenSet(false)
{
}

AwsEc2InstanceDetails::AwsEc2InstanceDetails(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_ipV4AddressesHasBeenSet(false),
    m_ipV6AddressesHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_iamInstanceProfileArnHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_launchedAtHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_virtualizationTypeHasBeenSet(false),
    m_metadataOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2InstanceDetails& AwsEc2InstanceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageId"))
  {
    m_imageId = jsonValue.GetString("ImageId");

    m_imageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpV4Addresses"))
  {
    Aws::Utils::Array<JsonView> ipV4AddressesJsonList = jsonValue.GetArray("IpV4Addresses");
    for(unsigned ipV4AddressesIndex = 0; ipV4AddressesIndex < ipV4AddressesJsonList.GetLength(); ++ipV4AddressesIndex)
    {
      m_ipV4Addresses.push_back(ipV4AddressesJsonList[ipV4AddressesIndex].AsString());
    }
    m_ipV4AddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpV6Addresses"))
  {
    Aws::Utils::Array<JsonView> ipV6AddressesJsonList = jsonValue.GetArray("IpV6Addresses");
    for(unsigned ipV6AddressesIndex = 0; ipV6AddressesIndex < ipV6AddressesJsonList.GetLength(); ++ipV6AddressesIndex)
    {
      m_ipV6Addresses.push_back(ipV6AddressesJsonList[ipV6AddressesIndex].AsString());
    }
    m_ipV6AddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyName"))
  {
    m_keyName = jsonValue.GetString("KeyName");

    m_keyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamInstanceProfileArn"))
  {
    m_iamInstanceProfileArn = jsonValue.GetString("IamInstanceProfileArn");

    m_iamInstanceProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchedAt"))
  {
    m_launchedAt = jsonValue.GetString("LaunchedAt");

    m_launchedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkInterfaces"))
  {
    Aws::Utils::Array<JsonView> networkInterfacesJsonList = jsonValue.GetArray("NetworkInterfaces");
    for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
    {
      m_networkInterfaces.push_back(networkInterfacesJsonList[networkInterfacesIndex].AsObject());
    }
    m_networkInterfacesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VirtualizationType"))
  {
    m_virtualizationType = jsonValue.GetString("VirtualizationType");

    m_virtualizationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetadataOptions"))
  {
    m_metadataOptions = jsonValue.GetObject("MetadataOptions");

    m_metadataOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2InstanceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("ImageId", m_imageId);

  }

  if(m_ipV4AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipV4AddressesJsonList(m_ipV4Addresses.size());
   for(unsigned ipV4AddressesIndex = 0; ipV4AddressesIndex < ipV4AddressesJsonList.GetLength(); ++ipV4AddressesIndex)
   {
     ipV4AddressesJsonList[ipV4AddressesIndex].AsString(m_ipV4Addresses[ipV4AddressesIndex]);
   }
   payload.WithArray("IpV4Addresses", std::move(ipV4AddressesJsonList));

  }

  if(m_ipV6AddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipV6AddressesJsonList(m_ipV6Addresses.size());
   for(unsigned ipV6AddressesIndex = 0; ipV6AddressesIndex < ipV6AddressesJsonList.GetLength(); ++ipV6AddressesIndex)
   {
     ipV6AddressesJsonList[ipV6AddressesIndex].AsString(m_ipV6Addresses[ipV6AddressesIndex]);
   }
   payload.WithArray("IpV6Addresses", std::move(ipV6AddressesJsonList));

  }

  if(m_keyNameHasBeenSet)
  {
   payload.WithString("KeyName", m_keyName);

  }

  if(m_iamInstanceProfileArnHasBeenSet)
  {
   payload.WithString("IamInstanceProfileArn", m_iamInstanceProfileArn);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_launchedAtHasBeenSet)
  {
   payload.WithString("LaunchedAt", m_launchedAt);

  }

  if(m_networkInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkInterfacesJsonList(m_networkInterfaces.size());
   for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
   {
     networkInterfacesJsonList[networkInterfacesIndex].AsObject(m_networkInterfaces[networkInterfacesIndex].Jsonize());
   }
   payload.WithArray("NetworkInterfaces", std::move(networkInterfacesJsonList));

  }

  if(m_virtualizationTypeHasBeenSet)
  {
   payload.WithString("VirtualizationType", m_virtualizationType);

  }

  if(m_metadataOptionsHasBeenSet)
  {
   payload.WithObject("MetadataOptions", m_metadataOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
