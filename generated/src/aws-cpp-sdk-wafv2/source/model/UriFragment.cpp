/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/UriFragment.h>
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

UriFragment::UriFragment() : 
    m_fallbackBehavior(FallbackBehavior::NOT_SET),
    m_fallbackBehaviorHasBeenSet(false)
{
}

UriFragment::UriFragment(JsonView jsonValue)
  : UriFragment()
{
  *this = jsonValue;
}

UriFragment& UriFragment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FallbackBehavior"))
  {
    m_fallbackBehavior = FallbackBehaviorMapper::GetFallbackBehaviorForName(jsonValue.GetString("FallbackBehavior"));

    m_fallbackBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue UriFragment::Jsonize() const
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
