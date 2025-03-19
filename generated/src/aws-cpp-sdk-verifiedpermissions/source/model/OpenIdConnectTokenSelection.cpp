/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/OpenIdConnectTokenSelection.h>
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

OpenIdConnectTokenSelection::OpenIdConnectTokenSelection(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenIdConnectTokenSelection& OpenIdConnectTokenSelection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessTokenOnly"))
  {
    m_accessTokenOnly = jsonValue.GetObject("accessTokenOnly");
    m_accessTokenOnlyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identityTokenOnly"))
  {
    m_identityTokenOnly = jsonValue.GetObject("identityTokenOnly");
    m_identityTokenOnlyHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenIdConnectTokenSelection::Jsonize() const
{
  JsonValue payload;

  if(m_accessTokenOnlyHasBeenSet)
  {
   payload.WithObject("accessTokenOnly", m_accessTokenOnly.Jsonize());

  }

  if(m_identityTokenOnlyHasBeenSet)
  {
   payload.WithObject("identityTokenOnly", m_identityTokenOnly.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
