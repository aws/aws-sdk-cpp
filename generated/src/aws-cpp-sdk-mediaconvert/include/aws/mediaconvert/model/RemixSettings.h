/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ChannelMapping.h>
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
   * Use Manual audio remixing to adjust audio levels for each audio channel in each
   * output of your job. With audio remixing, you can output more or fewer audio
   * channels than your input audio source provides.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/RemixSettings">AWS
   * API Reference</a></p>
   */
  class RemixSettings
  {
  public:
    AWS_MEDIACONVERT_API RemixSettings() = default;
    AWS_MEDIACONVERT_API RemixSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API RemixSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Optionally specify the channel in your input that contains your audio
     * description audio signal. MediaConvert mixes your audio signal across all output
     * channels, while reducing their volume according to your data stream. When you
     * specify an audio description audio channel, you must also specify an audio
     * description data channel. For more information about audio description signals,
     * see the BBC WHP 198 and 051 white papers.
     */
    inline int GetAudioDescriptionAudioChannel() const { return m_audioDescriptionAudioChannel; }
    inline bool AudioDescriptionAudioChannelHasBeenSet() const { return m_audioDescriptionAudioChannelHasBeenSet; }
    inline void SetAudioDescriptionAudioChannel(int value) { m_audioDescriptionAudioChannelHasBeenSet = true; m_audioDescriptionAudioChannel = value; }
    inline RemixSettings& WithAudioDescriptionAudioChannel(int value) { SetAudioDescriptionAudioChannel(value); return *this;}
    ///@}

    ///@{
    /**
     * Optionally specify the channel in your input that contains your audio
     * description data stream. MediaConvert mixes your audio signal across all output
     * channels, while reducing their volume according to your data stream. When you
     * specify an audio description data channel, you must also specify an audio
     * description audio channel. For more information about audio description signals,
     * see the BBC WHP 198 and 051 white papers.
     */
    inline int GetAudioDescriptionDataChannel() const { return m_audioDescriptionDataChannel; }
    inline bool AudioDescriptionDataChannelHasBeenSet() const { return m_audioDescriptionDataChannelHasBeenSet; }
    inline void SetAudioDescriptionDataChannel(int value) { m_audioDescriptionDataChannelHasBeenSet = true; m_audioDescriptionDataChannel = value; }
    inline RemixSettings& WithAudioDescriptionDataChannel(int value) { SetAudioDescriptionDataChannel(value); return *this;}
    ///@}

    ///@{
    /**
     * Channel mapping contains the group of fields that hold the remixing value for
     * each channel, in dB. Specify remix values to indicate how much of the content
     * from your input audio channel you want in your output audio channels. Each
     * instance of the InputChannels or InputChannelsFineTune array specifies these
     * values for one output channel. Use one instance of this array for each output
     * channel. In the console, each array corresponds to a column in the graphical
     * depiction of the mapping matrix. The rows of the graphical matrix correspond to
     * input channels. Valid values are within the range from -60 (mute) through 6. A
     * setting of 0 passes the input channel unchanged to the output channel (no
     * attenuation or amplification). Use InputChannels or InputChannelsFineTune to
     * specify your remix values. Don't use both.
     */
    inline const ChannelMapping& GetChannelMapping() const { return m_channelMapping; }
    inline bool ChannelMappingHasBeenSet() const { return m_channelMappingHasBeenSet; }
    template<typename ChannelMappingT = ChannelMapping>
    void SetChannelMapping(ChannelMappingT&& value) { m_channelMappingHasBeenSet = true; m_channelMapping = std::forward<ChannelMappingT>(value); }
    template<typename ChannelMappingT = ChannelMapping>
    RemixSettings& WithChannelMapping(ChannelMappingT&& value) { SetChannelMapping(std::forward<ChannelMappingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the number of audio channels from your input that you want to use in
     * your output. With remixing, you might combine or split the data in these
     * channels, so the number of channels in your final output might be different. If
     * you are doing both input channel mapping and output channel mapping, the number
     * of output channels in your input mapping must be the same as the number of input
     * channels in your output mapping.
     */
    inline int GetChannelsIn() const { return m_channelsIn; }
    inline bool ChannelsInHasBeenSet() const { return m_channelsInHasBeenSet; }
    inline void SetChannelsIn(int value) { m_channelsInHasBeenSet = true; m_channelsIn = value; }
    inline RemixSettings& WithChannelsIn(int value) { SetChannelsIn(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the number of channels in this output after remixing. Valid values: 1,
     * 2, 4, 6, 8... 64. (1 and even numbers to 64.) If you are doing both input
     * channel mapping and output channel mapping, the number of output channels in
     * your input mapping must be the same as the number of input channels in your
     * output mapping.
     */
    inline int GetChannelsOut() const { return m_channelsOut; }
    inline bool ChannelsOutHasBeenSet() const { return m_channelsOutHasBeenSet; }
    inline void SetChannelsOut(int value) { m_channelsOutHasBeenSet = true; m_channelsOut = value; }
    inline RemixSettings& WithChannelsOut(int value) { SetChannelsOut(value); return *this;}
    ///@}
  private:

    int m_audioDescriptionAudioChannel{0};
    bool m_audioDescriptionAudioChannelHasBeenSet = false;

    int m_audioDescriptionDataChannel{0};
    bool m_audioDescriptionDataChannelHasBeenSet = false;

    ChannelMapping m_channelMapping;
    bool m_channelMappingHasBeenSet = false;

    int m_channelsIn{0};
    bool m_channelsInHasBeenSet = false;

    int m_channelsOut{0};
    bool m_channelsOutHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
