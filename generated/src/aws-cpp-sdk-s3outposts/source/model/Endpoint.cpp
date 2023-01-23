/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3outposts/model/Endpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Outposts
{
namespace Model
{

Endpoint::Endpoint() : 
    m_endpointArnHasBeenSet(false),
    m_outpostsIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_status(EndpointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_accessType(EndpointAccessType::NOT_SET),
    m_accessTypeHasBeenSet(false),
    m_customerOwnedIpv4PoolHasBeenSet(false)
{
}

Endpoint::Endpoint(JsonView jsonValue) : 
    m_endpointArnHasBeenSet(false),
    m_outpostsIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_status(EndpointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_accessType(EndpointAccessType::NOT_SET),
    m_accessTypeHasBeenSet(false),
    m_customerOwnedIpv4PoolHasBeenSet(false)
{
  *this = jsonValue;
}

Endpoint& Endpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointArn"))
  {
    m_endpointArn = jsonValue.GetString("EndpointArn");

    m_endpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutpostsId"))
  {
    m_outpostsId = jsonValue.GetString("OutpostsId");

    m_outpostsIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CidrBlock"))
  {
    m_cidrBlock = jsonValue.GetString("CidrBlock");

    m_cidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EndpointStatusMapper::GetEndpointStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
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

  if(jsonValue.ValueExists("SecurityGroupId"))
  {
    m_securityGroupId = jsonValue.GetString("SecurityGroupId");

    m_securityGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessType"))
  {
    m_accessType = EndpointAccessTypeMapper::GetEndpointAccessTypeForName(jsonValue.GetString("AccessType"));

    m_accessTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerOwnedIpv4Pool"))
  {
    m_customerOwnedIpv4Pool = jsonValue.GetString("CustomerOwnedIpv4Pool");

    m_customerOwnedIpv4PoolHasBeenSet = true;
  }

  return *this;
}

JsonValue Endpoint::Jsonize() const
{
  JsonValue payload;

  if(m_endpointArnHasBeenSet)
  {
   payload.WithString("EndpointArn", m_endpointArn);

  }

  if(m_outpostsIdHasBeenSet)
  {
   payload.WithString("OutpostsId", m_outpostsId);

  }

  if(m_cidrBlockHasBeenSet)
  {
   payload.WithString("CidrBlock", m_cidrBlock);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EndpointStatusMapper::GetNameForEndpointStatus(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
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

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_securityGroupIdHasBeenSet)
  {
   payload.WithString("SecurityGroupId", m_securityGroupId);

  }

  if(m_accessTypeHasBeenSet)
  {
   payload.WithString("AccessType", EndpointAccessTypeMapper::GetNameForEndpointAccessType(m_accessType));
  }

  if(m_customerOwnedIpv4PoolHasBeenSet)
  {
   payload.WithString("CustomerOwnedIpv4Pool", m_customerOwnedIpv4Pool);

  }

  return payload;
}

} // namespace Model
} // namespace S3Outposts
} // namespace Aws
