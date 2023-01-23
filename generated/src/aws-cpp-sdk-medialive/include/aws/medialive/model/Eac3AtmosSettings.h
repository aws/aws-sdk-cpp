/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Eac3AtmosCodingMode.h>
#include <aws/medialive/model/Eac3AtmosDrcLine.h>
#include <aws/medialive/model/Eac3AtmosDrcRf.h>
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
   * Eac3 Atmos Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Eac3AtmosSettings">AWS
   * API Reference</a></p>
   */
  class Eac3AtmosSettings
  {
  public:
    AWS_MEDIALIVE_API Eac3AtmosSettings();
    AWS_MEDIALIVE_API Eac3AtmosSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Eac3AtmosSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Average bitrate in bits/second. Valid bitrates depend on the coding mode.
//  *
     * @affectsRightSizing true
     */
    inline double GetBitrate() const{ return m_bitrate; }

    /**
     * Average bitrate in bits/second. Valid bitrates depend on the coding mode.
//  *
     * @affectsRightSizing true
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Average bitrate in bits/second. Valid bitrates depend on the coding mode.
//  *
     * @affectsRightSizing true
     */
    inline void SetBitrate(double value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Average bitrate in bits/second. Valid bitrates depend on the coding mode.
//  *
     * @affectsRightSizing true
     */
    inline Eac3AtmosSettings& WithBitrate(double value) { SetBitrate(value); return *this;}


    /**
     * Dolby Digital Plus with Dolby Atmos coding mode. Determines number of channels.
     */
    inline const Eac3AtmosCodingMode& GetCodingMode() const{ return m_codingMode; }

    /**
     * Dolby Digital Plus with Dolby Atmos coding mode. Determines number of channels.
     */
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }

    /**
     * Dolby Digital Plus with Dolby Atmos coding mode. Determines number of channels.
     */
    inline void SetCodingMode(const Eac3AtmosCodingMode& value) { m_codingModeHasBeenSet = true; m_codingMode = value; }

    /**
     * Dolby Digital Plus with Dolby Atmos coding mode. Determines number of channels.
     */
    inline void SetCodingMode(Eac3AtmosCodingMode&& value) { m_codingModeHasBeenSet = true; m_codingMode = std::move(value); }

    /**
     * Dolby Digital Plus with Dolby Atmos coding mode. Determines number of channels.
     */
    inline Eac3AtmosSettings& WithCodingMode(const Eac3AtmosCodingMode& value) { SetCodingMode(value); return *this;}

    /**
     * Dolby Digital Plus with Dolby Atmos coding mode. Determines number of channels.
     */
    inline Eac3AtmosSettings& WithCodingMode(Eac3AtmosCodingMode&& value) { SetCodingMode(std::move(value)); return *this;}


    /**
     * Sets the dialnorm for the output. Default 23.
     */
    inline int GetDialnorm() const{ return m_dialnorm; }

    /**
     * Sets the dialnorm for the output. Default 23.
     */
    inline bool DialnormHasBeenSet() const { return m_dialnormHasBeenSet; }

    /**
     * Sets the dialnorm for the output. Default 23.
     */
    inline void SetDialnorm(int value) { m_dialnormHasBeenSet = true; m_dialnorm = value; }

    /**
     * Sets the dialnorm for the output. Default 23.
     */
    inline Eac3AtmosSettings& WithDialnorm(int value) { SetDialnorm(value); return *this;}


    /**
     * Sets the Dolby dynamic range compression profile.
     */
    inline const Eac3AtmosDrcLine& GetDrcLine() const{ return m_drcLine; }

    /**
     * Sets the Dolby dynamic range compression profile.
     */
    inline bool DrcLineHasBeenSet() const { return m_drcLineHasBeenSet; }

    /**
     * Sets the Dolby dynamic range compression profile.
     */
    inline void SetDrcLine(const Eac3AtmosDrcLine& value) { m_drcLineHasBeenSet = true; m_drcLine = value; }

    /**
     * Sets the Dolby dynamic range compression profile.
     */
    inline void SetDrcLine(Eac3AtmosDrcLine&& value) { m_drcLineHasBeenSet = true; m_drcLine = std::move(value); }

    /**
     * Sets the Dolby dynamic range compression profile.
     */
    inline Eac3AtmosSettings& WithDrcLine(const Eac3AtmosDrcLine& value) { SetDrcLine(value); return *this;}

    /**
     * Sets the Dolby dynamic range compression profile.
     */
    inline Eac3AtmosSettings& WithDrcLine(Eac3AtmosDrcLine&& value) { SetDrcLine(std::move(value)); return *this;}


    /**
     * Sets the profile for heavy Dolby dynamic range compression, ensures that the
     * instantaneous signal peaks do not exceed specified levels.
     */
    inline const Eac3AtmosDrcRf& GetDrcRf() const{ return m_drcRf; }

    /**
     * Sets the profile for heavy Dolby dynamic range compression, ensures that the
     * instantaneous signal peaks do not exceed specified levels.
     */
    inline bool DrcRfHasBeenSet() const { return m_drcRfHasBeenSet; }

    /**
     * Sets the profile for heavy Dolby dynamic range compression, ensures that the
     * instantaneous signal peaks do not exceed specified levels.
     */
    inline void SetDrcRf(const Eac3AtmosDrcRf& value) { m_drcRfHasBeenSet = true; m_drcRf = value; }

    /**
     * Sets the profile for heavy Dolby dynamic range compression, ensures that the
     * instantaneous signal peaks do not exceed specified levels.
     */
    inline void SetDrcRf(Eac3AtmosDrcRf&& value) { m_drcRfHasBeenSet = true; m_drcRf = std::move(value); }

    /**
     * Sets the profile for heavy Dolby dynamic range compression, ensures that the
     * instantaneous signal peaks do not exceed specified levels.
     */
    inline Eac3AtmosSettings& WithDrcRf(const Eac3AtmosDrcRf& value) { SetDrcRf(value); return *this;}

    /**
     * Sets the profile for heavy Dolby dynamic range compression, ensures that the
     * instantaneous signal peaks do not exceed specified levels.
     */
    inline Eac3AtmosSettings& WithDrcRf(Eac3AtmosDrcRf&& value) { SetDrcRf(std::move(value)); return *this;}


    /**
     * Height dimensional trim. Sets the maximum amount to attenuate the height
     * channels when the downstream player isn??t configured to handle Dolby Digital
     * Plus with Dolby Atmos and must remix the channels.
     */
    inline double GetHeightTrim() const{ return m_heightTrim; }

    /**
     * Height dimensional trim. Sets the maximum amount to attenuate the height
     * channels when the downstream player isn??t configured to handle Dolby Digital
     * Plus with Dolby Atmos and must remix the channels.
     */
    inline bool HeightTrimHasBeenSet() const { return m_heightTrimHasBeenSet; }

    /**
     * Height dimensional trim. Sets the maximum amount to attenuate the height
     * channels when the downstream player isn??t configured to handle Dolby Digital
     * Plus with Dolby Atmos and must remix the channels.
     */
    inline void SetHeightTrim(double value) { m_heightTrimHasBeenSet = true; m_heightTrim = value; }

    /**
     * Height dimensional trim. Sets the maximum amount to attenuate the height
     * channels when the downstream player isn??t configured to handle Dolby Digital
     * Plus with Dolby Atmos and must remix the channels.
     */
    inline Eac3AtmosSettings& WithHeightTrim(double value) { SetHeightTrim(value); return *this;}


    /**
     * Surround dimensional trim. Sets the maximum amount to attenuate the surround
     * channels when the downstream player isn't configured to handle Dolby Digital
     * Plus with Dolby Atmos and must remix the channels.
     */
    inline double GetSurroundTrim() const{ return m_surroundTrim; }

    /**
     * Surround dimensional trim. Sets the maximum amount to attenuate the surround
     * channels when the downstream player isn't configured to handle Dolby Digital
     * Plus with Dolby Atmos and must remix the channels.
     */
    inline bool SurroundTrimHasBeenSet() const { return m_surroundTrimHasBeenSet; }

    /**
     * Surround dimensional trim. Sets the maximum amount to attenuate the surround
     * channels when the downstream player isn't configured to handle Dolby Digital
     * Plus with Dolby Atmos and must remix the channels.
     */
    inline void SetSurroundTrim(double value) { m_surroundTrimHasBeenSet = true; m_surroundTrim = value; }

    /**
     * Surround dimensional trim. Sets the maximum amount to attenuate the surround
     * channels when the downstream player isn't configured to handle Dolby Digital
     * Plus with Dolby Atmos and must remix the channels.
     */
    inline Eac3AtmosSettings& WithSurroundTrim(double value) { SetSurroundTrim(value); return *this;}

  private:

    double m_bitrate;
    bool m_bitrateHasBeenSet = false;

    Eac3AtmosCodingMode m_codingMode;
    bool m_codingModeHasBeenSet = false;

    int m_dialnorm;
    bool m_dialnormHasBeenSet = false;

    Eac3AtmosDrcLine m_drcLine;
    bool m_drcLineHasBeenSet = false;

    Eac3AtmosDrcRf m_drcRf;
    bool m_drcRfHasBeenSet = false;

    double m_heightTrim;
    bool m_heightTrimHasBeenSet = false;

    double m_surroundTrim;
    bool m_surroundTrimHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
