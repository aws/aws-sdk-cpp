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

AuthenticationMethodItem::AuthenticationMethodItem(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthenticationMethodItem& AuthenticationMethodItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthenticationMethodType"))
  {
    m_authenticationMethodType = AuthenticationMethodTypeMapper::GetAuthenticationMethodTypeForName(jsonValue.GetString("AuthenticationMethodType"));
    m_authenticationMethodTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthenticationMethod"))
  {
    m_authenticationMethod = jsonValue.GetObject("AuthenticationMethod");
    m_authenticationMethodHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthenticationMethodItem::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationMethodTypeHasBeenSet)
  {
   payload.WithString("AuthenticationMethodType", AuthenticationMethodTypeMapper::GetNameForAuthenticationMethodType(m_authenticationMethodType));
  }

  if(m_authenticationMethodHasBeenSet)
  {
   payload.WithObject("AuthenticationMethod", m_authenticationMethod.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
