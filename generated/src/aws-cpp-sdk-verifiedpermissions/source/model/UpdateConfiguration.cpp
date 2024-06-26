﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/UpdateConfiguration.h>
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

UpdateConfiguration::UpdateConfiguration() : 
    m_cognitoUserPoolConfigurationHasBeenSet(false),
    m_openIdConnectConfigurationHasBeenSet(false)
{
}

UpdateConfiguration::UpdateConfiguration(JsonView jsonValue)
  : UpdateConfiguration()
{
  *this = jsonValue;
}

UpdateConfiguration& UpdateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cognitoUserPoolConfiguration"))
  {
    m_cognitoUserPoolConfiguration = jsonValue.GetObject("cognitoUserPoolConfiguration");

    m_cognitoUserPoolConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openIdConnectConfiguration"))
  {
    m_openIdConnectConfiguration = jsonValue.GetObject("openIdConnectConfiguration");

    m_openIdConnectConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_cognitoUserPoolConfigurationHasBeenSet)
  {
   payload.WithObject("cognitoUserPoolConfiguration", m_cognitoUserPoolConfiguration.Jsonize());

  }

  if(m_openIdConnectConfigurationHasBeenSet)
  {
   payload.WithObject("openIdConnectConfiguration", m_openIdConnectConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
