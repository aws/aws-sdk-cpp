/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/BandwidthReductionFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

BandwidthReductionFilter::BandwidthReductionFilter() : 
    m_sharpening(BandwidthReductionFilterSharpening::NOT_SET),
    m_sharpeningHasBeenSet(false),
    m_strength(BandwidthReductionFilterStrength::NOT_SET),
    m_strengthHasBeenSet(false)
{
}

BandwidthReductionFilter::BandwidthReductionFilter(JsonView jsonValue) : 
    m_sharpening(BandwidthReductionFilterSharpening::NOT_SET),
    m_sharpeningHasBeenSet(false),
    m_strength(BandwidthReductionFilterStrength::NOT_SET),
    m_strengthHasBeenSet(false)
{
  *this = jsonValue;
}

BandwidthReductionFilter& BandwidthReductionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sharpening"))
  {
    m_sharpening = BandwidthReductionFilterSharpeningMapper::GetBandwidthReductionFilterSharpeningForName(jsonValue.GetString("sharpening"));

    m_sharpeningHasBeenSet = true;
  }

  if(jsonValue.ValueExists("strength"))
  {
    m_strength = BandwidthReductionFilterStrengthMapper::GetBandwidthReductionFilterStrengthForName(jsonValue.GetString("strength"));

    m_strengthHasBeenSet = true;
  }

  return *this;
}

JsonValue BandwidthReductionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_sharpeningHasBeenSet)
  {
   payload.WithString("sharpening", BandwidthReductionFilterSharpeningMapper::GetNameForBandwidthReductionFilterSharpening(m_sharpening));
  }

  if(m_strengthHasBeenSet)
  {
   payload.WithString("strength", BandwidthReductionFilterStrengthMapper::GetNameForBandwidthReductionFilterStrength(m_strength));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
