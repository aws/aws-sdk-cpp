﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/ConfigurationDetail.h>
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

ConfigurationDetail::ConfigurationDetail() : 
    m_cognitoUserPoolConfigurationHasBeenSet(false),
    m_openIdConnectConfigurationHasBeenSet(false)
{
}

ConfigurationDetail::ConfigurationDetail(JsonView jsonValue)
  : ConfigurationDetail()
{
  *this = jsonValue;
}

ConfigurationDetail& ConfigurationDetail::operator =(JsonView jsonValue)
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

JsonValue ConfigurationDetail::Jsonize() const
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
