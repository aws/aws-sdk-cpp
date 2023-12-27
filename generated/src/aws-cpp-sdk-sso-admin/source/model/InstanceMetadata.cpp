/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/InstanceMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

InstanceMetadata::InstanceMetadata() : 
    m_createdDateHasBeenSet(false),
    m_identityStoreIdHasBeenSet(false),
    m_instanceArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_status(InstanceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

InstanceMetadata::InstanceMetadata(JsonView jsonValue) : 
    m_createdDateHasBeenSet(false),
    m_identityStoreIdHasBeenSet(false),
    m_instanceArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_status(InstanceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceMetadata& InstanceMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityStoreId"))
  {
    m_identityStoreId = jsonValue.GetString("IdentityStoreId");

    m_identityStoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceArn"))
  {
    m_instanceArn = jsonValue.GetString("InstanceArn");

    m_instanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

    m_ownerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = InstanceStatusMapper::GetInstanceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("IdentityStoreId", m_identityStoreId);

  }

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("OwnerAccountId", m_ownerAccountId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", InstanceStatusMapper::GetNameForInstanceStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
