/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RateLimitJA4Fingerprint.h>
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

RateLimitJA4Fingerprint::RateLimitJA4Fingerprint(JsonView jsonValue)
{
  *this = jsonValue;
}

RateLimitJA4Fingerprint& RateLimitJA4Fingerprint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FallbackBehavior"))
  {
    m_fallbackBehavior = FallbackBehaviorMapper::GetFallbackBehaviorForName(jsonValue.GetString("FallbackBehavior"));
    m_fallbackBehaviorHasBeenSet = true;
  }
  return *this;
}

JsonValue RateLimitJA4Fingerprint::Jsonize() const
{
  JsonValue payload;

  if(m_fallbackBehaviorHasBeenSet)
  {
   payload.WithString("FallbackBehavior", FallbackBehaviorMapper::GetNameForFallbackBehavior(m_fallbackBehavior));
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
