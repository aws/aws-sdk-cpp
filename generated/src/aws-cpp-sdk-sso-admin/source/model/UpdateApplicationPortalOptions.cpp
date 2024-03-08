/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/UpdateApplicationPortalOptions.h>
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

UpdateApplicationPortalOptions::UpdateApplicationPortalOptions() : 
    m_signInOptionsHasBeenSet(false)
{
}

UpdateApplicationPortalOptions::UpdateApplicationPortalOptions(JsonView jsonValue) : 
    m_signInOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateApplicationPortalOptions& UpdateApplicationPortalOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SignInOptions"))
  {
    m_signInOptions = jsonValue.GetObject("SignInOptions");

    m_signInOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateApplicationPortalOptions::Jsonize() const
{
  JsonValue payload;

  if(m_signInOptionsHasBeenSet)
  {
   payload.WithObject("SignInOptions", m_signInOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
