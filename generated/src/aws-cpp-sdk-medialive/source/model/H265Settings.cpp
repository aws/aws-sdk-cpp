/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265Settings.h>
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

H265Settings::H265Settings(JsonView jsonValue)
{
  *this = jsonValue;
}

H265Settings& H265Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adaptiveQuantization"))
  {
    m_adaptiveQuantization = H265AdaptiveQuantizationMapper::GetH265AdaptiveQuantizationForName(jsonValue.GetString("adaptiveQuantization"));
    m_adaptiveQuantizationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("afdSignaling"))
  {
    m_afdSignaling = AfdSignalingMapper::GetAfdSignalingForName(jsonValue.GetString("afdSignaling"));
    m_afdSignalingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("alternativeTransferFunction"))
  {
    m_alternativeTransferFunction = H265AlternativeTransferFunctionMapper::GetH265AlternativeTransferFunctionForName(jsonValue.GetString("alternativeTransferFunction"));
    m_alternativeTransferFunctionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");
    m_bitrateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bufSize"))
  {
    m_bufSize = jsonValue.GetInteger("bufSize");
    m_bufSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("colorMetadata"))
  {
    m_colorMetadata = H265ColorMetadataMapper::GetH265ColorMetadataForName(jsonValue.GetString("colorMetadata"));
    m_colorMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("colorSpaceSettings"))
  {
    m_colorSpaceSettings = jsonValue.GetObject("colorSpaceSettings");
    m_colorSpaceSettingsHasBeenSet = true;
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
    m_flickerAq = H265FlickerAqMapper::GetH265FlickerAqForName(jsonValue.GetString("flickerAq"));
    m_flickerAqHasBeenSet = true;
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
    m_gopSizeUnits = H265GopSizeUnitsMapper::GetH265GopSizeUnitsForName(jsonValue.GetString("gopSizeUnits"));
    m_gopSizeUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("level"))
  {
    m_level = H265LevelMapper::GetH265LevelForName(jsonValue.GetString("level"));
    m_levelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lookAheadRateControl"))
  {
    m_lookAheadRateControl = H265LookAheadRateControlMapper::GetH265LookAheadRateControlForName(jsonValue.GetString("lookAheadRateControl"));
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
    m_profile = H265ProfileMapper::GetH265ProfileForName(jsonValue.GetString("profile"));
    m_profileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("qvbrQualityLevel"))
  {
    m_qvbrQualityLevel = jsonValue.GetInteger("qvbrQualityLevel");
    m_qvbrQualityLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rateControlMode"))
  {
    m_rateControlMode = H265RateControlModeMapper::GetH265RateControlModeForName(jsonValue.GetString("rateControlMode"));
    m_rateControlModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanType"))
  {
    m_scanType = H265ScanTypeMapper::GetH265ScanTypeForName(jsonValue.GetString("scanType"));
    m_scanTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sceneChangeDetect"))
  {
    m_sceneChangeDetect = H265SceneChangeDetectMapper::GetH265SceneChangeDetectForName(jsonValue.GetString("sceneChangeDetect"));
    m_sceneChangeDetectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slices"))
  {
    m_slices = jsonValue.GetInteger("slices");
    m_slicesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tier"))
  {
    m_tier = H265TierMapper::GetH265TierForName(jsonValue.GetString("tier"));
    m_tierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timecodeInsertion"))
  {
    m_timecodeInsertion = H265TimecodeInsertionBehaviorMapper::GetH265TimecodeInsertionBehaviorForName(jsonValue.GetString("timecodeInsertion"));
    m_timecodeInsertionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timecodeBurninSettings"))
  {
    m_timecodeBurninSettings = jsonValue.GetObject("timecodeBurninSettings");
    m_timecodeBurninSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mvOverPictureBoundaries"))
  {
    m_mvOverPictureBoundaries = H265MvOverPictureBoundariesMapper::GetH265MvOverPictureBoundariesForName(jsonValue.GetString("mvOverPictureBoundaries"));
    m_mvOverPictureBoundariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mvTemporalPredictor"))
  {
    m_mvTemporalPredictor = H265MvTemporalPredictorMapper::GetH265MvTemporalPredictorForName(jsonValue.GetString("mvTemporalPredictor"));
    m_mvTemporalPredictorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tileHeight"))
  {
    m_tileHeight = jsonValue.GetInteger("tileHeight");
    m_tileHeightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tilePadding"))
  {
    m_tilePadding = H265TilePaddingMapper::GetH265TilePaddingForName(jsonValue.GetString("tilePadding"));
    m_tilePaddingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tileWidth"))
  {
    m_tileWidth = jsonValue.GetInteger("tileWidth");
    m_tileWidthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("treeblockSize"))
  {
    m_treeblockSize = H265TreeblockSizeMapper::GetH265TreeblockSizeForName(jsonValue.GetString("treeblockSize"));
    m_treeblockSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minQp"))
  {
    m_minQp = jsonValue.GetInteger("minQp");
    m_minQpHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deblocking"))
  {
    m_deblocking = H265DeblockingMapper::GetH265DeblockingForName(jsonValue.GetString("deblocking"));
    m_deblockingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gopBReference"))
  {
    m_gopBReference = H265GopBReferenceMapper::GetH265GopBReferenceForName(jsonValue.GetString("gopBReference"));
    m_gopBReferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gopNumBFrames"))
  {
    m_gopNumBFrames = jsonValue.GetInteger("gopNumBFrames");
    m_gopNumBFramesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minBitrate"))
  {
    m_minBitrate = jsonValue.GetInteger("minBitrate");
    m_minBitrateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subgopLength"))
  {
    m_subgopLength = H265SubGopLengthMapper::GetH265SubGopLengthForName(jsonValue.GetString("subgopLength"));
    m_subgopLengthHasBeenSet = true;
  }
  return *this;
}

JsonValue H265Settings::Jsonize() const
{
  JsonValue payload;

  if(m_adaptiveQuantizationHasBeenSet)
  {
   payload.WithString("adaptiveQuantization", H265AdaptiveQuantizationMapper::GetNameForH265AdaptiveQuantization(m_adaptiveQuantization));
  }

  if(m_afdSignalingHasBeenSet)
  {
   payload.WithString("afdSignaling", AfdSignalingMapper::GetNameForAfdSignaling(m_afdSignaling));
  }

  if(m_alternativeTransferFunctionHasBeenSet)
  {
   payload.WithString("alternativeTransferFunction", H265AlternativeTransferFunctionMapper::GetNameForH265AlternativeTransferFunction(m_alternativeTransferFunction));
  }

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_bufSizeHasBeenSet)
  {
   payload.WithInteger("bufSize", m_bufSize);

  }

  if(m_colorMetadataHasBeenSet)
  {
   payload.WithString("colorMetadata", H265ColorMetadataMapper::GetNameForH265ColorMetadata(m_colorMetadata));
  }

  if(m_colorSpaceSettingsHasBeenSet)
  {
   payload.WithObject("colorSpaceSettings", m_colorSpaceSettings.Jsonize());

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
   payload.WithString("flickerAq", H265FlickerAqMapper::GetNameForH265FlickerAq(m_flickerAq));
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
   payload.WithString("gopSizeUnits", H265GopSizeUnitsMapper::GetNameForH265GopSizeUnits(m_gopSizeUnits));
  }

  if(m_levelHasBeenSet)
  {
   payload.WithString("level", H265LevelMapper::GetNameForH265Level(m_level));
  }

  if(m_lookAheadRateControlHasBeenSet)
  {
   payload.WithString("lookAheadRateControl", H265LookAheadRateControlMapper::GetNameForH265LookAheadRateControl(m_lookAheadRateControl));
  }

  if(m_maxBitrateHasBeenSet)
  {
   payload.WithInteger("maxBitrate", m_maxBitrate);

  }

  if(m_minIIntervalHasBeenSet)
  {
   payload.WithInteger("minIInterval", m_minIInterval);

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
   payload.WithString("profile", H265ProfileMapper::GetNameForH265Profile(m_profile));
  }

  if(m_qvbrQualityLevelHasBeenSet)
  {
   payload.WithInteger("qvbrQualityLevel", m_qvbrQualityLevel);

  }

  if(m_rateControlModeHasBeenSet)
  {
   payload.WithString("rateControlMode", H265RateControlModeMapper::GetNameForH265RateControlMode(m_rateControlMode));
  }

  if(m_scanTypeHasBeenSet)
  {
   payload.WithString("scanType", H265ScanTypeMapper::GetNameForH265ScanType(m_scanType));
  }

  if(m_sceneChangeDetectHasBeenSet)
  {
   payload.WithString("sceneChangeDetect", H265SceneChangeDetectMapper::GetNameForH265SceneChangeDetect(m_sceneChangeDetect));
  }

  if(m_slicesHasBeenSet)
  {
   payload.WithInteger("slices", m_slices);

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("tier", H265TierMapper::GetNameForH265Tier(m_tier));
  }

  if(m_timecodeInsertionHasBeenSet)
  {
   payload.WithString("timecodeInsertion", H265TimecodeInsertionBehaviorMapper::GetNameForH265TimecodeInsertionBehavior(m_timecodeInsertion));
  }

  if(m_timecodeBurninSettingsHasBeenSet)
  {
   payload.WithObject("timecodeBurninSettings", m_timecodeBurninSettings.Jsonize());

  }

  if(m_mvOverPictureBoundariesHasBeenSet)
  {
   payload.WithString("mvOverPictureBoundaries", H265MvOverPictureBoundariesMapper::GetNameForH265MvOverPictureBoundaries(m_mvOverPictureBoundaries));
  }

  if(m_mvTemporalPredictorHasBeenSet)
  {
   payload.WithString("mvTemporalPredictor", H265MvTemporalPredictorMapper::GetNameForH265MvTemporalPredictor(m_mvTemporalPredictor));
  }

  if(m_tileHeightHasBeenSet)
  {
   payload.WithInteger("tileHeight", m_tileHeight);

  }

  if(m_tilePaddingHasBeenSet)
  {
   payload.WithString("tilePadding", H265TilePaddingMapper::GetNameForH265TilePadding(m_tilePadding));
  }

  if(m_tileWidthHasBeenSet)
  {
   payload.WithInteger("tileWidth", m_tileWidth);

  }

  if(m_treeblockSizeHasBeenSet)
  {
   payload.WithString("treeblockSize", H265TreeblockSizeMapper::GetNameForH265TreeblockSize(m_treeblockSize));
  }

  if(m_minQpHasBeenSet)
  {
   payload.WithInteger("minQp", m_minQp);

  }

  if(m_deblockingHasBeenSet)
  {
   payload.WithString("deblocking", H265DeblockingMapper::GetNameForH265Deblocking(m_deblocking));
  }

  if(m_gopBReferenceHasBeenSet)
  {
   payload.WithString("gopBReference", H265GopBReferenceMapper::GetNameForH265GopBReference(m_gopBReference));
  }

  if(m_gopNumBFramesHasBeenSet)
  {
   payload.WithInteger("gopNumBFrames", m_gopNumBFrames);

  }

  if(m_minBitrateHasBeenSet)
  {
   payload.WithInteger("minBitrate", m_minBitrate);

  }

  if(m_subgopLengthHasBeenSet)
  {
   payload.WithString("subgopLength", H265SubGopLengthMapper::GetNameForH265SubGopLength(m_subgopLength));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
