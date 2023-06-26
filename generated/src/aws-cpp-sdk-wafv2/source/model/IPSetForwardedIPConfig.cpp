/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/IPSetForwardedIPConfig.h>
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

IPSetForwardedIPConfig::IPSetForwardedIPConfig() : 
    m_headerNameHasBeenSet(false),
    m_fallbackBehavior(FallbackBehavior::NOT_SET),
    m_fallbackBehaviorHasBeenSet(false),
    m_position(ForwardedIPPosition::NOT_SET),
    m_positionHasBeenSet(false)
{
}

IPSetForwardedIPConfig::IPSetForwardedIPConfig(JsonView jsonValue) : 
    m_headerNameHasBeenSet(false),
    m_fallbackBehavior(FallbackBehavior::NOT_SET),
    m_fallbackBehaviorHasBeenSet(false),
    m_position(ForwardedIPPosition::NOT_SET),
    m_positionHasBeenSet(false)
{
  *this = jsonValue;
}

IPSetForwardedIPConfig& IPSetForwardedIPConfig::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Position"))
  {
    m_position = ForwardedIPPositionMapper::GetForwardedIPPositionForName(jsonValue.GetString("Position"));

    m_positionHasBeenSet = true;
  }

  return *this;
}

JsonValue IPSetForwardedIPConfig::Jsonize() const
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

  if(m_positionHasBeenSet)
  {
   payload.WithString("Position", ForwardedIPPositionMapper::GetNameForForwardedIPPosition(m_position));
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
