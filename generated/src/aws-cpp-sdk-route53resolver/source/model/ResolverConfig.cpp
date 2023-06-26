/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverConfig.h>
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

ResolverConfig::ResolverConfig() : 
    m_idHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_autodefinedReverse(ResolverAutodefinedReverseStatus::NOT_SET),
    m_autodefinedReverseHasBeenSet(false)
{
}

ResolverConfig::ResolverConfig(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_autodefinedReverse(ResolverAutodefinedReverseStatus::NOT_SET),
    m_autodefinedReverseHasBeenSet(false)
{
  *this = jsonValue;
}

ResolverConfig& ResolverConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutodefinedReverse"))
  {
    m_autodefinedReverse = ResolverAutodefinedReverseStatusMapper::GetResolverAutodefinedReverseStatusForName(jsonValue.GetString("AutodefinedReverse"));

    m_autodefinedReverseHasBeenSet = true;
  }

  return *this;
}

JsonValue ResolverConfig::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_autodefinedReverseHasBeenSet)
  {
   payload.WithString("AutodefinedReverse", ResolverAutodefinedReverseStatusMapper::GetNameForResolverAutodefinedReverseStatus(m_autodefinedReverse));
  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
