/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/Grant.h>
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

Grant::Grant() : 
    m_authorizationCodeHasBeenSet(false),
    m_jwtBearerHasBeenSet(false),
    m_refreshTokenHasBeenSet(false),
    m_tokenExchangeHasBeenSet(false)
{
}

Grant::Grant(JsonView jsonValue) : 
    m_authorizationCodeHasBeenSet(false),
    m_jwtBearerHasBeenSet(false),
    m_refreshTokenHasBeenSet(false),
    m_tokenExchangeHasBeenSet(false)
{
  *this = jsonValue;
}

Grant& Grant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthorizationCode"))
  {
    m_authorizationCode = jsonValue.GetObject("AuthorizationCode");

    m_authorizationCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JwtBearer"))
  {
    m_jwtBearer = jsonValue.GetObject("JwtBearer");

    m_jwtBearerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RefreshToken"))
  {
    m_refreshToken = jsonValue.GetObject("RefreshToken");

    m_refreshTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TokenExchange"))
  {
    m_tokenExchange = jsonValue.GetObject("TokenExchange");

    m_tokenExchangeHasBeenSet = true;
  }

  return *this;
}

JsonValue Grant::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationCodeHasBeenSet)
  {
   payload.WithObject("AuthorizationCode", m_authorizationCode.Jsonize());

  }

  if(m_jwtBearerHasBeenSet)
  {
   payload.WithObject("JwtBearer", m_jwtBearer.Jsonize());

  }

  if(m_refreshTokenHasBeenSet)
  {
   payload.WithObject("RefreshToken", m_refreshToken.Jsonize());

  }

  if(m_tokenExchangeHasBeenSet)
  {
   payload.WithObject("TokenExchange", m_tokenExchange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
