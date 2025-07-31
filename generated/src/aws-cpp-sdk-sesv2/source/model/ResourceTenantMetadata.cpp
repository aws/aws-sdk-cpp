/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ResourceTenantMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

ResourceTenantMetadata::ResourceTenantMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceTenantMetadata& ResourceTenantMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TenantName"))
  {
    m_tenantName = jsonValue.GetString("TenantName");
    m_tenantNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TenantId"))
  {
    m_tenantId = jsonValue.GetString("TenantId");
    m_tenantIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociatedTimestamp"))
  {
    m_associatedTimestamp = jsonValue.GetDouble("AssociatedTimestamp");
    m_associatedTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceTenantMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_tenantNameHasBeenSet)
  {
   payload.WithString("TenantName", m_tenantName);

  }

  if(m_tenantIdHasBeenSet)
  {
   payload.WithString("TenantId", m_tenantId);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_associatedTimestampHasBeenSet)
  {
   payload.WithDouble("AssociatedTimestamp", m_associatedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
