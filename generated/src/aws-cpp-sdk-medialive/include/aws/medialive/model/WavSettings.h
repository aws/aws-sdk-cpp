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
    AWS_MEDIALIVE_API WavSettings();
    AWS_MEDIALIVE_API WavSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API WavSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Bits per sample.
     */
    inline double GetBitDepth() const{ return m_bitDepth; }

    /**
     * Bits per sample.
     */
    inline bool BitDepthHasBeenSet() const { return m_bitDepthHasBeenSet; }

    /**
     * Bits per sample.
     */
    inline void SetBitDepth(double value) { m_bitDepthHasBeenSet = true; m_bitDepth = value; }

    /**
     * Bits per sample.
     */
    inline WavSettings& WithBitDepth(double value) { SetBitDepth(value); return *this;}


    /**
     * The audio coding mode for the WAV audio. The mode determines the number of
     * channels in the audio.
     */
    inline const WavCodingMode& GetCodingMode() const{ return m_codingMode; }

    /**
     * The audio coding mode for the WAV audio. The mode determines the number of
     * channels in the audio.
     */
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }

    /**
     * The audio coding mode for the WAV audio. The mode determines the number of
     * channels in the audio.
     */
    inline void SetCodingMode(const WavCodingMode& value) { m_codingModeHasBeenSet = true; m_codingMode = value; }

    /**
     * The audio coding mode for the WAV audio. The mode determines the number of
     * channels in the audio.
     */
    inline void SetCodingMode(WavCodingMode&& value) { m_codingModeHasBeenSet = true; m_codingMode = std::move(value); }

    /**
     * The audio coding mode for the WAV audio. The mode determines the number of
     * channels in the audio.
     */
    inline WavSettings& WithCodingMode(const WavCodingMode& value) { SetCodingMode(value); return *this;}

    /**
     * The audio coding mode for the WAV audio. The mode determines the number of
     * channels in the audio.
     */
    inline WavSettings& WithCodingMode(WavCodingMode&& value) { SetCodingMode(std::move(value)); return *this;}


    /**
     * Sample rate in Hz.
     */
    inline double GetSampleRate() const{ return m_sampleRate; }

    /**
     * Sample rate in Hz.
     */
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }

    /**
     * Sample rate in Hz.
     */
    inline void SetSampleRate(double value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * Sample rate in Hz.
     */
    inline WavSettings& WithSampleRate(double value) { SetSampleRate(value); return *this;}

  private:

    double m_bitDepth;
    bool m_bitDepthHasBeenSet = false;

    WavCodingMode m_codingMode;
    bool m_codingModeHasBeenSet = false;

    double m_sampleRate;
    bool m_sampleRateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
