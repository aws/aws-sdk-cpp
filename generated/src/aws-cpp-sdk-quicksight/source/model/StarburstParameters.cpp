/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/StarburstParameters.h>
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

StarburstParameters::StarburstParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

StarburstParameters& StarburstParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Host"))
  {
    m_host = jsonValue.GetString("Host");
    m_hostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Catalog"))
  {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProductType"))
  {
    m_productType = StarburstProductTypeMapper::GetStarburstProductTypeForName(jsonValue.GetString("ProductType"));
    m_productTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatabaseAccessControlRole"))
  {
    m_databaseAccessControlRole = jsonValue.GetString("DatabaseAccessControlRole");
    m_databaseAccessControlRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("AuthenticationType"));
    m_authenticationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OAuthParameters"))
  {
    m_oAuthParameters = jsonValue.GetObject("OAuthParameters");
    m_oAuthParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue StarburstParameters::Jsonize() const
{
  JsonValue payload;

  if(m_hostHasBeenSet)
  {
   payload.WithString("Host", m_host);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_productTypeHasBeenSet)
  {
   payload.WithString("ProductType", StarburstProductTypeMapper::GetNameForStarburstProductType(m_productType));
  }

  if(m_databaseAccessControlRoleHasBeenSet)
  {
   payload.WithString("DatabaseAccessControlRole", m_databaseAccessControlRole);

  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
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
