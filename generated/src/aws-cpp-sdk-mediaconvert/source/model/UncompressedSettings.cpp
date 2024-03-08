/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/UncompressedSettings.h>
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

UncompressedSettings::UncompressedSettings() : 
    m_fourcc(UncompressedFourcc::NOT_SET),
    m_fourccHasBeenSet(false),
    m_framerateControl(UncompressedFramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(UncompressedFramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_interlaceMode(UncompressedInterlaceMode::NOT_SET),
    m_interlaceModeHasBeenSet(false),
    m_scanTypeConversionMode(UncompressedScanTypeConversionMode::NOT_SET),
    m_scanTypeConversionModeHasBeenSet(false),
    m_slowPal(UncompressedSlowPal::NOT_SET),
    m_slowPalHasBeenSet(false),
    m_telecine(UncompressedTelecine::NOT_SET),
    m_telecineHasBeenSet(false)
{
}

UncompressedSettings::UncompressedSettings(JsonView jsonValue) : 
    m_fourcc(UncompressedFourcc::NOT_SET),
    m_fourccHasBeenSet(false),
    m_framerateControl(UncompressedFramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(UncompressedFramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_interlaceMode(UncompressedInterlaceMode::NOT_SET),
    m_interlaceModeHasBeenSet(false),
    m_scanTypeConversionMode(UncompressedScanTypeConversionMode::NOT_SET),
    m_scanTypeConversionModeHasBeenSet(false),
    m_slowPal(UncompressedSlowPal::NOT_SET),
    m_slowPalHasBeenSet(false),
    m_telecine(UncompressedTelecine::NOT_SET),
    m_telecineHasBeenSet(false)
{
  *this = jsonValue;
}

UncompressedSettings& UncompressedSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fourcc"))
  {
    m_fourcc = UncompressedFourccMapper::GetUncompressedFourccForName(jsonValue.GetString("fourcc"));

    m_fourccHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateControl"))
  {
    m_framerateControl = UncompressedFramerateControlMapper::GetUncompressedFramerateControlForName(jsonValue.GetString("framerateControl"));

    m_framerateControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateConversionAlgorithm"))
  {
    m_framerateConversionAlgorithm = UncompressedFramerateConversionAlgorithmMapper::GetUncompressedFramerateConversionAlgorithmForName(jsonValue.GetString("framerateConversionAlgorithm"));

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

  if(jsonValue.ValueExists("interlaceMode"))
  {
    m_interlaceMode = UncompressedInterlaceModeMapper::GetUncompressedInterlaceModeForName(jsonValue.GetString("interlaceMode"));

    m_interlaceModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanTypeConversionMode"))
  {
    m_scanTypeConversionMode = UncompressedScanTypeConversionModeMapper::GetUncompressedScanTypeConversionModeForName(jsonValue.GetString("scanTypeConversionMode"));

    m_scanTypeConversionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slowPal"))
  {
    m_slowPal = UncompressedSlowPalMapper::GetUncompressedSlowPalForName(jsonValue.GetString("slowPal"));

    m_slowPalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("telecine"))
  {
    m_telecine = UncompressedTelecineMapper::GetUncompressedTelecineForName(jsonValue.GetString("telecine"));

    m_telecineHasBeenSet = true;
  }

  return *this;
}

JsonValue UncompressedSettings::Jsonize() const
{
  JsonValue payload;

  if(m_fourccHasBeenSet)
  {
   payload.WithString("fourcc", UncompressedFourccMapper::GetNameForUncompressedFourcc(m_fourcc));
  }

  if(m_framerateControlHasBeenSet)
  {
   payload.WithString("framerateControl", UncompressedFramerateControlMapper::GetNameForUncompressedFramerateControl(m_framerateControl));
  }

  if(m_framerateConversionAlgorithmHasBeenSet)
  {
   payload.WithString("framerateConversionAlgorithm", UncompressedFramerateConversionAlgorithmMapper::GetNameForUncompressedFramerateConversionAlgorithm(m_framerateConversionAlgorithm));
  }

  if(m_framerateDenominatorHasBeenSet)
  {
   payload.WithInteger("framerateDenominator", m_framerateDenominator);

  }

  if(m_framerateNumeratorHasBeenSet)
  {
   payload.WithInteger("framerateNumerator", m_framerateNumerator);

  }

  if(m_interlaceModeHasBeenSet)
  {
   payload.WithString("interlaceMode", UncompressedInterlaceModeMapper::GetNameForUncompressedInterlaceMode(m_interlaceMode));
  }

  if(m_scanTypeConversionModeHasBeenSet)
  {
   payload.WithString("scanTypeConversionMode", UncompressedScanTypeConversionModeMapper::GetNameForUncompressedScanTypeConversionMode(m_scanTypeConversionMode));
  }

  if(m_slowPalHasBeenSet)
  {
   payload.WithString("slowPal", UncompressedSlowPalMapper::GetNameForUncompressedSlowPal(m_slowPal));
  }

  if(m_telecineHasBeenSet)
  {
   payload.WithString("telecine", UncompressedTelecineMapper::GetNameForUncompressedTelecine(m_telecine));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
