/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputLocation.h>
#include <aws/medialive/model/AudioOnlyHlsTrackType.h>
#include <aws/medialive/model/AudioOnlyHlsSegmentType.h>
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
   * Audio Only Hls Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioOnlyHlsSettings">AWS
   * API Reference</a></p>
   */
  class AudioOnlyHlsSettings
  {
  public:
    AWS_MEDIALIVE_API AudioOnlyHlsSettings() = default;
    AWS_MEDIALIVE_API AudioOnlyHlsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioOnlyHlsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specifies the group to which the audio Rendition belongs.
     */
    inline const Aws::String& GetAudioGroupId() const { return m_audioGroupId; }
    inline bool AudioGroupIdHasBeenSet() const { return m_audioGroupIdHasBeenSet; }
    template<typename AudioGroupIdT = Aws::String>
    void SetAudioGroupId(AudioGroupIdT&& value) { m_audioGroupIdHasBeenSet = true; m_audioGroupId = std::forward<AudioGroupIdT>(value); }
    template<typename AudioGroupIdT = Aws::String>
    AudioOnlyHlsSettings& WithAudioGroupId(AudioGroupIdT&& value) { SetAudioGroupId(std::forward<AudioGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Specifies the .jpg or .png image to use as the cover art for an
     * audio-only output. We recommend a low bit-size file because the image increases
     * the output audio bandwidth.

The image is attached to the audio as an ID3 tag,
     * frame type APIC, picture type 0x10, as per the "ID3 tag version 2.4.0 - Native
     * Frames" standard.
     */
    inline const InputLocation& GetAudioOnlyImage() const { return m_audioOnlyImage; }
    inline bool AudioOnlyImageHasBeenSet() const { return m_audioOnlyImageHasBeenSet; }
    template<typename AudioOnlyImageT = InputLocation>
    void SetAudioOnlyImage(AudioOnlyImageT&& value) { m_audioOnlyImageHasBeenSet = true; m_audioOnlyImage = std::forward<AudioOnlyImageT>(value); }
    template<typename AudioOnlyImageT = InputLocation>
    AudioOnlyHlsSettings& WithAudioOnlyImage(AudioOnlyImageT&& value) { SetAudioOnlyImage(std::forward<AudioOnlyImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Four types of audio-only tracks are supported:

Audio-Only Variant Stream
The
     * client can play back this audio-only stream instead of video in low-bandwidth
     * scenarios. Represented as an EXT-X-STREAM-INF in the HLS manifest.

Alternate
     * Audio, Auto Select, Default
Alternate rendition that the client should try to
     * play back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=YES, AUTOSELECT=YES

Alternate Audio, Auto Select, Not Default
Alternate
     * rendition that the client may try to play back by default. Represented as an
     * EXT-X-MEDIA in the HLS manifest with DEFAULT=NO, AUTOSELECT=YES

Alternate
     * Audio, not Auto Select
Alternate rendition that the client will not try to play
     * back by default. Represented as an EXT-X-MEDIA in the HLS manifest with
     * DEFAULT=NO, AUTOSELECT=NO
     */
    inline AudioOnlyHlsTrackType GetAudioTrackType() const { return m_audioTrackType; }
    inline bool AudioTrackTypeHasBeenSet() const { return m_audioTrackTypeHasBeenSet; }
    inline void SetAudioTrackType(AudioOnlyHlsTrackType value) { m_audioTrackTypeHasBeenSet = true; m_audioTrackType = value; }
    inline AudioOnlyHlsSettings& WithAudioTrackType(AudioOnlyHlsTrackType value) { SetAudioTrackType(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the segment type.
     */
    inline AudioOnlyHlsSegmentType GetSegmentType() const { return m_segmentType; }
    inline bool SegmentTypeHasBeenSet() const { return m_segmentTypeHasBeenSet; }
    inline void SetSegmentType(AudioOnlyHlsSegmentType value) { m_segmentTypeHasBeenSet = true; m_segmentType = value; }
    inline AudioOnlyHlsSettings& WithSegmentType(AudioOnlyHlsSegmentType value) { SetSegmentType(value); return *this;}
    ///@}
  private:

    Aws::String m_audioGroupId;
    bool m_audioGroupIdHasBeenSet = false;

    InputLocation m_audioOnlyImage;
    bool m_audioOnlyImageHasBeenSet = false;

    AudioOnlyHlsTrackType m_audioTrackType{AudioOnlyHlsTrackType::NOT_SET};
    bool m_audioTrackTypeHasBeenSet = false;

    AudioOnlyHlsSegmentType m_segmentType{AudioOnlyHlsSegmentType::NOT_SET};
    bool m_segmentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
