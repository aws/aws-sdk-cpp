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

GrantItem::GrantItem() : 
    m_grantHasBeenSet(false),
    m_grantType(GrantType::NOT_SET),
    m_grantTypeHasBeenSet(false)
{
}

GrantItem::GrantItem(JsonView jsonValue) : 
    m_grantHasBeenSet(false),
    m_grantType(GrantType::NOT_SET),
    m_grantTypeHasBeenSet(false)
{
  *this = jsonValue;
}

GrantItem& GrantItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Grant"))
  {
    m_grant = jsonValue.GetObject("Grant");

    m_grantHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GrantType"))
  {
    m_grantType = GrantTypeMapper::GetGrantTypeForName(jsonValue.GetString("GrantType"));

    m_grantTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue GrantItem::Jsonize() const
{
  JsonValue payload;

  if(m_grantHasBeenSet)
  {
   payload.WithObject("Grant", m_grant.Jsonize());

  }

  if(m_grantTypeHasBeenSet)
  {
   payload.WithString("GrantType", GrantTypeMapper::GetNameForGrantType(m_grantType));
  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
