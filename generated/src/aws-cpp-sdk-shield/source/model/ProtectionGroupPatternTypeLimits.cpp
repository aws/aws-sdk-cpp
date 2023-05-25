/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/ProtectionGroupPatternTypeLimits.h>
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

ProtectionGroupPatternTypeLimits::ProtectionGroupPatternTypeLimits() : 
    m_arbitraryPatternLimitsHasBeenSet(false)
{
}

ProtectionGroupPatternTypeLimits::ProtectionGroupPatternTypeLimits(JsonView jsonValue) : 
    m_arbitraryPatternLimitsHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectionGroupPatternTypeLimits& ProtectionGroupPatternTypeLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArbitraryPatternLimits"))
  {
    m_arbitraryPatternLimits = jsonValue.GetObject("ArbitraryPatternLimits");

    m_arbitraryPatternLimitsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectionGroupPatternTypeLimits::Jsonize() const
{
  JsonValue payload;

  if(m_arbitraryPatternLimitsHasBeenSet)
  {
   payload.WithObject("ArbitraryPatternLimits", m_arbitraryPatternLimits.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
