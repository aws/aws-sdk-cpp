/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/ToscaOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace tnb
{
namespace Model
{

ToscaOverride::ToscaOverride() : 
    m_defaultValueHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

ToscaOverride::ToscaOverride(JsonView jsonValue) : 
    m_defaultValueHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

ToscaOverride& ToscaOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue ToscaOverride::Jsonize() const
{
  JsonValue payload;

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
