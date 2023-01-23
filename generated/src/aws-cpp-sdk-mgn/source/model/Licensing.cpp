/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/Licensing.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

Licensing::Licensing() : 
    m_osByol(false),
    m_osByolHasBeenSet(false)
{
}

Licensing::Licensing(JsonView jsonValue) : 
    m_osByol(false),
    m_osByolHasBeenSet(false)
{
  *this = jsonValue;
}

Licensing& Licensing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("osByol"))
  {
    m_osByol = jsonValue.GetBool("osByol");

    m_osByolHasBeenSet = true;
  }

  return *this;
}

JsonValue Licensing::Jsonize() const
{
  JsonValue payload;

  if(m_osByolHasBeenSet)
  {
   payload.WithBool("osByol", m_osByol);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
