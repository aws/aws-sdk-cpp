﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/CmfcAudioDuration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/CmfcAudioTrackType.h>
#include <aws/mediaconvert/model/CmfcDescriptiveVideoServiceFlag.h>
#include <aws/mediaconvert/model/CmfcIFrameOnlyManifest.h>
#include <aws/mediaconvert/model/CmfcKlvMetadata.h>
#include <aws/mediaconvert/model/CmfcManifestMetadataSignaling.h>
#include <aws/mediaconvert/model/CmfcScte35Esam.h>
#include <aws/mediaconvert/model/CmfcScte35Source.h>
#include <aws/mediaconvert/model/CmfcTimedMetadata.h>
#include <aws/mediaconvert/model/CmfcTimedMetadataBoxVersion.h>
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
   * These settings relate to the fragmented MP4 container for the segments in your
   * CMAF outputs.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CmfcSettings">AWS
   * API Reference</a></p>
   */
  class CmfcSettings
  {
  public:
    AWS_MEDIACONVERT_API CmfcSettings() = default;
    AWS_MEDIACONVERT_API CmfcSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CmfcSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify this setting only when your output will be consumed by a downstream
     * repackaging workflow that is sensitive to very small duration differences
     * between video and audio. For this situation, choose Match video duration. In all
     * other cases, keep the default value, Default codec duration. When you choose
     * Match video duration, MediaConvert pads the output audio streams with silence or
     * trims them to ensure that the total duration of each audio stream is at least as
     * long as the total duration of the video stream. After padding or trimming, the
     * audio stream duration is no more than one frame longer than the video stream.
     * MediaConvert applies audio padding or trimming only to the end of the last
     * segment of the output. For unsegmented outputs, MediaConvert adds padding only
     * to the end of the file. When you keep the default value, any minor discrepancies
     * between audio and video duration will depend on your output audio codec.
     */
    inline CmfcAudioDuration GetAudioDuration() const { return m_audioDuration; }
    inline bool AudioDurationHasBeenSet() const { return m_audioDurationHasBeenSet; }
    inline void SetAudioDuration(CmfcAudioDuration value) { m_audioDurationHasBeenSet = true; m_audioDuration = value; }
    inline CmfcSettings& WithAudioDuration(CmfcAudioDuration value) { SetAudioDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the audio rendition group for this audio rendition. Specify up to one
     * value for each audio output in your output group. This value appears in your HLS
     * parent manifest in the EXT-X-MEDIA tag of TYPE=AUDIO, as the value for the
     * GROUP-ID attribute. For example, if you specify "audio_aac_1" for Audio group
     * ID, it appears in your manifest like this:
     * #EXT-X-MEDIA:TYPE=AUDIO,GROUP-ID="audio_aac_1". Related setting: To associate
     * the rendition group that this audio track belongs to with a video rendition,
     * include the same value that you provide here for that video output's setting
     * Audio rendition sets.
     */
    inline const Aws::String& GetAudioGroupId() const { return m_audioGroupId; }
    inline bool AudioGroupIdHasBeenSet() const { return m_audioGroupIdHasBeenSet; }
    template<typename AudioGroupIdT = Aws::String>
    void SetAudioGroupId(AudioGroupIdT&& value) { m_audioGroupIdHasBeenSet = true; m_audioGroupId = std::forward<AudioGroupIdT>(value); }
    template<typename AudioGroupIdT = Aws::String>
    CmfcSettings& WithAudioGroupId(AudioGroupIdT&& value) { SetAudioGroupId(std::forward<AudioGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * List the audio rendition groups that you want included with this video
     * rendition. Use a comma-separated list. For example, say you want to include the
     * audio rendition groups that have the audio group IDs "audio_aac_1" and
     * "audio_dolby". Then you would specify this value: "audio_aac_1,audio_dolby".
     * Related setting: The rendition groups that you include in your comma-separated
     * list should all match values that you specify in the setting Audio group ID for
     * audio renditions in the same output group as this video rendition. Default
     * behavior: If you don't specify anything here and for Audio group ID,
     * MediaConvert puts each audio variant in its own audio rendition group and
     * associates it with every video variant. Each value in your list appears in your
     * HLS parent manifest in the EXT-X-STREAM-INF tag as the value for the AUDIO
     * attribute. To continue the previous example, say that the file name for the
     * child manifest for your video rendition is "amazing_video_1.m3u8". Then, in your
     * parent manifest, each value will appear on separate lines, like this:
     * #EXT-X-STREAM-INF:AUDIO="audio_aac_1"... amazing_video_1.m3u8
     * #EXT-X-STREAM-INF:AUDIO="audio_dolby"... amazing_video_1.m3u8
     */
    inline const Aws::String& GetAudioRenditionSets() const { return m_audioRenditionSets; }
    inline bool AudioRenditionSetsHasBeenSet() const { return m_audioRenditionSetsHasBeenSet; }
    template<typename AudioRenditionSetsT = Aws::String>
    void SetAudioRenditionSets(AudioRenditionSetsT&& value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets = std::forward<AudioRenditionSetsT>(value); }
    template<typename AudioRenditionSetsT = Aws::String>
    CmfcSettings& WithAudioRenditionSets(AudioRenditionSetsT&& value) { SetAudioRenditionSets(std::forward<AudioRenditionSetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use this setting to control the values that MediaConvert puts in your HLS parent
     * playlist to control how the client player selects which audio track to play.
     * Choose Audio-only variant stream (AUDIO_ONLY_VARIANT_STREAM) for any variant
     * that you want to prohibit the client from playing with video. This causes
     * MediaConvert to represent the variant as an EXT-X-STREAM-INF in the HLS
     * manifest. The other options for this setting determine the values that
     * MediaConvert writes for the DEFAULT and AUTOSELECT attributes of the EXT-X-MEDIA
     * entry for the audio variant. For more information about these attributes, see
     * the Apple documentation article
     * https://developer.apple.com/documentation/http_live_streaming/example_playlists_for_http_live_streaming/adding_alternate_media_to_a_playlist.
     * Choose Alternate audio, auto select, default to set DEFAULT=YES and
     * AUTOSELECT=YES. Choose this value for only one variant in your output group.
     * Choose Alternate audio, auto select, not default to set DEFAULT=NO and
     * AUTOSELECT=YES. Choose Alternate Audio, Not Auto Select to set DEFAULT=NO and
     * AUTOSELECT=NO. When you don't specify a value for this setting, MediaConvert
     * defaults to Alternate audio, auto select, default. When there is more than one
     * variant in your output group, you must explicitly choose a value for this
     * setting.
     */
    inline CmfcAudioTrackType GetAudioTrackType() const { return m_audioTrackType; }
    inline bool AudioTrackTypeHasBeenSet() const { return m_audioTrackTypeHasBeenSet; }
    inline void SetAudioTrackType(CmfcAudioTrackType value) { m_audioTrackTypeHasBeenSet = true; m_audioTrackType = value; }
    inline CmfcSettings& WithAudioTrackType(CmfcAudioTrackType value) { SetAudioTrackType(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether to flag this audio track as descriptive video service (DVS) in
     * your HLS parent manifest. When you choose Flag, MediaConvert includes the
     * parameter CHARACTERISTICS="public.accessibility.describes-video" in the
     * EXT-X-MEDIA entry for this track. When you keep the default choice, Don't flag,
     * MediaConvert leaves this parameter out. The DVS flag can help with accessibility
     * on Apple devices. For more information, see the Apple documentation.
     */
    inline CmfcDescriptiveVideoServiceFlag GetDescriptiveVideoServiceFlag() const { return m_descriptiveVideoServiceFlag; }
    inline bool DescriptiveVideoServiceFlagHasBeenSet() const { return m_descriptiveVideoServiceFlagHasBeenSet; }
    inline void SetDescriptiveVideoServiceFlag(CmfcDescriptiveVideoServiceFlag value) { m_descriptiveVideoServiceFlagHasBeenSet = true; m_descriptiveVideoServiceFlag = value; }
    inline CmfcSettings& WithDescriptiveVideoServiceFlag(CmfcDescriptiveVideoServiceFlag value) { SetDescriptiveVideoServiceFlag(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose Include to have MediaConvert generate an HLS child manifest that lists
     * only the I-frames for this rendition, in addition to your regular manifest for
     * this rendition. You might use this manifest as part of a workflow that creates
     * preview functions for your video. MediaConvert adds both the I-frame only child
     * manifest and the regular child manifest to the parent manifest. When you don't
     * need the I-frame only child manifest, keep the default value Exclude.
     */
    inline CmfcIFrameOnlyManifest GetIFrameOnlyManifest() const { return m_iFrameOnlyManifest; }
    inline bool IFrameOnlyManifestHasBeenSet() const { return m_iFrameOnlyManifestHasBeenSet; }
    inline void SetIFrameOnlyManifest(CmfcIFrameOnlyManifest value) { m_iFrameOnlyManifestHasBeenSet = true; m_iFrameOnlyManifest = value; }
    inline CmfcSettings& WithIFrameOnlyManifest(CmfcIFrameOnlyManifest value) { SetIFrameOnlyManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * To include key-length-value metadata in this output: Set KLV metadata insertion
     * to Passthrough. MediaConvert reads KLV metadata present in your input and writes
     * each instance to a separate event message box in the output, according to MISB
     * ST1910.1. To exclude this KLV metadata: Set KLV metadata insertion to None or
     * leave blank.
     */
    inline CmfcKlvMetadata GetKlvMetadata() const { return m_klvMetadata; }
    inline bool KlvMetadataHasBeenSet() const { return m_klvMetadataHasBeenSet; }
    inline void SetKlvMetadata(CmfcKlvMetadata value) { m_klvMetadataHasBeenSet = true; m_klvMetadata = value; }
    inline CmfcSettings& WithKlvMetadata(CmfcKlvMetadata value) { SetKlvMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * To add an InbandEventStream element in your output MPD manifest for each type of
     * event message, set Manifest metadata signaling to Enabled. For ID3 event
     * messages, the InbandEventStream element schemeIdUri will be same value that you
     * specify for ID3 metadata scheme ID URI. For SCTE35 event messages, the
     * InbandEventStream element schemeIdUri will be "urn:scte:scte35:2013:bin". To
     * leave these elements out of your output MPD manifest, set Manifest metadata
     * signaling to Disabled. To enable Manifest metadata signaling, you must also set
     * SCTE-35 source to Passthrough, ESAM SCTE-35 to insert, or ID3 metadata to
     * Passthrough.
     */
    inline CmfcManifestMetadataSignaling GetManifestMetadataSignaling() const { return m_manifestMetadataSignaling; }
    inline bool ManifestMetadataSignalingHasBeenSet() const { return m_manifestMetadataSignalingHasBeenSet; }
    inline void SetManifestMetadataSignaling(CmfcManifestMetadataSignaling value) { m_manifestMetadataSignalingHasBeenSet = true; m_manifestMetadataSignaling = value; }
    inline CmfcSettings& WithManifestMetadataSignaling(CmfcManifestMetadataSignaling value) { SetManifestMetadataSignaling(value); return *this;}
    ///@}

    ///@{
    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML.
     */
    inline CmfcScte35Esam GetScte35Esam() const { return m_scte35Esam; }
    inline bool Scte35EsamHasBeenSet() const { return m_scte35EsamHasBeenSet; }
    inline void SetScte35Esam(CmfcScte35Esam value) { m_scte35EsamHasBeenSet = true; m_scte35Esam = value; }
    inline CmfcSettings& WithScte35Esam(CmfcScte35Esam value) { SetScte35Esam(value); return *this;}
    ///@}

    ///@{
    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough if you want SCTE-35 markers that appear in your input to also
     * appear in this output. Choose None if you don't want those SCTE-35 markers in
     * this output.
     */
    inline CmfcScte35Source GetScte35Source() const { return m_scte35Source; }
    inline bool Scte35SourceHasBeenSet() const { return m_scte35SourceHasBeenSet; }
    inline void SetScte35Source(CmfcScte35Source value) { m_scte35SourceHasBeenSet = true; m_scte35Source = value; }
    inline CmfcSettings& WithScte35Source(CmfcScte35Source value) { SetScte35Source(value); return *this;}
    ///@}

    ///@{
    /**
     * To include ID3 metadata in this output: Set ID3 metadata to Passthrough. Specify
     * this ID3 metadata in Custom ID3 metadata inserter. MediaConvert writes each
     * instance of ID3 metadata in a separate Event Message (eMSG) box. To exclude this
     * ID3 metadata: Set ID3 metadata to None or leave blank.
     */
    inline CmfcTimedMetadata GetTimedMetadata() const { return m_timedMetadata; }
    inline bool TimedMetadataHasBeenSet() const { return m_timedMetadataHasBeenSet; }
    inline void SetTimedMetadata(CmfcTimedMetadata value) { m_timedMetadataHasBeenSet = true; m_timedMetadata = value; }
    inline CmfcSettings& WithTimedMetadata(CmfcTimedMetadata value) { SetTimedMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the event message box (eMSG) version for ID3 timed metadata in your
     * output.
For more information, see ISO/IEC 23009-1:2022 section 5.10.3.3.3
     * Syntax.
Leave blank to use the default value Version 0.
When you specify Version
     * 1, you must also set ID3 metadata to Passthrough.
     */
    inline CmfcTimedMetadataBoxVersion GetTimedMetadataBoxVersion() const { return m_timedMetadataBoxVersion; }
    inline bool TimedMetadataBoxVersionHasBeenSet() const { return m_timedMetadataBoxVersionHasBeenSet; }
    inline void SetTimedMetadataBoxVersion(CmfcTimedMetadataBoxVersion value) { m_timedMetadataBoxVersionHasBeenSet = true; m_timedMetadataBoxVersion = value; }
    inline CmfcSettings& WithTimedMetadataBoxVersion(CmfcTimedMetadataBoxVersion value) { SetTimedMetadataBoxVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the event message box (eMSG) scheme ID URI for ID3 timed metadata in
     * your output. For more information, see ISO/IEC 23009-1:2022 section 5.10.3.3.4
     * Semantics. Leave blank to use the default value: https://aomedia.org/emsg/ID3
     * When you specify a value for ID3 metadata scheme ID URI, you must also set ID3
     * metadata to Passthrough.
     */
    inline const Aws::String& GetTimedMetadataSchemeIdUri() const { return m_timedMetadataSchemeIdUri; }
    inline bool TimedMetadataSchemeIdUriHasBeenSet() const { return m_timedMetadataSchemeIdUriHasBeenSet; }
    template<typename TimedMetadataSchemeIdUriT = Aws::String>
    void SetTimedMetadataSchemeIdUri(TimedMetadataSchemeIdUriT&& value) { m_timedMetadataSchemeIdUriHasBeenSet = true; m_timedMetadataSchemeIdUri = std::forward<TimedMetadataSchemeIdUriT>(value); }
    template<typename TimedMetadataSchemeIdUriT = Aws::String>
    CmfcSettings& WithTimedMetadataSchemeIdUri(TimedMetadataSchemeIdUriT&& value) { SetTimedMetadataSchemeIdUri(std::forward<TimedMetadataSchemeIdUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the event message box (eMSG) value for ID3 timed metadata in your
     * output. For more information, see ISO/IEC 23009-1:2022 section 5.10.3.3.4
     * Semantics. When you specify a value for ID3 Metadata Value, you must also set
     * ID3 metadata to Passthrough.
     */
    inline const Aws::String& GetTimedMetadataValue() const { return m_timedMetadataValue; }
    inline bool TimedMetadataValueHasBeenSet() const { return m_timedMetadataValueHasBeenSet; }
    template<typename TimedMetadataValueT = Aws::String>
    void SetTimedMetadataValue(TimedMetadataValueT&& value) { m_timedMetadataValueHasBeenSet = true; m_timedMetadataValue = std::forward<TimedMetadataValueT>(value); }
    template<typename TimedMetadataValueT = Aws::String>
    CmfcSettings& WithTimedMetadataValue(TimedMetadataValueT&& value) { SetTimedMetadataValue(std::forward<TimedMetadataValueT>(value)); return *this;}
    ///@}
  private:

    CmfcAudioDuration m_audioDuration{CmfcAudioDuration::NOT_SET};
    bool m_audioDurationHasBeenSet = false;

    Aws::String m_audioGroupId;
    bool m_audioGroupIdHasBeenSet = false;

    Aws::String m_audioRenditionSets;
    bool m_audioRenditionSetsHasBeenSet = false;

    CmfcAudioTrackType m_audioTrackType{CmfcAudioTrackType::NOT_SET};
    bool m_audioTrackTypeHasBeenSet = false;

    CmfcDescriptiveVideoServiceFlag m_descriptiveVideoServiceFlag{CmfcDescriptiveVideoServiceFlag::NOT_SET};
    bool m_descriptiveVideoServiceFlagHasBeenSet = false;

    CmfcIFrameOnlyManifest m_iFrameOnlyManifest{CmfcIFrameOnlyManifest::NOT_SET};
    bool m_iFrameOnlyManifestHasBeenSet = false;

    CmfcKlvMetadata m_klvMetadata{CmfcKlvMetadata::NOT_SET};
    bool m_klvMetadataHasBeenSet = false;

    CmfcManifestMetadataSignaling m_manifestMetadataSignaling{CmfcManifestMetadataSignaling::NOT_SET};
    bool m_manifestMetadataSignalingHasBeenSet = false;

    CmfcScte35Esam m_scte35Esam{CmfcScte35Esam::NOT_SET};
    bool m_scte35EsamHasBeenSet = false;

    CmfcScte35Source m_scte35Source{CmfcScte35Source::NOT_SET};
    bool m_scte35SourceHasBeenSet = false;

    CmfcTimedMetadata m_timedMetadata{CmfcTimedMetadata::NOT_SET};
    bool m_timedMetadataHasBeenSet = false;

    CmfcTimedMetadataBoxVersion m_timedMetadataBoxVersion{CmfcTimedMetadataBoxVersion::NOT_SET};
    bool m_timedMetadataBoxVersionHasBeenSet = false;

    Aws::String m_timedMetadataSchemeIdUri;
    bool m_timedMetadataSchemeIdUriHasBeenSet = false;

    Aws::String m_timedMetadataValue;
    bool m_timedMetadataValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
