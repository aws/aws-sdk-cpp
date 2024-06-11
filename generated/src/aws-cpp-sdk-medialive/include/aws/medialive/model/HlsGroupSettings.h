/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/HlsCaptionLanguageSetting.h>
#include <aws/medialive/model/HlsClientCache.h>
#include <aws/medialive/model/HlsCodecSpecification.h>
#include <aws/medialive/model/OutputLocationRef.h>
#include <aws/medialive/model/HlsDirectoryStructure.h>
#include <aws/medialive/model/HlsDiscontinuityTags.h>
#include <aws/medialive/model/HlsEncryptionType.h>
#include <aws/medialive/model/HlsCdnSettings.h>
#include <aws/medialive/model/HlsId3SegmentTaggingState.h>
#include <aws/medialive/model/IFrameOnlyPlaylistType.h>
#include <aws/medialive/model/HlsIncompleteSegmentBehavior.h>
#include <aws/medialive/model/InputLossActionForHlsOut.h>
#include <aws/medialive/model/HlsIvInManifest.h>
#include <aws/medialive/model/HlsIvSource.h>
#include <aws/medialive/model/KeyProviderSettings.h>
#include <aws/medialive/model/HlsManifestCompression.h>
#include <aws/medialive/model/HlsManifestDurationFormat.h>
#include <aws/medialive/model/HlsMode.h>
#include <aws/medialive/model/HlsOutputSelection.h>
#include <aws/medialive/model/HlsProgramDateTime.h>
#include <aws/medialive/model/HlsProgramDateTimeClock.h>
#include <aws/medialive/model/HlsRedundantManifest.h>
#include <aws/medialive/model/HlsSegmentationMode.h>
#include <aws/medialive/model/HlsStreamInfResolution.h>
#include <aws/medialive/model/HlsTimedMetadataId3Frame.h>
#include <aws/medialive/model/HlsTsFileMode.h>
#include <aws/medialive/model/HlsAdMarkers.h>
#include <aws/medialive/model/CaptionLanguageMapping.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Hls Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsGroupSettings">AWS
   * API Reference</a></p>
   */
  class HlsGroupSettings
  {
  public:
    AWS_MEDIALIVE_API HlsGroupSettings();
    AWS_MEDIALIVE_API HlsGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API HlsGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Choose one or more ad marker types to pass SCTE35 signals through to this group
     * of Apple HLS outputs.
     */
    inline const Aws::Vector<HlsAdMarkers>& GetAdMarkers() const{ return m_adMarkers; }
    inline bool AdMarkersHasBeenSet() const { return m_adMarkersHasBeenSet; }
    inline void SetAdMarkers(const Aws::Vector<HlsAdMarkers>& value) { m_adMarkersHasBeenSet = true; m_adMarkers = value; }
    inline void SetAdMarkers(Aws::Vector<HlsAdMarkers>&& value) { m_adMarkersHasBeenSet = true; m_adMarkers = std::move(value); }
    inline HlsGroupSettings& WithAdMarkers(const Aws::Vector<HlsAdMarkers>& value) { SetAdMarkers(value); return *this;}
    inline HlsGroupSettings& WithAdMarkers(Aws::Vector<HlsAdMarkers>&& value) { SetAdMarkers(std::move(value)); return *this;}
    inline HlsGroupSettings& AddAdMarkers(const HlsAdMarkers& value) { m_adMarkersHasBeenSet = true; m_adMarkers.push_back(value); return *this; }
    inline HlsGroupSettings& AddAdMarkers(HlsAdMarkers&& value) { m_adMarkersHasBeenSet = true; m_adMarkers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline const Aws::String& GetBaseUrlContent() const{ return m_baseUrlContent; }
    inline bool BaseUrlContentHasBeenSet() const { return m_baseUrlContentHasBeenSet; }
    inline void SetBaseUrlContent(const Aws::String& value) { m_baseUrlContentHasBeenSet = true; m_baseUrlContent = value; }
    inline void SetBaseUrlContent(Aws::String&& value) { m_baseUrlContentHasBeenSet = true; m_baseUrlContent = std::move(value); }
    inline void SetBaseUrlContent(const char* value) { m_baseUrlContentHasBeenSet = true; m_baseUrlContent.assign(value); }
    inline HlsGroupSettings& WithBaseUrlContent(const Aws::String& value) { SetBaseUrlContent(value); return *this;}
    inline HlsGroupSettings& WithBaseUrlContent(Aws::String&& value) { SetBaseUrlContent(std::move(value)); return *this;}
    inline HlsGroupSettings& WithBaseUrlContent(const char* value) { SetBaseUrlContent(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. One value per output group.

This field is required only if you are
     * completing Base URL content A, and the downstream system has notified you that
     * the media files for pipeline 1 of all outputs are in a location different from
     * the media files for pipeline 0.
     */
    inline const Aws::String& GetBaseUrlContent1() const{ return m_baseUrlContent1; }
    inline bool BaseUrlContent1HasBeenSet() const { return m_baseUrlContent1HasBeenSet; }
    inline void SetBaseUrlContent1(const Aws::String& value) { m_baseUrlContent1HasBeenSet = true; m_baseUrlContent1 = value; }
    inline void SetBaseUrlContent1(Aws::String&& value) { m_baseUrlContent1HasBeenSet = true; m_baseUrlContent1 = std::move(value); }
    inline void SetBaseUrlContent1(const char* value) { m_baseUrlContent1HasBeenSet = true; m_baseUrlContent1.assign(value); }
    inline HlsGroupSettings& WithBaseUrlContent1(const Aws::String& value) { SetBaseUrlContent1(value); return *this;}
    inline HlsGroupSettings& WithBaseUrlContent1(Aws::String&& value) { SetBaseUrlContent1(std::move(value)); return *this;}
    inline HlsGroupSettings& WithBaseUrlContent1(const char* value) { SetBaseUrlContent1(value); return *this;}
    ///@}

    ///@{
    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline const Aws::String& GetBaseUrlManifest() const{ return m_baseUrlManifest; }
    inline bool BaseUrlManifestHasBeenSet() const { return m_baseUrlManifestHasBeenSet; }
    inline void SetBaseUrlManifest(const Aws::String& value) { m_baseUrlManifestHasBeenSet = true; m_baseUrlManifest = value; }
    inline void SetBaseUrlManifest(Aws::String&& value) { m_baseUrlManifestHasBeenSet = true; m_baseUrlManifest = std::move(value); }
    inline void SetBaseUrlManifest(const char* value) { m_baseUrlManifestHasBeenSet = true; m_baseUrlManifest.assign(value); }
    inline HlsGroupSettings& WithBaseUrlManifest(const Aws::String& value) { SetBaseUrlManifest(value); return *this;}
    inline HlsGroupSettings& WithBaseUrlManifest(Aws::String&& value) { SetBaseUrlManifest(std::move(value)); return *this;}
    inline HlsGroupSettings& WithBaseUrlManifest(const char* value) { SetBaseUrlManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. One value per output group.

Complete this field only if you are
     * completing Base URL manifest A, and the downstream system has notified you that
     * the child manifest files for pipeline 1 of all outputs are in a location
     * different from the child manifest files for pipeline 0.
     */
    inline const Aws::String& GetBaseUrlManifest1() const{ return m_baseUrlManifest1; }
    inline bool BaseUrlManifest1HasBeenSet() const { return m_baseUrlManifest1HasBeenSet; }
    inline void SetBaseUrlManifest1(const Aws::String& value) { m_baseUrlManifest1HasBeenSet = true; m_baseUrlManifest1 = value; }
    inline void SetBaseUrlManifest1(Aws::String&& value) { m_baseUrlManifest1HasBeenSet = true; m_baseUrlManifest1 = std::move(value); }
    inline void SetBaseUrlManifest1(const char* value) { m_baseUrlManifest1HasBeenSet = true; m_baseUrlManifest1.assign(value); }
    inline HlsGroupSettings& WithBaseUrlManifest1(const Aws::String& value) { SetBaseUrlManifest1(value); return *this;}
    inline HlsGroupSettings& WithBaseUrlManifest1(Aws::String&& value) { SetBaseUrlManifest1(std::move(value)); return *this;}
    inline HlsGroupSettings& WithBaseUrlManifest1(const char* value) { SetBaseUrlManifest1(value); return *this;}
    ///@}

    ///@{
    /**
     * Mapping of up to 4 caption channels to caption languages.  Is only meaningful if
     * captionLanguageSetting is set to "insert".
     */
    inline const Aws::Vector<CaptionLanguageMapping>& GetCaptionLanguageMappings() const{ return m_captionLanguageMappings; }
    inline bool CaptionLanguageMappingsHasBeenSet() const { return m_captionLanguageMappingsHasBeenSet; }
    inline void SetCaptionLanguageMappings(const Aws::Vector<CaptionLanguageMapping>& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings = value; }
    inline void SetCaptionLanguageMappings(Aws::Vector<CaptionLanguageMapping>&& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings = std::move(value); }
    inline HlsGroupSettings& WithCaptionLanguageMappings(const Aws::Vector<CaptionLanguageMapping>& value) { SetCaptionLanguageMappings(value); return *this;}
    inline HlsGroupSettings& WithCaptionLanguageMappings(Aws::Vector<CaptionLanguageMapping>&& value) { SetCaptionLanguageMappings(std::move(value)); return *this;}
    inline HlsGroupSettings& AddCaptionLanguageMappings(const CaptionLanguageMapping& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings.push_back(value); return *this; }
    inline HlsGroupSettings& AddCaptionLanguageMappings(CaptionLanguageMapping&& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Applies only to 608 Embedded output captions.
insert: Include CLOSED-CAPTIONS
     * lines in the manifest. Specify at least one language in the CC1 Language Code
     * field. One CLOSED-CAPTION line is added for each Language Code you specify. Make
     * sure to specify the languages in the order in which they appear in the original
     * source (if the source is embedded format) or the order of the caption selectors
     * (if the source is other than embedded). Otherwise, languages in the manifest
     * will not match up properly with the output captions.
none: Include
     * CLOSED-CAPTIONS=NONE line in the manifest.
omit: Omit any CLOSED-CAPTIONS line
     * from the manifest.
     */
    inline const HlsCaptionLanguageSetting& GetCaptionLanguageSetting() const{ return m_captionLanguageSetting; }
    inline bool CaptionLanguageSettingHasBeenSet() const { return m_captionLanguageSettingHasBeenSet; }
    inline void SetCaptionLanguageSetting(const HlsCaptionLanguageSetting& value) { m_captionLanguageSettingHasBeenSet = true; m_captionLanguageSetting = value; }
    inline void SetCaptionLanguageSetting(HlsCaptionLanguageSetting&& value) { m_captionLanguageSettingHasBeenSet = true; m_captionLanguageSetting = std::move(value); }
    inline HlsGroupSettings& WithCaptionLanguageSetting(const HlsCaptionLanguageSetting& value) { SetCaptionLanguageSetting(value); return *this;}
    inline HlsGroupSettings& WithCaptionLanguageSetting(HlsCaptionLanguageSetting&& value) { SetCaptionLanguageSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * When set to "disabled", sets the #EXT-X-ALLOW-CACHE:no tag in the manifest,
     * which prevents clients from saving media segments for later replay.
     */
    inline const HlsClientCache& GetClientCache() const{ return m_clientCache; }
    inline bool ClientCacheHasBeenSet() const { return m_clientCacheHasBeenSet; }
    inline void SetClientCache(const HlsClientCache& value) { m_clientCacheHasBeenSet = true; m_clientCache = value; }
    inline void SetClientCache(HlsClientCache&& value) { m_clientCacheHasBeenSet = true; m_clientCache = std::move(value); }
    inline HlsGroupSettings& WithClientCache(const HlsClientCache& value) { SetClientCache(value); return *this;}
    inline HlsGroupSettings& WithClientCache(HlsClientCache&& value) { SetClientCache(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline const HlsCodecSpecification& GetCodecSpecification() const{ return m_codecSpecification; }
    inline bool CodecSpecificationHasBeenSet() const { return m_codecSpecificationHasBeenSet; }
    inline void SetCodecSpecification(const HlsCodecSpecification& value) { m_codecSpecificationHasBeenSet = true; m_codecSpecification = value; }
    inline void SetCodecSpecification(HlsCodecSpecification&& value) { m_codecSpecificationHasBeenSet = true; m_codecSpecification = std::move(value); }
    inline HlsGroupSettings& WithCodecSpecification(const HlsCodecSpecification& value) { SetCodecSpecification(value); return *this;}
    inline HlsGroupSettings& WithCodecSpecification(HlsCodecSpecification&& value) { SetCodecSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * For use with encryptionType. This is a 128-bit, 16-byte hex value represented by
     * a 32-character text string. If ivSource is set to "explicit" then this parameter
     * is required and is used as the IV for encryption.
     */
    inline const Aws::String& GetConstantIv() const{ return m_constantIv; }
    inline bool ConstantIvHasBeenSet() const { return m_constantIvHasBeenSet; }
    inline void SetConstantIv(const Aws::String& value) { m_constantIvHasBeenSet = true; m_constantIv = value; }
    inline void SetConstantIv(Aws::String&& value) { m_constantIvHasBeenSet = true; m_constantIv = std::move(value); }
    inline void SetConstantIv(const char* value) { m_constantIvHasBeenSet = true; m_constantIv.assign(value); }
    inline HlsGroupSettings& WithConstantIv(const Aws::String& value) { SetConstantIv(value); return *this;}
    inline HlsGroupSettings& WithConstantIv(Aws::String&& value) { SetConstantIv(std::move(value)); return *this;}
    inline HlsGroupSettings& WithConstantIv(const char* value) { SetConstantIv(value); return *this;}
    ///@}

    ///@{
    /**
     * A directory or HTTP destination for the HLS segments, manifest files, and
     * encryption keys (if enabled).
     */
    inline const OutputLocationRef& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const OutputLocationRef& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(OutputLocationRef&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline HlsGroupSettings& WithDestination(const OutputLocationRef& value) { SetDestination(value); return *this;}
    inline HlsGroupSettings& WithDestination(OutputLocationRef&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Place segments in subdirectories.
     */
    inline const HlsDirectoryStructure& GetDirectoryStructure() const{ return m_directoryStructure; }
    inline bool DirectoryStructureHasBeenSet() const { return m_directoryStructureHasBeenSet; }
    inline void SetDirectoryStructure(const HlsDirectoryStructure& value) { m_directoryStructureHasBeenSet = true; m_directoryStructure = value; }
    inline void SetDirectoryStructure(HlsDirectoryStructure&& value) { m_directoryStructureHasBeenSet = true; m_directoryStructure = std::move(value); }
    inline HlsGroupSettings& WithDirectoryStructure(const HlsDirectoryStructure& value) { SetDirectoryStructure(value); return *this;}
    inline HlsGroupSettings& WithDirectoryStructure(HlsDirectoryStructure&& value) { SetDirectoryStructure(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies whether to insert EXT-X-DISCONTINUITY tags in the HLS child manifests
     * for this output group.
Typically, choose Insert because these tags are required
     * in the manifest (according to the HLS specification) and serve an important
     * purpose.
Choose Never Insert only if the downstream system is doing real-time
     * failover (without using the MediaLive automatic failover feature) and only if
     * that downstream system has advised you to exclude the tags.
     */
    inline const HlsDiscontinuityTags& GetDiscontinuityTags() const{ return m_discontinuityTags; }
    inline bool DiscontinuityTagsHasBeenSet() const { return m_discontinuityTagsHasBeenSet; }
    inline void SetDiscontinuityTags(const HlsDiscontinuityTags& value) { m_discontinuityTagsHasBeenSet = true; m_discontinuityTags = value; }
    inline void SetDiscontinuityTags(HlsDiscontinuityTags&& value) { m_discontinuityTagsHasBeenSet = true; m_discontinuityTags = std::move(value); }
    inline HlsGroupSettings& WithDiscontinuityTags(const HlsDiscontinuityTags& value) { SetDiscontinuityTags(value); return *this;}
    inline HlsGroupSettings& WithDiscontinuityTags(HlsDiscontinuityTags&& value) { SetDiscontinuityTags(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Encrypts the segments with the given encryption scheme.  Exclude this parameter
     * if no encryption is desired.
     */
    inline const HlsEncryptionType& GetEncryptionType() const{ return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(const HlsEncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline void SetEncryptionType(HlsEncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }
    inline HlsGroupSettings& WithEncryptionType(const HlsEncryptionType& value) { SetEncryptionType(value); return *this;}
    inline HlsGroupSettings& WithEncryptionType(HlsEncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Parameters that control interactions with the CDN.
     */
    inline const HlsCdnSettings& GetHlsCdnSettings() const{ return m_hlsCdnSettings; }
    inline bool HlsCdnSettingsHasBeenSet() const { return m_hlsCdnSettingsHasBeenSet; }
    inline void SetHlsCdnSettings(const HlsCdnSettings& value) { m_hlsCdnSettingsHasBeenSet = true; m_hlsCdnSettings = value; }
    inline void SetHlsCdnSettings(HlsCdnSettings&& value) { m_hlsCdnSettingsHasBeenSet = true; m_hlsCdnSettings = std::move(value); }
    inline HlsGroupSettings& WithHlsCdnSettings(const HlsCdnSettings& value) { SetHlsCdnSettings(value); return *this;}
    inline HlsGroupSettings& WithHlsCdnSettings(HlsCdnSettings&& value) { SetHlsCdnSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * State of HLS ID3 Segment Tagging
     */
    inline const HlsId3SegmentTaggingState& GetHlsId3SegmentTagging() const{ return m_hlsId3SegmentTagging; }
    inline bool HlsId3SegmentTaggingHasBeenSet() const { return m_hlsId3SegmentTaggingHasBeenSet; }
    inline void SetHlsId3SegmentTagging(const HlsId3SegmentTaggingState& value) { m_hlsId3SegmentTaggingHasBeenSet = true; m_hlsId3SegmentTagging = value; }
    inline void SetHlsId3SegmentTagging(HlsId3SegmentTaggingState&& value) { m_hlsId3SegmentTaggingHasBeenSet = true; m_hlsId3SegmentTagging = std::move(value); }
    inline HlsGroupSettings& WithHlsId3SegmentTagging(const HlsId3SegmentTaggingState& value) { SetHlsId3SegmentTagging(value); return *this;}
    inline HlsGroupSettings& WithHlsId3SegmentTagging(HlsId3SegmentTaggingState&& value) { SetHlsId3SegmentTagging(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * DISABLED: Do not create an I-frame-only manifest, but do create the master and
     * media manifests (according to the Output Selection field).

STANDARD: Create an
     * I-frame-only manifest for each output that contains video, as well as the other
     * manifests (according to the Output Selection field). The I-frame manifest
     * contains a #EXT-X-I-FRAMES-ONLY tag to indicate it is I-frame only, and one or
     * more #EXT-X-BYTERANGE entries identifying the I-frame position. For example,
     * #EXT-X-BYTERANGE:160364@1461888"
     */
    inline const IFrameOnlyPlaylistType& GetIFrameOnlyPlaylists() const{ return m_iFrameOnlyPlaylists; }
    inline bool IFrameOnlyPlaylistsHasBeenSet() const { return m_iFrameOnlyPlaylistsHasBeenSet; }
    inline void SetIFrameOnlyPlaylists(const IFrameOnlyPlaylistType& value) { m_iFrameOnlyPlaylistsHasBeenSet = true; m_iFrameOnlyPlaylists = value; }
    inline void SetIFrameOnlyPlaylists(IFrameOnlyPlaylistType&& value) { m_iFrameOnlyPlaylistsHasBeenSet = true; m_iFrameOnlyPlaylists = std::move(value); }
    inline HlsGroupSettings& WithIFrameOnlyPlaylists(const IFrameOnlyPlaylistType& value) { SetIFrameOnlyPlaylists(value); return *this;}
    inline HlsGroupSettings& WithIFrameOnlyPlaylists(IFrameOnlyPlaylistType&& value) { SetIFrameOnlyPlaylists(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies whether to include the final (incomplete) segment in the media output
     * when the pipeline stops producing output because of a channel stop, a channel
     * pause or a loss of input to the pipeline.
Auto means that MediaLive decides
     * whether to include the final segment, depending on the channel class and the
     * types of output groups.
Suppress means to never include the incomplete segment.
     * We recommend you choose Auto and let MediaLive control the behavior.
     */
    inline const HlsIncompleteSegmentBehavior& GetIncompleteSegmentBehavior() const{ return m_incompleteSegmentBehavior; }
    inline bool IncompleteSegmentBehaviorHasBeenSet() const { return m_incompleteSegmentBehaviorHasBeenSet; }
    inline void SetIncompleteSegmentBehavior(const HlsIncompleteSegmentBehavior& value) { m_incompleteSegmentBehaviorHasBeenSet = true; m_incompleteSegmentBehavior = value; }
    inline void SetIncompleteSegmentBehavior(HlsIncompleteSegmentBehavior&& value) { m_incompleteSegmentBehaviorHasBeenSet = true; m_incompleteSegmentBehavior = std::move(value); }
    inline HlsGroupSettings& WithIncompleteSegmentBehavior(const HlsIncompleteSegmentBehavior& value) { SetIncompleteSegmentBehavior(value); return *this;}
    inline HlsGroupSettings& WithIncompleteSegmentBehavior(HlsIncompleteSegmentBehavior&& value) { SetIncompleteSegmentBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Applies only if Mode field is LIVE.

Specifies the maximum number of segments in
     * the media manifest file. After this maximum, older segments are removed from the
     * media manifest. This number must be smaller than the number in the Keep Segments
     * field.
     */
    inline int GetIndexNSegments() const{ return m_indexNSegments; }
    inline bool IndexNSegmentsHasBeenSet() const { return m_indexNSegmentsHasBeenSet; }
    inline void SetIndexNSegments(int value) { m_indexNSegmentsHasBeenSet = true; m_indexNSegments = value; }
    inline HlsGroupSettings& WithIndexNSegments(int value) { SetIndexNSegments(value); return *this;}
    ///@}

    ///@{
    /**
     * Parameter that control output group behavior on input loss.
     */
    inline const InputLossActionForHlsOut& GetInputLossAction() const{ return m_inputLossAction; }
    inline bool InputLossActionHasBeenSet() const { return m_inputLossActionHasBeenSet; }
    inline void SetInputLossAction(const InputLossActionForHlsOut& value) { m_inputLossActionHasBeenSet = true; m_inputLossAction = value; }
    inline void SetInputLossAction(InputLossActionForHlsOut&& value) { m_inputLossActionHasBeenSet = true; m_inputLossAction = std::move(value); }
    inline HlsGroupSettings& WithInputLossAction(const InputLossActionForHlsOut& value) { SetInputLossAction(value); return *this;}
    inline HlsGroupSettings& WithInputLossAction(InputLossActionForHlsOut&& value) { SetInputLossAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * For use with encryptionType. The IV (Initialization Vector) is a 128-bit number
     * used in conjunction with the key for encrypting blocks. If set to "include", IV
     * is listed in the manifest, otherwise the IV is not in the manifest.
     */
    inline const HlsIvInManifest& GetIvInManifest() const{ return m_ivInManifest; }
    inline bool IvInManifestHasBeenSet() const { return m_ivInManifestHasBeenSet; }
    inline void SetIvInManifest(const HlsIvInManifest& value) { m_ivInManifestHasBeenSet = true; m_ivInManifest = value; }
    inline void SetIvInManifest(HlsIvInManifest&& value) { m_ivInManifestHasBeenSet = true; m_ivInManifest = std::move(value); }
    inline HlsGroupSettings& WithIvInManifest(const HlsIvInManifest& value) { SetIvInManifest(value); return *this;}
    inline HlsGroupSettings& WithIvInManifest(HlsIvInManifest&& value) { SetIvInManifest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * For use with encryptionType. The IV (Initialization Vector) is a 128-bit number
     * used in conjunction with the key for encrypting blocks. If this setting is
     * "followsSegmentNumber", it will cause the IV to change every segment (to match
     * the segment number). If this is set to "explicit", you must enter a constantIv
     * value.
     */
    inline const HlsIvSource& GetIvSource() const{ return m_ivSource; }
    inline bool IvSourceHasBeenSet() const { return m_ivSourceHasBeenSet; }
    inline void SetIvSource(const HlsIvSource& value) { m_ivSourceHasBeenSet = true; m_ivSource = value; }
    inline void SetIvSource(HlsIvSource&& value) { m_ivSourceHasBeenSet = true; m_ivSource = std::move(value); }
    inline HlsGroupSettings& WithIvSource(const HlsIvSource& value) { SetIvSource(value); return *this;}
    inline HlsGroupSettings& WithIvSource(HlsIvSource&& value) { SetIvSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Applies only if Mode field is LIVE.

Specifies the number of media segments to
     * retain in the destination directory. This number should be bigger than
     * indexNSegments (Num segments). We recommend (value = (2 x indexNsegments) +
     * 1).

If this "keep segments" number is too low, the following might happen: the
     * player is still reading a media manifest file that lists this segment, but that
     * segment has been removed from the destination directory (as directed by
     * indexNSegments). This situation would result in a 404 HTTP error on the player.
     */
    inline int GetKeepSegments() const{ return m_keepSegments; }
    inline bool KeepSegmentsHasBeenSet() const { return m_keepSegmentsHasBeenSet; }
    inline void SetKeepSegments(int value) { m_keepSegmentsHasBeenSet = true; m_keepSegments = value; }
    inline HlsGroupSettings& WithKeepSegments(int value) { SetKeepSegments(value); return *this;}
    ///@}

    ///@{
    /**
     * The value specifies how the key is represented in the resource identified by the
     * URI.  If parameter is absent, an implicit value of "identity" is used.  A
     * reverse DNS string can also be given.
     */
    inline const Aws::String& GetKeyFormat() const{ return m_keyFormat; }
    inline bool KeyFormatHasBeenSet() const { return m_keyFormatHasBeenSet; }
    inline void SetKeyFormat(const Aws::String& value) { m_keyFormatHasBeenSet = true; m_keyFormat = value; }
    inline void SetKeyFormat(Aws::String&& value) { m_keyFormatHasBeenSet = true; m_keyFormat = std::move(value); }
    inline void SetKeyFormat(const char* value) { m_keyFormatHasBeenSet = true; m_keyFormat.assign(value); }
    inline HlsGroupSettings& WithKeyFormat(const Aws::String& value) { SetKeyFormat(value); return *this;}
    inline HlsGroupSettings& WithKeyFormat(Aws::String&& value) { SetKeyFormat(std::move(value)); return *this;}
    inline HlsGroupSettings& WithKeyFormat(const char* value) { SetKeyFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * Either a single positive integer version value or a slash delimited list of
     * version values (1/2/3).
     */
    inline const Aws::String& GetKeyFormatVersions() const{ return m_keyFormatVersions; }
    inline bool KeyFormatVersionsHasBeenSet() const { return m_keyFormatVersionsHasBeenSet; }
    inline void SetKeyFormatVersions(const Aws::String& value) { m_keyFormatVersionsHasBeenSet = true; m_keyFormatVersions = value; }
    inline void SetKeyFormatVersions(Aws::String&& value) { m_keyFormatVersionsHasBeenSet = true; m_keyFormatVersions = std::move(value); }
    inline void SetKeyFormatVersions(const char* value) { m_keyFormatVersionsHasBeenSet = true; m_keyFormatVersions.assign(value); }
    inline HlsGroupSettings& WithKeyFormatVersions(const Aws::String& value) { SetKeyFormatVersions(value); return *this;}
    inline HlsGroupSettings& WithKeyFormatVersions(Aws::String&& value) { SetKeyFormatVersions(std::move(value)); return *this;}
    inline HlsGroupSettings& WithKeyFormatVersions(const char* value) { SetKeyFormatVersions(value); return *this;}
    ///@}

    ///@{
    /**
     * The key provider settings.
     */
    inline const KeyProviderSettings& GetKeyProviderSettings() const{ return m_keyProviderSettings; }
    inline bool KeyProviderSettingsHasBeenSet() const { return m_keyProviderSettingsHasBeenSet; }
    inline void SetKeyProviderSettings(const KeyProviderSettings& value) { m_keyProviderSettingsHasBeenSet = true; m_keyProviderSettings = value; }
    inline void SetKeyProviderSettings(KeyProviderSettings&& value) { m_keyProviderSettingsHasBeenSet = true; m_keyProviderSettings = std::move(value); }
    inline HlsGroupSettings& WithKeyProviderSettings(const KeyProviderSettings& value) { SetKeyProviderSettings(value); return *this;}
    inline HlsGroupSettings& WithKeyProviderSettings(KeyProviderSettings&& value) { SetKeyProviderSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * When set to gzip, compresses HLS playlist.
     */
    inline const HlsManifestCompression& GetManifestCompression() const{ return m_manifestCompression; }
    inline bool ManifestCompressionHasBeenSet() const { return m_manifestCompressionHasBeenSet; }
    inline void SetManifestCompression(const HlsManifestCompression& value) { m_manifestCompressionHasBeenSet = true; m_manifestCompression = value; }
    inline void SetManifestCompression(HlsManifestCompression&& value) { m_manifestCompressionHasBeenSet = true; m_manifestCompression = std::move(value); }
    inline HlsGroupSettings& WithManifestCompression(const HlsManifestCompression& value) { SetManifestCompression(value); return *this;}
    inline HlsGroupSettings& WithManifestCompression(HlsManifestCompression&& value) { SetManifestCompression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Indicates whether the output manifest should use floating point or integer
     * values for segment duration.
     */
    inline const HlsManifestDurationFormat& GetManifestDurationFormat() const{ return m_manifestDurationFormat; }
    inline bool ManifestDurationFormatHasBeenSet() const { return m_manifestDurationFormatHasBeenSet; }
    inline void SetManifestDurationFormat(const HlsManifestDurationFormat& value) { m_manifestDurationFormatHasBeenSet = true; m_manifestDurationFormat = value; }
    inline void SetManifestDurationFormat(HlsManifestDurationFormat&& value) { m_manifestDurationFormatHasBeenSet = true; m_manifestDurationFormat = std::move(value); }
    inline HlsGroupSettings& WithManifestDurationFormat(const HlsManifestDurationFormat& value) { SetManifestDurationFormat(value); return *this;}
    inline HlsGroupSettings& WithManifestDurationFormat(HlsManifestDurationFormat&& value) { SetManifestDurationFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Minimum length of MPEG-2 Transport Stream segments in seconds. When set, minimum
     * segment length is enforced by looking ahead and back within the specified range
     * for a nearby avail and extending the segment size if needed.
     */
    inline int GetMinSegmentLength() const{ return m_minSegmentLength; }
    inline bool MinSegmentLengthHasBeenSet() const { return m_minSegmentLengthHasBeenSet; }
    inline void SetMinSegmentLength(int value) { m_minSegmentLengthHasBeenSet = true; m_minSegmentLength = value; }
    inline HlsGroupSettings& WithMinSegmentLength(int value) { SetMinSegmentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * If "vod", all segments are indexed and kept permanently in the destination and
     * manifest. If "live", only the number segments specified in keepSegments and
     * indexNSegments are kept; newer segments replace older segments, which may
     * prevent players from rewinding all the way to the beginning of the event.

VOD
     * mode uses HLS EXT-X-PLAYLIST-TYPE of EVENT while the channel is running,
     * converting it to a "VOD" type manifest on completion of the stream.
     */
    inline const HlsMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const HlsMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(HlsMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline HlsGroupSettings& WithMode(const HlsMode& value) { SetMode(value); return *this;}
    inline HlsGroupSettings& WithMode(HlsMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * MANIFESTS_AND_SEGMENTS: Generates manifests (master manifest, if applicable, and
     * media manifests) for this output group.

VARIANT_MANIFESTS_AND_SEGMENTS:
     * Generates media manifests for this output group, but not a master
     * manifest.

SEGMENTS_ONLY: Does not generate any manifests for this output group.
     */
    inline const HlsOutputSelection& GetOutputSelection() const{ return m_outputSelection; }
    inline bool OutputSelectionHasBeenSet() const { return m_outputSelectionHasBeenSet; }
    inline void SetOutputSelection(const HlsOutputSelection& value) { m_outputSelectionHasBeenSet = true; m_outputSelection = value; }
    inline void SetOutputSelection(HlsOutputSelection&& value) { m_outputSelectionHasBeenSet = true; m_outputSelection = std::move(value); }
    inline HlsGroupSettings& WithOutputSelection(const HlsOutputSelection& value) { SetOutputSelection(value); return *this;}
    inline HlsGroupSettings& WithOutputSelection(HlsOutputSelection&& value) { SetOutputSelection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Includes or excludes EXT-X-PROGRAM-DATE-TIME tag in .m3u8 manifest files. The
     * value is calculated using the program date time clock.
     */
    inline const HlsProgramDateTime& GetProgramDateTime() const{ return m_programDateTime; }
    inline bool ProgramDateTimeHasBeenSet() const { return m_programDateTimeHasBeenSet; }
    inline void SetProgramDateTime(const HlsProgramDateTime& value) { m_programDateTimeHasBeenSet = true; m_programDateTime = value; }
    inline void SetProgramDateTime(HlsProgramDateTime&& value) { m_programDateTimeHasBeenSet = true; m_programDateTime = std::move(value); }
    inline HlsGroupSettings& WithProgramDateTime(const HlsProgramDateTime& value) { SetProgramDateTime(value); return *this;}
    inline HlsGroupSettings& WithProgramDateTime(HlsProgramDateTime&& value) { SetProgramDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the algorithm used to drive the HLS EXT-X-PROGRAM-DATE-TIME clock.
     * Options include:

INITIALIZE_FROM_OUTPUT_TIMECODE: The PDT clock is initialized
     * as a function of the first output timecode, then incremented by the EXTINF
     * duration of each encoded segment.

SYSTEM_CLOCK: The PDT clock is initialized as
     * a function of the UTC wall clock, then incremented by the EXTINF duration of
     * each encoded segment. If the PDT clock diverges from the wall clock by more than
     * 500ms, it is resynchronized to the wall clock.
     */
    inline const HlsProgramDateTimeClock& GetProgramDateTimeClock() const{ return m_programDateTimeClock; }
    inline bool ProgramDateTimeClockHasBeenSet() const { return m_programDateTimeClockHasBeenSet; }
    inline void SetProgramDateTimeClock(const HlsProgramDateTimeClock& value) { m_programDateTimeClockHasBeenSet = true; m_programDateTimeClock = value; }
    inline void SetProgramDateTimeClock(HlsProgramDateTimeClock&& value) { m_programDateTimeClockHasBeenSet = true; m_programDateTimeClock = std::move(value); }
    inline HlsGroupSettings& WithProgramDateTimeClock(const HlsProgramDateTimeClock& value) { SetProgramDateTimeClock(value); return *this;}
    inline HlsGroupSettings& WithProgramDateTimeClock(HlsProgramDateTimeClock&& value) { SetProgramDateTimeClock(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Period of insertion of EXT-X-PROGRAM-DATE-TIME entry, in seconds.
     */
    inline int GetProgramDateTimePeriod() const{ return m_programDateTimePeriod; }
    inline bool ProgramDateTimePeriodHasBeenSet() const { return m_programDateTimePeriodHasBeenSet; }
    inline void SetProgramDateTimePeriod(int value) { m_programDateTimePeriodHasBeenSet = true; m_programDateTimePeriod = value; }
    inline HlsGroupSettings& WithProgramDateTimePeriod(int value) { SetProgramDateTimePeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * ENABLED: The master manifest (.m3u8 file) for each pipeline includes information
     * about both pipelines: first its own media files, then the media files of the
     * other pipeline. This feature allows playout device that support stale manifest
     * detection to switch from one manifest to the other, when the current manifest
     * seems to be stale. There are still two destinations and two master manifests,
     * but both master manifests reference the media files from both
     * pipelines.

DISABLED: The master manifest (.m3u8 file) for each pipeline
     * includes information about its own pipeline only.

For an HLS output group with
     * MediaPackage as the destination, the DISABLED behavior is always followed.
     * MediaPackage regenerates the manifests it serves to players so a redundant
     * manifest from MediaLive is irrelevant.
     */
    inline const HlsRedundantManifest& GetRedundantManifest() const{ return m_redundantManifest; }
    inline bool RedundantManifestHasBeenSet() const { return m_redundantManifestHasBeenSet; }
    inline void SetRedundantManifest(const HlsRedundantManifest& value) { m_redundantManifestHasBeenSet = true; m_redundantManifest = value; }
    inline void SetRedundantManifest(HlsRedundantManifest&& value) { m_redundantManifestHasBeenSet = true; m_redundantManifest = std::move(value); }
    inline HlsGroupSettings& WithRedundantManifest(const HlsRedundantManifest& value) { SetRedundantManifest(value); return *this;}
    inline HlsGroupSettings& WithRedundantManifest(HlsRedundantManifest&& value) { SetRedundantManifest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Length of MPEG-2 Transport Stream segments to create in seconds. Note that
     * segments will end on the next keyframe after this duration, so actual segment
     * length may be longer.
     */
    inline int GetSegmentLength() const{ return m_segmentLength; }
    inline bool SegmentLengthHasBeenSet() const { return m_segmentLengthHasBeenSet; }
    inline void SetSegmentLength(int value) { m_segmentLengthHasBeenSet = true; m_segmentLength = value; }
    inline HlsGroupSettings& WithSegmentLength(int value) { SetSegmentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * useInputSegmentation has been deprecated. The configured segment size is always
     * used.
     */
    inline const HlsSegmentationMode& GetSegmentationMode() const{ return m_segmentationMode; }
    inline bool SegmentationModeHasBeenSet() const { return m_segmentationModeHasBeenSet; }
    inline void SetSegmentationMode(const HlsSegmentationMode& value) { m_segmentationModeHasBeenSet = true; m_segmentationMode = value; }
    inline void SetSegmentationMode(HlsSegmentationMode&& value) { m_segmentationModeHasBeenSet = true; m_segmentationMode = std::move(value); }
    inline HlsGroupSettings& WithSegmentationMode(const HlsSegmentationMode& value) { SetSegmentationMode(value); return *this;}
    inline HlsGroupSettings& WithSegmentationMode(HlsSegmentationMode&& value) { SetSegmentationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Number of segments to write to a subdirectory before starting a new one.
     * directoryStructure must be subdirectoryPerStream for this setting to have an
     * effect.
     */
    inline int GetSegmentsPerSubdirectory() const{ return m_segmentsPerSubdirectory; }
    inline bool SegmentsPerSubdirectoryHasBeenSet() const { return m_segmentsPerSubdirectoryHasBeenSet; }
    inline void SetSegmentsPerSubdirectory(int value) { m_segmentsPerSubdirectoryHasBeenSet = true; m_segmentsPerSubdirectory = value; }
    inline HlsGroupSettings& WithSegmentsPerSubdirectory(int value) { SetSegmentsPerSubdirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline const HlsStreamInfResolution& GetStreamInfResolution() const{ return m_streamInfResolution; }
    inline bool StreamInfResolutionHasBeenSet() const { return m_streamInfResolutionHasBeenSet; }
    inline void SetStreamInfResolution(const HlsStreamInfResolution& value) { m_streamInfResolutionHasBeenSet = true; m_streamInfResolution = value; }
    inline void SetStreamInfResolution(HlsStreamInfResolution&& value) { m_streamInfResolutionHasBeenSet = true; m_streamInfResolution = std::move(value); }
    inline HlsGroupSettings& WithStreamInfResolution(const HlsStreamInfResolution& value) { SetStreamInfResolution(value); return *this;}
    inline HlsGroupSettings& WithStreamInfResolution(HlsStreamInfResolution&& value) { SetStreamInfResolution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Indicates ID3 frame that has the timecode.
     */
    inline const HlsTimedMetadataId3Frame& GetTimedMetadataId3Frame() const{ return m_timedMetadataId3Frame; }
    inline bool TimedMetadataId3FrameHasBeenSet() const { return m_timedMetadataId3FrameHasBeenSet; }
    inline void SetTimedMetadataId3Frame(const HlsTimedMetadataId3Frame& value) { m_timedMetadataId3FrameHasBeenSet = true; m_timedMetadataId3Frame = value; }
    inline void SetTimedMetadataId3Frame(HlsTimedMetadataId3Frame&& value) { m_timedMetadataId3FrameHasBeenSet = true; m_timedMetadataId3Frame = std::move(value); }
    inline HlsGroupSettings& WithTimedMetadataId3Frame(const HlsTimedMetadataId3Frame& value) { SetTimedMetadataId3Frame(value); return *this;}
    inline HlsGroupSettings& WithTimedMetadataId3Frame(HlsTimedMetadataId3Frame&& value) { SetTimedMetadataId3Frame(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Timed Metadata interval in seconds.
     */
    inline int GetTimedMetadataId3Period() const{ return m_timedMetadataId3Period; }
    inline bool TimedMetadataId3PeriodHasBeenSet() const { return m_timedMetadataId3PeriodHasBeenSet; }
    inline void SetTimedMetadataId3Period(int value) { m_timedMetadataId3PeriodHasBeenSet = true; m_timedMetadataId3Period = value; }
    inline HlsGroupSettings& WithTimedMetadataId3Period(int value) { SetTimedMetadataId3Period(value); return *this;}
    ///@}

    ///@{
    /**
     * Provides an extra millisecond delta offset to fine tune the timestamps.
     */
    inline int GetTimestampDeltaMilliseconds() const{ return m_timestampDeltaMilliseconds; }
    inline bool TimestampDeltaMillisecondsHasBeenSet() const { return m_timestampDeltaMillisecondsHasBeenSet; }
    inline void SetTimestampDeltaMilliseconds(int value) { m_timestampDeltaMillisecondsHasBeenSet = true; m_timestampDeltaMilliseconds = value; }
    inline HlsGroupSettings& WithTimestampDeltaMilliseconds(int value) { SetTimestampDeltaMilliseconds(value); return *this;}
    ///@}

    ///@{
    /**
     * SEGMENTED_FILES: Emit the program as segments - multiple .ts media
     * files.

SINGLE_FILE: Applies only if Mode field is VOD. Emit the program as a
     * single .ts media file. The media manifest includes #EXT-X-BYTERANGE tags to
     * index segments for playback. A typical use for this value is when sending the
     * output to AWS Elemental MediaConvert, which can accept only a single media file.
     * Playback while the channel is running is not guaranteed due to HTTP server
     * caching.
     */
    inline const HlsTsFileMode& GetTsFileMode() const{ return m_tsFileMode; }
    inline bool TsFileModeHasBeenSet() const { return m_tsFileModeHasBeenSet; }
    inline void SetTsFileMode(const HlsTsFileMode& value) { m_tsFileModeHasBeenSet = true; m_tsFileMode = value; }
    inline void SetTsFileMode(HlsTsFileMode&& value) { m_tsFileModeHasBeenSet = true; m_tsFileMode = std::move(value); }
    inline HlsGroupSettings& WithTsFileMode(const HlsTsFileMode& value) { SetTsFileMode(value); return *this;}
    inline HlsGroupSettings& WithTsFileMode(HlsTsFileMode&& value) { SetTsFileMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HlsAdMarkers> m_adMarkers;
    bool m_adMarkersHasBeenSet = false;

    Aws::String m_baseUrlContent;
    bool m_baseUrlContentHasBeenSet = false;

    Aws::String m_baseUrlContent1;
    bool m_baseUrlContent1HasBeenSet = false;

    Aws::String m_baseUrlManifest;
    bool m_baseUrlManifestHasBeenSet = false;

    Aws::String m_baseUrlManifest1;
    bool m_baseUrlManifest1HasBeenSet = false;

    Aws::Vector<CaptionLanguageMapping> m_captionLanguageMappings;
    bool m_captionLanguageMappingsHasBeenSet = false;

    HlsCaptionLanguageSetting m_captionLanguageSetting;
    bool m_captionLanguageSettingHasBeenSet = false;

    HlsClientCache m_clientCache;
    bool m_clientCacheHasBeenSet = false;

    HlsCodecSpecification m_codecSpecification;
    bool m_codecSpecificationHasBeenSet = false;

    Aws::String m_constantIv;
    bool m_constantIvHasBeenSet = false;

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;

    HlsDirectoryStructure m_directoryStructure;
    bool m_directoryStructureHasBeenSet = false;

    HlsDiscontinuityTags m_discontinuityTags;
    bool m_discontinuityTagsHasBeenSet = false;

    HlsEncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    HlsCdnSettings m_hlsCdnSettings;
    bool m_hlsCdnSettingsHasBeenSet = false;

    HlsId3SegmentTaggingState m_hlsId3SegmentTagging;
    bool m_hlsId3SegmentTaggingHasBeenSet = false;

    IFrameOnlyPlaylistType m_iFrameOnlyPlaylists;
    bool m_iFrameOnlyPlaylistsHasBeenSet = false;

    HlsIncompleteSegmentBehavior m_incompleteSegmentBehavior;
    bool m_incompleteSegmentBehaviorHasBeenSet = false;

    int m_indexNSegments;
    bool m_indexNSegmentsHasBeenSet = false;

    InputLossActionForHlsOut m_inputLossAction;
    bool m_inputLossActionHasBeenSet = false;

    HlsIvInManifest m_ivInManifest;
    bool m_ivInManifestHasBeenSet = false;

    HlsIvSource m_ivSource;
    bool m_ivSourceHasBeenSet = false;

    int m_keepSegments;
    bool m_keepSegmentsHasBeenSet = false;

    Aws::String m_keyFormat;
    bool m_keyFormatHasBeenSet = false;

    Aws::String m_keyFormatVersions;
    bool m_keyFormatVersionsHasBeenSet = false;

    KeyProviderSettings m_keyProviderSettings;
    bool m_keyProviderSettingsHasBeenSet = false;

    HlsManifestCompression m_manifestCompression;
    bool m_manifestCompressionHasBeenSet = false;

    HlsManifestDurationFormat m_manifestDurationFormat;
    bool m_manifestDurationFormatHasBeenSet = false;

    int m_minSegmentLength;
    bool m_minSegmentLengthHasBeenSet = false;

    HlsMode m_mode;
    bool m_modeHasBeenSet = false;

    HlsOutputSelection m_outputSelection;
    bool m_outputSelectionHasBeenSet = false;

    HlsProgramDateTime m_programDateTime;
    bool m_programDateTimeHasBeenSet = false;

    HlsProgramDateTimeClock m_programDateTimeClock;
    bool m_programDateTimeClockHasBeenSet = false;

    int m_programDateTimePeriod;
    bool m_programDateTimePeriodHasBeenSet = false;

    HlsRedundantManifest m_redundantManifest;
    bool m_redundantManifestHasBeenSet = false;

    int m_segmentLength;
    bool m_segmentLengthHasBeenSet = false;

    HlsSegmentationMode m_segmentationMode;
    bool m_segmentationModeHasBeenSet = false;

    int m_segmentsPerSubdirectory;
    bool m_segmentsPerSubdirectoryHasBeenSet = false;

    HlsStreamInfResolution m_streamInfResolution;
    bool m_streamInfResolutionHasBeenSet = false;

    HlsTimedMetadataId3Frame m_timedMetadataId3Frame;
    bool m_timedMetadataId3FrameHasBeenSet = false;

    int m_timedMetadataId3Period;
    bool m_timedMetadataId3PeriodHasBeenSet = false;

    int m_timestampDeltaMilliseconds;
    bool m_timestampDeltaMillisecondsHasBeenSet = false;

    HlsTsFileMode m_tsFileMode;
    bool m_tsFileModeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
