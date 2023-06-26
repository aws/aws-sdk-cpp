/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcHdProfileSettings.h>
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

XavcHdProfileSettings::XavcHdProfileSettings() : 
    m_bitrateClass(XavcHdProfileBitrateClass::NOT_SET),
    m_bitrateClassHasBeenSet(false),
    m_flickerAdaptiveQuantization(XavcFlickerAdaptiveQuantization::NOT_SET),
    m_flickerAdaptiveQuantizationHasBeenSet(false),
    m_gopBReference(XavcGopBReference::NOT_SET),
    m_gopBReferenceHasBeenSet(false),
    m_gopClosedCadence(0),
    m_gopClosedCadenceHasBeenSet(false),
    m_hrdBufferSize(0),
    m_hrdBufferSizeHasBeenSet(false),
    m_interlaceMode(XavcInterlaceMode::NOT_SET),
    m_interlaceModeHasBeenSet(false),
    m_qualityTuningLevel(XavcHdProfileQualityTuningLevel::NOT_SET),
    m_qualityTuningLevelHasBeenSet(false),
    m_slices(0),
    m_slicesHasBeenSet(false),
    m_telecine(XavcHdProfileTelecine::NOT_SET),
    m_telecineHasBeenSet(false)
{
}

XavcHdProfileSettings::XavcHdProfileSettings(JsonView jsonValue) : 
    m_bitrateClass(XavcHdProfileBitrateClass::NOT_SET),
    m_bitrateClassHasBeenSet(false),
    m_flickerAdaptiveQuantization(XavcFlickerAdaptiveQuantization::NOT_SET),
    m_flickerAdaptiveQuantizationHasBeenSet(false),
    m_gopBReference(XavcGopBReference::NOT_SET),
    m_gopBReferenceHasBeenSet(false),
    m_gopClosedCadence(0),
    m_gopClosedCadenceHasBeenSet(false),
    m_hrdBufferSize(0),
    m_hrdBufferSizeHasBeenSet(false),
    m_interlaceMode(XavcInterlaceMode::NOT_SET),
    m_interlaceModeHasBeenSet(false),
    m_qualityTuningLevel(XavcHdProfileQualityTuningLevel::NOT_SET),
    m_qualityTuningLevelHasBeenSet(false),
    m_slices(0),
    m_slicesHasBeenSet(false),
    m_telecine(XavcHdProfileTelecine::NOT_SET),
    m_telecineHasBeenSet(false)
{
  *this = jsonValue;
}

XavcHdProfileSettings& XavcHdProfileSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bitrateClass"))
  {
    m_bitrateClass = XavcHdProfileBitrateClassMapper::GetXavcHdProfileBitrateClassForName(jsonValue.GetString("bitrateClass"));

    m_bitrateClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("flickerAdaptiveQuantization"))
  {
    m_flickerAdaptiveQuantization = XavcFlickerAdaptiveQuantizationMapper::GetXavcFlickerAdaptiveQuantizationForName(jsonValue.GetString("flickerAdaptiveQuantization"));

    m_flickerAdaptiveQuantizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gopBReference"))
  {
    m_gopBReference = XavcGopBReferenceMapper::GetXavcGopBReferenceForName(jsonValue.GetString("gopBReference"));

    m_gopBReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gopClosedCadence"))
  {
    m_gopClosedCadence = jsonValue.GetInteger("gopClosedCadence");

    m_gopClosedCadenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hrdBufferSize"))
  {
    m_hrdBufferSize = jsonValue.GetInteger("hrdBufferSize");

    m_hrdBufferSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interlaceMode"))
  {
    m_interlaceMode = XavcInterlaceModeMapper::GetXavcInterlaceModeForName(jsonValue.GetString("interlaceMode"));

    m_interlaceModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("qualityTuningLevel"))
  {
    m_qualityTuningLevel = XavcHdProfileQualityTuningLevelMapper::GetXavcHdProfileQualityTuningLevelForName(jsonValue.GetString("qualityTuningLevel"));

    m_qualityTuningLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slices"))
  {
    m_slices = jsonValue.GetInteger("slices");

    m_slicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("telecine"))
  {
    m_telecine = XavcHdProfileTelecineMapper::GetXavcHdProfileTelecineForName(jsonValue.GetString("telecine"));

    m_telecineHasBeenSet = true;
  }

  return *this;
}

JsonValue XavcHdProfileSettings::Jsonize() const
{
  JsonValue payload;

  if(m_bitrateClassHasBeenSet)
  {
   payload.WithString("bitrateClass", XavcHdProfileBitrateClassMapper::GetNameForXavcHdProfileBitrateClass(m_bitrateClass));
  }

  if(m_flickerAdaptiveQuantizationHasBeenSet)
  {
   payload.WithString("flickerAdaptiveQuantization", XavcFlickerAdaptiveQuantizationMapper::GetNameForXavcFlickerAdaptiveQuantization(m_flickerAdaptiveQuantization));
  }

  if(m_gopBReferenceHasBeenSet)
  {
   payload.WithString("gopBReference", XavcGopBReferenceMapper::GetNameForXavcGopBReference(m_gopBReference));
  }

  if(m_gopClosedCadenceHasBeenSet)
  {
   payload.WithInteger("gopClosedCadence", m_gopClosedCadence);

  }

  if(m_hrdBufferSizeHasBeenSet)
  {
   payload.WithInteger("hrdBufferSize", m_hrdBufferSize);

  }

  if(m_interlaceModeHasBeenSet)
  {
   payload.WithString("interlaceMode", XavcInterlaceModeMapper::GetNameForXavcInterlaceMode(m_interlaceMode));
  }

  if(m_qualityTuningLevelHasBeenSet)
  {
   payload.WithString("qualityTuningLevel", XavcHdProfileQualityTuningLevelMapper::GetNameForXavcHdProfileQualityTuningLevel(m_qualityTuningLevel));
  }

  if(m_slicesHasBeenSet)
  {
   payload.WithInteger("slices", m_slices);

  }

  if(m_telecineHasBeenSet)
  {
   payload.WithString("telecine", XavcHdProfileTelecineMapper::GetNameForXavcHdProfileTelecine(m_telecine));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
