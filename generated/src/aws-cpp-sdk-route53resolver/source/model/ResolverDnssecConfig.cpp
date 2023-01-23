/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverDnssecConfig.h>
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

ResolverDnssecConfig::ResolverDnssecConfig() : 
    m_idHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_validationStatus(ResolverDNSSECValidationStatus::NOT_SET),
    m_validationStatusHasBeenSet(false)
{
}

ResolverDnssecConfig::ResolverDnssecConfig(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_validationStatus(ResolverDNSSECValidationStatus::NOT_SET),
    m_validationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ResolverDnssecConfig& ResolverDnssecConfig::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationStatus"))
  {
    m_validationStatus = ResolverDNSSECValidationStatusMapper::GetResolverDNSSECValidationStatusForName(jsonValue.GetString("ValidationStatus"));

    m_validationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ResolverDnssecConfig::Jsonize() const
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

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_validationStatusHasBeenSet)
  {
   payload.WithString("ValidationStatus", ResolverDNSSECValidationStatusMapper::GetNameForResolverDNSSECValidationStatus(m_validationStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
