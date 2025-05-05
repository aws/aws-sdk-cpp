/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AvcIntraSettings.h>
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

AvcIntraSettings::AvcIntraSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

AvcIntraSettings& AvcIntraSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("avcIntraClass"))
  {
    m_avcIntraClass = AvcIntraClassMapper::GetAvcIntraClassForName(jsonValue.GetString("avcIntraClass"));
    m_avcIntraClassHasBeenSet = true;
  }
  if(jsonValue.ValueExists("avcIntraUhdSettings"))
  {
    m_avcIntraUhdSettings = jsonValue.GetObject("avcIntraUhdSettings");
    m_avcIntraUhdSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("framerateControl"))
  {
    m_framerateControl = AvcIntraFramerateControlMapper::GetAvcIntraFramerateControlForName(jsonValue.GetString("framerateControl"));
    m_framerateControlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("framerateConversionAlgorithm"))
  {
    m_framerateConversionAlgorithm = AvcIntraFramerateConversionAlgorithmMapper::GetAvcIntraFramerateConversionAlgorithmForName(jsonValue.GetString("framerateConversionAlgorithm"));
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
    m_interlaceMode = AvcIntraInterlaceModeMapper::GetAvcIntraInterlaceModeForName(jsonValue.GetString("interlaceMode"));
    m_interlaceModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("perFrameMetrics"))
  {
    Aws::Utils::Array<JsonView> perFrameMetricsJsonList = jsonValue.GetArray("perFrameMetrics");
    for(unsigned perFrameMetricsIndex = 0; perFrameMetricsIndex < perFrameMetricsJsonList.GetLength(); ++perFrameMetricsIndex)
    {
      m_perFrameMetrics.push_back(FrameMetricTypeMapper::GetFrameMetricTypeForName(perFrameMetricsJsonList[perFrameMetricsIndex].AsString()));
    }
    m_perFrameMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanTypeConversionMode"))
  {
    m_scanTypeConversionMode = AvcIntraScanTypeConversionModeMapper::GetAvcIntraScanTypeConversionModeForName(jsonValue.GetString("scanTypeConversionMode"));
    m_scanTypeConversionModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slowPal"))
  {
    m_slowPal = AvcIntraSlowPalMapper::GetAvcIntraSlowPalForName(jsonValue.GetString("slowPal"));
    m_slowPalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("telecine"))
  {
    m_telecine = AvcIntraTelecineMapper::GetAvcIntraTelecineForName(jsonValue.GetString("telecine"));
    m_telecineHasBeenSet = true;
  }
  return *this;
}

JsonValue AvcIntraSettings::Jsonize() const
{
  JsonValue payload;

  if(m_avcIntraClassHasBeenSet)
  {
   payload.WithString("avcIntraClass", AvcIntraClassMapper::GetNameForAvcIntraClass(m_avcIntraClass));
  }

  if(m_avcIntraUhdSettingsHasBeenSet)
  {
   payload.WithObject("avcIntraUhdSettings", m_avcIntraUhdSettings.Jsonize());

  }

  if(m_framerateControlHasBeenSet)
  {
   payload.WithString("framerateControl", AvcIntraFramerateControlMapper::GetNameForAvcIntraFramerateControl(m_framerateControl));
  }

  if(m_framerateConversionAlgorithmHasBeenSet)
  {
   payload.WithString("framerateConversionAlgorithm", AvcIntraFramerateConversionAlgorithmMapper::GetNameForAvcIntraFramerateConversionAlgorithm(m_framerateConversionAlgorithm));
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
   payload.WithString("interlaceMode", AvcIntraInterlaceModeMapper::GetNameForAvcIntraInterlaceMode(m_interlaceMode));
  }

  if(m_perFrameMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> perFrameMetricsJsonList(m_perFrameMetrics.size());
   for(unsigned perFrameMetricsIndex = 0; perFrameMetricsIndex < perFrameMetricsJsonList.GetLength(); ++perFrameMetricsIndex)
   {
     perFrameMetricsJsonList[perFrameMetricsIndex].AsString(FrameMetricTypeMapper::GetNameForFrameMetricType(m_perFrameMetrics[perFrameMetricsIndex]));
   }
   payload.WithArray("perFrameMetrics", std::move(perFrameMetricsJsonList));

  }

  if(m_scanTypeConversionModeHasBeenSet)
  {
   payload.WithString("scanTypeConversionMode", AvcIntraScanTypeConversionModeMapper::GetNameForAvcIntraScanTypeConversionMode(m_scanTypeConversionMode));
  }

  if(m_slowPalHasBeenSet)
  {
   payload.WithString("slowPal", AvcIntraSlowPalMapper::GetNameForAvcIntraSlowPal(m_slowPal));
  }

  if(m_telecineHasBeenSet)
  {
   payload.WithString("telecine", AvcIntraTelecineMapper::GetNameForAvcIntraTelecine(m_telecine));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
