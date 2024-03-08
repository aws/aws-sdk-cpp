/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/PortalOptions.h>
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

PortalOptions::PortalOptions() : 
    m_signInOptionsHasBeenSet(false),
    m_visibility(ApplicationVisibility::NOT_SET),
    m_visibilityHasBeenSet(false)
{
}

PortalOptions::PortalOptions(JsonView jsonValue) : 
    m_signInOptionsHasBeenSet(false),
    m_visibility(ApplicationVisibility::NOT_SET),
    m_visibilityHasBeenSet(false)
{
  *this = jsonValue;
}

PortalOptions& PortalOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SignInOptions"))
  {
    m_signInOptions = jsonValue.GetObject("SignInOptions");

    m_signInOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = ApplicationVisibilityMapper::GetApplicationVisibilityForName(jsonValue.GetString("Visibility"));

    m_visibilityHasBeenSet = true;
  }

  return *this;
}

JsonValue PortalOptions::Jsonize() const
{
  JsonValue payload;

  if(m_signInOptionsHasBeenSet)
  {
   payload.WithObject("SignInOptions", m_signInOptions.Jsonize());

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", ApplicationVisibilityMapper::GetNameForApplicationVisibility(m_visibility));
  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
