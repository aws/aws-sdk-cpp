/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/AuthenticationMethodItem.h>
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

AuthenticationMethodItem::AuthenticationMethodItem() : 
    m_authenticationMethodHasBeenSet(false),
    m_authenticationMethodType(AuthenticationMethodType::NOT_SET),
    m_authenticationMethodTypeHasBeenSet(false)
{
}

AuthenticationMethodItem::AuthenticationMethodItem(JsonView jsonValue) : 
    m_authenticationMethodHasBeenSet(false),
    m_authenticationMethodType(AuthenticationMethodType::NOT_SET),
    m_authenticationMethodTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AuthenticationMethodItem& AuthenticationMethodItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthenticationMethod"))
  {
    m_authenticationMethod = jsonValue.GetObject("AuthenticationMethod");

    m_authenticationMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthenticationMethodType"))
  {
    m_authenticationMethodType = AuthenticationMethodTypeMapper::GetAuthenticationMethodTypeForName(jsonValue.GetString("AuthenticationMethodType"));

    m_authenticationMethodTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthenticationMethodItem::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationMethodHasBeenSet)
  {
   payload.WithObject("AuthenticationMethod", m_authenticationMethod.Jsonize());

  }

  if(m_authenticationMethodTypeHasBeenSet)
  {
   payload.WithString("AuthenticationMethodType", AuthenticationMethodTypeMapper::GetNameForAuthenticationMethodType(m_authenticationMethodType));
  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
