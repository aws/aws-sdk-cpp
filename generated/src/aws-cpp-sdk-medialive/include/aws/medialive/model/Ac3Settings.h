/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Ac3BitstreamMode.h>
#include <aws/medialive/model/Ac3CodingMode.h>
#include <aws/medialive/model/Ac3DrcProfile.h>
#include <aws/medialive/model/Ac3LfeFilter.h>
#include <aws/medialive/model/Ac3MetadataControl.h>
#include <aws/medialive/model/Ac3AttenuationControl.h>
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
   * Ac3 Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Ac3Settings">AWS
   * API Reference</a></p>
   */
  class Ac3Settings
  {
  public:
    AWS_MEDIALIVE_API Ac3Settings() = default;
    AWS_MEDIALIVE_API Ac3Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Ac3Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Average bitrate in bits/second. Valid bitrates depend on the coding mode.
     */
    inline double GetBitrate() const { return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(double value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline Ac3Settings& WithBitrate(double value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the bitstream mode (bsmod) for the emitted AC-3 stream. See ATSC
     * A/52-2012 for background on these values.
     */
    inline Ac3BitstreamMode GetBitstreamMode() const { return m_bitstreamMode; }
    inline bool BitstreamModeHasBeenSet() const { return m_bitstreamModeHasBeenSet; }
    inline void SetBitstreamMode(Ac3BitstreamMode value) { m_bitstreamModeHasBeenSet = true; m_bitstreamMode = value; }
    inline Ac3Settings& WithBitstreamMode(Ac3BitstreamMode value) { SetBitstreamMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Dolby Digital coding mode. Determines number of channels.
     */
    inline Ac3CodingMode GetCodingMode() const { return m_codingMode; }
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }
    inline void SetCodingMode(Ac3CodingMode value) { m_codingModeHasBeenSet = true; m_codingMode = value; }
    inline Ac3Settings& WithCodingMode(Ac3CodingMode value) { SetCodingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Sets the dialnorm for the output. If excluded and input audio is Dolby Digital,
     * dialnorm will be passed through.
     */
    inline int GetDialnorm() const { return m_dialnorm; }
    inline bool DialnormHasBeenSet() const { return m_dialnormHasBeenSet; }
    inline void SetDialnorm(int value) { m_dialnormHasBeenSet = true; m_dialnorm = value; }
    inline Ac3Settings& WithDialnorm(int value) { SetDialnorm(value); return *this;}
    ///@}

    ///@{
    /**
     * If set to filmStandard, adds dynamic range compression signaling to the output
     * bitstream as defined in the Dolby Digital specification.
     */
    inline Ac3DrcProfile GetDrcProfile() const { return m_drcProfile; }
    inline bool DrcProfileHasBeenSet() const { return m_drcProfileHasBeenSet; }
    inline void SetDrcProfile(Ac3DrcProfile value) { m_drcProfileHasBeenSet = true; m_drcProfile = value; }
    inline Ac3Settings& WithDrcProfile(Ac3DrcProfile value) { SetDrcProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to enabled, applies a 120Hz lowpass filter to the LFE channel prior to
     * encoding. Only valid in codingMode32Lfe mode.
     */
    inline Ac3LfeFilter GetLfeFilter() const { return m_lfeFilter; }
    inline bool LfeFilterHasBeenSet() const { return m_lfeFilterHasBeenSet; }
    inline void SetLfeFilter(Ac3LfeFilter value) { m_lfeFilterHasBeenSet = true; m_lfeFilter = value; }
    inline Ac3Settings& WithLfeFilter(Ac3LfeFilter value) { SetLfeFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to "followInput", encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline Ac3MetadataControl GetMetadataControl() const { return m_metadataControl; }
    inline bool MetadataControlHasBeenSet() const { return m_metadataControlHasBeenSet; }
    inline void SetMetadataControl(Ac3MetadataControl value) { m_metadataControlHasBeenSet = true; m_metadataControl = value; }
    inline Ac3Settings& WithMetadataControl(Ac3MetadataControl value) { SetMetadataControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Applies a 3 dB attenuation to the surround channels. Applies only when the
     * coding mode parameter is CODING_MODE_3_2_LFE.
     */
    inline Ac3AttenuationControl GetAttenuationControl() const { return m_attenuationControl; }
    inline bool AttenuationControlHasBeenSet() const { return m_attenuationControlHasBeenSet; }
    inline void SetAttenuationControl(Ac3AttenuationControl value) { m_attenuationControlHasBeenSet = true; m_attenuationControl = value; }
    inline Ac3Settings& WithAttenuationControl(Ac3AttenuationControl value) { SetAttenuationControl(value); return *this;}
    ///@}
  private:

    double m_bitrate{0.0};
    bool m_bitrateHasBeenSet = false;

    Ac3BitstreamMode m_bitstreamMode{Ac3BitstreamMode::NOT_SET};
    bool m_bitstreamModeHasBeenSet = false;

    Ac3CodingMode m_codingMode{Ac3CodingMode::NOT_SET};
    bool m_codingModeHasBeenSet = false;

    int m_dialnorm{0};
    bool m_dialnormHasBeenSet = false;

    Ac3DrcProfile m_drcProfile{Ac3DrcProfile::NOT_SET};
    bool m_drcProfileHasBeenSet = false;

    Ac3LfeFilter m_lfeFilter{Ac3LfeFilter::NOT_SET};
    bool m_lfeFilterHasBeenSet = false;

    Ac3MetadataControl m_metadataControl{Ac3MetadataControl::NOT_SET};
    bool m_metadataControlHasBeenSet = false;

    Ac3AttenuationControl m_attenuationControl{Ac3AttenuationControl::NOT_SET};
    bool m_attenuationControlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
