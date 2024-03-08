/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/JA3Fingerprint.h>
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

JA3Fingerprint::JA3Fingerprint() : 
    m_fallbackBehavior(FallbackBehavior::NOT_SET),
    m_fallbackBehaviorHasBeenSet(false)
{
}

JA3Fingerprint::JA3Fingerprint(JsonView jsonValue) : 
    m_fallbackBehavior(FallbackBehavior::NOT_SET),
    m_fallbackBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

JA3Fingerprint& JA3Fingerprint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FallbackBehavior"))
  {
    m_fallbackBehavior = FallbackBehaviorMapper::GetFallbackBehaviorForName(jsonValue.GetString("FallbackBehavior"));

    m_fallbackBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue JA3Fingerprint::Jsonize() const
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
