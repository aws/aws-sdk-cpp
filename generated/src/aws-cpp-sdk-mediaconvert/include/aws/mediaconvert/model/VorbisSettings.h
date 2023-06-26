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
   * Vorbis.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VorbisSettings">AWS
   * API Reference</a></p>
   */
  class VorbisSettings
  {
  public:
    AWS_MEDIACONVERT_API VorbisSettings();
    AWS_MEDIACONVERT_API VorbisSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VorbisSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Optional. Specify the number of channels in this output audio track. Choosing
     * Mono on the console gives you 1 output channel; choosing Stereo gives you 2. In
     * the API, valid values are 1 and 2. The default value is 2.
     */
    inline int GetChannels() const{ return m_channels; }

    /**
     * Optional. Specify the number of channels in this output audio track. Choosing
     * Mono on the console gives you 1 output channel; choosing Stereo gives you 2. In
     * the API, valid values are 1 and 2. The default value is 2.
     */
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }

    /**
     * Optional. Specify the number of channels in this output audio track. Choosing
     * Mono on the console gives you 1 output channel; choosing Stereo gives you 2. In
     * the API, valid values are 1 and 2. The default value is 2.
     */
    inline void SetChannels(int value) { m_channelsHasBeenSet = true; m_channels = value; }

    /**
     * Optional. Specify the number of channels in this output audio track. Choosing
     * Mono on the console gives you 1 output channel; choosing Stereo gives you 2. In
     * the API, valid values are 1 and 2. The default value is 2.
     */
    inline VorbisSettings& WithChannels(int value) { SetChannels(value); return *this;}


    /**
     * Optional. Specify the audio sample rate in Hz. Valid values are 22050, 32000,
     * 44100, and 48000. The default value is 48000.
     */
    inline int GetSampleRate() const{ return m_sampleRate; }

    /**
     * Optional. Specify the audio sample rate in Hz. Valid values are 22050, 32000,
     * 44100, and 48000. The default value is 48000.
     */
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }

    /**
     * Optional. Specify the audio sample rate in Hz. Valid values are 22050, 32000,
     * 44100, and 48000. The default value is 48000.
     */
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * Optional. Specify the audio sample rate in Hz. Valid values are 22050, 32000,
     * 44100, and 48000. The default value is 48000.
     */
    inline VorbisSettings& WithSampleRate(int value) { SetSampleRate(value); return *this;}


    /**
     * Optional. Specify the variable audio quality of this Vorbis output from -1
     * (lowest quality, ~45 kbit/s) to 10 (highest quality, ~500 kbit/s). The default
     * value is 4 (~128 kbit/s). Values 5 and 6 are approximately 160 and 192 kbit/s,
     * respectively.
     */
    inline int GetVbrQuality() const{ return m_vbrQuality; }

    /**
     * Optional. Specify the variable audio quality of this Vorbis output from -1
     * (lowest quality, ~45 kbit/s) to 10 (highest quality, ~500 kbit/s). The default
     * value is 4 (~128 kbit/s). Values 5 and 6 are approximately 160 and 192 kbit/s,
     * respectively.
     */
    inline bool VbrQualityHasBeenSet() const { return m_vbrQualityHasBeenSet; }

    /**
     * Optional. Specify the variable audio quality of this Vorbis output from -1
     * (lowest quality, ~45 kbit/s) to 10 (highest quality, ~500 kbit/s). The default
     * value is 4 (~128 kbit/s). Values 5 and 6 are approximately 160 and 192 kbit/s,
     * respectively.
     */
    inline void SetVbrQuality(int value) { m_vbrQualityHasBeenSet = true; m_vbrQuality = value; }

    /**
     * Optional. Specify the variable audio quality of this Vorbis output from -1
     * (lowest quality, ~45 kbit/s) to 10 (highest quality, ~500 kbit/s). The default
     * value is 4 (~128 kbit/s). Values 5 and 6 are approximately 160 and 192 kbit/s,
     * respectively.
     */
    inline VorbisSettings& WithVbrQuality(int value) { SetVbrQuality(value); return *this;}

  private:

    int m_channels;
    bool m_channelsHasBeenSet = false;

    int m_sampleRate;
    bool m_sampleRateHasBeenSet = false;

    int m_vbrQuality;
    bool m_vbrQualityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
