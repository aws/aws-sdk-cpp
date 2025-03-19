/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/WavCodingMode.h>
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
   * Wav Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/WavSettings">AWS
   * API Reference</a></p>
   */
  class WavSettings
  {
  public:
    AWS_MEDIALIVE_API WavSettings() = default;
    AWS_MEDIALIVE_API WavSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API WavSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Bits per sample.
     */
    inline double GetBitDepth() const { return m_bitDepth; }
    inline bool BitDepthHasBeenSet() const { return m_bitDepthHasBeenSet; }
    inline void SetBitDepth(double value) { m_bitDepthHasBeenSet = true; m_bitDepth = value; }
    inline WavSettings& WithBitDepth(double value) { SetBitDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * The audio coding mode for the WAV audio. The mode determines the number of
     * channels in the audio.
     */
    inline WavCodingMode GetCodingMode() const { return m_codingMode; }
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }
    inline void SetCodingMode(WavCodingMode value) { m_codingModeHasBeenSet = true; m_codingMode = value; }
    inline WavSettings& WithCodingMode(WavCodingMode value) { SetCodingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Sample rate in Hz.
     */
    inline double GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(double value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline WavSettings& WithSampleRate(double value) { SetSampleRate(value); return *this;}
    ///@}
  private:

    double m_bitDepth{0.0};
    bool m_bitDepthHasBeenSet = false;

    WavCodingMode m_codingMode{WavCodingMode::NOT_SET};
    bool m_codingModeHasBeenSet = false;

    double m_sampleRate{0.0};
    bool m_sampleRateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
