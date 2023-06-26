/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverQueryLogConfig.h>
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

ResolverQueryLogConfig::ResolverQueryLogConfig() : 
    m_idHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_status(ResolverQueryLogConfigStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_shareStatus(ShareStatus::NOT_SET),
    m_shareStatusHasBeenSet(false),
    m_associationCount(0),
    m_associationCountHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

ResolverQueryLogConfig::ResolverQueryLogConfig(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_status(ResolverQueryLogConfigStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_shareStatus(ShareStatus::NOT_SET),
    m_shareStatusHasBeenSet(false),
    m_associationCount(0),
    m_associationCountHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ResolverQueryLogConfig& ResolverQueryLogConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ResolverQueryLogConfigStatusMapper::GetResolverQueryLogConfigStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareStatus"))
  {
    m_shareStatus = ShareStatusMapper::GetShareStatusForName(jsonValue.GetString("ShareStatus"));

    m_shareStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationCount"))
  {
    m_associationCount = jsonValue.GetInteger("AssociationCount");

    m_associationCountHasBeenSet = true;
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

  if(jsonValue.ValueExists("DestinationArn"))
  {
    m_destinationArn = jsonValue.GetString("DestinationArn");

    m_destinationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

    m_creatorRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResolverQueryLogConfig::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ResolverQueryLogConfigStatusMapper::GetNameForResolverQueryLogConfigStatus(m_status));
  }

  if(m_shareStatusHasBeenSet)
  {
   payload.WithString("ShareStatus", ShareStatusMapper::GetNameForShareStatus(m_shareStatus));
  }

  if(m_associationCountHasBeenSet)
  {
   payload.WithInteger("AssociationCount", m_associationCount);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("DestinationArn", m_destinationArn);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
