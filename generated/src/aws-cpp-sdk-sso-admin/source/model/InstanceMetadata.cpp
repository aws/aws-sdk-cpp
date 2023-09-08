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
    m_identityStoreIdHasBeenSet(false),
    m_instanceArnHasBeenSet(false)
{
}

InstanceMetadata::InstanceMetadata(JsonView jsonValue) : 
    m_identityStoreIdHasBeenSet(false),
    m_instanceArnHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceMetadata& InstanceMetadata::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue InstanceMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("IdentityStoreId", m_identityStoreId);

  }

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
