/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ForwardedIPConfig.h>
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

ForwardedIPConfig::ForwardedIPConfig() : 
    m_headerNameHasBeenSet(false),
    m_fallbackBehavior(FallbackBehavior::NOT_SET),
    m_fallbackBehaviorHasBeenSet(false)
{
}

ForwardedIPConfig::ForwardedIPConfig(JsonView jsonValue) : 
    m_headerNameHasBeenSet(false),
    m_fallbackBehavior(FallbackBehavior::NOT_SET),
    m_fallbackBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

ForwardedIPConfig& ForwardedIPConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HeaderName"))
  {
    m_headerName = jsonValue.GetString("HeaderName");

    m_headerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FallbackBehavior"))
  {
    m_fallbackBehavior = FallbackBehaviorMapper::GetFallbackBehaviorForName(jsonValue.GetString("FallbackBehavior"));

    m_fallbackBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue ForwardedIPConfig::Jsonize() const
{
  JsonValue payload;

  if(m_headerNameHasBeenSet)
  {
   payload.WithString("HeaderName", m_headerName);

  }

  if(m_fallbackBehaviorHasBeenSet)
  {
   payload.WithString("FallbackBehavior", FallbackBehaviorMapper::GetNameForFallbackBehavior(m_fallbackBehavior));
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
