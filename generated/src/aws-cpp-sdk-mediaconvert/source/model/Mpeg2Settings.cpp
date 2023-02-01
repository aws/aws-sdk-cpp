/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Mpeg2Settings.h>
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

Mpeg2Settings::Mpeg2Settings() : 
    m_adaptiveQuantization(Mpeg2AdaptiveQuantization::NOT_SET),
    m_adaptiveQuantizationHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_codecLevel(Mpeg2CodecLevel::NOT_SET),
    m_codecLevelHasBeenSet(false),
    m_codecProfile(Mpeg2CodecProfile::NOT_SET),
    m_codecProfileHasBeenSet(false),
    m_dynamicSubGop(Mpeg2DynamicSubGop::NOT_SET),
    m_dynamicSubGopHasBeenSet(false),
    m_framerateControl(Mpeg2FramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(Mpeg2FramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_gopClosedCadence(0),
    m_gopClosedCadenceHasBeenSet(false),
    m_gopSize(0.0),
    m_gopSizeHasBeenSet(false),
    m_gopSizeUnits(Mpeg2GopSizeUnits::NOT_SET),
    m_gopSizeUnitsHasBeenSet(false),
    m_hrdBufferFinalFillPercentage(0),
    m_hrdBufferFinalFillPercentageHasBeenSet(false),
    m_hrdBufferInitialFillPercentage(0),
    m_hrdBufferInitialFillPercentageHasBeenSet(false),
    m_hrdBufferSize(0),
    m_hrdBufferSizeHasBeenSet(false),
    m_interlaceMode(Mpeg2InterlaceMode::NOT_SET),
    m_interlaceModeHasBeenSet(false),
    m_intraDcPrecision(Mpeg2IntraDcPrecision::NOT_SET),
    m_intraDcPrecisionHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_minIInterval(0),
    m_minIIntervalHasBeenSet(false),
    m_numberBFramesBetweenReferenceFrames(0),
    m_numberBFramesBetweenReferenceFramesHasBeenSet(false),
    m_parControl(Mpeg2ParControl::NOT_SET),
    m_parControlHasBeenSet(false),
    m_parDenominator(0),
    m_parDenominatorHasBeenSet(false),
    m_parNumerator(0),
    m_parNumeratorHasBeenSet(false),
    m_qualityTuningLevel(Mpeg2QualityTuningLevel::NOT_SET),
    m_qualityTuningLevelHasBeenSet(false),
    m_rateControlMode(Mpeg2RateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_scanTypeConversionMode(Mpeg2ScanTypeConversionMode::NOT_SET),
    m_scanTypeConversionModeHasBeenSet(false),
    m_sceneChangeDetect(Mpeg2SceneChangeDetect::NOT_SET),
    m_sceneChangeDetectHasBeenSet(false),
    m_slowPal(Mpeg2SlowPal::NOT_SET),
    m_slowPalHasBeenSet(false),
    m_softness(0),
    m_softnessHasBeenSet(false),
    m_spatialAdaptiveQuantization(Mpeg2SpatialAdaptiveQuantization::NOT_SET),
    m_spatialAdaptiveQuantizationHasBeenSet(false),
    m_syntax(Mpeg2Syntax::NOT_SET),
    m_syntaxHasBeenSet(false),
    m_telecine(Mpeg2Telecine::NOT_SET),
    m_telecineHasBeenSet(false),
    m_temporalAdaptiveQuantization(Mpeg2TemporalAdaptiveQuantization::NOT_SET),
    m_temporalAdaptiveQuantizationHasBeenSet(false)
{
}

Mpeg2Settings::Mpeg2Settings(JsonView jsonValue) : 
    m_adaptiveQuantization(Mpeg2AdaptiveQuantization::NOT_SET),
    m_adaptiveQuantizationHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_codecLevel(Mpeg2CodecLevel::NOT_SET),
    m_codecLevelHasBeenSet(false),
    m_codecProfile(Mpeg2CodecProfile::NOT_SET),
    m_codecProfileHasBeenSet(false),
    m_dynamicSubGop(Mpeg2DynamicSubGop::NOT_SET),
    m_dynamicSubGopHasBeenSet(false),
    m_framerateControl(Mpeg2FramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateConversionAlgorithm(Mpeg2FramerateConversionAlgorithm::NOT_SET),
    m_framerateConversionAlgorithmHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_gopClosedCadence(0),
    m_gopClosedCadenceHasBeenSet(false),
    m_gopSize(0.0),
    m_gopSizeHasBeenSet(false),
    m_gopSizeUnits(Mpeg2GopSizeUnits::NOT_SET),
    m_gopSizeUnitsHasBeenSet(false),
    m_hrdBufferFinalFillPercentage(0),
    m_hrdBufferFinalFillPercentageHasBeenSet(false),
    m_hrdBufferInitialFillPercentage(0),
    m_hrdBufferInitialFillPercentageHasBeenSet(false),
    m_hrdBufferSize(0),
    m_hrdBufferSizeHasBeenSet(false),
    m_interlaceMode(Mpeg2InterlaceMode::NOT_SET),
    m_interlaceModeHasBeenSet(false),
    m_intraDcPrecision(Mpeg2IntraDcPrecision::NOT_SET),
    m_intraDcPrecisionHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_minIInterval(0),
    m_minIIntervalHasBeenSet(false),
    m_numberBFramesBetweenReferenceFrames(0),
    m_numberBFramesBetweenReferenceFramesHasBeenSet(false),
    m_parControl(Mpeg2ParControl::NOT_SET),
    m_parControlHasBeenSet(false),
    m_parDenominator(0),
    m_parDenominatorHasBeenSet(false),
    m_parNumerator(0),
    m_parNumeratorHasBeenSet(false),
    m_qualityTuningLevel(Mpeg2QualityTuningLevel::NOT_SET),
    m_qualityTuningLevelHasBeenSet(false),
    m_rateControlMode(Mpeg2RateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_scanTypeConversionMode(Mpeg2ScanTypeConversionMode::NOT_SET),
    m_scanTypeConversionModeHasBeenSet(false),
    m_sceneChangeDetect(Mpeg2SceneChangeDetect::NOT_SET),
    m_sceneChangeDetectHasBeenSet(false),
    m_slowPal(Mpeg2SlowPal::NOT_SET),
    m_slowPalHasBeenSet(false),
    m_softness(0),
    m_softnessHasBeenSet(false),
    m_spatialAdaptiveQuantization(Mpeg2SpatialAdaptiveQuantization::NOT_SET),
    m_spatialAdaptiveQuantizationHasBeenSet(false),
    m_syntax(Mpeg2Syntax::NOT_SET),
    m_syntaxHasBeenSet(false),
    m_telecine(Mpeg2Telecine::NOT_SET),
    m_telecineHasBeenSet(false),
    m_temporalAdaptiveQuantization(Mpeg2TemporalAdaptiveQuantization::NOT_SET),
    m_temporalAdaptiveQuantizationHasBeenSet(false)
{
  *this = jsonValue;
}

Mpeg2Settings& Mpeg2Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adaptiveQuantization"))
  {
    m_adaptiveQuantization = Mpeg2AdaptiveQuantizationMapper::GetMpeg2AdaptiveQuantizationForName(jsonValue.GetString("adaptiveQuantization"));

    m_adaptiveQuantizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");

    m_bitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codecLevel"))
  {
    m_codecLevel = Mpeg2CodecLevelMapper::GetMpeg2CodecLevelForName(jsonValue.GetString("codecLevel"));

    m_codecLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codecProfile"))
  {
    m_codecProfile = Mpeg2CodecProfileMapper::GetMpeg2CodecProfileForName(jsonValue.GetString("codecProfile"));

    m_codecProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dynamicSubGop"))
  {
    m_dynamicSubGop = Mpeg2DynamicSubGopMapper::GetMpeg2DynamicSubGopForName(jsonValue.GetString("dynamicSubGop"));

    m_dynamicSubGopHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateControl"))
  {
    m_framerateControl = Mpeg2FramerateControlMapper::GetMpeg2FramerateControlForName(jsonValue.GetString("framerateControl"));

    m_framerateControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateConversionAlgorithm"))
  {
    m_framerateConversionAlgorithm = Mpeg2FramerateConversionAlgorithmMapper::GetMpeg2FramerateConversionAlgorithmForName(jsonValue.GetString("framerateConversionAlgorithm"));

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

  if(jsonValue.ValueExists("gopClosedCadence"))
  {
    m_gopClosedCadence = jsonValue.GetInteger("gopClosedCadence");

    m_gopClosedCadenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gopSize"))
  {
    m_gopSize = jsonValue.GetDouble("gopSize");

    m_gopSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gopSizeUnits"))
  {
    m_gopSizeUnits = Mpeg2GopSizeUnitsMapper::GetMpeg2GopSizeUnitsForName(jsonValue.GetString("gopSizeUnits"));

    m_gopSizeUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hrdBufferFinalFillPercentage"))
  {
    m_hrdBufferFinalFillPercentage = jsonValue.GetInteger("hrdBufferFinalFillPercentage");

    m_hrdBufferFinalFillPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hrdBufferInitialFillPercentage"))
  {
    m_hrdBufferInitialFillPercentage = jsonValue.GetInteger("hrdBufferInitialFillPercentage");

    m_hrdBufferInitialFillPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hrdBufferSize"))
  {
    m_hrdBufferSize = jsonValue.GetInteger("hrdBufferSize");

    m_hrdBufferSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interlaceMode"))
  {
    m_interlaceMode = Mpeg2InterlaceModeMapper::GetMpeg2InterlaceModeForName(jsonValue.GetString("interlaceMode"));

    m_interlaceModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intraDcPrecision"))
  {
    m_intraDcPrecision = Mpeg2IntraDcPrecisionMapper::GetMpeg2IntraDcPrecisionForName(jsonValue.GetString("intraDcPrecision"));

    m_intraDcPrecisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxBitrate"))
  {
    m_maxBitrate = jsonValue.GetInteger("maxBitrate");

    m_maxBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minIInterval"))
  {
    m_minIInterval = jsonValue.GetInteger("minIInterval");

    m_minIIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberBFramesBetweenReferenceFrames"))
  {
    m_numberBFramesBetweenReferenceFrames = jsonValue.GetInteger("numberBFramesBetweenReferenceFrames");

    m_numberBFramesBetweenReferenceFramesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parControl"))
  {
    m_parControl = Mpeg2ParControlMapper::GetMpeg2ParControlForName(jsonValue.GetString("parControl"));

    m_parControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parDenominator"))
  {
    m_parDenominator = jsonValue.GetInteger("parDenominator");

    m_parDenominatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parNumerator"))
  {
    m_parNumerator = jsonValue.GetInteger("parNumerator");

    m_parNumeratorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("qualityTuningLevel"))
  {
    m_qualityTuningLevel = Mpeg2QualityTuningLevelMapper::GetMpeg2QualityTuningLevelForName(jsonValue.GetString("qualityTuningLevel"));

    m_qualityTuningLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rateControlMode"))
  {
    m_rateControlMode = Mpeg2RateControlModeMapper::GetMpeg2RateControlModeForName(jsonValue.GetString("rateControlMode"));

    m_rateControlModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanTypeConversionMode"))
  {
    m_scanTypeConversionMode = Mpeg2ScanTypeConversionModeMapper::GetMpeg2ScanTypeConversionModeForName(jsonValue.GetString("scanTypeConversionMode"));

    m_scanTypeConversionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sceneChangeDetect"))
  {
    m_sceneChangeDetect = Mpeg2SceneChangeDetectMapper::GetMpeg2SceneChangeDetectForName(jsonValue.GetString("sceneChangeDetect"));

    m_sceneChangeDetectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slowPal"))
  {
    m_slowPal = Mpeg2SlowPalMapper::GetMpeg2SlowPalForName(jsonValue.GetString("slowPal"));

    m_slowPalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("softness"))
  {
    m_softness = jsonValue.GetInteger("softness");

    m_softnessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spatialAdaptiveQuantization"))
  {
    m_spatialAdaptiveQuantization = Mpeg2SpatialAdaptiveQuantizationMapper::GetMpeg2SpatialAdaptiveQuantizationForName(jsonValue.GetString("spatialAdaptiveQuantization"));

    m_spatialAdaptiveQuantizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("syntax"))
  {
    m_syntax = Mpeg2SyntaxMapper::GetMpeg2SyntaxForName(jsonValue.GetString("syntax"));

    m_syntaxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("telecine"))
  {
    m_telecine = Mpeg2TelecineMapper::GetMpeg2TelecineForName(jsonValue.GetString("telecine"));

    m_telecineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("temporalAdaptiveQuantization"))
  {
    m_temporalAdaptiveQuantization = Mpeg2TemporalAdaptiveQuantizationMapper::GetMpeg2TemporalAdaptiveQuantizationForName(jsonValue.GetString("temporalAdaptiveQuantization"));

    m_temporalAdaptiveQuantizationHasBeenSet = true;
  }

  return *this;
}

JsonValue Mpeg2Settings::Jsonize() const
{
  JsonValue payload;

  if(m_adaptiveQuantizationHasBeenSet)
  {
   payload.WithString("adaptiveQuantization", Mpeg2AdaptiveQuantizationMapper::GetNameForMpeg2AdaptiveQuantization(m_adaptiveQuantization));
  }

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_codecLevelHasBeenSet)
  {
   payload.WithString("codecLevel", Mpeg2CodecLevelMapper::GetNameForMpeg2CodecLevel(m_codecLevel));
  }

  if(m_codecProfileHasBeenSet)
  {
   payload.WithString("codecProfile", Mpeg2CodecProfileMapper::GetNameForMpeg2CodecProfile(m_codecProfile));
  }

  if(m_dynamicSubGopHasBeenSet)
  {
   payload.WithString("dynamicSubGop", Mpeg2DynamicSubGopMapper::GetNameForMpeg2DynamicSubGop(m_dynamicSubGop));
  }

  if(m_framerateControlHasBeenSet)
  {
   payload.WithString("framerateControl", Mpeg2FramerateControlMapper::GetNameForMpeg2FramerateControl(m_framerateControl));
  }

  if(m_framerateConversionAlgorithmHasBeenSet)
  {
   payload.WithString("framerateConversionAlgorithm", Mpeg2FramerateConversionAlgorithmMapper::GetNameForMpeg2FramerateConversionAlgorithm(m_framerateConversionAlgorithm));
  }

  if(m_framerateDenominatorHasBeenSet)
  {
   payload.WithInteger("framerateDenominator", m_framerateDenominator);

  }

  if(m_framerateNumeratorHasBeenSet)
  {
   payload.WithInteger("framerateNumerator", m_framerateNumerator);

  }

  if(m_gopClosedCadenceHasBeenSet)
  {
   payload.WithInteger("gopClosedCadence", m_gopClosedCadence);

  }

  if(m_gopSizeHasBeenSet)
  {
   payload.WithDouble("gopSize", m_gopSize);

  }

  if(m_gopSizeUnitsHasBeenSet)
  {
   payload.WithString("gopSizeUnits", Mpeg2GopSizeUnitsMapper::GetNameForMpeg2GopSizeUnits(m_gopSizeUnits));
  }

  if(m_hrdBufferFinalFillPercentageHasBeenSet)
  {
   payload.WithInteger("hrdBufferFinalFillPercentage", m_hrdBufferFinalFillPercentage);

  }

  if(m_hrdBufferInitialFillPercentageHasBeenSet)
  {
   payload.WithInteger("hrdBufferInitialFillPercentage", m_hrdBufferInitialFillPercentage);

  }

  if(m_hrdBufferSizeHasBeenSet)
  {
   payload.WithInteger("hrdBufferSize", m_hrdBufferSize);

  }

  if(m_interlaceModeHasBeenSet)
  {
   payload.WithString("interlaceMode", Mpeg2InterlaceModeMapper::GetNameForMpeg2InterlaceMode(m_interlaceMode));
  }

  if(m_intraDcPrecisionHasBeenSet)
  {
   payload.WithString("intraDcPrecision", Mpeg2IntraDcPrecisionMapper::GetNameForMpeg2IntraDcPrecision(m_intraDcPrecision));
  }

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  if(m_minIIntervalHasBeenSet)
  {
   payload.WithInteger("minIInterval", m_minIInterval);

  }

  if(m_numberBFramesBetweenReferenceFramesHasBeenSet)
  {
   payload.WithInteger("numberBFramesBetweenReferenceFrames", m_numberBFramesBetweenReferenceFrames);

  }

  if(m_parControlHasBeenSet)
  {
   payload.WithString("parControl", Mpeg2ParControlMapper::GetNameForMpeg2ParControl(m_parControl));
  }

  if(m_parDenominatorHasBeenSet)
  {
   payload.WithInteger("parDenominator", m_parDenominator);

  }

  if(m_parNumeratorHasBeenSet)
  {
   payload.WithInteger("parNumerator", m_parNumerator);

  }

  if(m_qualityTuningLevelHasBeenSet)
  {
   payload.WithString("qualityTuningLevel", Mpeg2QualityTuningLevelMapper::GetNameForMpeg2QualityTuningLevel(m_qualityTuningLevel));
  }

  if(m_rateControlModeHasBeenSet)
  {
   payload.WithString("rateControlMode", Mpeg2RateControlModeMapper::GetNameForMpeg2RateControlMode(m_rateControlMode));
  }

  if(m_scanTypeConversionModeHasBeenSet)
  {
   payload.WithString("scanTypeConversionMode", Mpeg2ScanTypeConversionModeMapper::GetNameForMpeg2ScanTypeConversionMode(m_scanTypeConversionMode));
  }

  if(m_sceneChangeDetectHasBeenSet)
  {
   payload.WithString("sceneChangeDetect", Mpeg2SceneChangeDetectMapper::GetNameForMpeg2SceneChangeDetect(m_sceneChangeDetect));
  }

  if(m_slowPalHasBeenSet)
  {
   payload.WithString("slowPal", Mpeg2SlowPalMapper::GetNameForMpeg2SlowPal(m_slowPal));
  }

  if(m_softnessHasBeenSet)
  {
   payload.WithInteger("softness", m_softness);

  }

  if(m_spatialAdaptiveQuantizationHasBeenSet)
  {
   payload.WithString("spatialAdaptiveQuantization", Mpeg2SpatialAdaptiveQuantizationMapper::GetNameForMpeg2SpatialAdaptiveQuantization(m_spatialAdaptiveQuantization));
  }

  if(m_syntaxHasBeenSet)
  {
   payload.WithString("syntax", Mpeg2SyntaxMapper::GetNameForMpeg2Syntax(m_syntax));
  }

  if(m_telecineHasBeenSet)
  {
   payload.WithString("telecine", Mpeg2TelecineMapper::GetNameForMpeg2Telecine(m_telecine));
  }

  if(m_temporalAdaptiveQuantizationHasBeenSet)
  {
   payload.WithString("temporalAdaptiveQuantization", Mpeg2TemporalAdaptiveQuantizationMapper::GetNameForMpeg2TemporalAdaptiveQuantization(m_temporalAdaptiveQuantization));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
