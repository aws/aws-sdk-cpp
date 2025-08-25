/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Mp2AudioDescriptionMix.h>
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
   * Required when you set Codec to the value MP2.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Mp2Settings">AWS
   * API Reference</a></p>
   */
  class Mp2Settings
  {
  public:
    AWS_MEDIACONVERT_API Mp2Settings() = default;
    AWS_MEDIACONVERT_API Mp2Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Mp2Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Choose BROADCASTER_MIXED_AD when the input contains pre-mixed main audio + audio
     * description (AD) as a stereo pair. The value for AudioType will be set to 3,
     * which signals to downstream systems that this stream contains "broadcaster mixed
     * AD". Note that the input received by the encoder must contain pre-mixed audio;
     * the encoder does not perform the mixing. When you choose BROADCASTER_MIXED_AD,
     * the encoder ignores any values you provide in AudioType and
     * FollowInputAudioType. Choose NONE when the input does not contain pre-mixed
     * audio + audio description (AD). In this case, the encoder will use any values
     * you provide for AudioType and FollowInputAudioType.
     */
    inline Mp2AudioDescriptionMix GetAudioDescriptionMix() const { return m_audioDescriptionMix; }
    inline bool AudioDescriptionMixHasBeenSet() const { return m_audioDescriptionMixHasBeenSet; }
    inline void SetAudioDescriptionMix(Mp2AudioDescriptionMix value) { m_audioDescriptionMixHasBeenSet = true; m_audioDescriptionMix = value; }
    inline Mp2Settings& WithAudioDescriptionMix(Mp2AudioDescriptionMix value) { SetAudioDescriptionMix(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the average bitrate in bits per second.
     */
    inline int GetBitrate() const { return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline Mp2Settings& WithBitrate(int value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Set Channels to specify the number of channels in this output audio track.
     * Choosing Mono in will give you 1 output channel; choosing Stereo will give you
     * 2. In the API, valid values are 1 and 2.
     */
    inline int GetChannels() const { return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    inline void SetChannels(int value) { m_channelsHasBeenSet = true; m_channels = value; }
    inline Mp2Settings& WithChannels(int value) { SetChannels(value); return *this;}
    ///@}

    ///@{
    /**
     * Sample rate in Hz.
     */
    inline int GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline Mp2Settings& WithSampleRate(int value) { SetSampleRate(value); return *this;}
    ///@}
  private:

    Mp2AudioDescriptionMix m_audioDescriptionMix{Mp2AudioDescriptionMix::NOT_SET};
    bool m_audioDescriptionMixHasBeenSet = false;

    int m_bitrate{0};
    bool m_bitrateHasBeenSet = false;

    int m_channels{0};
    bool m_channelsHasBeenSet = false;

    int m_sampleRate{0};
    bool m_sampleRateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
