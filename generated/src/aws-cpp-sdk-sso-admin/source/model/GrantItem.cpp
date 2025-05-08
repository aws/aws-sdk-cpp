/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/GrantItem.h>
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

GrantItem::GrantItem(JsonView jsonValue)
{
  *this = jsonValue;
}

GrantItem& GrantItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GrantType"))
  {
    m_grantType = GrantTypeMapper::GetGrantTypeForName(jsonValue.GetString("GrantType"));
    m_grantTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Grant"))
  {
    m_grant = jsonValue.GetObject("Grant");
    m_grantHasBeenSet = true;
  }
  return *this;
}

JsonValue GrantItem::Jsonize() const
{
  JsonValue payload;

  if(m_grantTypeHasBeenSet)
  {
   payload.WithString("GrantType", GrantTypeMapper::GetNameForGrantType(m_grantType));
  }

  if(m_grantHasBeenSet)
  {
   payload.WithObject("Grant", m_grant.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
