/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2VpcDetails.h>
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

AwsEc2VpcDetails::AwsEc2VpcDetails() : 
    m_cidrBlockAssociationSetHasBeenSet(false),
    m_ipv6CidrBlockAssociationSetHasBeenSet(false),
    m_dhcpOptionsIdHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

AwsEc2VpcDetails::AwsEc2VpcDetails(JsonView jsonValue) : 
    m_cidrBlockAssociationSetHasBeenSet(false),
    m_ipv6CidrBlockAssociationSetHasBeenSet(false),
    m_dhcpOptionsIdHasBeenSet(false),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2VpcDetails& AwsEc2VpcDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CidrBlockAssociationSet"))
  {
    Aws::Utils::Array<JsonView> cidrBlockAssociationSetJsonList = jsonValue.GetArray("CidrBlockAssociationSet");
    for(unsigned cidrBlockAssociationSetIndex = 0; cidrBlockAssociationSetIndex < cidrBlockAssociationSetJsonList.GetLength(); ++cidrBlockAssociationSetIndex)
    {
      m_cidrBlockAssociationSet.push_back(cidrBlockAssociationSetJsonList[cidrBlockAssociationSetIndex].AsObject());
    }
    m_cidrBlockAssociationSetHasBeenSet = true;
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

  if(jsonValue.ValueExists("DhcpOptionsId"))
  {
    m_dhcpOptionsId = jsonValue.GetString("DhcpOptionsId");

    m_dhcpOptionsIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2VpcDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cidrBlockAssociationSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cidrBlockAssociationSetJsonList(m_cidrBlockAssociationSet.size());
   for(unsigned cidrBlockAssociationSetIndex = 0; cidrBlockAssociationSetIndex < cidrBlockAssociationSetJsonList.GetLength(); ++cidrBlockAssociationSetIndex)
   {
     cidrBlockAssociationSetJsonList[cidrBlockAssociationSetIndex].AsObject(m_cidrBlockAssociationSet[cidrBlockAssociationSetIndex].Jsonize());
   }
   payload.WithArray("CidrBlockAssociationSet", std::move(cidrBlockAssociationSetJsonList));

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

  if(m_dhcpOptionsIdHasBeenSet)
  {
   payload.WithString("DhcpOptionsId", m_dhcpOptionsId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
