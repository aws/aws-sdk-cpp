/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2EipDetails.h>
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

AwsEc2EipDetails::AwsEc2EipDetails() : 
    m_instanceIdHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_publicIpv4PoolHasBeenSet(false),
    m_networkBorderGroupHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_networkInterfaceOwnerIdHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
}

AwsEc2EipDetails::AwsEc2EipDetails(JsonView jsonValue) : 
    m_instanceIdHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_publicIpv4PoolHasBeenSet(false),
    m_networkBorderGroupHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_networkInterfaceOwnerIdHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2EipDetails& AwsEc2EipDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicIp"))
  {
    m_publicIp = jsonValue.GetString("PublicIp");

    m_publicIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllocationId"))
  {
    m_allocationId = jsonValue.GetString("AllocationId");

    m_allocationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetString("AssociationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicIpv4Pool"))
  {
    m_publicIpv4Pool = jsonValue.GetString("PublicIpv4Pool");

    m_publicIpv4PoolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkBorderGroup"))
  {
    m_networkBorderGroup = jsonValue.GetString("NetworkBorderGroup");

    m_networkBorderGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("NetworkInterfaceId");

    m_networkInterfaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkInterfaceOwnerId"))
  {
    m_networkInterfaceOwnerId = jsonValue.GetString("NetworkInterfaceOwnerId");

    m_networkInterfaceOwnerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("PrivateIpAddress");

    m_privateIpAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2EipDetails::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_publicIpHasBeenSet)
  {
   payload.WithString("PublicIp", m_publicIp);

  }

  if(m_allocationIdHasBeenSet)
  {
   payload.WithString("AllocationId", m_allocationId);

  }

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_publicIpv4PoolHasBeenSet)
  {
   payload.WithString("PublicIpv4Pool", m_publicIpv4Pool);

  }

  if(m_networkBorderGroupHasBeenSet)
  {
   payload.WithString("NetworkBorderGroup", m_networkBorderGroup);

  }

  if(m_networkInterfaceIdHasBeenSet)
  {
   payload.WithString("NetworkInterfaceId", m_networkInterfaceId);

  }

  if(m_networkInterfaceOwnerIdHasBeenSet)
  {
   payload.WithString("NetworkInterfaceOwnerId", m_networkInterfaceOwnerId);

  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("PrivateIpAddress", m_privateIpAddress);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
