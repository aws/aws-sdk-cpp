/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2SubnetDetails.h>
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

AwsEc2SubnetDetails::AwsEc2SubnetDetails() : 
    m_assignIpv6AddressOnCreation(false),
    m_assignIpv6AddressOnCreationHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_availableIpAddressCount(0),
    m_availableIpAddressCountHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_defaultForAz(false),
    m_defaultForAzHasBeenSet(false),
    m_mapPublicIpOnLaunch(false),
    m_mapPublicIpOnLaunchHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_subnetArnHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ipv6CidrBlockAssociationSetHasBeenSet(false)
{
}

AwsEc2SubnetDetails::AwsEc2SubnetDetails(JsonView jsonValue) : 
    m_assignIpv6AddressOnCreation(false),
    m_assignIpv6AddressOnCreationHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_availableIpAddressCount(0),
    m_availableIpAddressCountHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_defaultForAz(false),
    m_defaultForAzHasBeenSet(false),
    m_mapPublicIpOnLaunch(false),
    m_mapPublicIpOnLaunchHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_subnetArnHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ipv6CidrBlockAssociationSetHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2SubnetDetails& AwsEc2SubnetDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssignIpv6AddressOnCreation"))
  {
    m_assignIpv6AddressOnCreation = jsonValue.GetBool("AssignIpv6AddressOnCreation");

    m_assignIpv6AddressOnCreationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("AvailabilityZoneId");

    m_availabilityZoneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailableIpAddressCount"))
  {
    m_availableIpAddressCount = jsonValue.GetInteger("AvailableIpAddressCount");

    m_availableIpAddressCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CidrBlock"))
  {
    m_cidrBlock = jsonValue.GetString("CidrBlock");

    m_cidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultForAz"))
  {
    m_defaultForAz = jsonValue.GetBool("DefaultForAz");

    m_defaultForAzHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MapPublicIpOnLaunch"))
  {
    m_mapPublicIpOnLaunch = jsonValue.GetBool("MapPublicIpOnLaunch");

    m_mapPublicIpOnLaunchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetArn"))
  {
    m_subnetArn = jsonValue.GetString("SubnetArn");

    m_subnetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv6CidrBlockAssociationSet"))
  {
    Aws::Utils::Array<JsonView> ipv6CidrBlockAssociationSetJsonList = jsonValue.GetArray("Ipv6CidrBlockAssociationSet");
    for(unsigned ipv6CidrBlockAssociationSetIndex = 0; ipv6CidrBlockAssociationSetIndex < ipv6CidrBlockAssociationSetJsonList.GetLength(); ++ipv6CidrBlockAssociationSetIndex)
    {
      m_ipv6CidrBlockAssociationSet.push_back(ipv6CidrBlockAssociationSetJsonList[ipv6CidrBlockAssociationSetIndex].AsObject());
    }
    m_ipv6CidrBlockAssociationSetHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2SubnetDetails::Jsonize() const
{
  JsonValue payload;

  if(m_assignIpv6AddressOnCreationHasBeenSet)
  {
   payload.WithBool("AssignIpv6AddressOnCreation", m_assignIpv6AddressOnCreation);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_availabilityZoneIdHasBeenSet)
  {
   payload.WithString("AvailabilityZoneId", m_availabilityZoneId);

  }

  if(m_availableIpAddressCountHasBeenSet)
  {
   payload.WithInteger("AvailableIpAddressCount", m_availableIpAddressCount);

  }

  if(m_cidrBlockHasBeenSet)
  {
   payload.WithString("CidrBlock", m_cidrBlock);

  }

  if(m_defaultForAzHasBeenSet)
  {
   payload.WithBool("DefaultForAz", m_defaultForAz);

  }

  if(m_mapPublicIpOnLaunchHasBeenSet)
  {
   payload.WithBool("MapPublicIpOnLaunch", m_mapPublicIpOnLaunch);

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_subnetArnHasBeenSet)
  {
   payload.WithString("SubnetArn", m_subnetArn);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_ipv6CidrBlockAssociationSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipv6CidrBlockAssociationSetJsonList(m_ipv6CidrBlockAssociationSet.size());
   for(unsigned ipv6CidrBlockAssociationSetIndex = 0; ipv6CidrBlockAssociationSetIndex < ipv6CidrBlockAssociationSetJsonList.GetLength(); ++ipv6CidrBlockAssociationSetIndex)
   {
     ipv6CidrBlockAssociationSetJsonList[ipv6CidrBlockAssociationSetIndex].AsObject(m_ipv6CidrBlockAssociationSet[ipv6CidrBlockAssociationSetIndex].Jsonize());
   }
   payload.WithArray("Ipv6CidrBlockAssociationSet", std::move(ipv6CidrBlockAssociationSetJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
