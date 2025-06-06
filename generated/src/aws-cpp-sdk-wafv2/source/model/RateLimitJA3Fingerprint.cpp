﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RateLimitJA3Fingerprint.h>
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

RateLimitJA3Fingerprint::RateLimitJA3Fingerprint(JsonView jsonValue)
{
  *this = jsonValue;
}

RateLimitJA3Fingerprint& RateLimitJA3Fingerprint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FallbackBehavior"))
  {
    m_fallbackBehavior = FallbackBehaviorMapper::GetFallbackBehaviorForName(jsonValue.GetString("FallbackBehavior"));
    m_fallbackBehaviorHasBeenSet = true;
  }
  return *this;
}

JsonValue RateLimitJA3Fingerprint::Jsonize() const
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
