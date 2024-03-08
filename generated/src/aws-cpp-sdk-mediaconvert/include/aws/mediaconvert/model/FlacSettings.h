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
   * FLAC.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/FlacSettings">AWS
   * API Reference</a></p>
   */
  class FlacSettings
  {
  public:
    AWS_MEDIACONVERT_API FlacSettings();
    AWS_MEDIACONVERT_API FlacSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API FlacSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify Bit depth (BitDepth), in bits per sample, to choose the encoding quality
     * for this audio track.
     */
    inline int GetBitDepth() const{ return m_bitDepth; }

    /**
     * Specify Bit depth (BitDepth), in bits per sample, to choose the encoding quality
     * for this audio track.
     */
    inline bool BitDepthHasBeenSet() const { return m_bitDepthHasBeenSet; }

    /**
     * Specify Bit depth (BitDepth), in bits per sample, to choose the encoding quality
     * for this audio track.
     */
    inline void SetBitDepth(int value) { m_bitDepthHasBeenSet = true; m_bitDepth = value; }

    /**
     * Specify Bit depth (BitDepth), in bits per sample, to choose the encoding quality
     * for this audio track.
     */
    inline FlacSettings& WithBitDepth(int value) { SetBitDepth(value); return *this;}


    /**
     * Specify the number of channels in this output audio track. Choosing Mono on the
     * console gives you 1 output channel; choosing Stereo gives you 2. In the API,
     * valid values are between 1 and 8.
     */
    inline int GetChannels() const{ return m_channels; }

    /**
     * Specify the number of channels in this output audio track. Choosing Mono on the
     * console gives you 1 output channel; choosing Stereo gives you 2. In the API,
     * valid values are between 1 and 8.
     */
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }

    /**
     * Specify the number of channels in this output audio track. Choosing Mono on the
     * console gives you 1 output channel; choosing Stereo gives you 2. In the API,
     * valid values are between 1 and 8.
     */
    inline void SetChannels(int value) { m_channelsHasBeenSet = true; m_channels = value; }

    /**
     * Specify the number of channels in this output audio track. Choosing Mono on the
     * console gives you 1 output channel; choosing Stereo gives you 2. In the API,
     * valid values are between 1 and 8.
     */
    inline FlacSettings& WithChannels(int value) { SetChannels(value); return *this;}


    /**
     * Sample rate in Hz.
     */
    inline int GetSampleRate() const{ return m_sampleRate; }

    /**
     * Sample rate in Hz.
     */
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }

    /**
     * Sample rate in Hz.
     */
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * Sample rate in Hz.
     */
    inline FlacSettings& WithSampleRate(int value) { SetSampleRate(value); return *this;}

  private:

    int m_bitDepth;
    bool m_bitDepthHasBeenSet = false;

    int m_channels;
    bool m_channelsHasBeenSet = false;

    int m_sampleRate;
    bool m_sampleRateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
