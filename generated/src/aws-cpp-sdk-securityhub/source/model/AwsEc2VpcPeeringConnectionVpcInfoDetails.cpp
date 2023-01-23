/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2VpcPeeringConnectionVpcInfoDetails.h>
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

AwsEc2VpcPeeringConnectionVpcInfoDetails::AwsEc2VpcPeeringConnectionVpcInfoDetails() : 
    m_cidrBlockHasBeenSet(false),
    m_cidrBlockSetHasBeenSet(false),
    m_ipv6CidrBlockSetHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_peeringOptionsHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

AwsEc2VpcPeeringConnectionVpcInfoDetails::AwsEc2VpcPeeringConnectionVpcInfoDetails(JsonView jsonValue) : 
    m_cidrBlockHasBeenSet(false),
    m_cidrBlockSetHasBeenSet(false),
    m_ipv6CidrBlockSetHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_peeringOptionsHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2VpcPeeringConnectionVpcInfoDetails& AwsEc2VpcPeeringConnectionVpcInfoDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CidrBlock"))
  {
    m_cidrBlock = jsonValue.GetString("CidrBlock");

    m_cidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CidrBlockSet"))
  {
    Aws::Utils::Array<JsonView> cidrBlockSetJsonList = jsonValue.GetArray("CidrBlockSet");
    for(unsigned cidrBlockSetIndex = 0; cidrBlockSetIndex < cidrBlockSetJsonList.GetLength(); ++cidrBlockSetIndex)
    {
      m_cidrBlockSet.push_back(cidrBlockSetJsonList[cidrBlockSetIndex].AsObject());
    }
    m_cidrBlockSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv6CidrBlockSet"))
  {
    Aws::Utils::Array<JsonView> ipv6CidrBlockSetJsonList = jsonValue.GetArray("Ipv6CidrBlockSet");
    for(unsigned ipv6CidrBlockSetIndex = 0; ipv6CidrBlockSetIndex < ipv6CidrBlockSetJsonList.GetLength(); ++ipv6CidrBlockSetIndex)
    {
      m_ipv6CidrBlockSet.push_back(ipv6CidrBlockSetJsonList[ipv6CidrBlockSetIndex].AsObject());
    }
    m_ipv6CidrBlockSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeeringOptions"))
  {
    m_peeringOptions = jsonValue.GetObject("PeeringOptions");

    m_peeringOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2VpcPeeringConnectionVpcInfoDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cidrBlockHasBeenSet)
  {
   payload.WithString("CidrBlock", m_cidrBlock);

  }

  if(m_cidrBlockSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cidrBlockSetJsonList(m_cidrBlockSet.size());
   for(unsigned cidrBlockSetIndex = 0; cidrBlockSetIndex < cidrBlockSetJsonList.GetLength(); ++cidrBlockSetIndex)
   {
     cidrBlockSetJsonList[cidrBlockSetIndex].AsObject(m_cidrBlockSet[cidrBlockSetIndex].Jsonize());
   }
   payload.WithArray("CidrBlockSet", std::move(cidrBlockSetJsonList));

  }

  if(m_ipv6CidrBlockSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipv6CidrBlockSetJsonList(m_ipv6CidrBlockSet.size());
   for(unsigned ipv6CidrBlockSetIndex = 0; ipv6CidrBlockSetIndex < ipv6CidrBlockSetJsonList.GetLength(); ++ipv6CidrBlockSetIndex)
   {
     ipv6CidrBlockSetJsonList[ipv6CidrBlockSetIndex].AsObject(m_ipv6CidrBlockSet[ipv6CidrBlockSetIndex].Jsonize());
   }
   payload.WithArray("Ipv6CidrBlockSet", std::move(ipv6CidrBlockSetJsonList));

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_peeringOptionsHasBeenSet)
  {
   payload.WithObject("PeeringOptions", m_peeringOptions.Jsonize());

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

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
