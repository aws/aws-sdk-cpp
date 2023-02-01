/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/PasswordField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

PasswordField::PasswordField() : 
    m_identifierHasBeenSet(false)
{
}

PasswordField::PasswordField(JsonView jsonValue) : 
    m_identifierHasBeenSet(false)
{
  *this = jsonValue;
}

PasswordField& PasswordField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

    m_identifierHasBeenSet = true;
  }

  return *this;
}

JsonValue PasswordField::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
