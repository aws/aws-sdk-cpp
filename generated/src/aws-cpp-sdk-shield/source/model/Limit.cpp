/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/Limit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

Limit::Limit() : 
    m_typeHasBeenSet(false),
    m_max(0),
    m_maxHasBeenSet(false)
{
}

Limit::Limit(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_max(0),
    m_maxHasBeenSet(false)
{
  *this = jsonValue;
}

Limit& Limit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetInt64("Max");

    m_maxHasBeenSet = true;
  }

  return *this;
}

JsonValue Limit::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithInt64("Max", m_max);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
