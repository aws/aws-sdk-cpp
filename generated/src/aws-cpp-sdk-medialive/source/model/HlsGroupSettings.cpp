/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsGroupSettings.h>
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

HlsGroupSettings::HlsGroupSettings() : 
    m_adMarkersHasBeenSet(false),
    m_baseUrlContentHasBeenSet(false),
    m_baseUrlContent1HasBeenSet(false),
    m_baseUrlManifestHasBeenSet(false),
    m_baseUrlManifest1HasBeenSet(false),
    m_captionLanguageMappingsHasBeenSet(false),
    m_captionLanguageSetting(HlsCaptionLanguageSetting::NOT_SET),
    m_captionLanguageSettingHasBeenSet(false),
    m_clientCache(HlsClientCache::NOT_SET),
    m_clientCacheHasBeenSet(false),
    m_codecSpecification(HlsCodecSpecification::NOT_SET),
    m_codecSpecificationHasBeenSet(false),
    m_constantIvHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_directoryStructure(HlsDirectoryStructure::NOT_SET),
    m_directoryStructureHasBeenSet(false),
    m_discontinuityTags(HlsDiscontinuityTags::NOT_SET),
    m_discontinuityTagsHasBeenSet(false),
    m_encryptionType(HlsEncryptionType::NOT_SET),
    m_encryptionTypeHasBeenSet(false),
    m_hlsCdnSettingsHasBeenSet(false),
    m_hlsId3SegmentTagging(HlsId3SegmentTaggingState::NOT_SET),
    m_hlsId3SegmentTaggingHasBeenSet(false),
    m_iFrameOnlyPlaylists(IFrameOnlyPlaylistType::NOT_SET),
    m_iFrameOnlyPlaylistsHasBeenSet(false),
    m_incompleteSegmentBehavior(HlsIncompleteSegmentBehavior::NOT_SET),
    m_incompleteSegmentBehaviorHasBeenSet(false),
    m_indexNSegments(0),
    m_indexNSegmentsHasBeenSet(false),
    m_inputLossAction(InputLossActionForHlsOut::NOT_SET),
    m_inputLossActionHasBeenSet(false),
    m_ivInManifest(HlsIvInManifest::NOT_SET),
    m_ivInManifestHasBeenSet(false),
    m_ivSource(HlsIvSource::NOT_SET),
    m_ivSourceHasBeenSet(false),
    m_keepSegments(0),
    m_keepSegmentsHasBeenSet(false),
    m_keyFormatHasBeenSet(false),
    m_keyFormatVersionsHasBeenSet(false),
    m_keyProviderSettingsHasBeenSet(false),
    m_manifestCompression(HlsManifestCompression::NOT_SET),
    m_manifestCompressionHasBeenSet(false),
    m_manifestDurationFormat(HlsManifestDurationFormat::NOT_SET),
    m_manifestDurationFormatHasBeenSet(false),
    m_minSegmentLength(0),
    m_minSegmentLengthHasBeenSet(false),
    m_mode(HlsMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_outputSelection(HlsOutputSelection::NOT_SET),
    m_outputSelectionHasBeenSet(false),
    m_programDateTime(HlsProgramDateTime::NOT_SET),
    m_programDateTimeHasBeenSet(false),
    m_programDateTimeClock(HlsProgramDateTimeClock::NOT_SET),
    m_programDateTimeClockHasBeenSet(false),
    m_programDateTimePeriod(0),
    m_programDateTimePeriodHasBeenSet(false),
    m_redundantManifest(HlsRedundantManifest::NOT_SET),
    m_redundantManifestHasBeenSet(false),
    m_segmentLength(0),
    m_segmentLengthHasBeenSet(false),
    m_segmentationMode(HlsSegmentationMode::NOT_SET),
    m_segmentationModeHasBeenSet(false),
    m_segmentsPerSubdirectory(0),
    m_segmentsPerSubdirectoryHasBeenSet(false),
    m_streamInfResolution(HlsStreamInfResolution::NOT_SET),
    m_streamInfResolutionHasBeenSet(false),
    m_timedMetadataId3Frame(HlsTimedMetadataId3Frame::NOT_SET),
    m_timedMetadataId3FrameHasBeenSet(false),
    m_timedMetadataId3Period(0),
    m_timedMetadataId3PeriodHasBeenSet(false),
    m_timestampDeltaMilliseconds(0),
    m_timestampDeltaMillisecondsHasBeenSet(false),
    m_tsFileMode(HlsTsFileMode::NOT_SET),
    m_tsFileModeHasBeenSet(false)
{
}

HlsGroupSettings::HlsGroupSettings(JsonView jsonValue) : 
    m_adMarkersHasBeenSet(false),
    m_baseUrlContentHasBeenSet(false),
    m_baseUrlContent1HasBeenSet(false),
    m_baseUrlManifestHasBeenSet(false),
    m_baseUrlManifest1HasBeenSet(false),
    m_captionLanguageMappingsHasBeenSet(false),
    m_captionLanguageSetting(HlsCaptionLanguageSetting::NOT_SET),
    m_captionLanguageSettingHasBeenSet(false),
    m_clientCache(HlsClientCache::NOT_SET),
    m_clientCacheHasBeenSet(false),
    m_codecSpecification(HlsCodecSpecification::NOT_SET),
    m_codecSpecificationHasBeenSet(false),
    m_constantIvHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_directoryStructure(HlsDirectoryStructure::NOT_SET),
    m_directoryStructureHasBeenSet(false),
    m_discontinuityTags(HlsDiscontinuityTags::NOT_SET),
    m_discontinuityTagsHasBeenSet(false),
    m_encryptionType(HlsEncryptionType::NOT_SET),
    m_encryptionTypeHasBeenSet(false),
    m_hlsCdnSettingsHasBeenSet(false),
    m_hlsId3SegmentTagging(HlsId3SegmentTaggingState::NOT_SET),
    m_hlsId3SegmentTaggingHasBeenSet(false),
    m_iFrameOnlyPlaylists(IFrameOnlyPlaylistType::NOT_SET),
    m_iFrameOnlyPlaylistsHasBeenSet(false),
    m_incompleteSegmentBehavior(HlsIncompleteSegmentBehavior::NOT_SET),
    m_incompleteSegmentBehaviorHasBeenSet(false),
    m_indexNSegments(0),
    m_indexNSegmentsHasBeenSet(false),
    m_inputLossAction(InputLossActionForHlsOut::NOT_SET),
    m_inputLossActionHasBeenSet(false),
    m_ivInManifest(HlsIvInManifest::NOT_SET),
    m_ivInManifestHasBeenSet(false),
    m_ivSource(HlsIvSource::NOT_SET),
    m_ivSourceHasBeenSet(false),
    m_keepSegments(0),
    m_keepSegmentsHasBeenSet(false),
    m_keyFormatHasBeenSet(false),
    m_keyFormatVersionsHasBeenSet(false),
    m_keyProviderSettingsHasBeenSet(false),
    m_manifestCompression(HlsManifestCompression::NOT_SET),
    m_manifestCompressionHasBeenSet(false),
    m_manifestDurationFormat(HlsManifestDurationFormat::NOT_SET),
    m_manifestDurationFormatHasBeenSet(false),
    m_minSegmentLength(0),
    m_minSegmentLengthHasBeenSet(false),
    m_mode(HlsMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_outputSelection(HlsOutputSelection::NOT_SET),
    m_outputSelectionHasBeenSet(false),
    m_programDateTime(HlsProgramDateTime::NOT_SET),
    m_programDateTimeHasBeenSet(false),
    m_programDateTimeClock(HlsProgramDateTimeClock::NOT_SET),
    m_programDateTimeClockHasBeenSet(false),
    m_programDateTimePeriod(0),
    m_programDateTimePeriodHasBeenSet(false),
    m_redundantManifest(HlsRedundantManifest::NOT_SET),
    m_redundantManifestHasBeenSet(false),
    m_segmentLength(0),
    m_segmentLengthHasBeenSet(false),
    m_segmentationMode(HlsSegmentationMode::NOT_SET),
    m_segmentationModeHasBeenSet(false),
    m_segmentsPerSubdirectory(0),
    m_segmentsPerSubdirectoryHasBeenSet(false),
    m_streamInfResolution(HlsStreamInfResolution::NOT_SET),
    m_streamInfResolutionHasBeenSet(false),
    m_timedMetadataId3Frame(HlsTimedMetadataId3Frame::NOT_SET),
    m_timedMetadataId3FrameHasBeenSet(false),
    m_timedMetadataId3Period(0),
    m_timedMetadataId3PeriodHasBeenSet(false),
    m_timestampDeltaMilliseconds(0),
    m_timestampDeltaMillisecondsHasBeenSet(false),
    m_tsFileMode(HlsTsFileMode::NOT_SET),
    m_tsFileModeHasBeenSet(false)
{
  *this = jsonValue;
}

HlsGroupSettings& HlsGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adMarkers"))
  {
    Aws::Utils::Array<JsonView> adMarkersJsonList = jsonValue.GetArray("adMarkers");
    for(unsigned adMarkersIndex = 0; adMarkersIndex < adMarkersJsonList.GetLength(); ++adMarkersIndex)
    {
      m_adMarkers.push_back(HlsAdMarkersMapper::GetHlsAdMarkersForName(adMarkersJsonList[adMarkersIndex].AsString()));
    }
    m_adMarkersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("baseUrlContent"))
  {
    m_baseUrlContent = jsonValue.GetString("baseUrlContent");

    m_baseUrlContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("baseUrlContent1"))
  {
    m_baseUrlContent1 = jsonValue.GetString("baseUrlContent1");

    m_baseUrlContent1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("baseUrlManifest"))
  {
    m_baseUrlManifest = jsonValue.GetString("baseUrlManifest");

    m_baseUrlManifestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("baseUrlManifest1"))
  {
    m_baseUrlManifest1 = jsonValue.GetString("baseUrlManifest1");

    m_baseUrlManifest1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("captionLanguageMappings"))
  {
    Aws::Utils::Array<JsonView> captionLanguageMappingsJsonList = jsonValue.GetArray("captionLanguageMappings");
    for(unsigned captionLanguageMappingsIndex = 0; captionLanguageMappingsIndex < captionLanguageMappingsJsonList.GetLength(); ++captionLanguageMappingsIndex)
    {
      m_captionLanguageMappings.push_back(captionLanguageMappingsJsonList[captionLanguageMappingsIndex].AsObject());
    }
    m_captionLanguageMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captionLanguageSetting"))
  {
    m_captionLanguageSetting = HlsCaptionLanguageSettingMapper::GetHlsCaptionLanguageSettingForName(jsonValue.GetString("captionLanguageSetting"));

    m_captionLanguageSettingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientCache"))
  {
    m_clientCache = HlsClientCacheMapper::GetHlsClientCacheForName(jsonValue.GetString("clientCache"));

    m_clientCacheHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codecSpecification"))
  {
    m_codecSpecification = HlsCodecSpecificationMapper::GetHlsCodecSpecificationForName(jsonValue.GetString("codecSpecification"));

    m_codecSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("constantIv"))
  {
    m_constantIv = jsonValue.GetString("constantIv");

    m_constantIvHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("directoryStructure"))
  {
    m_directoryStructure = HlsDirectoryStructureMapper::GetHlsDirectoryStructureForName(jsonValue.GetString("directoryStructure"));

    m_directoryStructureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("discontinuityTags"))
  {
    m_discontinuityTags = HlsDiscontinuityTagsMapper::GetHlsDiscontinuityTagsForName(jsonValue.GetString("discontinuityTags"));

    m_discontinuityTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionType"))
  {
    m_encryptionType = HlsEncryptionTypeMapper::GetHlsEncryptionTypeForName(jsonValue.GetString("encryptionType"));

    m_encryptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsCdnSettings"))
  {
    m_hlsCdnSettings = jsonValue.GetObject("hlsCdnSettings");

    m_hlsCdnSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsId3SegmentTagging"))
  {
    m_hlsId3SegmentTagging = HlsId3SegmentTaggingStateMapper::GetHlsId3SegmentTaggingStateForName(jsonValue.GetString("hlsId3SegmentTagging"));

    m_hlsId3SegmentTaggingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iFrameOnlyPlaylists"))
  {
    m_iFrameOnlyPlaylists = IFrameOnlyPlaylistTypeMapper::GetIFrameOnlyPlaylistTypeForName(jsonValue.GetString("iFrameOnlyPlaylists"));

    m_iFrameOnlyPlaylistsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("incompleteSegmentBehavior"))
  {
    m_incompleteSegmentBehavior = HlsIncompleteSegmentBehaviorMapper::GetHlsIncompleteSegmentBehaviorForName(jsonValue.GetString("incompleteSegmentBehavior"));

    m_incompleteSegmentBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("indexNSegments"))
  {
    m_indexNSegments = jsonValue.GetInteger("indexNSegments");

    m_indexNSegmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputLossAction"))
  {
    m_inputLossAction = InputLossActionForHlsOutMapper::GetInputLossActionForHlsOutForName(jsonValue.GetString("inputLossAction"));

    m_inputLossActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ivInManifest"))
  {
    m_ivInManifest = HlsIvInManifestMapper::GetHlsIvInManifestForName(jsonValue.GetString("ivInManifest"));

    m_ivInManifestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ivSource"))
  {
    m_ivSource = HlsIvSourceMapper::GetHlsIvSourceForName(jsonValue.GetString("ivSource"));

    m_ivSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keepSegments"))
  {
    m_keepSegments = jsonValue.GetInteger("keepSegments");

    m_keepSegmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyFormat"))
  {
    m_keyFormat = jsonValue.GetString("keyFormat");

    m_keyFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyFormatVersions"))
  {
    m_keyFormatVersions = jsonValue.GetString("keyFormatVersions");

    m_keyFormatVersionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyProviderSettings"))
  {
    m_keyProviderSettings = jsonValue.GetObject("keyProviderSettings");

    m_keyProviderSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestCompression"))
  {
    m_manifestCompression = HlsManifestCompressionMapper::GetHlsManifestCompressionForName(jsonValue.GetString("manifestCompression"));

    m_manifestCompressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestDurationFormat"))
  {
    m_manifestDurationFormat = HlsManifestDurationFormatMapper::GetHlsManifestDurationFormatForName(jsonValue.GetString("manifestDurationFormat"));

    m_manifestDurationFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minSegmentLength"))
  {
    m_minSegmentLength = jsonValue.GetInteger("minSegmentLength");

    m_minSegmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mode"))
  {
    m_mode = HlsModeMapper::GetHlsModeForName(jsonValue.GetString("mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputSelection"))
  {
    m_outputSelection = HlsOutputSelectionMapper::GetHlsOutputSelectionForName(jsonValue.GetString("outputSelection"));

    m_outputSelectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programDateTime"))
  {
    m_programDateTime = HlsProgramDateTimeMapper::GetHlsProgramDateTimeForName(jsonValue.GetString("programDateTime"));

    m_programDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programDateTimeClock"))
  {
    m_programDateTimeClock = HlsProgramDateTimeClockMapper::GetHlsProgramDateTimeClockForName(jsonValue.GetString("programDateTimeClock"));

    m_programDateTimeClockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programDateTimePeriod"))
  {
    m_programDateTimePeriod = jsonValue.GetInteger("programDateTimePeriod");

    m_programDateTimePeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("redundantManifest"))
  {
    m_redundantManifest = HlsRedundantManifestMapper::GetHlsRedundantManifestForName(jsonValue.GetString("redundantManifest"));

    m_redundantManifestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentLength"))
  {
    m_segmentLength = jsonValue.GetInteger("segmentLength");

    m_segmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentationMode"))
  {
    m_segmentationMode = HlsSegmentationModeMapper::GetHlsSegmentationModeForName(jsonValue.GetString("segmentationMode"));

    m_segmentationModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentsPerSubdirectory"))
  {
    m_segmentsPerSubdirectory = jsonValue.GetInteger("segmentsPerSubdirectory");

    m_segmentsPerSubdirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamInfResolution"))
  {
    m_streamInfResolution = HlsStreamInfResolutionMapper::GetHlsStreamInfResolutionForName(jsonValue.GetString("streamInfResolution"));

    m_streamInfResolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataId3Frame"))
  {
    m_timedMetadataId3Frame = HlsTimedMetadataId3FrameMapper::GetHlsTimedMetadataId3FrameForName(jsonValue.GetString("timedMetadataId3Frame"));

    m_timedMetadataId3FrameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataId3Period"))
  {
    m_timedMetadataId3Period = jsonValue.GetInteger("timedMetadataId3Period");

    m_timedMetadataId3PeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestampDeltaMilliseconds"))
  {
    m_timestampDeltaMilliseconds = jsonValue.GetInteger("timestampDeltaMilliseconds");

    m_timestampDeltaMillisecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tsFileMode"))
  {
    m_tsFileMode = HlsTsFileModeMapper::GetHlsTsFileModeForName(jsonValue.GetString("tsFileMode"));

    m_tsFileModeHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_adMarkersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> adMarkersJsonList(m_adMarkers.size());
   for(unsigned adMarkersIndex = 0; adMarkersIndex < adMarkersJsonList.GetLength(); ++adMarkersIndex)
   {
     adMarkersJsonList[adMarkersIndex].AsString(HlsAdMarkersMapper::GetNameForHlsAdMarkers(m_adMarkers[adMarkersIndex]));
   }
   payload.WithArray("adMarkers", std::move(adMarkersJsonList));

  }

  if(m_baseUrlContentHasBeenSet)
  {
   payload.WithString("baseUrlContent", m_baseUrlContent);

  }

  if(m_baseUrlContent1HasBeenSet)
  {
   payload.WithString("baseUrlContent1", m_baseUrlContent1);

  }

  if(m_baseUrlManifestHasBeenSet)
  {
   payload.WithString("baseUrlManifest", m_baseUrlManifest);

  }

  if(m_baseUrlManifest1HasBeenSet)
  {
   payload.WithString("baseUrlManifest1", m_baseUrlManifest1);

  }

  if(m_captionLanguageMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> captionLanguageMappingsJsonList(m_captionLanguageMappings.size());
   for(unsigned captionLanguageMappingsIndex = 0; captionLanguageMappingsIndex < captionLanguageMappingsJsonList.GetLength(); ++captionLanguageMappingsIndex)
   {
     captionLanguageMappingsJsonList[captionLanguageMappingsIndex].AsObject(m_captionLanguageMappings[captionLanguageMappingsIndex].Jsonize());
   }
   payload.WithArray("captionLanguageMappings", std::move(captionLanguageMappingsJsonList));

  }

  if(m_captionLanguageSettingHasBeenSet)
  {
   payload.WithString("captionLanguageSetting", HlsCaptionLanguageSettingMapper::GetNameForHlsCaptionLanguageSetting(m_captionLanguageSetting));
  }

  if(m_clientCacheHasBeenSet)
  {
   payload.WithString("clientCache", HlsClientCacheMapper::GetNameForHlsClientCache(m_clientCache));
  }

  if(m_codecSpecificationHasBeenSet)
  {
   payload.WithString("codecSpecification", HlsCodecSpecificationMapper::GetNameForHlsCodecSpecification(m_codecSpecification));
  }

  if(m_constantIvHasBeenSet)
  {
   payload.WithString("constantIv", m_constantIv);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  if(m_directoryStructureHasBeenSet)
  {
   payload.WithString("directoryStructure", HlsDirectoryStructureMapper::GetNameForHlsDirectoryStructure(m_directoryStructure));
  }

  if(m_discontinuityTagsHasBeenSet)
  {
   payload.WithString("discontinuityTags", HlsDiscontinuityTagsMapper::GetNameForHlsDiscontinuityTags(m_discontinuityTags));
  }

  if(m_encryptionTypeHasBeenSet)
  {
   payload.WithString("encryptionType", HlsEncryptionTypeMapper::GetNameForHlsEncryptionType(m_encryptionType));
  }

  if(m_hlsCdnSettingsHasBeenSet)
  {
   payload.WithObject("hlsCdnSettings", m_hlsCdnSettings.Jsonize());

  }

  if(m_hlsId3SegmentTaggingHasBeenSet)
  {
   payload.WithString("hlsId3SegmentTagging", HlsId3SegmentTaggingStateMapper::GetNameForHlsId3SegmentTaggingState(m_hlsId3SegmentTagging));
  }

  if(m_iFrameOnlyPlaylistsHasBeenSet)
  {
   payload.WithString("iFrameOnlyPlaylists", IFrameOnlyPlaylistTypeMapper::GetNameForIFrameOnlyPlaylistType(m_iFrameOnlyPlaylists));
  }

  if(m_incompleteSegmentBehaviorHasBeenSet)
  {
   payload.WithString("incompleteSegmentBehavior", HlsIncompleteSegmentBehaviorMapper::GetNameForHlsIncompleteSegmentBehavior(m_incompleteSegmentBehavior));
  }

  if(m_indexNSegmentsHasBeenSet)
  {
   payload.WithInteger("indexNSegments", m_indexNSegments);

  }

  if(m_inputLossActionHasBeenSet)
  {
   payload.WithString("inputLossAction", InputLossActionForHlsOutMapper::GetNameForInputLossActionForHlsOut(m_inputLossAction));
  }

  if(m_ivInManifestHasBeenSet)
  {
   payload.WithString("ivInManifest", HlsIvInManifestMapper::GetNameForHlsIvInManifest(m_ivInManifest));
  }

  if(m_ivSourceHasBeenSet)
  {
   payload.WithString("ivSource", HlsIvSourceMapper::GetNameForHlsIvSource(m_ivSource));
  }

  if(m_keepSegmentsHasBeenSet)
  {
   payload.WithInteger("keepSegments", m_keepSegments);

  }

  if(m_keyFormatHasBeenSet)
  {
   payload.WithString("keyFormat", m_keyFormat);

  }

  if(m_keyFormatVersionsHasBeenSet)
  {
   payload.WithString("keyFormatVersions", m_keyFormatVersions);

  }

  if(m_keyProviderSettingsHasBeenSet)
  {
   payload.WithObject("keyProviderSettings", m_keyProviderSettings.Jsonize());

  }

  if(m_manifestCompressionHasBeenSet)
  {
   payload.WithString("manifestCompression", HlsManifestCompressionMapper::GetNameForHlsManifestCompression(m_manifestCompression));
  }

  if(m_manifestDurationFormatHasBeenSet)
  {
   payload.WithString("manifestDurationFormat", HlsManifestDurationFormatMapper::GetNameForHlsManifestDurationFormat(m_manifestDurationFormat));
  }

  if(m_minSegmentLengthHasBeenSet)
  {
   payload.WithInteger("minSegmentLength", m_minSegmentLength);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", HlsModeMapper::GetNameForHlsMode(m_mode));
  }

  if(m_outputSelectionHasBeenSet)
  {
   payload.WithString("outputSelection", HlsOutputSelectionMapper::GetNameForHlsOutputSelection(m_outputSelection));
  }

  if(m_programDateTimeHasBeenSet)
  {
   payload.WithString("programDateTime", HlsProgramDateTimeMapper::GetNameForHlsProgramDateTime(m_programDateTime));
  }

  if(m_programDateTimeClockHasBeenSet)
  {
   payload.WithString("programDateTimeClock", HlsProgramDateTimeClockMapper::GetNameForHlsProgramDateTimeClock(m_programDateTimeClock));
  }

  if(m_programDateTimePeriodHasBeenSet)
  {
   payload.WithInteger("programDateTimePeriod", m_programDateTimePeriod);

  }

  if(m_redundantManifestHasBeenSet)
  {
   payload.WithString("redundantManifest", HlsRedundantManifestMapper::GetNameForHlsRedundantManifest(m_redundantManifest));
  }

  if(m_segmentLengthHasBeenSet)
  {
   payload.WithInteger("segmentLength", m_segmentLength);

  }

  if(m_segmentationModeHasBeenSet)
  {
   payload.WithString("segmentationMode", HlsSegmentationModeMapper::GetNameForHlsSegmentationMode(m_segmentationMode));
  }

  if(m_segmentsPerSubdirectoryHasBeenSet)
  {
   payload.WithInteger("segmentsPerSubdirectory", m_segmentsPerSubdirectory);

  }

  if(m_streamInfResolutionHasBeenSet)
  {
   payload.WithString("streamInfResolution", HlsStreamInfResolutionMapper::GetNameForHlsStreamInfResolution(m_streamInfResolution));
  }

  if(m_timedMetadataId3FrameHasBeenSet)
  {
   payload.WithString("timedMetadataId3Frame", HlsTimedMetadataId3FrameMapper::GetNameForHlsTimedMetadataId3Frame(m_timedMetadataId3Frame));
  }

  if(m_timedMetadataId3PeriodHasBeenSet)
  {
   payload.WithInteger("timedMetadataId3Period", m_timedMetadataId3Period);

  }

  if(m_timestampDeltaMillisecondsHasBeenSet)
  {
   payload.WithInteger("timestampDeltaMilliseconds", m_timestampDeltaMilliseconds);

  }

  if(m_tsFileModeHasBeenSet)
  {
   payload.WithString("tsFileMode", HlsTsFileModeMapper::GetNameForHlsTsFileMode(m_tsFileMode));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
