/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/Alias.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

Alias::Alias() : 
    m_aliasNameHasBeenSet(false),
    m_keyArnHasBeenSet(false)
{
}

Alias::Alias(JsonView jsonValue) : 
    m_aliasNameHasBeenSet(false),
    m_keyArnHasBeenSet(false)
{
  *this = jsonValue;
}

Alias& Alias::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AliasName"))
  {
    m_aliasName = jsonValue.GetString("AliasName");

    m_aliasNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyArn"))
  {
    m_keyArn = jsonValue.GetString("KeyArn");

    m_keyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Alias::Jsonize() const
{
  JsonValue payload;

  if(m_aliasNameHasBeenSet)
  {
   payload.WithString("AliasName", m_aliasName);

  }

  if(m_keyArnHasBeenSet)
  {
   payload.WithString("KeyArn", m_keyArn);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
