/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Mp2CodingMode.h>
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
   * Mp2 Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Mp2Settings">AWS
   * API Reference</a></p>
   */
  class Mp2Settings
  {
  public:
    AWS_MEDIALIVE_API Mp2Settings();
    AWS_MEDIALIVE_API Mp2Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Mp2Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Average bitrate in bits/second.
     */
    inline double GetBitrate() const{ return m_bitrate; }

    /**
     * Average bitrate in bits/second.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Average bitrate in bits/second.
     */
    inline void SetBitrate(double value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Average bitrate in bits/second.
     */
    inline Mp2Settings& WithBitrate(double value) { SetBitrate(value); return *this;}


    /**
     * The MPEG2 Audio coding mode.  Valid values are codingMode10 (for mono) or
     * codingMode20 (for stereo).
     */
    inline const Mp2CodingMode& GetCodingMode() const{ return m_codingMode; }

    /**
     * The MPEG2 Audio coding mode.  Valid values are codingMode10 (for mono) or
     * codingMode20 (for stereo).
     */
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }

    /**
     * The MPEG2 Audio coding mode.  Valid values are codingMode10 (for mono) or
     * codingMode20 (for stereo).
     */
    inline void SetCodingMode(const Mp2CodingMode& value) { m_codingModeHasBeenSet = true; m_codingMode = value; }

    /**
     * The MPEG2 Audio coding mode.  Valid values are codingMode10 (for mono) or
     * codingMode20 (for stereo).
     */
    inline void SetCodingMode(Mp2CodingMode&& value) { m_codingModeHasBeenSet = true; m_codingMode = std::move(value); }

    /**
     * The MPEG2 Audio coding mode.  Valid values are codingMode10 (for mono) or
     * codingMode20 (for stereo).
     */
    inline Mp2Settings& WithCodingMode(const Mp2CodingMode& value) { SetCodingMode(value); return *this;}

    /**
     * The MPEG2 Audio coding mode.  Valid values are codingMode10 (for mono) or
     * codingMode20 (for stereo).
     */
    inline Mp2Settings& WithCodingMode(Mp2CodingMode&& value) { SetCodingMode(std::move(value)); return *this;}


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
    inline Mp2Settings& WithSampleRate(double value) { SetSampleRate(value); return *this;}

  private:

    double m_bitrate;
    bool m_bitrateHasBeenSet = false;

    Mp2CodingMode m_codingMode;
    bool m_codingModeHasBeenSet = false;

    double m_sampleRate;
    bool m_sampleRateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
