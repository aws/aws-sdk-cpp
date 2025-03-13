/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BandwidthReductionFilterSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

BandwidthReductionFilterSettings::BandwidthReductionFilterSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

BandwidthReductionFilterSettings& BandwidthReductionFilterSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("postFilterSharpening"))
  {
    m_postFilterSharpening = BandwidthReductionPostFilterSharpeningMapper::GetBandwidthReductionPostFilterSharpeningForName(jsonValue.GetString("postFilterSharpening"));
    m_postFilterSharpeningHasBeenSet = true;
  }
  if(jsonValue.ValueExists("strength"))
  {
    m_strength = BandwidthReductionFilterStrengthMapper::GetBandwidthReductionFilterStrengthForName(jsonValue.GetString("strength"));
    m_strengthHasBeenSet = true;
  }
  return *this;
}

JsonValue BandwidthReductionFilterSettings::Jsonize() const
{
  JsonValue payload;

  if(m_postFilterSharpeningHasBeenSet)
  {
   payload.WithString("postFilterSharpening", BandwidthReductionPostFilterSharpeningMapper::GetNameForBandwidthReductionPostFilterSharpening(m_postFilterSharpening));
  }

  if(m_strengthHasBeenSet)
  {
   payload.WithString("strength", BandwidthReductionFilterStrengthMapper::GetNameForBandwidthReductionFilterStrength(m_strength));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
