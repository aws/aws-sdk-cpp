/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/WavFormat.h>
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
   * Required when you set Codec to the value WAV.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/WavSettings">AWS
   * API Reference</a></p>
   */
  class WavSettings
  {
  public:
    AWS_MEDIACONVERT_API WavSettings() = default;
    AWS_MEDIACONVERT_API WavSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API WavSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify Bit depth, in bits per sample, to choose the encoding quality for this
     * audio track.
     */
    inline int GetBitDepth() const { return m_bitDepth; }
    inline bool BitDepthHasBeenSet() const { return m_bitDepthHasBeenSet; }
    inline void SetBitDepth(int value) { m_bitDepthHasBeenSet = true; m_bitDepth = value; }
    inline WavSettings& WithBitDepth(int value) { SetBitDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the number of channels in this output audio track. Valid values are 1
     * and even numbers up to 64. For example, 1, 2, 4, 6, and so on, up to 64.
     */
    inline int GetChannels() const { return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    inline void SetChannels(int value) { m_channelsHasBeenSet = true; m_channels = value; }
    inline WavSettings& WithChannels(int value) { SetChannels(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the file format for your wave audio output. To use a RIFF wave format:
     * Keep the default value, RIFF. If your output audio is likely to exceed 4GB in
     * file size, or if you otherwise need the extended support of the RF64 format:
     * Choose RF64. If your player only supports the extensible wave format: Choose
     * Extensible.
     */
    inline WavFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(WavFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline WavSettings& WithFormat(WavFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * Sample rate in Hz.
     */
    inline int GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline WavSettings& WithSampleRate(int value) { SetSampleRate(value); return *this;}
    ///@}
  private:

    int m_bitDepth{0};
    bool m_bitDepthHasBeenSet = false;

    int m_channels{0};
    bool m_channelsHasBeenSet = false;

    WavFormat m_format{WavFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    int m_sampleRate{0};
    bool m_sampleRateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
