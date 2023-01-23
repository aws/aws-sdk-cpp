/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

ResolverEndpoint::ResolverEndpoint() : 
    m_idHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_direction(ResolverEndpointDirection::NOT_SET),
    m_directionHasBeenSet(false),
    m_ipAddressCount(0),
    m_ipAddressCountHasBeenSet(false),
    m_hostVPCIdHasBeenSet(false),
    m_status(ResolverEndpointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modificationTimeHasBeenSet(false)
{
}

ResolverEndpoint::ResolverEndpoint(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_direction(ResolverEndpointDirection::NOT_SET),
    m_directionHasBeenSet(false),
    m_ipAddressCount(0),
    m_ipAddressCountHasBeenSet(false),
    m_hostVPCIdHasBeenSet(false),
    m_status(ResolverEndpointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modificationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ResolverEndpoint& ResolverEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

    m_creatorRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Direction"))
  {
    m_direction = ResolverEndpointDirectionMapper::GetResolverEndpointDirectionForName(jsonValue.GetString("Direction"));

    m_directionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddressCount"))
  {
    m_ipAddressCount = jsonValue.GetInteger("IpAddressCount");

    m_ipAddressCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostVPCId"))
  {
    m_hostVPCId = jsonValue.GetString("HostVPCId");

    m_hostVPCIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ResolverEndpointStatusMapper::GetResolverEndpointStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModificationTime"))
  {
    m_modificationTime = jsonValue.GetString("ModificationTime");

    m_modificationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResolverEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_directionHasBeenSet)
  {
   payload.WithString("Direction", ResolverEndpointDirectionMapper::GetNameForResolverEndpointDirection(m_direction));
  }

  if(m_ipAddressCountHasBeenSet)
  {
   payload.WithInteger("IpAddressCount", m_ipAddressCount);

  }

  if(m_hostVPCIdHasBeenSet)
  {
   payload.WithString("HostVPCId", m_hostVPCId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ResolverEndpointStatusMapper::GetNameForResolverEndpointStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime);

  }

  if(m_modificationTimeHasBeenSet)
  {
   payload.WithString("ModificationTime", m_modificationTime);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
