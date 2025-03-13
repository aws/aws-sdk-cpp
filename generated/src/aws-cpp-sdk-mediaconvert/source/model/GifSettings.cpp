/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/GifSettings.h>
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

GifSettings::GifSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

GifSettings& GifSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("framerateControl"))
  {
    m_framerateControl = GifFramerateControlMapper::GetGifFramerateControlForName(jsonValue.GetString("framerateControl"));
    m_framerateControlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("framerateConversionAlgorithm"))
  {
    m_framerateConversionAlgorithm = GifFramerateConversionAlgorithmMapper::GetGifFramerateConversionAlgorithmForName(jsonValue.GetString("framerateConversionAlgorithm"));
    m_framerateConversionAlgorithmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("framerateDenominator"))
  {
    m_framerateDenominator = jsonValue.GetInteger("framerateDenominator");
    m_framerateDenominatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("framerateNumerator"))
  {
    m_framerateNumerator = jsonValue.GetInteger("framerateNumerator");
    m_framerateNumeratorHasBeenSet = true;
  }
  return *this;
}

JsonValue GifSettings::Jsonize() const
{
  JsonValue payload;

  if(m_framerateControlHasBeenSet)
  {
   payload.WithString("framerateControl", GifFramerateControlMapper::GetNameForGifFramerateControl(m_framerateControl));
  }

  if(m_framerateConversionAlgorithmHasBeenSet)
  {
   payload.WithString("framerateConversionAlgorithm", GifFramerateConversionAlgorithmMapper::GetNameForGifFramerateConversionAlgorithm(m_framerateConversionAlgorithm));
  }

  if(m_framerateDenominatorHasBeenSet)
  {
   payload.WithInteger("framerateDenominator", m_framerateDenominator);

  }

  if(m_framerateNumeratorHasBeenSet)
  {
   payload.WithInteger("framerateNumerator", m_framerateNumerator);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
