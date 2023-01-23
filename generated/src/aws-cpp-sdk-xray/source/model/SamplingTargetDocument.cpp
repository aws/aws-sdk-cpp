/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/SamplingTargetDocument.h>
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

SamplingTargetDocument::SamplingTargetDocument() : 
    m_ruleNameHasBeenSet(false),
    m_fixedRate(0.0),
    m_fixedRateHasBeenSet(false),
    m_reservoirQuota(0),
    m_reservoirQuotaHasBeenSet(false),
    m_reservoirQuotaTTLHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false)
{
}

SamplingTargetDocument::SamplingTargetDocument(JsonView jsonValue) : 
    m_ruleNameHasBeenSet(false),
    m_fixedRate(0.0),
    m_fixedRateHasBeenSet(false),
    m_reservoirQuota(0),
    m_reservoirQuotaHasBeenSet(false),
    m_reservoirQuotaTTLHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false)
{
  *this = jsonValue;
}

SamplingTargetDocument& SamplingTargetDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");

    m_ruleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FixedRate"))
  {
    m_fixedRate = jsonValue.GetDouble("FixedRate");

    m_fixedRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReservoirQuota"))
  {
    m_reservoirQuota = jsonValue.GetInteger("ReservoirQuota");

    m_reservoirQuotaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReservoirQuotaTTL"))
  {
    m_reservoirQuotaTTL = jsonValue.GetDouble("ReservoirQuotaTTL");

    m_reservoirQuotaTTLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Interval"))
  {
    m_interval = jsonValue.GetInteger("Interval");

    m_intervalHasBeenSet = true;
  }

  return *this;
}

JsonValue SamplingTargetDocument::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  if(m_fixedRateHasBeenSet)
  {
   payload.WithDouble("FixedRate", m_fixedRate);

  }

  if(m_reservoirQuotaHasBeenSet)
  {
   payload.WithInteger("ReservoirQuota", m_reservoirQuota);

  }

  if(m_reservoirQuotaTTLHasBeenSet)
  {
   payload.WithDouble("ReservoirQuotaTTL", m_reservoirQuotaTTL.SecondsWithMSPrecision());
  }

  if(m_intervalHasBeenSet)
  {
   payload.WithInteger("Interval", m_interval);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
