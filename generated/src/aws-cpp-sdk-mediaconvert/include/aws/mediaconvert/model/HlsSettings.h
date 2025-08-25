/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/HlsAudioOnlyContainer.h>
#include <aws/mediaconvert/model/HlsAudioTrackType.h>
#include <aws/mediaconvert/model/HlsDescriptiveVideoServiceFlag.h>
#include <aws/mediaconvert/model/HlsIFrameOnlyManifest.h>
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
   * Settings for HLS output groups<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/HlsSettings">AWS
   * API Reference</a></p>
   */
  class HlsSettings
  {
  public:
    AWS_MEDIACONVERT_API HlsSettings() = default;
    AWS_MEDIACONVERT_API HlsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API HlsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specifies the group to which the audio rendition belongs.
     */
    inline const Aws::String& GetAudioGroupId() const { return m_audioGroupId; }
    inline bool AudioGroupIdHasBeenSet() const { return m_audioGroupIdHasBeenSet; }
    template<typename AudioGroupIdT = Aws::String>
    void SetAudioGroupId(AudioGroupIdT&& value) { m_audioGroupIdHasBeenSet = true; m_audioGroupId = std::forward<AudioGroupIdT>(value); }
    template<typename AudioGroupIdT = Aws::String>
    HlsSettings& WithAudioGroupId(AudioGroupIdT&& value) { SetAudioGroupId(std::forward<AudioGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use this setting only in audio-only outputs. Choose MPEG-2 Transport Stream
     * (M2TS) to create a file in an MPEG2-TS container. Keep the default value
     * Automatic to create an audio-only file in a raw container. Regardless of the
     * value that you specify here, if this output has video, the service will place
     * the output into an MPEG2-TS container.
     */
    inline HlsAudioOnlyContainer GetAudioOnlyContainer() const { return m_audioOnlyContainer; }
    inline bool AudioOnlyContainerHasBeenSet() const { return m_audioOnlyContainerHasBeenSet; }
    inline void SetAudioOnlyContainer(HlsAudioOnlyContainer value) { m_audioOnlyContainerHasBeenSet = true; m_audioOnlyContainer = value; }
    inline HlsSettings& WithAudioOnlyContainer(HlsAudioOnlyContainer value) { SetAudioOnlyContainer(value); return *this;}
    ///@}

    ///@{
    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline const Aws::String& GetAudioRenditionSets() const { return m_audioRenditionSets; }
    inline bool AudioRenditionSetsHasBeenSet() const { return m_audioRenditionSetsHasBeenSet; }
    template<typename AudioRenditionSetsT = Aws::String>
    void SetAudioRenditionSets(AudioRenditionSetsT&& value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets = std::forward<AudioRenditionSetsT>(value); }
    template<typename AudioRenditionSetsT = Aws::String>
    HlsSettings& WithAudioRenditionSets(AudioRenditionSetsT&& value) { SetAudioRenditionSets(std::forward<AudioRenditionSetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Four types of audio-only tracks are supported: Audio-Only Variant Stream The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest. Alternate
     * Audio, Auto Select, Default Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES Alternate Audio, Auto Select, Not Default Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES Alternate Audio,
     * not Auto Select Alternate rendition that the client will not try to play back by
     * default. Represented as an EXT-X-MEDIA in the HLS manifest with DEFAULT=NO,
     * AUTOSELECT=NO
     */
    inline HlsAudioTrackType GetAudioTrackType() const { return m_audioTrackType; }
    inline bool AudioTrackTypeHasBeenSet() const { return m_audioTrackTypeHasBeenSet; }
    inline void SetAudioTrackType(HlsAudioTrackType value) { m_audioTrackTypeHasBeenSet = true; m_audioTrackType = value; }
    inline HlsSettings& WithAudioTrackType(HlsAudioTrackType value) { SetAudioTrackType(value); return *this;}
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
    inline HlsDescriptiveVideoServiceFlag GetDescriptiveVideoServiceFlag() const { return m_descriptiveVideoServiceFlag; }
    inline bool DescriptiveVideoServiceFlagHasBeenSet() const { return m_descriptiveVideoServiceFlagHasBeenSet; }
    inline void SetDescriptiveVideoServiceFlag(HlsDescriptiveVideoServiceFlag value) { m_descriptiveVideoServiceFlagHasBeenSet = true; m_descriptiveVideoServiceFlag = value; }
    inline HlsSettings& WithDescriptiveVideoServiceFlag(HlsDescriptiveVideoServiceFlag value) { SetDescriptiveVideoServiceFlag(value); return *this;}
    ///@}

    ///@{
    /**
     * Generate a variant manifest that lists only the I-frames for this rendition. You
     * might use this manifest as part of a workflow that creates preview functions for
     * your video. MediaConvert adds both the I-frame only variant manifest and the
     * regular variant manifest to the multivariant manifest. To have MediaConvert
     * write a variant manifest that references I-frames from your output content using
     * EXT-X-BYTERANGE tags: Choose Include. To have MediaConvert output I-frames as
     * single frame TS files and a corresponding variant manifest that references them:
     * Choose Include as TS. When you don't need the I-frame only variant manifest:
     * Keep the default value, Exclude.
     */
    inline HlsIFrameOnlyManifest GetIFrameOnlyManifest() const { return m_iFrameOnlyManifest; }
    inline bool IFrameOnlyManifestHasBeenSet() const { return m_iFrameOnlyManifestHasBeenSet; }
    inline void SetIFrameOnlyManifest(HlsIFrameOnlyManifest value) { m_iFrameOnlyManifestHasBeenSet = true; m_iFrameOnlyManifest = value; }
    inline HlsSettings& WithIFrameOnlyManifest(HlsIFrameOnlyManifest value) { SetIFrameOnlyManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * Use this setting to add an identifying string to the filename of each segment.
     * The service adds this string between the name modifier and segment index number.
     * You can use format identifiers in the string. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/using-variables-in-your-job-settings.html
     */
    inline const Aws::String& GetSegmentModifier() const { return m_segmentModifier; }
    inline bool SegmentModifierHasBeenSet() const { return m_segmentModifierHasBeenSet; }
    template<typename SegmentModifierT = Aws::String>
    void SetSegmentModifier(SegmentModifierT&& value) { m_segmentModifierHasBeenSet = true; m_segmentModifier = std::forward<SegmentModifierT>(value); }
    template<typename SegmentModifierT = Aws::String>
    HlsSettings& WithSegmentModifier(SegmentModifierT&& value) { SetSegmentModifier(std::forward<SegmentModifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_audioGroupId;
    bool m_audioGroupIdHasBeenSet = false;

    HlsAudioOnlyContainer m_audioOnlyContainer{HlsAudioOnlyContainer::NOT_SET};
    bool m_audioOnlyContainerHasBeenSet = false;

    Aws::String m_audioRenditionSets;
    bool m_audioRenditionSetsHasBeenSet = false;

    HlsAudioTrackType m_audioTrackType{HlsAudioTrackType::NOT_SET};
    bool m_audioTrackTypeHasBeenSet = false;

    HlsDescriptiveVideoServiceFlag m_descriptiveVideoServiceFlag{HlsDescriptiveVideoServiceFlag::NOT_SET};
    bool m_descriptiveVideoServiceFlagHasBeenSet = false;

    HlsIFrameOnlyManifest m_iFrameOnlyManifest{HlsIFrameOnlyManifest::NOT_SET};
    bool m_iFrameOnlyManifestHasBeenSet = false;

    Aws::String m_segmentModifier;
    bool m_segmentModifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
