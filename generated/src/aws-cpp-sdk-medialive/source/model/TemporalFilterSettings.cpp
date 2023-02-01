/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/TemporalFilterSettings.h>
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

TemporalFilterSettings::TemporalFilterSettings() : 
    m_postFilterSharpening(TemporalFilterPostFilterSharpening::NOT_SET),
    m_postFilterSharpeningHasBeenSet(false),
    m_strength(TemporalFilterStrength::NOT_SET),
    m_strengthHasBeenSet(false)
{
}

TemporalFilterSettings::TemporalFilterSettings(JsonView jsonValue) : 
    m_postFilterSharpening(TemporalFilterPostFilterSharpening::NOT_SET),
    m_postFilterSharpeningHasBeenSet(false),
    m_strength(TemporalFilterStrength::NOT_SET),
    m_strengthHasBeenSet(false)
{
  *this = jsonValue;
}

TemporalFilterSettings& TemporalFilterSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("postFilterSharpening"))
  {
    m_postFilterSharpening = TemporalFilterPostFilterSharpeningMapper::GetTemporalFilterPostFilterSharpeningForName(jsonValue.GetString("postFilterSharpening"));

    m_postFilterSharpeningHasBeenSet = true;
  }

  if(jsonValue.ValueExists("strength"))
  {
    m_strength = TemporalFilterStrengthMapper::GetTemporalFilterStrengthForName(jsonValue.GetString("strength"));

    m_strengthHasBeenSet = true;
  }

  return *this;
}

JsonValue TemporalFilterSettings::Jsonize() const
{
  JsonValue payload;

  if(m_postFilterSharpeningHasBeenSet)
  {
   payload.WithString("postFilterSharpening", TemporalFilterPostFilterSharpeningMapper::GetNameForTemporalFilterPostFilterSharpening(m_postFilterSharpening));
  }

  if(m_strengthHasBeenSet)
  {
   payload.WithString("strength", TemporalFilterStrengthMapper::GetNameForTemporalFilterStrength(m_strength));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
