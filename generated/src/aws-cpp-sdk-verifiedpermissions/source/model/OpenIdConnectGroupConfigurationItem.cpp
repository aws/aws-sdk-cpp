﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/OpenIdConnectGroupConfigurationItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

OpenIdConnectGroupConfigurationItem::OpenIdConnectGroupConfigurationItem() : 
    m_groupClaimHasBeenSet(false),
    m_groupEntityTypeHasBeenSet(false)
{
}

OpenIdConnectGroupConfigurationItem::OpenIdConnectGroupConfigurationItem(JsonView jsonValue)
  : OpenIdConnectGroupConfigurationItem()
{
  *this = jsonValue;
}

OpenIdConnectGroupConfigurationItem& OpenIdConnectGroupConfigurationItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupClaim"))
  {
    m_groupClaim = jsonValue.GetString("groupClaim");

    m_groupClaimHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupEntityType"))
  {
    m_groupEntityType = jsonValue.GetString("groupEntityType");

    m_groupEntityTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue OpenIdConnectGroupConfigurationItem::Jsonize() const
{
  JsonValue payload;

  if(m_groupClaimHasBeenSet)
  {
   payload.WithString("groupClaim", m_groupClaim);

  }

  if(m_groupEntityTypeHasBeenSet)
  {
   payload.WithString("groupEntityType", m_groupEntityType);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
