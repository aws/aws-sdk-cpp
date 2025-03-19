/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnowflakeParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

SnowflakeParameters::SnowflakeParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

SnowflakeParameters& SnowflakeParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Host"))
  {
    m_host = jsonValue.GetString("Host");
    m_hostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");
    m_databaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Warehouse"))
  {
    m_warehouse = jsonValue.GetString("Warehouse");
    m_warehouseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("AuthenticationType"));
    m_authenticationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatabaseAccessControlRole"))
  {
    m_databaseAccessControlRole = jsonValue.GetString("DatabaseAccessControlRole");
    m_databaseAccessControlRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OAuthParameters"))
  {
    m_oAuthParameters = jsonValue.GetObject("OAuthParameters");
    m_oAuthParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue SnowflakeParameters::Jsonize() const
{
  JsonValue payload;

  if(m_hostHasBeenSet)
  {
   payload.WithString("Host", m_host);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_warehouseHasBeenSet)
  {
   payload.WithString("Warehouse", m_warehouse);

  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
  }

  if(m_databaseAccessControlRoleHasBeenSet)
  {
   payload.WithString("DatabaseAccessControlRole", m_databaseAccessControlRole);

  }

  if(m_oAuthParametersHasBeenSet)
  {
   payload.WithObject("OAuthParameters", m_oAuthParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
