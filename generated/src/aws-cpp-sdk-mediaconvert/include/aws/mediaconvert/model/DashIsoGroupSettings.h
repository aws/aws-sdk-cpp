/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/DashIsoGroupAudioChannelConfigSchemeIdUri.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/DashManifestStyle.h>
#include <aws/mediaconvert/model/DestinationSettings.h>
#include <aws/mediaconvert/model/DashIsoEncryptionSettings.h>
#include <aws/mediaconvert/model/DashIsoHbbtvCompliance.h>
#include <aws/mediaconvert/model/DashIsoImageBasedTrickPlay.h>
#include <aws/mediaconvert/model/DashIsoImageBasedTrickPlaySettings.h>
#include <aws/mediaconvert/model/DashIsoMpdManifestBandwidthType.h>
#include <aws/mediaconvert/model/DashIsoMpdProfile.h>
#include <aws/mediaconvert/model/DashIsoPtsOffsetHandlingForBFrames.h>
#include <aws/mediaconvert/model/DashIsoSegmentControl.h>
#include <aws/mediaconvert/model/DashIsoSegmentLengthControl.h>
#include <aws/mediaconvert/model/DashIsoVideoCompositionOffsets.h>
#include <aws/mediaconvert/model/DashIsoWriteSegmentTimelineInRepresentation.h>
#include <aws/mediaconvert/model/DashAdditionalManifest.h>
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
   * Settings related to your DASH output package. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DashIsoGroupSettings">AWS
   * API Reference</a></p>
   */
  class DashIsoGroupSettings
  {
  public:
    AWS_MEDIACONVERT_API DashIsoGroupSettings() = default;
    AWS_MEDIACONVERT_API DashIsoGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API DashIsoGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * By default, the service creates one .mpd DASH manifest for each DASH ISO output
     * group in your job. This default manifest references every output in the output
     * group. To create additional DASH manifests that reference a subset of the
     * outputs in the output group, specify a list of them here.
     */
    inline const Aws::Vector<DashAdditionalManifest>& GetAdditionalManifests() const { return m_additionalManifests; }
    inline bool AdditionalManifestsHasBeenSet() const { return m_additionalManifestsHasBeenSet; }
    template<typename AdditionalManifestsT = Aws::Vector<DashAdditionalManifest>>
    void SetAdditionalManifests(AdditionalManifestsT&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests = std::forward<AdditionalManifestsT>(value); }
    template<typename AdditionalManifestsT = Aws::Vector<DashAdditionalManifest>>
    DashIsoGroupSettings& WithAdditionalManifests(AdditionalManifestsT&& value) { SetAdditionalManifests(std::forward<AdditionalManifestsT>(value)); return *this;}
    template<typename AdditionalManifestsT = DashAdditionalManifest>
    DashIsoGroupSettings& AddAdditionalManifests(AdditionalManifestsT&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests.emplace_back(std::forward<AdditionalManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Use this setting only when your audio codec is a Dolby one (AC3, EAC3, or Atmos)
     * and your downstream workflow requires that your DASH manifest use the Dolby
     * channel configuration tag, rather than the MPEG one. For example, you might need
     * to use this to make dynamic ad insertion work. Specify which audio channel
     * configuration scheme ID URI MediaConvert writes in your DASH manifest. Keep the
     * default value, MPEG channel configuration, to have MediaConvert write this:
     * urn:mpeg:mpegB:cicp:ChannelConfiguration. Choose Dolby channel configuration to
     * have MediaConvert write this instead:
     * tag:dolby.com,2014:dash:audio_channel_configuration:2011.
     */
    inline DashIsoGroupAudioChannelConfigSchemeIdUri GetAudioChannelConfigSchemeIdUri() const { return m_audioChannelConfigSchemeIdUri; }
    inline bool AudioChannelConfigSchemeIdUriHasBeenSet() const { return m_audioChannelConfigSchemeIdUriHasBeenSet; }
    inline void SetAudioChannelConfigSchemeIdUri(DashIsoGroupAudioChannelConfigSchemeIdUri value) { m_audioChannelConfigSchemeIdUriHasBeenSet = true; m_audioChannelConfigSchemeIdUri = value; }
    inline DashIsoGroupSettings& WithAudioChannelConfigSchemeIdUri(DashIsoGroupAudioChannelConfigSchemeIdUri value) { SetAudioChannelConfigSchemeIdUri(value); return *this;}
    ///@}

    ///@{
    /**
     * A partial URI prefix that will be put in the manifest (.mpd) file at the top
     * level BaseURL element. Can be used if streams are delivered from a different URL
     * than the manifest file.
     */
    inline const Aws::String& GetBaseUrl() const { return m_baseUrl; }
    inline bool BaseUrlHasBeenSet() const { return m_baseUrlHasBeenSet; }
    template<typename BaseUrlT = Aws::String>
    void SetBaseUrl(BaseUrlT&& value) { m_baseUrlHasBeenSet = true; m_baseUrl = std::forward<BaseUrlT>(value); }
    template<typename BaseUrlT = Aws::String>
    DashIsoGroupSettings& WithBaseUrl(BaseUrlT&& value) { SetBaseUrl(std::forward<BaseUrlT>(value)); return *this;}
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
    DashIsoGroupSettings& WithDashIFrameTrickPlayNameModifier(DashIFrameTrickPlayNameModifierT&& value) { SetDashIFrameTrickPlayNameModifier(std::forward<DashIFrameTrickPlayNameModifierT>(value)); return *this;}
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
    inline DashIsoGroupSettings& WithDashManifestStyle(DashManifestStyle value) { SetDashManifestStyle(value); return *this;}
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
    DashIsoGroupSettings& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
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
    DashIsoGroupSettings& WithDestinationSettings(DestinationSettingsT&& value) { SetDestinationSettings(std::forward<DestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * DRM settings.
     */
    inline const DashIsoEncryptionSettings& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = DashIsoEncryptionSettings>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = DashIsoEncryptionSettings>
    DashIsoGroupSettings& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Length of fragments to generate (in seconds). Fragment length must be compatible
     * with GOP size and Framerate. Note that fragments will end on the next keyframe
     * after this number of seconds, so actual fragment length may be longer. When Emit
     * Single File is checked, the fragmentation is internal to a single output file
     * and it does not cause the creation of many output files as in other output
     * types.
     */
    inline int GetFragmentLength() const { return m_fragmentLength; }
    inline bool FragmentLengthHasBeenSet() const { return m_fragmentLengthHasBeenSet; }
    inline void SetFragmentLength(int value) { m_fragmentLengthHasBeenSet = true; m_fragmentLength = value; }
    inline DashIsoGroupSettings& WithFragmentLength(int value) { SetFragmentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * Supports HbbTV specification as indicated
     */
    inline DashIsoHbbtvCompliance GetHbbtvCompliance() const { return m_hbbtvCompliance; }
    inline bool HbbtvComplianceHasBeenSet() const { return m_hbbtvComplianceHasBeenSet; }
    inline void SetHbbtvCompliance(DashIsoHbbtvCompliance value) { m_hbbtvComplianceHasBeenSet = true; m_hbbtvCompliance = value; }
    inline DashIsoGroupSettings& WithHbbtvCompliance(DashIsoHbbtvCompliance value) { SetHbbtvCompliance(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None, to not generate any images. Choose Thumbnail to generate tiled
     * thumbnails. Choose Thumbnail and full frame to generate tiled thumbnails and
     * full-resolution images of single frames. MediaConvert adds an entry in the .mpd
     * manifest for each set of images that you generate. A common application for
     * these images is Roku trick mode. The thumbnails and full-frame images that
     * MediaConvert creates with this feature are compatible with this Roku
     * specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline DashIsoImageBasedTrickPlay GetImageBasedTrickPlay() const { return m_imageBasedTrickPlay; }
    inline bool ImageBasedTrickPlayHasBeenSet() const { return m_imageBasedTrickPlayHasBeenSet; }
    inline void SetImageBasedTrickPlay(DashIsoImageBasedTrickPlay value) { m_imageBasedTrickPlayHasBeenSet = true; m_imageBasedTrickPlay = value; }
    inline DashIsoGroupSettings& WithImageBasedTrickPlay(DashIsoImageBasedTrickPlay value) { SetImageBasedTrickPlay(value); return *this;}
    ///@}

    ///@{
    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline const DashIsoImageBasedTrickPlaySettings& GetImageBasedTrickPlaySettings() const { return m_imageBasedTrickPlaySettings; }
    inline bool ImageBasedTrickPlaySettingsHasBeenSet() const { return m_imageBasedTrickPlaySettingsHasBeenSet; }
    template<typename ImageBasedTrickPlaySettingsT = DashIsoImageBasedTrickPlaySettings>
    void SetImageBasedTrickPlaySettings(ImageBasedTrickPlaySettingsT&& value) { m_imageBasedTrickPlaySettingsHasBeenSet = true; m_imageBasedTrickPlaySettings = std::forward<ImageBasedTrickPlaySettingsT>(value); }
    template<typename ImageBasedTrickPlaySettingsT = DashIsoImageBasedTrickPlaySettings>
    DashIsoGroupSettings& WithImageBasedTrickPlaySettings(ImageBasedTrickPlaySettingsT&& value) { SetImageBasedTrickPlaySettings(std::forward<ImageBasedTrickPlaySettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Minimum time of initially buffered media that is needed to ensure smooth
     * playout.
     */
    inline int GetMinBufferTime() const { return m_minBufferTime; }
    inline bool MinBufferTimeHasBeenSet() const { return m_minBufferTimeHasBeenSet; }
    inline void SetMinBufferTime(int value) { m_minBufferTimeHasBeenSet = true; m_minBufferTime = value; }
    inline DashIsoGroupSettings& WithMinBufferTime(int value) { SetMinBufferTime(value); return *this;}
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
    inline DashIsoGroupSettings& WithMinFinalSegmentLength(double value) { SetMinFinalSegmentLength(value); return *this;}
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
    inline DashIsoMpdManifestBandwidthType GetMpdManifestBandwidthType() const { return m_mpdManifestBandwidthType; }
    inline bool MpdManifestBandwidthTypeHasBeenSet() const { return m_mpdManifestBandwidthTypeHasBeenSet; }
    inline void SetMpdManifestBandwidthType(DashIsoMpdManifestBandwidthType value) { m_mpdManifestBandwidthTypeHasBeenSet = true; m_mpdManifestBandwidthType = value; }
    inline DashIsoGroupSettings& WithMpdManifestBandwidthType(DashIsoMpdManifestBandwidthType value) { SetMpdManifestBandwidthType(value); return *this;}
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
    inline DashIsoMpdProfile GetMpdProfile() const { return m_mpdProfile; }
    inline bool MpdProfileHasBeenSet() const { return m_mpdProfileHasBeenSet; }
    inline void SetMpdProfile(DashIsoMpdProfile value) { m_mpdProfileHasBeenSet = true; m_mpdProfile = value; }
    inline DashIsoGroupSettings& WithMpdProfile(DashIsoMpdProfile value) { SetMpdProfile(value); return *this;}
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
    inline DashIsoPtsOffsetHandlingForBFrames GetPtsOffsetHandlingForBFrames() const { return m_ptsOffsetHandlingForBFrames; }
    inline bool PtsOffsetHandlingForBFramesHasBeenSet() const { return m_ptsOffsetHandlingForBFramesHasBeenSet; }
    inline void SetPtsOffsetHandlingForBFrames(DashIsoPtsOffsetHandlingForBFrames value) { m_ptsOffsetHandlingForBFramesHasBeenSet = true; m_ptsOffsetHandlingForBFrames = value; }
    inline DashIsoGroupSettings& WithPtsOffsetHandlingForBFrames(DashIsoPtsOffsetHandlingForBFrames value) { SetPtsOffsetHandlingForBFrames(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline DashIsoSegmentControl GetSegmentControl() const { return m_segmentControl; }
    inline bool SegmentControlHasBeenSet() const { return m_segmentControlHasBeenSet; }
    inline void SetSegmentControl(DashIsoSegmentControl value) { m_segmentControlHasBeenSet = true; m_segmentControl = value; }
    inline DashIsoGroupSettings& WithSegmentControl(DashIsoSegmentControl value) { SetSegmentControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the length, in whole seconds, of each segment. When you don't specify a
     * value, MediaConvert defaults to 30. Related settings: Use Segment length control
     * to specify whether the encoder enforces this value strictly. Use Segment control
     * to specify whether MediaConvert creates separate segment files or one content
     * file that has metadata to mark the segment boundaries.
     */
    inline int GetSegmentLength() const { return m_segmentLength; }
    inline bool SegmentLengthHasBeenSet() const { return m_segmentLengthHasBeenSet; }
    inline void SetSegmentLength(int value) { m_segmentLengthHasBeenSet = true; m_segmentLength = value; }
    inline DashIsoGroupSettings& WithSegmentLength(int value) { SetSegmentLength(value); return *this;}
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
    inline DashIsoSegmentLengthControl GetSegmentLengthControl() const { return m_segmentLengthControl; }
    inline bool SegmentLengthControlHasBeenSet() const { return m_segmentLengthControlHasBeenSet; }
    inline void SetSegmentLengthControl(DashIsoSegmentLengthControl value) { m_segmentLengthControlHasBeenSet = true; m_segmentLengthControl = value; }
    inline DashIsoGroupSettings& WithSegmentLengthControl(DashIsoSegmentLengthControl value) { SetSegmentLengthControl(value); return *this;}
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
    inline DashIsoVideoCompositionOffsets GetVideoCompositionOffsets() const { return m_videoCompositionOffsets; }
    inline bool VideoCompositionOffsetsHasBeenSet() const { return m_videoCompositionOffsetsHasBeenSet; }
    inline void SetVideoCompositionOffsets(DashIsoVideoCompositionOffsets value) { m_videoCompositionOffsetsHasBeenSet = true; m_videoCompositionOffsets = value; }
    inline DashIsoGroupSettings& WithVideoCompositionOffsets(DashIsoVideoCompositionOffsets value) { SetVideoCompositionOffsets(value); return *this;}
    ///@}

    ///@{
    /**
     * If you get an HTTP error in the 400 range when you play back your DASH output,
     * enable this setting and run your transcoding job again. When you enable this
     * setting, the service writes precise segment durations in the DASH manifest. The
     * segment duration information appears inside the SegmentTimeline element, inside
     * SegmentTemplate at the Representation level. When you don't enable this setting,
     * the service writes approximate segment durations in your DASH manifest.
     */
    inline DashIsoWriteSegmentTimelineInRepresentation GetWriteSegmentTimelineInRepresentation() const { return m_writeSegmentTimelineInRepresentation; }
    inline bool WriteSegmentTimelineInRepresentationHasBeenSet() const { return m_writeSegmentTimelineInRepresentationHasBeenSet; }
    inline void SetWriteSegmentTimelineInRepresentation(DashIsoWriteSegmentTimelineInRepresentation value) { m_writeSegmentTimelineInRepresentationHasBeenSet = true; m_writeSegmentTimelineInRepresentation = value; }
    inline DashIsoGroupSettings& WithWriteSegmentTimelineInRepresentation(DashIsoWriteSegmentTimelineInRepresentation value) { SetWriteSegmentTimelineInRepresentation(value); return *this;}
    ///@}
  private:

    Aws::Vector<DashAdditionalManifest> m_additionalManifests;
    bool m_additionalManifestsHasBeenSet = false;

    DashIsoGroupAudioChannelConfigSchemeIdUri m_audioChannelConfigSchemeIdUri{DashIsoGroupAudioChannelConfigSchemeIdUri::NOT_SET};
    bool m_audioChannelConfigSchemeIdUriHasBeenSet = false;

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet = false;

    Aws::String m_dashIFrameTrickPlayNameModifier;
    bool m_dashIFrameTrickPlayNameModifierHasBeenSet = false;

    DashManifestStyle m_dashManifestStyle{DashManifestStyle::NOT_SET};
    bool m_dashManifestStyleHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    DestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet = false;

    DashIsoEncryptionSettings m_encryption;
    bool m_encryptionHasBeenSet = false;

    int m_fragmentLength{0};
    bool m_fragmentLengthHasBeenSet = false;

    DashIsoHbbtvCompliance m_hbbtvCompliance{DashIsoHbbtvCompliance::NOT_SET};
    bool m_hbbtvComplianceHasBeenSet = false;

    DashIsoImageBasedTrickPlay m_imageBasedTrickPlay{DashIsoImageBasedTrickPlay::NOT_SET};
    bool m_imageBasedTrickPlayHasBeenSet = false;

    DashIsoImageBasedTrickPlaySettings m_imageBasedTrickPlaySettings;
    bool m_imageBasedTrickPlaySettingsHasBeenSet = false;

    int m_minBufferTime{0};
    bool m_minBufferTimeHasBeenSet = false;

    double m_minFinalSegmentLength{0.0};
    bool m_minFinalSegmentLengthHasBeenSet = false;

    DashIsoMpdManifestBandwidthType m_mpdManifestBandwidthType{DashIsoMpdManifestBandwidthType::NOT_SET};
    bool m_mpdManifestBandwidthTypeHasBeenSet = false;

    DashIsoMpdProfile m_mpdProfile{DashIsoMpdProfile::NOT_SET};
    bool m_mpdProfileHasBeenSet = false;

    DashIsoPtsOffsetHandlingForBFrames m_ptsOffsetHandlingForBFrames{DashIsoPtsOffsetHandlingForBFrames::NOT_SET};
    bool m_ptsOffsetHandlingForBFramesHasBeenSet = false;

    DashIsoSegmentControl m_segmentControl{DashIsoSegmentControl::NOT_SET};
    bool m_segmentControlHasBeenSet = false;

    int m_segmentLength{0};
    bool m_segmentLengthHasBeenSet = false;

    DashIsoSegmentLengthControl m_segmentLengthControl{DashIsoSegmentLengthControl::NOT_SET};
    bool m_segmentLengthControlHasBeenSet = false;

    DashIsoVideoCompositionOffsets m_videoCompositionOffsets{DashIsoVideoCompositionOffsets::NOT_SET};
    bool m_videoCompositionOffsetsHasBeenSet = false;

    DashIsoWriteSegmentTimelineInRepresentation m_writeSegmentTimelineInRepresentation{DashIsoWriteSegmentTimelineInRepresentation::NOT_SET};
    bool m_writeSegmentTimelineInRepresentationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
