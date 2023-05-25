/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/Filter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

Filter::Filter() : 
    m_patternHasBeenSet(false)
{
}

Filter::Filter(JsonView jsonValue) : 
    m_patternHasBeenSet(false)
{
  *this = jsonValue;
}

Filter& Filter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Pattern"))
  {
    m_pattern = jsonValue.GetString("Pattern");

    m_patternHasBeenSet = true;
  }

  return *this;
}

JsonValue Filter::Jsonize() const
{
  JsonValue payload;

  if(m_patternHasBeenSet)
  {
   payload.WithString("Pattern", m_pattern);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
