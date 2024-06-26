﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/OpenIdConnectGroupConfiguration.h>
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

OpenIdConnectGroupConfiguration::OpenIdConnectGroupConfiguration() : 
    m_groupClaimHasBeenSet(false),
    m_groupEntityTypeHasBeenSet(false)
{
}

OpenIdConnectGroupConfiguration::OpenIdConnectGroupConfiguration(JsonView jsonValue)
  : OpenIdConnectGroupConfiguration()
{
  *this = jsonValue;
}

OpenIdConnectGroupConfiguration& OpenIdConnectGroupConfiguration::operator =(JsonView jsonValue)
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

JsonValue OpenIdConnectGroupConfiguration::Jsonize() const
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
