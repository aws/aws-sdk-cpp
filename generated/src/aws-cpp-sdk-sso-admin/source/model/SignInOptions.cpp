/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/SignInOptions.h>
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

SignInOptions::SignInOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

SignInOptions& SignInOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Origin"))
  {
    m_origin = SignInOriginMapper::GetSignInOriginForName(jsonValue.GetString("Origin"));
    m_originHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationUrl"))
  {
    m_applicationUrl = jsonValue.GetString("ApplicationUrl");
    m_applicationUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue SignInOptions::Jsonize() const
{
  JsonValue payload;

  if(m_originHasBeenSet)
  {
   payload.WithString("Origin", SignInOriginMapper::GetNameForSignInOrigin(m_origin));
  }

  if(m_applicationUrlHasBeenSet)
  {
   payload.WithString("ApplicationUrl", m_applicationUrl);

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
