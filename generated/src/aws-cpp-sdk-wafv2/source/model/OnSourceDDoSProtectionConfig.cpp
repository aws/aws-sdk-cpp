/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/OnSourceDDoSProtectionConfig.h>
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

OnSourceDDoSProtectionConfig::OnSourceDDoSProtectionConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

OnSourceDDoSProtectionConfig& OnSourceDDoSProtectionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ALBLowReputationMode"))
  {
    m_aLBLowReputationMode = LowReputationModeMapper::GetLowReputationModeForName(jsonValue.GetString("ALBLowReputationMode"));
    m_aLBLowReputationModeHasBeenSet = true;
  }
  return *this;
}

JsonValue OnSourceDDoSProtectionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_aLBLowReputationModeHasBeenSet)
  {
   payload.WithString("ALBLowReputationMode", LowReputationModeMapper::GetNameForLowReputationMode(m_aLBLowReputationMode));
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
