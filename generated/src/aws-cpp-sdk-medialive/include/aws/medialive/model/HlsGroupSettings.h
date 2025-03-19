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
    AWS_MEDIALIVE_API HlsGroupSettings() = default;
    AWS_MEDIALIVE_API HlsGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API HlsGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Choose one or more ad marker types to pass SCTE35 signals through to this group
     * of Apple HLS outputs.
     */
    inline const Aws::Vector<HlsAdMarkers>& GetAdMarkers() const { return m_adMarkers; }
    inline bool AdMarkersHasBeenSet() const { return m_adMarkersHasBeenSet; }
    template<typename AdMarkersT = Aws::Vector<HlsAdMarkers>>
    void SetAdMarkers(AdMarkersT&& value) { m_adMarkersHasBeenSet = true; m_adMarkers = std::forward<AdMarkersT>(value); }
    template<typename AdMarkersT = Aws::Vector<HlsAdMarkers>>
    HlsGroupSettings& WithAdMarkers(AdMarkersT&& value) { SetAdMarkers(std::forward<AdMarkersT>(value)); return *this;}
    inline HlsGroupSettings& AddAdMarkers(HlsAdMarkers value) { m_adMarkersHasBeenSet = true; m_adMarkers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline const Aws::String& GetBaseUrlContent() const { return m_baseUrlContent; }
    inline bool BaseUrlContentHasBeenSet() const { return m_baseUrlContentHasBeenSet; }
    template<typename BaseUrlContentT = Aws::String>
    void SetBaseUrlContent(BaseUrlContentT&& value) { m_baseUrlContentHasBeenSet = true; m_baseUrlContent = std::forward<BaseUrlContentT>(value); }
    template<typename BaseUrlContentT = Aws::String>
    HlsGroupSettings& WithBaseUrlContent(BaseUrlContentT&& value) { SetBaseUrlContent(std::forward<BaseUrlContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. One value per output group.

This field is required only if you are
     * completing Base URL content A, and the downstream system has notified you that
     * the media files for pipeline 1 of all outputs are in a location different from
     * the media files for pipeline 0.
     */
    inline const Aws::String& GetBaseUrlContent1() const { return m_baseUrlContent1; }
    inline bool BaseUrlContent1HasBeenSet() const { return m_baseUrlContent1HasBeenSet; }
    template<typename BaseUrlContent1T = Aws::String>
    void SetBaseUrlContent1(BaseUrlContent1T&& value) { m_baseUrlContent1HasBeenSet = true; m_baseUrlContent1 = std::forward<BaseUrlContent1T>(value); }
    template<typename BaseUrlContent1T = Aws::String>
    HlsGroupSettings& WithBaseUrlContent1(BaseUrlContent1T&& value) { SetBaseUrlContent1(std::forward<BaseUrlContent1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline const Aws::String& GetBaseUrlManifest() const { return m_baseUrlManifest; }
    inline bool BaseUrlManifestHasBeenSet() const { return m_baseUrlManifestHasBeenSet; }
    template<typename BaseUrlManifestT = Aws::String>
    void SetBaseUrlManifest(BaseUrlManifestT&& value) { m_baseUrlManifestHasBeenSet = true; m_baseUrlManifest = std::forward<BaseUrlManifestT>(value); }
    template<typename BaseUrlManifestT = Aws::String>
    HlsGroupSettings& WithBaseUrlManifest(BaseUrlManifestT&& value) { SetBaseUrlManifest(std::forward<BaseUrlManifestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. One value per output group.

Complete this field only if you are
     * completing Base URL manifest A, and the downstream system has notified you that
     * the child manifest files for pipeline 1 of all outputs are in a location
     * different from the child manifest files for pipeline 0.
     */
    inline const Aws::String& GetBaseUrlManifest1() const { return m_baseUrlManifest1; }
    inline bool BaseUrlManifest1HasBeenSet() const { return m_baseUrlManifest1HasBeenSet; }
    template<typename BaseUrlManifest1T = Aws::String>
    void SetBaseUrlManifest1(BaseUrlManifest1T&& value) { m_baseUrlManifest1HasBeenSet = true; m_baseUrlManifest1 = std::forward<BaseUrlManifest1T>(value); }
    template<typename BaseUrlManifest1T = Aws::String>
    HlsGroupSettings& WithBaseUrlManifest1(BaseUrlManifest1T&& value) { SetBaseUrlManifest1(std::forward<BaseUrlManifest1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Mapping of up to 4 caption channels to caption languages.  Is only meaningful if
     * captionLanguageSetting is set to "insert".
     */
    inline const Aws::Vector<CaptionLanguageMapping>& GetCaptionLanguageMappings() const { return m_captionLanguageMappings; }
    inline bool CaptionLanguageMappingsHasBeenSet() const { return m_captionLanguageMappingsHasBeenSet; }
    template<typename CaptionLanguageMappingsT = Aws::Vector<CaptionLanguageMapping>>
    void SetCaptionLanguageMappings(CaptionLanguageMappingsT&& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings = std::forward<CaptionLanguageMappingsT>(value); }
    template<typename CaptionLanguageMappingsT = Aws::Vector<CaptionLanguageMapping>>
    HlsGroupSettings& WithCaptionLanguageMappings(CaptionLanguageMappingsT&& value) { SetCaptionLanguageMappings(std::forward<CaptionLanguageMappingsT>(value)); return *this;}
    template<typename CaptionLanguageMappingsT = CaptionLanguageMapping>
    HlsGroupSettings& AddCaptionLanguageMappings(CaptionLanguageMappingsT&& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings.emplace_back(std::forward<CaptionLanguageMappingsT>(value)); return *this; }
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
    inline HlsCaptionLanguageSetting GetCaptionLanguageSetting() const { return m_captionLanguageSetting; }
    inline bool CaptionLanguageSettingHasBeenSet() const { return m_captionLanguageSettingHasBeenSet; }
    inline void SetCaptionLanguageSetting(HlsCaptionLanguageSetting value) { m_captionLanguageSettingHasBeenSet = true; m_captionLanguageSetting = value; }
    inline HlsGroupSettings& WithCaptionLanguageSetting(HlsCaptionLanguageSetting value) { SetCaptionLanguageSetting(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to "disabled", sets the #EXT-X-ALLOW-CACHE:no tag in the manifest,
     * which prevents clients from saving media segments for later replay.
     */
    inline HlsClientCache GetClientCache() const { return m_clientCache; }
    inline bool ClientCacheHasBeenSet() const { return m_clientCacheHasBeenSet; }
    inline void SetClientCache(HlsClientCache value) { m_clientCacheHasBeenSet = true; m_clientCache = value; }
    inline HlsGroupSettings& WithClientCache(HlsClientCache value) { SetClientCache(value); return *this;}
    ///@}

    ///@{
    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline HlsCodecSpecification GetCodecSpecification() const { return m_codecSpecification; }
    inline bool CodecSpecificationHasBeenSet() const { return m_codecSpecificationHasBeenSet; }
    inline void SetCodecSpecification(HlsCodecSpecification value) { m_codecSpecificationHasBeenSet = true; m_codecSpecification = value; }
    inline HlsGroupSettings& WithCodecSpecification(HlsCodecSpecification value) { SetCodecSpecification(value); return *this;}
    ///@}

    ///@{
    /**
     * For use with encryptionType. This is a 128-bit, 16-byte hex value represented by
     * a 32-character text string. If ivSource is set to "explicit" then this parameter
     * is required and is used as the IV for encryption.
     */
    inline const Aws::String& GetConstantIv() const { return m_constantIv; }
    inline bool ConstantIvHasBeenSet() const { return m_constantIvHasBeenSet; }
    template<typename ConstantIvT = Aws::String>
    void SetConstantIv(ConstantIvT&& value) { m_constantIvHasBeenSet = true; m_constantIv = std::forward<ConstantIvT>(value); }
    template<typename ConstantIvT = Aws::String>
    HlsGroupSettings& WithConstantIv(ConstantIvT&& value) { SetConstantIv(std::forward<ConstantIvT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A directory or HTTP destination for the HLS segments, manifest files, and
     * encryption keys (if enabled).
     */
    inline const OutputLocationRef& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = OutputLocationRef>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = OutputLocationRef>
    HlsGroupSettings& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Place segments in subdirectories.
     */
    inline HlsDirectoryStructure GetDirectoryStructure() const { return m_directoryStructure; }
    inline bool DirectoryStructureHasBeenSet() const { return m_directoryStructureHasBeenSet; }
    inline void SetDirectoryStructure(HlsDirectoryStructure value) { m_directoryStructureHasBeenSet = true; m_directoryStructure = value; }
    inline HlsGroupSettings& WithDirectoryStructure(HlsDirectoryStructure value) { SetDirectoryStructure(value); return *this;}
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
    inline HlsDiscontinuityTags GetDiscontinuityTags() const { return m_discontinuityTags; }
    inline bool DiscontinuityTagsHasBeenSet() const { return m_discontinuityTagsHasBeenSet; }
    inline void SetDiscontinuityTags(HlsDiscontinuityTags value) { m_discontinuityTagsHasBeenSet = true; m_discontinuityTags = value; }
    inline HlsGroupSettings& WithDiscontinuityTags(HlsDiscontinuityTags value) { SetDiscontinuityTags(value); return *this;}
    ///@}

    ///@{
    /**
     * Encrypts the segments with the given encryption scheme.  Exclude this parameter
     * if no encryption is desired.
     */
    inline HlsEncryptionType GetEncryptionType() const { return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(HlsEncryptionType value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline HlsGroupSettings& WithEncryptionType(HlsEncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * Parameters that control interactions with the CDN.
     */
    inline const HlsCdnSettings& GetHlsCdnSettings() const { return m_hlsCdnSettings; }
    inline bool HlsCdnSettingsHasBeenSet() const { return m_hlsCdnSettingsHasBeenSet; }
    template<typename HlsCdnSettingsT = HlsCdnSettings>
    void SetHlsCdnSettings(HlsCdnSettingsT&& value) { m_hlsCdnSettingsHasBeenSet = true; m_hlsCdnSettings = std::forward<HlsCdnSettingsT>(value); }
    template<typename HlsCdnSettingsT = HlsCdnSettings>
    HlsGroupSettings& WithHlsCdnSettings(HlsCdnSettingsT&& value) { SetHlsCdnSettings(std::forward<HlsCdnSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * State of HLS ID3 Segment Tagging
     */
    inline HlsId3SegmentTaggingState GetHlsId3SegmentTagging() const { return m_hlsId3SegmentTagging; }
    inline bool HlsId3SegmentTaggingHasBeenSet() const { return m_hlsId3SegmentTaggingHasBeenSet; }
    inline void SetHlsId3SegmentTagging(HlsId3SegmentTaggingState value) { m_hlsId3SegmentTaggingHasBeenSet = true; m_hlsId3SegmentTagging = value; }
    inline HlsGroupSettings& WithHlsId3SegmentTagging(HlsId3SegmentTaggingState value) { SetHlsId3SegmentTagging(value); return *this;}
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
    inline IFrameOnlyPlaylistType GetIFrameOnlyPlaylists() const { return m_iFrameOnlyPlaylists; }
    inline bool IFrameOnlyPlaylistsHasBeenSet() const { return m_iFrameOnlyPlaylistsHasBeenSet; }
    inline void SetIFrameOnlyPlaylists(IFrameOnlyPlaylistType value) { m_iFrameOnlyPlaylistsHasBeenSet = true; m_iFrameOnlyPlaylists = value; }
    inline HlsGroupSettings& WithIFrameOnlyPlaylists(IFrameOnlyPlaylistType value) { SetIFrameOnlyPlaylists(value); return *this;}
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
    inline HlsIncompleteSegmentBehavior GetIncompleteSegmentBehavior() const { return m_incompleteSegmentBehavior; }
    inline bool IncompleteSegmentBehaviorHasBeenSet() const { return m_incompleteSegmentBehaviorHasBeenSet; }
    inline void SetIncompleteSegmentBehavior(HlsIncompleteSegmentBehavior value) { m_incompleteSegmentBehaviorHasBeenSet = true; m_incompleteSegmentBehavior = value; }
    inline HlsGroupSettings& WithIncompleteSegmentBehavior(HlsIncompleteSegmentBehavior value) { SetIncompleteSegmentBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * Applies only if Mode field is LIVE.

Specifies the maximum number of segments in
     * the media manifest file. After this maximum, older segments are removed from the
     * media manifest. This number must be smaller than the number in the Keep Segments
     * field.
     */
    inline int GetIndexNSegments() const { return m_indexNSegments; }
    inline bool IndexNSegmentsHasBeenSet() const { return m_indexNSegmentsHasBeenSet; }
    inline void SetIndexNSegments(int value) { m_indexNSegmentsHasBeenSet = true; m_indexNSegments = value; }
    inline HlsGroupSettings& WithIndexNSegments(int value) { SetIndexNSegments(value); return *this;}
    ///@}

    ///@{
    /**
     * Parameter that control output group behavior on input loss.
     */
    inline InputLossActionForHlsOut GetInputLossAction() const { return m_inputLossAction; }
    inline bool InputLossActionHasBeenSet() const { return m_inputLossActionHasBeenSet; }
    inline void SetInputLossAction(InputLossActionForHlsOut value) { m_inputLossActionHasBeenSet = true; m_inputLossAction = value; }
    inline HlsGroupSettings& WithInputLossAction(InputLossActionForHlsOut value) { SetInputLossAction(value); return *this;}
    ///@}

    ///@{
    /**
     * For use with encryptionType. The IV (Initialization Vector) is a 128-bit number
     * used in conjunction with the key for encrypting blocks. If set to "include", IV
     * is listed in the manifest, otherwise the IV is not in the manifest.
     */
    inline HlsIvInManifest GetIvInManifest() const { return m_ivInManifest; }
    inline bool IvInManifestHasBeenSet() const { return m_ivInManifestHasBeenSet; }
    inline void SetIvInManifest(HlsIvInManifest value) { m_ivInManifestHasBeenSet = true; m_ivInManifest = value; }
    inline HlsGroupSettings& WithIvInManifest(HlsIvInManifest value) { SetIvInManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * For use with encryptionType. The IV (Initialization Vector) is a 128-bit number
     * used in conjunction with the key for encrypting blocks. If this setting is
     * "followsSegmentNumber", it will cause the IV to change every segment (to match
     * the segment number). If this is set to "explicit", you must enter a constantIv
     * value.
     */
    inline HlsIvSource GetIvSource() const { return m_ivSource; }
    inline bool IvSourceHasBeenSet() const { return m_ivSourceHasBeenSet; }
    inline void SetIvSource(HlsIvSource value) { m_ivSourceHasBeenSet = true; m_ivSource = value; }
    inline HlsGroupSettings& WithIvSource(HlsIvSource value) { SetIvSource(value); return *this;}
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
    inline int GetKeepSegments() const { return m_keepSegments; }
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
    inline const Aws::String& GetKeyFormat() const { return m_keyFormat; }
    inline bool KeyFormatHasBeenSet() const { return m_keyFormatHasBeenSet; }
    template<typename KeyFormatT = Aws::String>
    void SetKeyFormat(KeyFormatT&& value) { m_keyFormatHasBeenSet = true; m_keyFormat = std::forward<KeyFormatT>(value); }
    template<typename KeyFormatT = Aws::String>
    HlsGroupSettings& WithKeyFormat(KeyFormatT&& value) { SetKeyFormat(std::forward<KeyFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Either a single positive integer version value or a slash delimited list of
     * version values (1/2/3).
     */
    inline const Aws::String& GetKeyFormatVersions() const { return m_keyFormatVersions; }
    inline bool KeyFormatVersionsHasBeenSet() const { return m_keyFormatVersionsHasBeenSet; }
    template<typename KeyFormatVersionsT = Aws::String>
    void SetKeyFormatVersions(KeyFormatVersionsT&& value) { m_keyFormatVersionsHasBeenSet = true; m_keyFormatVersions = std::forward<KeyFormatVersionsT>(value); }
    template<typename KeyFormatVersionsT = Aws::String>
    HlsGroupSettings& WithKeyFormatVersions(KeyFormatVersionsT&& value) { SetKeyFormatVersions(std::forward<KeyFormatVersionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The key provider settings.
     */
    inline const KeyProviderSettings& GetKeyProviderSettings() const { return m_keyProviderSettings; }
    inline bool KeyProviderSettingsHasBeenSet() const { return m_keyProviderSettingsHasBeenSet; }
    template<typename KeyProviderSettingsT = KeyProviderSettings>
    void SetKeyProviderSettings(KeyProviderSettingsT&& value) { m_keyProviderSettingsHasBeenSet = true; m_keyProviderSettings = std::forward<KeyProviderSettingsT>(value); }
    template<typename KeyProviderSettingsT = KeyProviderSettings>
    HlsGroupSettings& WithKeyProviderSettings(KeyProviderSettingsT&& value) { SetKeyProviderSettings(std::forward<KeyProviderSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * When set to gzip, compresses HLS playlist.
     */
    inline HlsManifestCompression GetManifestCompression() const { return m_manifestCompression; }
    inline bool ManifestCompressionHasBeenSet() const { return m_manifestCompressionHasBeenSet; }
    inline void SetManifestCompression(HlsManifestCompression value) { m_manifestCompressionHasBeenSet = true; m_manifestCompression = value; }
    inline HlsGroupSettings& WithManifestCompression(HlsManifestCompression value) { SetManifestCompression(value); return *this;}
    ///@}

    ///@{
    /**
     * Indicates whether the output manifest should use floating point or integer
     * values for segment duration.
     */
    inline HlsManifestDurationFormat GetManifestDurationFormat() const { return m_manifestDurationFormat; }
    inline bool ManifestDurationFormatHasBeenSet() const { return m_manifestDurationFormatHasBeenSet; }
    inline void SetManifestDurationFormat(HlsManifestDurationFormat value) { m_manifestDurationFormatHasBeenSet = true; m_manifestDurationFormat = value; }
    inline HlsGroupSettings& WithManifestDurationFormat(HlsManifestDurationFormat value) { SetManifestDurationFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * Minimum length of MPEG-2 Transport Stream segments in seconds. When set, minimum
     * segment length is enforced by looking ahead and back within the specified range
     * for a nearby avail and extending the segment size if needed.
     */
    inline int GetMinSegmentLength() const { return m_minSegmentLength; }
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
    inline HlsMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(HlsMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline HlsGroupSettings& WithMode(HlsMode value) { SetMode(value); return *this;}
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
    inline HlsOutputSelection GetOutputSelection() const { return m_outputSelection; }
    inline bool OutputSelectionHasBeenSet() const { return m_outputSelectionHasBeenSet; }
    inline void SetOutputSelection(HlsOutputSelection value) { m_outputSelectionHasBeenSet = true; m_outputSelection = value; }
    inline HlsGroupSettings& WithOutputSelection(HlsOutputSelection value) { SetOutputSelection(value); return *this;}
    ///@}

    ///@{
    /**
     * Includes or excludes EXT-X-PROGRAM-DATE-TIME tag in .m3u8 manifest files. The
     * value is calculated using the program date time clock.
     */
    inline HlsProgramDateTime GetProgramDateTime() const { return m_programDateTime; }
    inline bool ProgramDateTimeHasBeenSet() const { return m_programDateTimeHasBeenSet; }
    inline void SetProgramDateTime(HlsProgramDateTime value) { m_programDateTimeHasBeenSet = true; m_programDateTime = value; }
    inline HlsGroupSettings& WithProgramDateTime(HlsProgramDateTime value) { SetProgramDateTime(value); return *this;}
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
    inline HlsProgramDateTimeClock GetProgramDateTimeClock() const { return m_programDateTimeClock; }
    inline bool ProgramDateTimeClockHasBeenSet() const { return m_programDateTimeClockHasBeenSet; }
    inline void SetProgramDateTimeClock(HlsProgramDateTimeClock value) { m_programDateTimeClockHasBeenSet = true; m_programDateTimeClock = value; }
    inline HlsGroupSettings& WithProgramDateTimeClock(HlsProgramDateTimeClock value) { SetProgramDateTimeClock(value); return *this;}
    ///@}

    ///@{
    /**
     * Period of insertion of EXT-X-PROGRAM-DATE-TIME entry, in seconds.
     */
    inline int GetProgramDateTimePeriod() const { return m_programDateTimePeriod; }
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
    inline HlsRedundantManifest GetRedundantManifest() const { return m_redundantManifest; }
    inline bool RedundantManifestHasBeenSet() const { return m_redundantManifestHasBeenSet; }
    inline void SetRedundantManifest(HlsRedundantManifest value) { m_redundantManifestHasBeenSet = true; m_redundantManifest = value; }
    inline HlsGroupSettings& WithRedundantManifest(HlsRedundantManifest value) { SetRedundantManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * Length of MPEG-2 Transport Stream segments to create in seconds. Note that
     * segments will end on the next keyframe after this duration, so actual segment
     * length may be longer.
     */
    inline int GetSegmentLength() const { return m_segmentLength; }
    inline bool SegmentLengthHasBeenSet() const { return m_segmentLengthHasBeenSet; }
    inline void SetSegmentLength(int value) { m_segmentLengthHasBeenSet = true; m_segmentLength = value; }
    inline HlsGroupSettings& WithSegmentLength(int value) { SetSegmentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * useInputSegmentation has been deprecated. The configured segment size is always
     * used.
     */
    inline HlsSegmentationMode GetSegmentationMode() const { return m_segmentationMode; }
    inline bool SegmentationModeHasBeenSet() const { return m_segmentationModeHasBeenSet; }
    inline void SetSegmentationMode(HlsSegmentationMode value) { m_segmentationModeHasBeenSet = true; m_segmentationMode = value; }
    inline HlsGroupSettings& WithSegmentationMode(HlsSegmentationMode value) { SetSegmentationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of segments to write to a subdirectory before starting a new one.
     * directoryStructure must be subdirectoryPerStream for this setting to have an
     * effect.
     */
    inline int GetSegmentsPerSubdirectory() const { return m_segmentsPerSubdirectory; }
    inline bool SegmentsPerSubdirectoryHasBeenSet() const { return m_segmentsPerSubdirectoryHasBeenSet; }
    inline void SetSegmentsPerSubdirectory(int value) { m_segmentsPerSubdirectoryHasBeenSet = true; m_segmentsPerSubdirectory = value; }
    inline HlsGroupSettings& WithSegmentsPerSubdirectory(int value) { SetSegmentsPerSubdirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline HlsStreamInfResolution GetStreamInfResolution() const { return m_streamInfResolution; }
    inline bool StreamInfResolutionHasBeenSet() const { return m_streamInfResolutionHasBeenSet; }
    inline void SetStreamInfResolution(HlsStreamInfResolution value) { m_streamInfResolutionHasBeenSet = true; m_streamInfResolution = value; }
    inline HlsGroupSettings& WithStreamInfResolution(HlsStreamInfResolution value) { SetStreamInfResolution(value); return *this;}
    ///@}

    ///@{
    /**
     * Indicates ID3 frame that has the timecode.
     */
    inline HlsTimedMetadataId3Frame GetTimedMetadataId3Frame() const { return m_timedMetadataId3Frame; }
    inline bool TimedMetadataId3FrameHasBeenSet() const { return m_timedMetadataId3FrameHasBeenSet; }
    inline void SetTimedMetadataId3Frame(HlsTimedMetadataId3Frame value) { m_timedMetadataId3FrameHasBeenSet = true; m_timedMetadataId3Frame = value; }
    inline HlsGroupSettings& WithTimedMetadataId3Frame(HlsTimedMetadataId3Frame value) { SetTimedMetadataId3Frame(value); return *this;}
    ///@}

    ///@{
    /**
     * Timed Metadata interval in seconds.
     */
    inline int GetTimedMetadataId3Period() const { return m_timedMetadataId3Period; }
    inline bool TimedMetadataId3PeriodHasBeenSet() const { return m_timedMetadataId3PeriodHasBeenSet; }
    inline void SetTimedMetadataId3Period(int value) { m_timedMetadataId3PeriodHasBeenSet = true; m_timedMetadataId3Period = value; }
    inline HlsGroupSettings& WithTimedMetadataId3Period(int value) { SetTimedMetadataId3Period(value); return *this;}
    ///@}

    ///@{
    /**
     * Provides an extra millisecond delta offset to fine tune the timestamps.
     */
    inline int GetTimestampDeltaMilliseconds() const { return m_timestampDeltaMilliseconds; }
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
    inline HlsTsFileMode GetTsFileMode() const { return m_tsFileMode; }
    inline bool TsFileModeHasBeenSet() const { return m_tsFileModeHasBeenSet; }
    inline void SetTsFileMode(HlsTsFileMode value) { m_tsFileModeHasBeenSet = true; m_tsFileMode = value; }
    inline HlsGroupSettings& WithTsFileMode(HlsTsFileMode value) { SetTsFileMode(value); return *this;}
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

    HlsCaptionLanguageSetting m_captionLanguageSetting{HlsCaptionLanguageSetting::NOT_SET};
    bool m_captionLanguageSettingHasBeenSet = false;

    HlsClientCache m_clientCache{HlsClientCache::NOT_SET};
    bool m_clientCacheHasBeenSet = false;

    HlsCodecSpecification m_codecSpecification{HlsCodecSpecification::NOT_SET};
    bool m_codecSpecificationHasBeenSet = false;

    Aws::String m_constantIv;
    bool m_constantIvHasBeenSet = false;

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;

    HlsDirectoryStructure m_directoryStructure{HlsDirectoryStructure::NOT_SET};
    bool m_directoryStructureHasBeenSet = false;

    HlsDiscontinuityTags m_discontinuityTags{HlsDiscontinuityTags::NOT_SET};
    bool m_discontinuityTagsHasBeenSet = false;

    HlsEncryptionType m_encryptionType{HlsEncryptionType::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    HlsCdnSettings m_hlsCdnSettings;
    bool m_hlsCdnSettingsHasBeenSet = false;

    HlsId3SegmentTaggingState m_hlsId3SegmentTagging{HlsId3SegmentTaggingState::NOT_SET};
    bool m_hlsId3SegmentTaggingHasBeenSet = false;

    IFrameOnlyPlaylistType m_iFrameOnlyPlaylists{IFrameOnlyPlaylistType::NOT_SET};
    bool m_iFrameOnlyPlaylistsHasBeenSet = false;

    HlsIncompleteSegmentBehavior m_incompleteSegmentBehavior{HlsIncompleteSegmentBehavior::NOT_SET};
    bool m_incompleteSegmentBehaviorHasBeenSet = false;

    int m_indexNSegments{0};
    bool m_indexNSegmentsHasBeenSet = false;

    InputLossActionForHlsOut m_inputLossAction{InputLossActionForHlsOut::NOT_SET};
    bool m_inputLossActionHasBeenSet = false;

    HlsIvInManifest m_ivInManifest{HlsIvInManifest::NOT_SET};
    bool m_ivInManifestHasBeenSet = false;

    HlsIvSource m_ivSource{HlsIvSource::NOT_SET};
    bool m_ivSourceHasBeenSet = false;

    int m_keepSegments{0};
    bool m_keepSegmentsHasBeenSet = false;

    Aws::String m_keyFormat;
    bool m_keyFormatHasBeenSet = false;

    Aws::String m_keyFormatVersions;
    bool m_keyFormatVersionsHasBeenSet = false;

    KeyProviderSettings m_keyProviderSettings;
    bool m_keyProviderSettingsHasBeenSet = false;

    HlsManifestCompression m_manifestCompression{HlsManifestCompression::NOT_SET};
    bool m_manifestCompressionHasBeenSet = false;

    HlsManifestDurationFormat m_manifestDurationFormat{HlsManifestDurationFormat::NOT_SET};
    bool m_manifestDurationFormatHasBeenSet = false;

    int m_minSegmentLength{0};
    bool m_minSegmentLengthHasBeenSet = false;

    HlsMode m_mode{HlsMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    HlsOutputSelection m_outputSelection{HlsOutputSelection::NOT_SET};
    bool m_outputSelectionHasBeenSet = false;

    HlsProgramDateTime m_programDateTime{HlsProgramDateTime::NOT_SET};
    bool m_programDateTimeHasBeenSet = false;

    HlsProgramDateTimeClock m_programDateTimeClock{HlsProgramDateTimeClock::NOT_SET};
    bool m_programDateTimeClockHasBeenSet = false;

    int m_programDateTimePeriod{0};
    bool m_programDateTimePeriodHasBeenSet = false;

    HlsRedundantManifest m_redundantManifest{HlsRedundantManifest::NOT_SET};
    bool m_redundantManifestHasBeenSet = false;

    int m_segmentLength{0};
    bool m_segmentLengthHasBeenSet = false;

    HlsSegmentationMode m_segmentationMode{HlsSegmentationMode::NOT_SET};
    bool m_segmentationModeHasBeenSet = false;

    int m_segmentsPerSubdirectory{0};
    bool m_segmentsPerSubdirectoryHasBeenSet = false;

    HlsStreamInfResolution m_streamInfResolution{HlsStreamInfResolution::NOT_SET};
    bool m_streamInfResolutionHasBeenSet = false;

    HlsTimedMetadataId3Frame m_timedMetadataId3Frame{HlsTimedMetadataId3Frame::NOT_SET};
    bool m_timedMetadataId3FrameHasBeenSet = false;

    int m_timedMetadataId3Period{0};
    bool m_timedMetadataId3PeriodHasBeenSet = false;

    int m_timestampDeltaMilliseconds{0};
    bool m_timestampDeltaMillisecondsHasBeenSet = false;

    HlsTsFileMode m_tsFileMode{HlsTsFileMode::NOT_SET};
    bool m_tsFileModeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
