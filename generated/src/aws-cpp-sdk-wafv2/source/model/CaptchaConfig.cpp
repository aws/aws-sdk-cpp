/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/CaptchaConfig.h>
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

CaptchaConfig::CaptchaConfig() : 
    m_immunityTimePropertyHasBeenSet(false)
{
}

CaptchaConfig::CaptchaConfig(JsonView jsonValue) : 
    m_immunityTimePropertyHasBeenSet(false)
{
  *this = jsonValue;
}

CaptchaConfig& CaptchaConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImmunityTimeProperty"))
  {
    m_immunityTimeProperty = jsonValue.GetObject("ImmunityTimeProperty");

    m_immunityTimePropertyHasBeenSet = true;
  }

  return *this;
}

JsonValue CaptchaConfig::Jsonize() const
{
  JsonValue payload;

  if(m_immunityTimePropertyHasBeenSet)
  {
   payload.WithObject("ImmunityTimeProperty", m_immunityTimeProperty.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
