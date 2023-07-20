/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/OutpostResolver.h>
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

OutpostResolver::OutpostResolver() : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modificationTimeHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_preferredInstanceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(OutpostResolverStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_outpostArnHasBeenSet(false)
{
}

OutpostResolver::OutpostResolver(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_modificationTimeHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_preferredInstanceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(OutpostResolverStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_outpostArnHasBeenSet(false)
{
  *this = jsonValue;
}

OutpostResolver& OutpostResolver::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
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

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

    m_creatorRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");

    m_instanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredInstanceType"))
  {
    m_preferredInstanceType = jsonValue.GetString("PreferredInstanceType");

    m_preferredInstanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OutpostResolverStatusMapper::GetOutpostResolverStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutpostArn"))
  {
    m_outpostArn = jsonValue.GetString("OutpostArn");

    m_outpostArnHasBeenSet = true;
  }

  return *this;
}

JsonValue OutpostResolver::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime);

  }

  if(m_modificationTimeHasBeenSet)
  {
   payload.WithString("ModificationTime", m_modificationTime);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_preferredInstanceTypeHasBeenSet)
  {
   payload.WithString("PreferredInstanceType", m_preferredInstanceType);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OutpostResolverStatusMapper::GetNameForOutpostResolverStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_outpostArnHasBeenSet)
  {
   payload.WithString("OutpostArn", m_outpostArn);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
