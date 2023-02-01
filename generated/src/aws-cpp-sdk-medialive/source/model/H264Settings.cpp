/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H264Settings.h>
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

H264Settings::H264Settings() : 
    m_adaptiveQuantization(H264AdaptiveQuantization::NOT_SET),
    m_adaptiveQuantizationHasBeenSet(false),
    m_afdSignaling(AfdSignaling::NOT_SET),
    m_afdSignalingHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_bufFillPct(0),
    m_bufFillPctHasBeenSet(false),
    m_bufSize(0),
    m_bufSizeHasBeenSet(false),
    m_colorMetadata(H264ColorMetadata::NOT_SET),
    m_colorMetadataHasBeenSet(false),
    m_colorSpaceSettingsHasBeenSet(false),
    m_entropyEncoding(H264EntropyEncoding::NOT_SET),
    m_entropyEncodingHasBeenSet(false),
    m_filterSettingsHasBeenSet(false),
    m_fixedAfd(FixedAfd::NOT_SET),
    m_fixedAfdHasBeenSet(false),
    m_flickerAq(H264FlickerAq::NOT_SET),
    m_flickerAqHasBeenSet(false),
    m_forceFieldPictures(H264ForceFieldPictures::NOT_SET),
    m_forceFieldPicturesHasBeenSet(false),
    m_framerateControl(H264FramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_gopBReference(H264GopBReference::NOT_SET),
    m_gopBReferenceHasBeenSet(false),
    m_gopClosedCadence(0),
    m_gopClosedCadenceHasBeenSet(false),
    m_gopNumBFrames(0),
    m_gopNumBFramesHasBeenSet(false),
    m_gopSize(0.0),
    m_gopSizeHasBeenSet(false),
    m_gopSizeUnits(H264GopSizeUnits::NOT_SET),
    m_gopSizeUnitsHasBeenSet(false),
    m_level(H264Level::NOT_SET),
    m_levelHasBeenSet(false),
    m_lookAheadRateControl(H264LookAheadRateControl::NOT_SET),
    m_lookAheadRateControlHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_minIInterval(0),
    m_minIIntervalHasBeenSet(false),
    m_numRefFrames(0),
    m_numRefFramesHasBeenSet(false),
    m_parControl(H264ParControl::NOT_SET),
    m_parControlHasBeenSet(false),
    m_parDenominator(0),
    m_parDenominatorHasBeenSet(false),
    m_parNumerator(0),
    m_parNumeratorHasBeenSet(false),
    m_profile(H264Profile::NOT_SET),
    m_profileHasBeenSet(false),
    m_qualityLevel(H264QualityLevel::NOT_SET),
    m_qualityLevelHasBeenSet(false),
    m_qvbrQualityLevel(0),
    m_qvbrQualityLevelHasBeenSet(false),
    m_rateControlMode(H264RateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_scanType(H264ScanType::NOT_SET),
    m_scanTypeHasBeenSet(false),
    m_sceneChangeDetect(H264SceneChangeDetect::NOT_SET),
    m_sceneChangeDetectHasBeenSet(false),
    m_slices(0),
    m_slicesHasBeenSet(false),
    m_softness(0),
    m_softnessHasBeenSet(false),
    m_spatialAq(H264SpatialAq::NOT_SET),
    m_spatialAqHasBeenSet(false),
    m_subgopLength(H264SubGopLength::NOT_SET),
    m_subgopLengthHasBeenSet(false),
    m_syntax(H264Syntax::NOT_SET),
    m_syntaxHasBeenSet(false),
    m_temporalAq(H264TemporalAq::NOT_SET),
    m_temporalAqHasBeenSet(false),
    m_timecodeInsertion(H264TimecodeInsertionBehavior::NOT_SET),
    m_timecodeInsertionHasBeenSet(false),
    m_timecodeBurninSettingsHasBeenSet(false)
{
}

H264Settings::H264Settings(JsonView jsonValue) : 
    m_adaptiveQuantization(H264AdaptiveQuantization::NOT_SET),
    m_adaptiveQuantizationHasBeenSet(false),
    m_afdSignaling(AfdSignaling::NOT_SET),
    m_afdSignalingHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_bufFillPct(0),
    m_bufFillPctHasBeenSet(false),
    m_bufSize(0),
    m_bufSizeHasBeenSet(false),
    m_colorMetadata(H264ColorMetadata::NOT_SET),
    m_colorMetadataHasBeenSet(false),
    m_colorSpaceSettingsHasBeenSet(false),
    m_entropyEncoding(H264EntropyEncoding::NOT_SET),
    m_entropyEncodingHasBeenSet(false),
    m_filterSettingsHasBeenSet(false),
    m_fixedAfd(FixedAfd::NOT_SET),
    m_fixedAfdHasBeenSet(false),
    m_flickerAq(H264FlickerAq::NOT_SET),
    m_flickerAqHasBeenSet(false),
    m_forceFieldPictures(H264ForceFieldPictures::NOT_SET),
    m_forceFieldPicturesHasBeenSet(false),
    m_framerateControl(H264FramerateControl::NOT_SET),
    m_framerateControlHasBeenSet(false),
    m_framerateDenominator(0),
    m_framerateDenominatorHasBeenSet(false),
    m_framerateNumerator(0),
    m_framerateNumeratorHasBeenSet(false),
    m_gopBReference(H264GopBReference::NOT_SET),
    m_gopBReferenceHasBeenSet(false),
    m_gopClosedCadence(0),
    m_gopClosedCadenceHasBeenSet(false),
    m_gopNumBFrames(0),
    m_gopNumBFramesHasBeenSet(false),
    m_gopSize(0.0),
    m_gopSizeHasBeenSet(false),
    m_gopSizeUnits(H264GopSizeUnits::NOT_SET),
    m_gopSizeUnitsHasBeenSet(false),
    m_level(H264Level::NOT_SET),
    m_levelHasBeenSet(false),
    m_lookAheadRateControl(H264LookAheadRateControl::NOT_SET),
    m_lookAheadRateControlHasBeenSet(false),
    m_maxBitrate(0),
    m_maxBitrateHasBeenSet(false),
    m_minIInterval(0),
    m_minIIntervalHasBeenSet(false),
    m_numRefFrames(0),
    m_numRefFramesHasBeenSet(false),
    m_parControl(H264ParControl::NOT_SET),
    m_parControlHasBeenSet(false),
    m_parDenominator(0),
    m_parDenominatorHasBeenSet(false),
    m_parNumerator(0),
    m_parNumeratorHasBeenSet(false),
    m_profile(H264Profile::NOT_SET),
    m_profileHasBeenSet(false),
    m_qualityLevel(H264QualityLevel::NOT_SET),
    m_qualityLevelHasBeenSet(false),
    m_qvbrQualityLevel(0),
    m_qvbrQualityLevelHasBeenSet(false),
    m_rateControlMode(H264RateControlMode::NOT_SET),
    m_rateControlModeHasBeenSet(false),
    m_scanType(H264ScanType::NOT_SET),
    m_scanTypeHasBeenSet(false),
    m_sceneChangeDetect(H264SceneChangeDetect::NOT_SET),
    m_sceneChangeDetectHasBeenSet(false),
    m_slices(0),
    m_slicesHasBeenSet(false),
    m_softness(0),
    m_softnessHasBeenSet(false),
    m_spatialAq(H264SpatialAq::NOT_SET),
    m_spatialAqHasBeenSet(false),
    m_subgopLength(H264SubGopLength::NOT_SET),
    m_subgopLengthHasBeenSet(false),
    m_syntax(H264Syntax::NOT_SET),
    m_syntaxHasBeenSet(false),
    m_temporalAq(H264TemporalAq::NOT_SET),
    m_temporalAqHasBeenSet(false),
    m_timecodeInsertion(H264TimecodeInsertionBehavior::NOT_SET),
    m_timecodeInsertionHasBeenSet(false),
    m_timecodeBurninSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

H264Settings& H264Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adaptiveQuantization"))
  {
    m_adaptiveQuantization = H264AdaptiveQuantizationMapper::GetH264AdaptiveQuantizationForName(jsonValue.GetString("adaptiveQuantization"));

    m_adaptiveQuantizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("afdSignaling"))
  {
    m_afdSignaling = AfdSignalingMapper::GetAfdSignalingForName(jsonValue.GetString("afdSignaling"));

    m_afdSignalingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");

    m_bitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bufFillPct"))
  {
    m_bufFillPct = jsonValue.GetInteger("bufFillPct");

    m_bufFillPctHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bufSize"))
  {
    m_bufSize = jsonValue.GetInteger("bufSize");

    m_bufSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("colorMetadata"))
  {
    m_colorMetadata = H264ColorMetadataMapper::GetH264ColorMetadataForName(jsonValue.GetString("colorMetadata"));

    m_colorMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("colorSpaceSettings"))
  {
    m_colorSpaceSettings = jsonValue.GetObject("colorSpaceSettings");

    m_colorSpaceSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entropyEncoding"))
  {
    m_entropyEncoding = H264EntropyEncodingMapper::GetH264EntropyEncodingForName(jsonValue.GetString("entropyEncoding"));

    m_entropyEncodingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterSettings"))
  {
    m_filterSettings = jsonValue.GetObject("filterSettings");

    m_filterSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fixedAfd"))
  {
    m_fixedAfd = FixedAfdMapper::GetFixedAfdForName(jsonValue.GetString("fixedAfd"));

    m_fixedAfdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("flickerAq"))
  {
    m_flickerAq = H264FlickerAqMapper::GetH264FlickerAqForName(jsonValue.GetString("flickerAq"));

    m_flickerAqHasBeenSet = true;
  }

  if(jsonValue.ValueExists("forceFieldPictures"))
  {
    m_forceFieldPictures = H264ForceFieldPicturesMapper::GetH264ForceFieldPicturesForName(jsonValue.GetString("forceFieldPictures"));

    m_forceFieldPicturesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framerateControl"))
  {
    m_framerateControl = H264FramerateControlMapper::GetH264FramerateControlForName(jsonValue.GetString("framerateControl"));

    m_framerateControlHasBeenSet = true;
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

  if(jsonValue.ValueExists("gopBReference"))
  {
    m_gopBReference = H264GopBReferenceMapper::GetH264GopBReferenceForName(jsonValue.GetString("gopBReference"));

    m_gopBReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gopClosedCadence"))
  {
    m_gopClosedCadence = jsonValue.GetInteger("gopClosedCadence");

    m_gopClosedCadenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gopNumBFrames"))
  {
    m_gopNumBFrames = jsonValue.GetInteger("gopNumBFrames");

    m_gopNumBFramesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gopSize"))
  {
    m_gopSize = jsonValue.GetDouble("gopSize");

    m_gopSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gopSizeUnits"))
  {
    m_gopSizeUnits = H264GopSizeUnitsMapper::GetH264GopSizeUnitsForName(jsonValue.GetString("gopSizeUnits"));

    m_gopSizeUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("level"))
  {
    m_level = H264LevelMapper::GetH264LevelForName(jsonValue.GetString("level"));

    m_levelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lookAheadRateControl"))
  {
    m_lookAheadRateControl = H264LookAheadRateControlMapper::GetH264LookAheadRateControlForName(jsonValue.GetString("lookAheadRateControl"));

    m_lookAheadRateControlHasBeenSet = true;
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

  if(jsonValue.ValueExists("numRefFrames"))
  {
    m_numRefFrames = jsonValue.GetInteger("numRefFrames");

    m_numRefFramesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parControl"))
  {
    m_parControl = H264ParControlMapper::GetH264ParControlForName(jsonValue.GetString("parControl"));

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

  if(jsonValue.ValueExists("profile"))
  {
    m_profile = H264ProfileMapper::GetH264ProfileForName(jsonValue.GetString("profile"));

    m_profileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("qualityLevel"))
  {
    m_qualityLevel = H264QualityLevelMapper::GetH264QualityLevelForName(jsonValue.GetString("qualityLevel"));

    m_qualityLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("qvbrQualityLevel"))
  {
    m_qvbrQualityLevel = jsonValue.GetInteger("qvbrQualityLevel");

    m_qvbrQualityLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rateControlMode"))
  {
    m_rateControlMode = H264RateControlModeMapper::GetH264RateControlModeForName(jsonValue.GetString("rateControlMode"));

    m_rateControlModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanType"))
  {
    m_scanType = H264ScanTypeMapper::GetH264ScanTypeForName(jsonValue.GetString("scanType"));

    m_scanTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sceneChangeDetect"))
  {
    m_sceneChangeDetect = H264SceneChangeDetectMapper::GetH264SceneChangeDetectForName(jsonValue.GetString("sceneChangeDetect"));

    m_sceneChangeDetectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slices"))
  {
    m_slices = jsonValue.GetInteger("slices");

    m_slicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("softness"))
  {
    m_softness = jsonValue.GetInteger("softness");

    m_softnessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spatialAq"))
  {
    m_spatialAq = H264SpatialAqMapper::GetH264SpatialAqForName(jsonValue.GetString("spatialAq"));

    m_spatialAqHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subgopLength"))
  {
    m_subgopLength = H264SubGopLengthMapper::GetH264SubGopLengthForName(jsonValue.GetString("subgopLength"));

    m_subgopLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("syntax"))
  {
    m_syntax = H264SyntaxMapper::GetH264SyntaxForName(jsonValue.GetString("syntax"));

    m_syntaxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("temporalAq"))
  {
    m_temporalAq = H264TemporalAqMapper::GetH264TemporalAqForName(jsonValue.GetString("temporalAq"));

    m_temporalAqHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecodeInsertion"))
  {
    m_timecodeInsertion = H264TimecodeInsertionBehaviorMapper::GetH264TimecodeInsertionBehaviorForName(jsonValue.GetString("timecodeInsertion"));

    m_timecodeInsertionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecodeBurninSettings"))
  {
    m_timecodeBurninSettings = jsonValue.GetObject("timecodeBurninSettings");

    m_timecodeBurninSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue H264Settings::Jsonize() const
{
  JsonValue payload;

  if(m_adaptiveQuantizationHasBeenSet)
  {
   payload.WithString("adaptiveQuantization", H264AdaptiveQuantizationMapper::GetNameForH264AdaptiveQuantization(m_adaptiveQuantization));
  }

  if(m_afdSignalingHasBeenSet)
  {
   payload.WithString("afdSignaling", AfdSignalingMapper::GetNameForAfdSignaling(m_afdSignaling));
  }

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_bufFillPctHasBeenSet)
  {
   payload.WithInteger("bufFillPct", m_bufFillPct);

  }

  if(m_bufSizeHasBeenSet)
  {
   payload.WithInteger("bufSize", m_bufSize);

  }

  if(m_colorMetadataHasBeenSet)
  {
   payload.WithString("colorMetadata", H264ColorMetadataMapper::GetNameForH264ColorMetadata(m_colorMetadata));
  }

  if(m_colorSpaceSettingsHasBeenSet)
  {
   payload.WithObject("colorSpaceSettings", m_colorSpaceSettings.Jsonize());

  }

  if(m_entropyEncodingHasBeenSet)
  {
   payload.WithString("entropyEncoding", H264EntropyEncodingMapper::GetNameForH264EntropyEncoding(m_entropyEncoding));
  }

  if(m_filterSettingsHasBeenSet)
  {
   payload.WithObject("filterSettings", m_filterSettings.Jsonize());

  }

  if(m_fixedAfdHasBeenSet)
  {
   payload.WithString("fixedAfd", FixedAfdMapper::GetNameForFixedAfd(m_fixedAfd));
  }

  if(m_flickerAqHasBeenSet)
  {
   payload.WithString("flickerAq", H264FlickerAqMapper::GetNameForH264FlickerAq(m_flickerAq));
  }

  if(m_forceFieldPicturesHasBeenSet)
  {
   payload.WithString("forceFieldPictures", H264ForceFieldPicturesMapper::GetNameForH264ForceFieldPictures(m_forceFieldPictures));
  }

  if(m_framerateControlHasBeenSet)
  {
   payload.WithString("framerateControl", H264FramerateControlMapper::GetNameForH264FramerateControl(m_framerateControl));
  }

  if(m_framerateDenominatorHasBeenSet)
  {
   payload.WithInteger("framerateDenominator", m_framerateDenominator);

  }

  if(m_framerateNumeratorHasBeenSet)
  {
   payload.WithInteger("framerateNumerator", m_framerateNumerator);

  }

  if(m_gopBReferenceHasBeenSet)
  {
   payload.WithString("gopBReference", H264GopBReferenceMapper::GetNameForH264GopBReference(m_gopBReference));
  }

  if(m_gopClosedCadenceHasBeenSet)
  {
   payload.WithInteger("gopClosedCadence", m_gopClosedCadence);

  }

  if(m_gopNumBFramesHasBeenSet)
  {
   payload.WithInteger("gopNumBFrames", m_gopNumBFrames);

  }

  if(m_gopSizeHasBeenSet)
  {
   payload.WithDouble("gopSize", m_gopSize);

  }

  if(m_gopSizeUnitsHasBeenSet)
  {
   payload.WithString("gopSizeUnits", H264GopSizeUnitsMapper::GetNameForH264GopSizeUnits(m_gopSizeUnits));
  }

  if(m_levelHasBeenSet)
  {
   payload.WithString("level", H264LevelMapper::GetNameForH264Level(m_level));
  }

  if(m_lookAheadRateControlHasBeenSet)
  {
   payload.WithString("lookAheadRateControl", H264LookAheadRateControlMapper::GetNameForH264LookAheadRateControl(m_lookAheadRateControl));
  }

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  if(m_minIIntervalHasBeenSet)
  {
   payload.WithInteger("minIInterval", m_minIInterval);

  }

  if(m_numRefFramesHasBeenSet)
  {
   payload.WithInteger("numRefFrames", m_numRefFrames);

  }

  if(m_parControlHasBeenSet)
  {
   payload.WithString("parControl", H264ParControlMapper::GetNameForH264ParControl(m_parControl));
  }

  if(m_parDenominatorHasBeenSet)
  {
   payload.WithInteger("parDenominator", m_parDenominator);

  }

  if(m_parNumeratorHasBeenSet)
  {
   payload.WithInteger("parNumerator", m_parNumerator);

  }

  if(m_profileHasBeenSet)
  {
   payload.WithString("profile", H264ProfileMapper::GetNameForH264Profile(m_profile));
  }

  if(m_qualityLevelHasBeenSet)
  {
   payload.WithString("qualityLevel", H264QualityLevelMapper::GetNameForH264QualityLevel(m_qualityLevel));
  }

  if(m_qvbrQualityLevelHasBeenSet)
  {
   payload.WithInteger("qvbrQualityLevel", m_qvbrQualityLevel);

  }

  if(m_rateControlModeHasBeenSet)
  {
   payload.WithString("rateControlMode", H264RateControlModeMapper::GetNameForH264RateControlMode(m_rateControlMode));
  }

  if(m_scanTypeHasBeenSet)
  {
   payload.WithString("scanType", H264ScanTypeMapper::GetNameForH264ScanType(m_scanType));
  }

  if(m_sceneChangeDetectHasBeenSet)
  {
   payload.WithString("sceneChangeDetect", H264SceneChangeDetectMapper::GetNameForH264SceneChangeDetect(m_sceneChangeDetect));
  }

  if(m_slicesHasBeenSet)
  {
   payload.WithInteger("slices", m_slices);

  }

  if(m_softnessHasBeenSet)
  {
   payload.WithInteger("softness", m_softness);

  }

  if(m_spatialAqHasBeenSet)
  {
   payload.WithString("spatialAq", H264SpatialAqMapper::GetNameForH264SpatialAq(m_spatialAq));
  }

  if(m_subgopLengthHasBeenSet)
  {
   payload.WithString("subgopLength", H264SubGopLengthMapper::GetNameForH264SubGopLength(m_subgopLength));
  }

  if(m_syntaxHasBeenSet)
  {
   payload.WithString("syntax", H264SyntaxMapper::GetNameForH264Syntax(m_syntax));
  }

  if(m_temporalAqHasBeenSet)
  {
   payload.WithString("temporalAq", H264TemporalAqMapper::GetNameForH264TemporalAq(m_temporalAq));
  }

  if(m_timecodeInsertionHasBeenSet)
  {
   payload.WithString("timecodeInsertion", H264TimecodeInsertionBehaviorMapper::GetNameForH264TimecodeInsertionBehavior(m_timecodeInsertion));
  }

  if(m_timecodeBurninSettingsHasBeenSet)
  {
   payload.WithObject("timecodeBurninSettings", m_timecodeBurninSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
