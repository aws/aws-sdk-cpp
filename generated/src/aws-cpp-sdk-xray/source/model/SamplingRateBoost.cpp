/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/SamplingRateBoost.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

SamplingRateBoost::SamplingRateBoost(JsonView jsonValue)
{
  *this = jsonValue;
}

SamplingRateBoost& SamplingRateBoost::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxRate"))
  {
    m_maxRate = jsonValue.GetDouble("MaxRate");
    m_maxRateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CooldownWindowMinutes"))
  {
    m_cooldownWindowMinutes = jsonValue.GetInteger("CooldownWindowMinutes");
    m_cooldownWindowMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue SamplingRateBoost::Jsonize() const
{
  JsonValue payload;

  if(m_maxRateHasBeenSet)
  {
   payload.WithDouble("MaxRate", m_maxRate);

  }

  if(m_cooldownWindowMinutesHasBeenSet)
  {
   payload.WithInteger("CooldownWindowMinutes", m_cooldownWindowMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
