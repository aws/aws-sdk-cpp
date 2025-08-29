/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/SamplingBoost.h>
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

SamplingBoost::SamplingBoost(JsonView jsonValue)
{
  *this = jsonValue;
}

SamplingBoost& SamplingBoost::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BoostRate"))
  {
    m_boostRate = jsonValue.GetDouble("BoostRate");
    m_boostRateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BoostRateTTL"))
  {
    m_boostRateTTL = jsonValue.GetDouble("BoostRateTTL");
    m_boostRateTTLHasBeenSet = true;
  }
  return *this;
}

JsonValue SamplingBoost::Jsonize() const
{
  JsonValue payload;

  if(m_boostRateHasBeenSet)
  {
   payload.WithDouble("BoostRate", m_boostRate);

  }

  if(m_boostRateTTLHasBeenSet)
  {
   payload.WithDouble("BoostRateTTL", m_boostRateTTL.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
