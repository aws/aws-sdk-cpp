/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/HlsAudioOnlyHeader.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/HlsCaptionLanguageSetting.h>
#include <aws/mediaconvert/model/HlsCaptionSegmentLengthControl.h>
#include <aws/mediaconvert/model/HlsClientCache.h>
#include <aws/mediaconvert/model/HlsCodecSpecification.h>
#include <aws/mediaconvert/model/DestinationSettings.h>
#include <aws/mediaconvert/model/HlsDirectoryStructure.h>
#include <aws/mediaconvert/model/HlsEncryptionSettings.h>
#include <aws/mediaconvert/model/HlsImageBasedTrickPlay.h>
#include <aws/mediaconvert/model/HlsImageBasedTrickPlaySettings.h>
#include <aws/mediaconvert/model/HlsManifestCompression.h>
#include <aws/mediaconvert/model/HlsManifestDurationFormat.h>
#include <aws/mediaconvert/model/HlsOutputSelection.h>
#include <aws/mediaconvert/model/HlsProgramDateTime.h>
#include <aws/mediaconvert/model/HlsProgressiveWriteHlsManifest.h>
#include <aws/mediaconvert/model/HlsSegmentControl.h>
#include <aws/mediaconvert/model/HlsSegmentLengthControl.h>
#include <aws/mediaconvert/model/HlsStreamInfResolution.h>
#include <aws/mediaconvert/model/HlsTargetDurationCompatibilityMode.h>
#include <aws/mediaconvert/model/HlsTimedMetadataId3Frame.h>
#include <aws/mediaconvert/model/HlsAdMarkers.h>
#include <aws/mediaconvert/model/HlsAdditionalManifest.h>
#include <aws/mediaconvert/model/HlsCaptionLanguageMapping.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings related to your HLS output package. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/HlsGroupSettings">AWS
   * API Reference</a></p>
   */
  class HlsGroupSettings
  {
  public:
    AWS_MEDIACONVERT_API HlsGroupSettings() = default;
    AWS_MEDIACONVERT_API HlsGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API HlsGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Choose one or more ad marker types to decorate your Apple HLS manifest. This
     * setting does not determine whether SCTE-35 markers appear in the outputs
     * themselves.
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
     * By default, the service creates one top-level .m3u8 HLS manifest for each HLS
     * output group in your job. This default manifest references every output in the
     * output group. To create additional top-level manifests that reference a subset
     * of the outputs in the output group, specify a list of them here.
     */
    inline const Aws::Vector<HlsAdditionalManifest>& GetAdditionalManifests() const { return m_additionalManifests; }
    inline bool AdditionalManifestsHasBeenSet() const { return m_additionalManifestsHasBeenSet; }
    template<typename AdditionalManifestsT = Aws::Vector<HlsAdditionalManifest>>
    void SetAdditionalManifests(AdditionalManifestsT&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests = std::forward<AdditionalManifestsT>(value); }
    template<typename AdditionalManifestsT = Aws::Vector<HlsAdditionalManifest>>
    HlsGroupSettings& WithAdditionalManifests(AdditionalManifestsT&& value) { SetAdditionalManifests(std::forward<AdditionalManifestsT>(value)); return *this;}
    template<typename AdditionalManifestsT = HlsAdditionalManifest>
    HlsGroupSettings& AddAdditionalManifests(AdditionalManifestsT&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests.emplace_back(std::forward<AdditionalManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Ignore this setting unless you are using FairPlay DRM with Verimatrix and you
     * encounter playback issues. Keep the default value, Include, to output audio-only
     * headers. Choose Exclude to remove the audio-only headers from your audio
     * segments.
     */
    inline HlsAudioOnlyHeader GetAudioOnlyHeader() const { return m_audioOnlyHeader; }
    inline bool AudioOnlyHeaderHasBeenSet() const { return m_audioOnlyHeaderHasBeenSet; }
    inline void SetAudioOnlyHeader(HlsAudioOnlyHeader value) { m_audioOnlyHeaderHasBeenSet = true; m_audioOnlyHeader = value; }
    inline HlsGroupSettings& WithAudioOnlyHeader(HlsAudioOnlyHeader value) { SetAudioOnlyHeader(value); return *this;}
    ///@}

    ///@{
    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline const Aws::String& GetBaseUrl() const { return m_baseUrl; }
    inline bool BaseUrlHasBeenSet() const { return m_baseUrlHasBeenSet; }
    template<typename BaseUrlT = Aws::String>
    void SetBaseUrl(BaseUrlT&& value) { m_baseUrlHasBeenSet = true; m_baseUrl = std::forward<BaseUrlT>(value); }
    template<typename BaseUrlT = Aws::String>
    HlsGroupSettings& WithBaseUrl(BaseUrlT&& value) { SetBaseUrl(std::forward<BaseUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Language to be used on Caption outputs
     */
    inline const Aws::Vector<HlsCaptionLanguageMapping>& GetCaptionLanguageMappings() const { return m_captionLanguageMappings; }
    inline bool CaptionLanguageMappingsHasBeenSet() const { return m_captionLanguageMappingsHasBeenSet; }
    template<typename CaptionLanguageMappingsT = Aws::Vector<HlsCaptionLanguageMapping>>
    void SetCaptionLanguageMappings(CaptionLanguageMappingsT&& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings = std::forward<CaptionLanguageMappingsT>(value); }
    template<typename CaptionLanguageMappingsT = Aws::Vector<HlsCaptionLanguageMapping>>
    HlsGroupSettings& WithCaptionLanguageMappings(CaptionLanguageMappingsT&& value) { SetCaptionLanguageMappings(std::forward<CaptionLanguageMappingsT>(value)); return *this;}
    template<typename CaptionLanguageMappingsT = HlsCaptionLanguageMapping>
    HlsGroupSettings& AddCaptionLanguageMappings(CaptionLanguageMappingsT&& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings.emplace_back(std::forward<CaptionLanguageMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Applies only to 608 Embedded output captions. Insert: Include CLOSED-CAPTIONS
     * lines in the manifest. Specify at least one language in the CC1 Language Code
     * field. One CLOSED-CAPTION line is added for each Language Code you specify. Make
     * sure to specify the languages in the order in which they appear in the original
     * source (if the source is embedded format) or the order of the caption selectors
     * (if the source is other than embedded). Otherwise, languages in the manifest
     * will not match up properly with the output captions. None: Include
     * CLOSED-CAPTIONS=NONE line in the manifest. Omit: Omit any CLOSED-CAPTIONS line
     * from the manifest.
     */
    inline HlsCaptionLanguageSetting GetCaptionLanguageSetting() const { return m_captionLanguageSetting; }
    inline bool CaptionLanguageSettingHasBeenSet() const { return m_captionLanguageSettingHasBeenSet; }
    inline void SetCaptionLanguageSetting(HlsCaptionLanguageSetting value) { m_captionLanguageSettingHasBeenSet = true; m_captionLanguageSetting = value; }
    inline HlsGroupSettings& WithCaptionLanguageSetting(HlsCaptionLanguageSetting value) { SetCaptionLanguageSetting(value); return *this;}
    ///@}

    ///@{
    /**
     * Set Caption segment length control to Match video to create caption segments
     * that align with the video segments from the first video output in this output
     * group. For example, if the video segments are 2 seconds long, your WebVTT
     * segments will also be 2 seconds long. Keep the default setting, Large segments
     * to create caption segments that are 300 seconds long.
     */
    inline HlsCaptionSegmentLengthControl GetCaptionSegmentLengthControl() const { return m_captionSegmentLengthControl; }
    inline bool CaptionSegmentLengthControlHasBeenSet() const { return m_captionSegmentLengthControlHasBeenSet; }
    inline void SetCaptionSegmentLengthControl(HlsCaptionSegmentLengthControl value) { m_captionSegmentLengthControlHasBeenSet = true; m_captionSegmentLengthControl = value; }
    inline HlsGroupSettings& WithCaptionSegmentLengthControl(HlsCaptionSegmentLengthControl value) { SetCaptionSegmentLengthControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Disable this setting only when your workflow requires the #EXT-X-ALLOW-CACHE:no
     * tag. Otherwise, keep the default value Enabled and control caching in your video
     * distribution set up. For example, use the Cache-Control http header.
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
     * Use Destination to specify the S3 output location and the output filename base.
     * Destination accepts format identifiers. If you do not specify the base filename
     * in the URI, the service will use the filename of the input file. If your job has
     * multiple inputs, the service uses the filename of the first input file.
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    HlsGroupSettings& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline const DestinationSettings& GetDestinationSettings() const { return m_destinationSettings; }
    inline bool DestinationSettingsHasBeenSet() const { return m_destinationSettingsHasBeenSet; }
    template<typename DestinationSettingsT = DestinationSettings>
    void SetDestinationSettings(DestinationSettingsT&& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = std::forward<DestinationSettingsT>(value); }
    template<typename DestinationSettingsT = DestinationSettings>
    HlsGroupSettings& WithDestinationSettings(DestinationSettingsT&& value) { SetDestinationSettings(std::forward<DestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Indicates whether segments should be placed in subdirectories.
     */
    inline HlsDirectoryStructure GetDirectoryStructure() const { return m_directoryStructure; }
    inline bool DirectoryStructureHasBeenSet() const { return m_directoryStructureHasBeenSet; }
    inline void SetDirectoryStructure(HlsDirectoryStructure value) { m_directoryStructureHasBeenSet = true; m_directoryStructure = value; }
    inline HlsGroupSettings& WithDirectoryStructure(HlsDirectoryStructure value) { SetDirectoryStructure(value); return *this;}
    ///@}

    ///@{
    /**
     * DRM settings.
     */
    inline const HlsEncryptionSettings& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = HlsEncryptionSettings>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = HlsEncryptionSettings>
    HlsGroupSettings& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None, to not generate any images. Choose Thumbnail to generate tiled
     * thumbnails. Choose Thumbnail and full frame to generate tiled thumbnails and
     * full-resolution images of single frames. MediaConvert creates a child manifest
     * for each set of images that you generate and adds corresponding entries to the
     * parent manifest. A common application for these images is Roku trick mode. The
     * thumbnails and full-frame images that MediaConvert creates with this feature are
     * compatible with this Roku specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline HlsImageBasedTrickPlay GetImageBasedTrickPlay() const { return m_imageBasedTrickPlay; }
    inline bool ImageBasedTrickPlayHasBeenSet() const { return m_imageBasedTrickPlayHasBeenSet; }
    inline void SetImageBasedTrickPlay(HlsImageBasedTrickPlay value) { m_imageBasedTrickPlayHasBeenSet = true; m_imageBasedTrickPlay = value; }
    inline HlsGroupSettings& WithImageBasedTrickPlay(HlsImageBasedTrickPlay value) { SetImageBasedTrickPlay(value); return *this;}
    ///@}

    ///@{
    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline const HlsImageBasedTrickPlaySettings& GetImageBasedTrickPlaySettings() const { return m_imageBasedTrickPlaySettings; }
    inline bool ImageBasedTrickPlaySettingsHasBeenSet() const { return m_imageBasedTrickPlaySettingsHasBeenSet; }
    template<typename ImageBasedTrickPlaySettingsT = HlsImageBasedTrickPlaySettings>
    void SetImageBasedTrickPlaySettings(ImageBasedTrickPlaySettingsT&& value) { m_imageBasedTrickPlaySettingsHasBeenSet = true; m_imageBasedTrickPlaySettings = std::forward<ImageBasedTrickPlaySettingsT>(value); }
    template<typename ImageBasedTrickPlaySettingsT = HlsImageBasedTrickPlaySettings>
    HlsGroupSettings& WithImageBasedTrickPlaySettings(ImageBasedTrickPlaySettingsT&& value) { SetImageBasedTrickPlaySettings(std::forward<ImageBasedTrickPlaySettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline HlsManifestCompression GetManifestCompression() const { return m_manifestCompression; }
    inline bool ManifestCompressionHasBeenSet() const { return m_manifestCompressionHasBeenSet; }
    inline void SetManifestCompression(HlsManifestCompression value) { m_manifestCompressionHasBeenSet = true; m_manifestCompression = value; }
    inline HlsGroupSettings& WithManifestCompression(HlsManifestCompression value) { SetManifestCompression(value); return *this;}
    ///@}

    ///@{
    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline HlsManifestDurationFormat GetManifestDurationFormat() const { return m_manifestDurationFormat; }
    inline bool ManifestDurationFormatHasBeenSet() const { return m_manifestDurationFormatHasBeenSet; }
    inline void SetManifestDurationFormat(HlsManifestDurationFormat value) { m_manifestDurationFormatHasBeenSet = true; m_manifestDurationFormat = value; }
    inline HlsGroupSettings& WithManifestDurationFormat(HlsManifestDurationFormat value) { SetManifestDurationFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * Keep this setting at the default value of 0, unless you are troubleshooting a
     * problem with how devices play back the end of your video asset. If you know that
     * player devices are hanging on the final segment of your video because the length
     * of your final segment is too short, use this setting to specify a minimum final
     * segment length, in seconds. Choose a value that is greater than or equal to 1
     * and less than your segment length. When you specify a value for this setting,
     * the encoder will combine any final segment that is shorter than the length that
     * you specify with the previous segment. For example, your segment length is 3
     * seconds and your final segment is .5 seconds without a minimum final segment
     * length; when you set the minimum final segment length to 1, your final segment
     * is 3.5 seconds.
     */
    inline double GetMinFinalSegmentLength() const { return m_minFinalSegmentLength; }
    inline bool MinFinalSegmentLengthHasBeenSet() const { return m_minFinalSegmentLengthHasBeenSet; }
    inline void SetMinFinalSegmentLength(double value) { m_minFinalSegmentLengthHasBeenSet = true; m_minFinalSegmentLength = value; }
    inline HlsGroupSettings& WithMinFinalSegmentLength(double value) { SetMinFinalSegmentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * When set, Minimum Segment Size is enforced by looking ahead and back within the
     * specified range for a nearby avail and extending the segment size if needed.
     */
    inline int GetMinSegmentLength() const { return m_minSegmentLength; }
    inline bool MinSegmentLengthHasBeenSet() const { return m_minSegmentLengthHasBeenSet; }
    inline void SetMinSegmentLength(int value) { m_minSegmentLengthHasBeenSet = true; m_minSegmentLength = value; }
    inline HlsGroupSettings& WithMinSegmentLength(int value) { SetMinSegmentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * Indicates whether the .m3u8 manifest file should be generated for this HLS
     * output group.
     */
    inline HlsOutputSelection GetOutputSelection() const { return m_outputSelection; }
    inline bool OutputSelectionHasBeenSet() const { return m_outputSelectionHasBeenSet; }
    inline void SetOutputSelection(HlsOutputSelection value) { m_outputSelectionHasBeenSet = true; m_outputSelection = value; }
    inline HlsGroupSettings& WithOutputSelection(HlsOutputSelection value) { SetOutputSelection(value); return *this;}
    ///@}

    ///@{
    /**
     * Includes or excludes EXT-X-PROGRAM-DATE-TIME tag in .m3u8 manifest files. The
     * value is calculated as follows: either the program date and time are initialized
     * using the input timecode source, or the time is initialized using the input
     * timecode source and the date is initialized using the timestamp_offset.
     */
    inline HlsProgramDateTime GetProgramDateTime() const { return m_programDateTime; }
    inline bool ProgramDateTimeHasBeenSet() const { return m_programDateTimeHasBeenSet; }
    inline void SetProgramDateTime(HlsProgramDateTime value) { m_programDateTimeHasBeenSet = true; m_programDateTime = value; }
    inline HlsGroupSettings& WithProgramDateTime(HlsProgramDateTime value) { SetProgramDateTime(value); return *this;}
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
     * Specify whether MediaConvert generates HLS manifests while your job is running
     * or when your job is complete. To generate HLS manifests while your job is
     * running: Choose Enabled. Use if you want to play back your content as soon as
     * it's available. MediaConvert writes the parent and child manifests after the
     * first three media segments are written to your destination S3 bucket. It then
     * writes new updated manifests after each additional segment is written. The
     * parent manifest includes the latest BANDWIDTH and AVERAGE-BANDWIDTH attributes,
     * and child manifests include the latest available media segment. When your job
     * completes, the final child playlists include an EXT-X-ENDLIST tag. To generate
     * HLS manifests only when your job completes: Choose Disabled.
     */
    inline HlsProgressiveWriteHlsManifest GetProgressiveWriteHlsManifest() const { return m_progressiveWriteHlsManifest; }
    inline bool ProgressiveWriteHlsManifestHasBeenSet() const { return m_progressiveWriteHlsManifestHasBeenSet; }
    inline void SetProgressiveWriteHlsManifest(HlsProgressiveWriteHlsManifest value) { m_progressiveWriteHlsManifestHasBeenSet = true; m_progressiveWriteHlsManifest = value; }
    inline HlsGroupSettings& WithProgressiveWriteHlsManifest(HlsProgressiveWriteHlsManifest value) { SetProgressiveWriteHlsManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to SINGLE_FILE, emits program as a single media resource (.ts) file,
     * uses #EXT-X-BYTERANGE tags to index segment for playback.
     */
    inline HlsSegmentControl GetSegmentControl() const { return m_segmentControl; }
    inline bool SegmentControlHasBeenSet() const { return m_segmentControlHasBeenSet; }
    inline void SetSegmentControl(HlsSegmentControl value) { m_segmentControlHasBeenSet = true; m_segmentControl = value; }
    inline HlsGroupSettings& WithSegmentControl(HlsSegmentControl value) { SetSegmentControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the length, in whole seconds, of each segment. When you don't specify a
     * value, MediaConvert defaults to 10. Related settings: Use Segment length control
     * to specify whether the encoder enforces this value strictly. Use Segment control
     * to specify whether MediaConvert creates separate segment files or one content
     * file that has metadata to mark the segment boundaries.
     */
    inline int GetSegmentLength() const { return m_segmentLength; }
    inline bool SegmentLengthHasBeenSet() const { return m_segmentLengthHasBeenSet; }
    inline void SetSegmentLength(int value) { m_segmentLengthHasBeenSet = true; m_segmentLength = value; }
    inline HlsGroupSettings& WithSegmentLength(int value) { SetSegmentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify how you want MediaConvert to determine segment lengths in this output
     * group. To use the exact value that you specify under Segment length: Choose
     * Exact. Note that this might result in additional I-frames in the output GOP. To
     * create segment lengths that are a multiple of the GOP: Choose Multiple of GOP.
     * MediaConvert will round up the segment lengths to match the next GOP boundary.
     * To have MediaConvert automatically determine a segment duration that is a
     * multiple of both the audio packets and the frame rates: Choose Match. When you
     * do, also specify a target segment duration under Segment length. This is useful
     * for some ad-insertion or segment replacement workflows. Note that Match has the
     * following requirements: - Output containers: Include at least one video output
     * and at least one audio output. Audio-only outputs are not supported. - Output
     * frame rate: Follow source is not supported. - Multiple output frame rates: When
     * you specify multiple outputs, we recommend they share a similar frame rate (as
     * in X/3, X/2, X, or 2X). For example: 5, 15, 30 and 60. Or: 25 and 50. (Outputs
     * must share an integer multiple.) - Output audio codec: Specify Advanced Audio
     * Coding (AAC). - Output sample rate: Choose 48kHz.
     */
    inline HlsSegmentLengthControl GetSegmentLengthControl() const { return m_segmentLengthControl; }
    inline bool SegmentLengthControlHasBeenSet() const { return m_segmentLengthControlHasBeenSet; }
    inline void SetSegmentLengthControl(HlsSegmentLengthControl value) { m_segmentLengthControlHasBeenSet = true; m_segmentLengthControl = value; }
    inline HlsGroupSettings& WithSegmentLengthControl(HlsSegmentLengthControl value) { SetSegmentLengthControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the number of segments to write to a subdirectory before starting a new
     * one. You must also set Directory structure to Subdirectory per stream for this
     * setting to have an effect.
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
     * When set to LEGACY, the segment target duration is always rounded up to the
     * nearest integer value above its current value in seconds. When set to
     * SPEC\\_COMPLIANT, the segment target duration is rounded up to the nearest
     * integer value if fraction seconds are greater than or equal to 0.5 (>= 0.5) and
     * rounded down if less than 0.5 (< 0.5). You may need to use LEGACY if your client
     * needs to ensure that the target duration is always longer than the actual
     * duration of the segment. Some older players may experience interrupted playback
     * when the actual duration of a track in a segment is longer than the target
     * duration.
     */
    inline HlsTargetDurationCompatibilityMode GetTargetDurationCompatibilityMode() const { return m_targetDurationCompatibilityMode; }
    inline bool TargetDurationCompatibilityModeHasBeenSet() const { return m_targetDurationCompatibilityModeHasBeenSet; }
    inline void SetTargetDurationCompatibilityMode(HlsTargetDurationCompatibilityMode value) { m_targetDurationCompatibilityModeHasBeenSet = true; m_targetDurationCompatibilityMode = value; }
    inline HlsGroupSettings& WithTargetDurationCompatibilityMode(HlsTargetDurationCompatibilityMode value) { SetTargetDurationCompatibilityMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the type of the ID3 frame to use for ID3 timestamps in your output. To
     * include ID3 timestamps: Specify PRIV or TDRL and set ID3 metadata to
     * Passthrough. To exclude ID3 timestamps: Set ID3 timestamp frame type to None.
     */
    inline HlsTimedMetadataId3Frame GetTimedMetadataId3Frame() const { return m_timedMetadataId3Frame; }
    inline bool TimedMetadataId3FrameHasBeenSet() const { return m_timedMetadataId3FrameHasBeenSet; }
    inline void SetTimedMetadataId3Frame(HlsTimedMetadataId3Frame value) { m_timedMetadataId3FrameHasBeenSet = true; m_timedMetadataId3Frame = value; }
    inline HlsGroupSettings& WithTimedMetadataId3Frame(HlsTimedMetadataId3Frame value) { SetTimedMetadataId3Frame(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the interval in seconds to write ID3 timestamps in your output. The
     * first timestamp starts at the output timecode and date, and increases
     * incrementally with each ID3 timestamp. To use the default interval of 10
     * seconds: Leave blank. To include this metadata in your output: Set ID3 timestamp
     * frame type to PRIV or TDRL, and set ID3 metadata to Passthrough.
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
  private:

    Aws::Vector<HlsAdMarkers> m_adMarkers;
    bool m_adMarkersHasBeenSet = false;

    Aws::Vector<HlsAdditionalManifest> m_additionalManifests;
    bool m_additionalManifestsHasBeenSet = false;

    HlsAudioOnlyHeader m_audioOnlyHeader{HlsAudioOnlyHeader::NOT_SET};
    bool m_audioOnlyHeaderHasBeenSet = false;

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet = false;

    Aws::Vector<HlsCaptionLanguageMapping> m_captionLanguageMappings;
    bool m_captionLanguageMappingsHasBeenSet = false;

    HlsCaptionLanguageSetting m_captionLanguageSetting{HlsCaptionLanguageSetting::NOT_SET};
    bool m_captionLanguageSettingHasBeenSet = false;

    HlsCaptionSegmentLengthControl m_captionSegmentLengthControl{HlsCaptionSegmentLengthControl::NOT_SET};
    bool m_captionSegmentLengthControlHasBeenSet = false;

    HlsClientCache m_clientCache{HlsClientCache::NOT_SET};
    bool m_clientCacheHasBeenSet = false;

    HlsCodecSpecification m_codecSpecification{HlsCodecSpecification::NOT_SET};
    bool m_codecSpecificationHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    DestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet = false;

    HlsDirectoryStructure m_directoryStructure{HlsDirectoryStructure::NOT_SET};
    bool m_directoryStructureHasBeenSet = false;

    HlsEncryptionSettings m_encryption;
    bool m_encryptionHasBeenSet = false;

    HlsImageBasedTrickPlay m_imageBasedTrickPlay{HlsImageBasedTrickPlay::NOT_SET};
    bool m_imageBasedTrickPlayHasBeenSet = false;

    HlsImageBasedTrickPlaySettings m_imageBasedTrickPlaySettings;
    bool m_imageBasedTrickPlaySettingsHasBeenSet = false;

    HlsManifestCompression m_manifestCompression{HlsManifestCompression::NOT_SET};
    bool m_manifestCompressionHasBeenSet = false;

    HlsManifestDurationFormat m_manifestDurationFormat{HlsManifestDurationFormat::NOT_SET};
    bool m_manifestDurationFormatHasBeenSet = false;

    double m_minFinalSegmentLength{0.0};
    bool m_minFinalSegmentLengthHasBeenSet = false;

    int m_minSegmentLength{0};
    bool m_minSegmentLengthHasBeenSet = false;

    HlsOutputSelection m_outputSelection{HlsOutputSelection::NOT_SET};
    bool m_outputSelectionHasBeenSet = false;

    HlsProgramDateTime m_programDateTime{HlsProgramDateTime::NOT_SET};
    bool m_programDateTimeHasBeenSet = false;

    int m_programDateTimePeriod{0};
    bool m_programDateTimePeriodHasBeenSet = false;

    HlsProgressiveWriteHlsManifest m_progressiveWriteHlsManifest{HlsProgressiveWriteHlsManifest::NOT_SET};
    bool m_progressiveWriteHlsManifestHasBeenSet = false;

    HlsSegmentControl m_segmentControl{HlsSegmentControl::NOT_SET};
    bool m_segmentControlHasBeenSet = false;

    int m_segmentLength{0};
    bool m_segmentLengthHasBeenSet = false;

    HlsSegmentLengthControl m_segmentLengthControl{HlsSegmentLengthControl::NOT_SET};
    bool m_segmentLengthControlHasBeenSet = false;

    int m_segmentsPerSubdirectory{0};
    bool m_segmentsPerSubdirectoryHasBeenSet = false;

    HlsStreamInfResolution m_streamInfResolution{HlsStreamInfResolution::NOT_SET};
    bool m_streamInfResolutionHasBeenSet = false;

    HlsTargetDurationCompatibilityMode m_targetDurationCompatibilityMode{HlsTargetDurationCompatibilityMode::NOT_SET};
    bool m_targetDurationCompatibilityModeHasBeenSet = false;

    HlsTimedMetadataId3Frame m_timedMetadataId3Frame{HlsTimedMetadataId3Frame::NOT_SET};
    bool m_timedMetadataId3FrameHasBeenSet = false;

    int m_timedMetadataId3Period{0};
    bool m_timedMetadataId3PeriodHasBeenSet = false;

    int m_timestampDeltaMilliseconds{0};
    bool m_timestampDeltaMillisecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
