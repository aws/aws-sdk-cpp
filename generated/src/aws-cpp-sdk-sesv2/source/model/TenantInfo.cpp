/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/TenantInfo.h>
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

TenantInfo::TenantInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

TenantInfo& TenantInfo::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("TenantArn"))
  {
    m_tenantArn = jsonValue.GetString("TenantArn");
    m_tenantArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue TenantInfo::Jsonize() const
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

  if(m_tenantArnHasBeenSet)
  {
   payload.WithString("TenantArn", m_tenantArn);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
