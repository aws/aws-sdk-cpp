/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/CmafClientCache.h>
#include <aws/mediaconvert/model/CmafCodecSpecification.h>
#include <aws/mediaconvert/model/DashManifestStyle.h>
#include <aws/mediaconvert/model/DestinationSettings.h>
#include <aws/mediaconvert/model/CmafEncryptionSettings.h>
#include <aws/mediaconvert/model/CmafImageBasedTrickPlay.h>
#include <aws/mediaconvert/model/CmafImageBasedTrickPlaySettings.h>
#include <aws/mediaconvert/model/CmafManifestCompression.h>
#include <aws/mediaconvert/model/CmafManifestDurationFormat.h>
#include <aws/mediaconvert/model/CmafMpdManifestBandwidthType.h>
#include <aws/mediaconvert/model/CmafMpdProfile.h>
#include <aws/mediaconvert/model/CmafPtsOffsetHandlingForBFrames.h>
#include <aws/mediaconvert/model/CmafSegmentControl.h>
#include <aws/mediaconvert/model/CmafSegmentLengthControl.h>
#include <aws/mediaconvert/model/CmafStreamInfResolution.h>
#include <aws/mediaconvert/model/CmafTargetDurationCompatibilityMode.h>
#include <aws/mediaconvert/model/CmafVideoCompositionOffsets.h>
#include <aws/mediaconvert/model/CmafWriteDASHManifest.h>
#include <aws/mediaconvert/model/CmafWriteHLSManifest.h>
#include <aws/mediaconvert/model/CmafWriteSegmentTimelineInRepresentation.h>
#include <aws/mediaconvert/model/CmafAdditionalManifest.h>
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
   * Settings related to your CMAF output package. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CmafGroupSettings">AWS
   * API Reference</a></p>
   */
  class CmafGroupSettings
  {
  public:
    AWS_MEDIACONVERT_API CmafGroupSettings() = default;
    AWS_MEDIACONVERT_API CmafGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CmafGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * By default, the service creates one top-level .m3u8 HLS manifest and one top
     * -level .mpd DASH manifest for each CMAF output group in your job. These default
     * manifests reference every output in the output group. To create additional
     * top-level manifests that reference a subset of the outputs in the output group,
     * specify a list of them here. For each additional manifest that you specify, the
     * service creates one HLS manifest and one DASH manifest.
     */
    inline const Aws::Vector<CmafAdditionalManifest>& GetAdditionalManifests() const { return m_additionalManifests; }
    inline bool AdditionalManifestsHasBeenSet() const { return m_additionalManifestsHasBeenSet; }
    template<typename AdditionalManifestsT = Aws::Vector<CmafAdditionalManifest>>
    void SetAdditionalManifests(AdditionalManifestsT&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests = std::forward<AdditionalManifestsT>(value); }
    template<typename AdditionalManifestsT = Aws::Vector<CmafAdditionalManifest>>
    CmafGroupSettings& WithAdditionalManifests(AdditionalManifestsT&& value) { SetAdditionalManifests(std::forward<AdditionalManifestsT>(value)); return *this;}
    template<typename AdditionalManifestsT = CmafAdditionalManifest>
    CmafGroupSettings& AddAdditionalManifests(AdditionalManifestsT&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests.emplace_back(std::forward<AdditionalManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline const Aws::String& GetBaseUrl() const { return m_baseUrl; }
    inline bool BaseUrlHasBeenSet() const { return m_baseUrlHasBeenSet; }
    template<typename BaseUrlT = Aws::String>
    void SetBaseUrl(BaseUrlT&& value) { m_baseUrlHasBeenSet = true; m_baseUrl = std::forward<BaseUrlT>(value); }
    template<typename BaseUrlT = Aws::String>
    CmafGroupSettings& WithBaseUrl(BaseUrlT&& value) { SetBaseUrl(std::forward<BaseUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Disable this setting only when your workflow requires the #EXT-X-ALLOW-CACHE:no
     * tag. Otherwise, keep the default value Enabled and control caching in your video
     * distribution set up. For example, use the Cache-Control http header.
     */
    inline CmafClientCache GetClientCache() const { return m_clientCache; }
    inline bool ClientCacheHasBeenSet() const { return m_clientCacheHasBeenSet; }
    inline void SetClientCache(CmafClientCache value) { m_clientCacheHasBeenSet = true; m_clientCache = value; }
    inline CmafGroupSettings& WithClientCache(CmafClientCache value) { SetClientCache(value); return *this;}
    ///@}

    ///@{
    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline CmafCodecSpecification GetCodecSpecification() const { return m_codecSpecification; }
    inline bool CodecSpecificationHasBeenSet() const { return m_codecSpecificationHasBeenSet; }
    inline void SetCodecSpecification(CmafCodecSpecification value) { m_codecSpecificationHasBeenSet = true; m_codecSpecification = value; }
    inline CmafGroupSettings& WithCodecSpecification(CmafCodecSpecification value) { SetCodecSpecification(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether MediaConvert generates I-frame only video segments for DASH
     * trick play, also known as trick mode. When specified, the I-frame only video
     * segments are included within an additional AdaptationSet in your DASH output
     * manifest. To generate I-frame only video segments: Enter a name as a text
     * string, up to 256 character long. This name is appended to the end of this
     * output group's base filename, that you specify as part of your destination URI,
     * and used for the I-frame only video segment files. You may also include format
     * identifiers. For more information, see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/using-variables-in-your-job-settings.html#using-settings-variables-with-streaming-outputs
     * To not generate I-frame only video segments: Leave blank.
     */
    inline const Aws::String& GetDashIFrameTrickPlayNameModifier() const { return m_dashIFrameTrickPlayNameModifier; }
    inline bool DashIFrameTrickPlayNameModifierHasBeenSet() const { return m_dashIFrameTrickPlayNameModifierHasBeenSet; }
    template<typename DashIFrameTrickPlayNameModifierT = Aws::String>
    void SetDashIFrameTrickPlayNameModifier(DashIFrameTrickPlayNameModifierT&& value) { m_dashIFrameTrickPlayNameModifierHasBeenSet = true; m_dashIFrameTrickPlayNameModifier = std::forward<DashIFrameTrickPlayNameModifierT>(value); }
    template<typename DashIFrameTrickPlayNameModifierT = Aws::String>
    CmafGroupSettings& WithDashIFrameTrickPlayNameModifier(DashIFrameTrickPlayNameModifierT&& value) { SetDashIFrameTrickPlayNameModifier(std::forward<DashIFrameTrickPlayNameModifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify how MediaConvert writes SegmentTimeline in your output DASH manifest. To
     * write a SegmentTimeline in each video Representation: Keep the default value,
     * Basic. To write a common SegmentTimeline in the video AdaptationSet: Choose
     * Compact. Note that MediaConvert will still write a SegmentTimeline in any
     * Representation that does not share a common timeline. To write a video
     * AdaptationSet for each different output framerate, and a common SegmentTimeline
     * in each AdaptationSet: Choose Distinct.
     */
    inline DashManifestStyle GetDashManifestStyle() const { return m_dashManifestStyle; }
    inline bool DashManifestStyleHasBeenSet() const { return m_dashManifestStyleHasBeenSet; }
    inline void SetDashManifestStyle(DashManifestStyle value) { m_dashManifestStyleHasBeenSet = true; m_dashManifestStyle = value; }
    inline CmafGroupSettings& WithDashManifestStyle(DashManifestStyle value) { SetDashManifestStyle(value); return *this;}
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
    CmafGroupSettings& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
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
    CmafGroupSettings& WithDestinationSettings(DestinationSettingsT&& value) { SetDestinationSettings(std::forward<DestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * DRM settings.
     */
    inline const CmafEncryptionSettings& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = CmafEncryptionSettings>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = CmafEncryptionSettings>
    CmafGroupSettings& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the length, in whole seconds, of the mp4 fragments. When you don't
     * specify a value, MediaConvert defaults to 2. Related setting: Use Fragment
     * length control to specify whether the encoder enforces this value strictly.
     */
    inline int GetFragmentLength() const { return m_fragmentLength; }
    inline bool FragmentLengthHasBeenSet() const { return m_fragmentLengthHasBeenSet; }
    inline void SetFragmentLength(int value) { m_fragmentLengthHasBeenSet = true; m_fragmentLength = value; }
    inline CmafGroupSettings& WithFragmentLength(int value) { SetFragmentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None, to not generate any images. Choose Thumbnail to generate tiled
     * thumbnails. Choose Thumbnail and full frame to generate tiled thumbnails and
     * full-resolution images of single frames. When you enable Write HLS manifest,
     * MediaConvert creates a child manifest for each set of images that you generate
     * and adds corresponding entries to the parent manifest. When you enable Write
     * DASH manifest, MediaConvert adds an entry in the .mpd manifest for each set of
     * images that you generate. A common application for these images is Roku trick
     * mode. The thumbnails and full-frame images that MediaConvert creates with this
     * feature are compatible with this Roku specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline CmafImageBasedTrickPlay GetImageBasedTrickPlay() const { return m_imageBasedTrickPlay; }
    inline bool ImageBasedTrickPlayHasBeenSet() const { return m_imageBasedTrickPlayHasBeenSet; }
    inline void SetImageBasedTrickPlay(CmafImageBasedTrickPlay value) { m_imageBasedTrickPlayHasBeenSet = true; m_imageBasedTrickPlay = value; }
    inline CmafGroupSettings& WithImageBasedTrickPlay(CmafImageBasedTrickPlay value) { SetImageBasedTrickPlay(value); return *this;}
    ///@}

    ///@{
    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline const CmafImageBasedTrickPlaySettings& GetImageBasedTrickPlaySettings() const { return m_imageBasedTrickPlaySettings; }
    inline bool ImageBasedTrickPlaySettingsHasBeenSet() const { return m_imageBasedTrickPlaySettingsHasBeenSet; }
    template<typename ImageBasedTrickPlaySettingsT = CmafImageBasedTrickPlaySettings>
    void SetImageBasedTrickPlaySettings(ImageBasedTrickPlaySettingsT&& value) { m_imageBasedTrickPlaySettingsHasBeenSet = true; m_imageBasedTrickPlaySettings = std::forward<ImageBasedTrickPlaySettingsT>(value); }
    template<typename ImageBasedTrickPlaySettingsT = CmafImageBasedTrickPlaySettings>
    CmafGroupSettings& WithImageBasedTrickPlaySettings(ImageBasedTrickPlaySettingsT&& value) { SetImageBasedTrickPlaySettings(std::forward<ImageBasedTrickPlaySettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline CmafManifestCompression GetManifestCompression() const { return m_manifestCompression; }
    inline bool ManifestCompressionHasBeenSet() const { return m_manifestCompressionHasBeenSet; }
    inline void SetManifestCompression(CmafManifestCompression value) { m_manifestCompressionHasBeenSet = true; m_manifestCompression = value; }
    inline CmafGroupSettings& WithManifestCompression(CmafManifestCompression value) { SetManifestCompression(value); return *this;}
    ///@}

    ///@{
    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline CmafManifestDurationFormat GetManifestDurationFormat() const { return m_manifestDurationFormat; }
    inline bool ManifestDurationFormatHasBeenSet() const { return m_manifestDurationFormatHasBeenSet; }
    inline void SetManifestDurationFormat(CmafManifestDurationFormat value) { m_manifestDurationFormatHasBeenSet = true; m_manifestDurationFormat = value; }
    inline CmafGroupSettings& WithManifestDurationFormat(CmafManifestDurationFormat value) { SetManifestDurationFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * Minimum time of initially buffered media that is needed to ensure smooth
     * playout.
     */
    inline int GetMinBufferTime() const { return m_minBufferTime; }
    inline bool MinBufferTimeHasBeenSet() const { return m_minBufferTimeHasBeenSet; }
    inline void SetMinBufferTime(int value) { m_minBufferTimeHasBeenSet = true; m_minBufferTime = value; }
    inline CmafGroupSettings& WithMinBufferTime(int value) { SetMinBufferTime(value); return *this;}
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
    inline CmafGroupSettings& WithMinFinalSegmentLength(double value) { SetMinFinalSegmentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify how the value for bandwidth is determined for each video Representation
     * in your output MPD manifest. We recommend that you choose a MPD manifest
     * bandwidth type that is compatible with your downstream player configuration.
     * Max: Use the same value that you specify for Max bitrate in the video output, in
     * bits per second. Average: Use the calculated average bitrate of the encoded
     * video output, in bits per second.
     */
    inline CmafMpdManifestBandwidthType GetMpdManifestBandwidthType() const { return m_mpdManifestBandwidthType; }
    inline bool MpdManifestBandwidthTypeHasBeenSet() const { return m_mpdManifestBandwidthTypeHasBeenSet; }
    inline void SetMpdManifestBandwidthType(CmafMpdManifestBandwidthType value) { m_mpdManifestBandwidthTypeHasBeenSet = true; m_mpdManifestBandwidthType = value; }
    inline CmafGroupSettings& WithMpdManifestBandwidthType(CmafMpdManifestBandwidthType value) { SetMpdManifestBandwidthType(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether your DASH profile is on-demand or main. When you choose Main
     * profile, the service signals urn:mpeg:dash:profile:isoff-main:2011 in your .mpd
     * DASH manifest. When you choose On-demand, the service signals
     * urn:mpeg:dash:profile:isoff-on-demand:2011 in your .mpd. When you choose
     * On-demand, you must also set the output group setting Segment control to Single
     * file.
     */
    inline CmafMpdProfile GetMpdProfile() const { return m_mpdProfile; }
    inline bool MpdProfileHasBeenSet() const { return m_mpdProfileHasBeenSet; }
    inline void SetMpdProfile(CmafMpdProfile value) { m_mpdProfileHasBeenSet = true; m_mpdProfile = value; }
    inline CmafGroupSettings& WithMpdProfile(CmafMpdProfile value) { SetMpdProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * Use this setting only when your output video stream has B-frames, which causes
     * the initial presentation time stamp (PTS) to be offset from the initial decode
     * time stamp (DTS). Specify how MediaConvert handles PTS when writing time stamps
     * in output DASH manifests. Choose Match initial PTS when you want MediaConvert to
     * use the initial PTS as the first time stamp in the manifest. Choose Zero-based
     * to have MediaConvert ignore the initial PTS in the video stream and instead
     * write the initial time stamp as zero in the manifest. For outputs that don't
     * have B-frames, the time stamps in your DASH manifests start at zero regardless
     * of your choice here.
     */
    inline CmafPtsOffsetHandlingForBFrames GetPtsOffsetHandlingForBFrames() const { return m_ptsOffsetHandlingForBFrames; }
    inline bool PtsOffsetHandlingForBFramesHasBeenSet() const { return m_ptsOffsetHandlingForBFramesHasBeenSet; }
    inline void SetPtsOffsetHandlingForBFrames(CmafPtsOffsetHandlingForBFrames value) { m_ptsOffsetHandlingForBFramesHasBeenSet = true; m_ptsOffsetHandlingForBFrames = value; }
    inline CmafGroupSettings& WithPtsOffsetHandlingForBFrames(CmafPtsOffsetHandlingForBFrames value) { SetPtsOffsetHandlingForBFrames(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline CmafSegmentControl GetSegmentControl() const { return m_segmentControl; }
    inline bool SegmentControlHasBeenSet() const { return m_segmentControlHasBeenSet; }
    inline void SetSegmentControl(CmafSegmentControl value) { m_segmentControlHasBeenSet = true; m_segmentControl = value; }
    inline CmafGroupSettings& WithSegmentControl(CmafSegmentControl value) { SetSegmentControl(value); return *this;}
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
    inline CmafGroupSettings& WithSegmentLength(int value) { SetSegmentLength(value); return *this;}
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
    inline CmafSegmentLengthControl GetSegmentLengthControl() const { return m_segmentLengthControl; }
    inline bool SegmentLengthControlHasBeenSet() const { return m_segmentLengthControlHasBeenSet; }
    inline void SetSegmentLengthControl(CmafSegmentLengthControl value) { m_segmentLengthControlHasBeenSet = true; m_segmentLengthControl = value; }
    inline CmafGroupSettings& WithSegmentLengthControl(CmafSegmentLengthControl value) { SetSegmentLengthControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline CmafStreamInfResolution GetStreamInfResolution() const { return m_streamInfResolution; }
    inline bool StreamInfResolutionHasBeenSet() const { return m_streamInfResolutionHasBeenSet; }
    inline void SetStreamInfResolution(CmafStreamInfResolution value) { m_streamInfResolutionHasBeenSet = true; m_streamInfResolution = value; }
    inline CmafGroupSettings& WithStreamInfResolution(CmafStreamInfResolution value) { SetStreamInfResolution(value); return *this;}
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
    inline CmafTargetDurationCompatibilityMode GetTargetDurationCompatibilityMode() const { return m_targetDurationCompatibilityMode; }
    inline bool TargetDurationCompatibilityModeHasBeenSet() const { return m_targetDurationCompatibilityModeHasBeenSet; }
    inline void SetTargetDurationCompatibilityMode(CmafTargetDurationCompatibilityMode value) { m_targetDurationCompatibilityModeHasBeenSet = true; m_targetDurationCompatibilityMode = value; }
    inline CmafGroupSettings& WithTargetDurationCompatibilityMode(CmafTargetDurationCompatibilityMode value) { SetTargetDurationCompatibilityMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the video sample composition time offset mode in the output fMP4 TRUN
     * box. For wider player compatibility, set Video composition offsets to Unsigned
     * or leave blank. The earliest presentation time may be greater than zero, and
     * sample composition time offsets will increment using unsigned integers. For
     * strict fMP4 video and audio timing, set Video composition offsets to Signed. The
     * earliest presentation time will be equal to zero, and sample composition time
     * offsets will increment using signed integers.
     */
    inline CmafVideoCompositionOffsets GetVideoCompositionOffsets() const { return m_videoCompositionOffsets; }
    inline bool VideoCompositionOffsetsHasBeenSet() const { return m_videoCompositionOffsetsHasBeenSet; }
    inline void SetVideoCompositionOffsets(CmafVideoCompositionOffsets value) { m_videoCompositionOffsetsHasBeenSet = true; m_videoCompositionOffsets = value; }
    inline CmafGroupSettings& WithVideoCompositionOffsets(CmafVideoCompositionOffsets value) { SetVideoCompositionOffsets(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to ENABLED, a DASH MPD manifest will be generated for this output.
     */
    inline CmafWriteDASHManifest GetWriteDashManifest() const { return m_writeDashManifest; }
    inline bool WriteDashManifestHasBeenSet() const { return m_writeDashManifestHasBeenSet; }
    inline void SetWriteDashManifest(CmafWriteDASHManifest value) { m_writeDashManifestHasBeenSet = true; m_writeDashManifest = value; }
    inline CmafGroupSettings& WithWriteDashManifest(CmafWriteDASHManifest value) { SetWriteDashManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to ENABLED, an Apple HLS manifest will be generated for this output.
     */
    inline CmafWriteHLSManifest GetWriteHlsManifest() const { return m_writeHlsManifest; }
    inline bool WriteHlsManifestHasBeenSet() const { return m_writeHlsManifestHasBeenSet; }
    inline void SetWriteHlsManifest(CmafWriteHLSManifest value) { m_writeHlsManifestHasBeenSet = true; m_writeHlsManifest = value; }
    inline CmafGroupSettings& WithWriteHlsManifest(CmafWriteHLSManifest value) { SetWriteHlsManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * When you enable Precise segment duration in DASH manifests, your DASH manifest
     * shows precise segment durations. The segment duration information appears inside
     * the SegmentTimeline element, inside SegmentTemplate at the Representation level.
     * When this feature isn't enabled, the segment durations in your DASH manifest are
     * approximate. The segment duration information appears in the duration attribute
     * of the SegmentTemplate element.
     */
    inline CmafWriteSegmentTimelineInRepresentation GetWriteSegmentTimelineInRepresentation() const { return m_writeSegmentTimelineInRepresentation; }
    inline bool WriteSegmentTimelineInRepresentationHasBeenSet() const { return m_writeSegmentTimelineInRepresentationHasBeenSet; }
    inline void SetWriteSegmentTimelineInRepresentation(CmafWriteSegmentTimelineInRepresentation value) { m_writeSegmentTimelineInRepresentationHasBeenSet = true; m_writeSegmentTimelineInRepresentation = value; }
    inline CmafGroupSettings& WithWriteSegmentTimelineInRepresentation(CmafWriteSegmentTimelineInRepresentation value) { SetWriteSegmentTimelineInRepresentation(value); return *this;}
    ///@}
  private:

    Aws::Vector<CmafAdditionalManifest> m_additionalManifests;
    bool m_additionalManifestsHasBeenSet = false;

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet = false;

    CmafClientCache m_clientCache{CmafClientCache::NOT_SET};
    bool m_clientCacheHasBeenSet = false;

    CmafCodecSpecification m_codecSpecification{CmafCodecSpecification::NOT_SET};
    bool m_codecSpecificationHasBeenSet = false;

    Aws::String m_dashIFrameTrickPlayNameModifier;
    bool m_dashIFrameTrickPlayNameModifierHasBeenSet = false;

    DashManifestStyle m_dashManifestStyle{DashManifestStyle::NOT_SET};
    bool m_dashManifestStyleHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    DestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet = false;

    CmafEncryptionSettings m_encryption;
    bool m_encryptionHasBeenSet = false;

    int m_fragmentLength{0};
    bool m_fragmentLengthHasBeenSet = false;

    CmafImageBasedTrickPlay m_imageBasedTrickPlay{CmafImageBasedTrickPlay::NOT_SET};
    bool m_imageBasedTrickPlayHasBeenSet = false;

    CmafImageBasedTrickPlaySettings m_imageBasedTrickPlaySettings;
    bool m_imageBasedTrickPlaySettingsHasBeenSet = false;

    CmafManifestCompression m_manifestCompression{CmafManifestCompression::NOT_SET};
    bool m_manifestCompressionHasBeenSet = false;

    CmafManifestDurationFormat m_manifestDurationFormat{CmafManifestDurationFormat::NOT_SET};
    bool m_manifestDurationFormatHasBeenSet = false;

    int m_minBufferTime{0};
    bool m_minBufferTimeHasBeenSet = false;

    double m_minFinalSegmentLength{0.0};
    bool m_minFinalSegmentLengthHasBeenSet = false;

    CmafMpdManifestBandwidthType m_mpdManifestBandwidthType{CmafMpdManifestBandwidthType::NOT_SET};
    bool m_mpdManifestBandwidthTypeHasBeenSet = false;

    CmafMpdProfile m_mpdProfile{CmafMpdProfile::NOT_SET};
    bool m_mpdProfileHasBeenSet = false;

    CmafPtsOffsetHandlingForBFrames m_ptsOffsetHandlingForBFrames{CmafPtsOffsetHandlingForBFrames::NOT_SET};
    bool m_ptsOffsetHandlingForBFramesHasBeenSet = false;

    CmafSegmentControl m_segmentControl{CmafSegmentControl::NOT_SET};
    bool m_segmentControlHasBeenSet = false;

    int m_segmentLength{0};
    bool m_segmentLengthHasBeenSet = false;

    CmafSegmentLengthControl m_segmentLengthControl{CmafSegmentLengthControl::NOT_SET};
    bool m_segmentLengthControlHasBeenSet = false;

    CmafStreamInfResolution m_streamInfResolution{CmafStreamInfResolution::NOT_SET};
    bool m_streamInfResolutionHasBeenSet = false;

    CmafTargetDurationCompatibilityMode m_targetDurationCompatibilityMode{CmafTargetDurationCompatibilityMode::NOT_SET};
    bool m_targetDurationCompatibilityModeHasBeenSet = false;

    CmafVideoCompositionOffsets m_videoCompositionOffsets{CmafVideoCompositionOffsets::NOT_SET};
    bool m_videoCompositionOffsetsHasBeenSet = false;

    CmafWriteDASHManifest m_writeDashManifest{CmafWriteDASHManifest::NOT_SET};
    bool m_writeDashManifestHasBeenSet = false;

    CmafWriteHLSManifest m_writeHlsManifest{CmafWriteHLSManifest::NOT_SET};
    bool m_writeHlsManifestHasBeenSet = false;

    CmafWriteSegmentTimelineInRepresentation m_writeSegmentTimelineInRepresentation{CmafWriteSegmentTimelineInRepresentation::NOT_SET};
    bool m_writeSegmentTimelineInRepresentationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
