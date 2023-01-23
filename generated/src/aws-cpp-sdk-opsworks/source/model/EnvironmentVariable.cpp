/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/EnvironmentVariable.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

EnvironmentVariable::EnvironmentVariable() : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_secure(false),
    m_secureHasBeenSet(false)
{
}

EnvironmentVariable::EnvironmentVariable(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_secure(false),
    m_secureHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentVariable& EnvironmentVariable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Secure"))
  {
    m_secure = jsonValue.GetBool("Secure");

    m_secureHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentVariable::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_secureHasBeenSet)
  {
   payload.WithBool("Secure", m_secure);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
