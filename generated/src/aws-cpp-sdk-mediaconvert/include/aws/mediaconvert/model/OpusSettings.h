/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
   * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
   * OPUS.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/OpusSettings">AWS
   * API Reference</a></p>
   */
  class OpusSettings
  {
  public:
    AWS_MEDIACONVERT_API OpusSettings() = default;
    AWS_MEDIACONVERT_API OpusSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API OpusSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Optional. Specify the average bitrate in bits per second. Valid values are
     * multiples of 8000, from 32000 through 192000. The default value is 96000, which
     * we recommend for quality and bandwidth.
     */
    inline int GetBitrate() const { return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline OpusSettings& WithBitrate(int value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the number of channels in this output audio track. Choosing Mono on
     * gives you 1 output channel; choosing Stereo gives you 2. In the API, valid
     * values are 1 and 2.
     */
    inline int GetChannels() const { return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    inline void SetChannels(int value) { m_channelsHasBeenSet = true; m_channels = value; }
    inline OpusSettings& WithChannels(int value) { SetChannels(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Sample rate in Hz. Valid values are 16000, 24000, and 48000. The
     * default value is 48000.
     */
    inline int GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline OpusSettings& WithSampleRate(int value) { SetSampleRate(value); return *this;}
    ///@}
  private:

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
