/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/Tenant.h>
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

Tenant::Tenant(JsonView jsonValue)
{
  *this = jsonValue;
}

Tenant& Tenant::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SendingStatus"))
  {
    m_sendingStatus = SendingStatusMapper::GetSendingStatusForName(jsonValue.GetString("SendingStatus"));
    m_sendingStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue Tenant::Jsonize() const
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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_sendingStatusHasBeenSet)
  {
   payload.WithString("SendingStatus", SendingStatusMapper::GetNameForSendingStatus(m_sendingStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
