/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/AuthenticationMode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

AuthenticationMode::AuthenticationMode() : 
    m_type(InputAuthenticationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_passwordsHasBeenSet(false)
{
}

AuthenticationMode::AuthenticationMode(JsonView jsonValue) : 
    m_type(InputAuthenticationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_passwordsHasBeenSet(false)
{
  *this = jsonValue;
}

AuthenticationMode& AuthenticationMode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = InputAuthenticationTypeMapper::GetInputAuthenticationTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Passwords"))
  {
    Aws::Utils::Array<JsonView> passwordsJsonList = jsonValue.GetArray("Passwords");
    for(unsigned passwordsIndex = 0; passwordsIndex < passwordsJsonList.GetLength(); ++passwordsIndex)
    {
      m_passwords.push_back(passwordsJsonList[passwordsIndex].AsString());
    }
    m_passwordsHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthenticationMode::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", InputAuthenticationTypeMapper::GetNameForInputAuthenticationType(m_type));
  }

  if(m_passwordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> passwordsJsonList(m_passwords.size());
   for(unsigned passwordsIndex = 0; passwordsIndex < passwordsJsonList.GetLength(); ++passwordsIndex)
   {
     passwordsJsonList[passwordsIndex].AsString(m_passwords[passwordsIndex]);
   }
   payload.WithArray("Passwords", std::move(passwordsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
