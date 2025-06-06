﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Eac3AttenuationControl.h>
#include <aws/medialive/model/Eac3BitstreamMode.h>
#include <aws/medialive/model/Eac3CodingMode.h>
#include <aws/medialive/model/Eac3DcFilter.h>
#include <aws/medialive/model/Eac3DrcLine.h>
#include <aws/medialive/model/Eac3DrcRf.h>
#include <aws/medialive/model/Eac3LfeControl.h>
#include <aws/medialive/model/Eac3LfeFilter.h>
#include <aws/medialive/model/Eac3MetadataControl.h>
#include <aws/medialive/model/Eac3PassthroughControl.h>
#include <aws/medialive/model/Eac3PhaseControl.h>
#include <aws/medialive/model/Eac3StereoDownmix.h>
#include <aws/medialive/model/Eac3SurroundExMode.h>
#include <aws/medialive/model/Eac3SurroundMode.h>
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
   * Eac3 Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Eac3Settings">AWS
   * API Reference</a></p>
   */
  class Eac3Settings
  {
  public:
    AWS_MEDIALIVE_API Eac3Settings() = default;
    AWS_MEDIALIVE_API Eac3Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Eac3Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * When set to attenuate3Db, applies a 3 dB attenuation to the surround channels.
     * Only used for 3/2 coding mode.
     */
    inline Eac3AttenuationControl GetAttenuationControl() const { return m_attenuationControl; }
    inline bool AttenuationControlHasBeenSet() const { return m_attenuationControlHasBeenSet; }
    inline void SetAttenuationControl(Eac3AttenuationControl value) { m_attenuationControlHasBeenSet = true; m_attenuationControl = value; }
    inline Eac3Settings& WithAttenuationControl(Eac3AttenuationControl value) { SetAttenuationControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Average bitrate in bits/second. Valid bitrates depend on the coding mode.
     */
    inline double GetBitrate() const { return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(double value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline Eac3Settings& WithBitrate(double value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the bitstream mode (bsmod) for the emitted E-AC-3 stream. See ATSC
     * A/52-2012 (Annex E) for background on these values.
     */
    inline Eac3BitstreamMode GetBitstreamMode() const { return m_bitstreamMode; }
    inline bool BitstreamModeHasBeenSet() const { return m_bitstreamModeHasBeenSet; }
    inline void SetBitstreamMode(Eac3BitstreamMode value) { m_bitstreamModeHasBeenSet = true; m_bitstreamMode = value; }
    inline Eac3Settings& WithBitstreamMode(Eac3BitstreamMode value) { SetBitstreamMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Dolby Digital Plus coding mode. Determines number of channels.
     */
    inline Eac3CodingMode GetCodingMode() const { return m_codingMode; }
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }
    inline void SetCodingMode(Eac3CodingMode value) { m_codingModeHasBeenSet = true; m_codingMode = value; }
    inline Eac3Settings& WithCodingMode(Eac3CodingMode value) { SetCodingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to enabled, activates a DC highpass filter for all input channels.
     */
    inline Eac3DcFilter GetDcFilter() const { return m_dcFilter; }
    inline bool DcFilterHasBeenSet() const { return m_dcFilterHasBeenSet; }
    inline void SetDcFilter(Eac3DcFilter value) { m_dcFilterHasBeenSet = true; m_dcFilter = value; }
    inline Eac3Settings& WithDcFilter(Eac3DcFilter value) { SetDcFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * Sets the dialnorm for the output. If blank and input audio is Dolby Digital
     * Plus, dialnorm will be passed through.
     */
    inline int GetDialnorm() const { return m_dialnorm; }
    inline bool DialnormHasBeenSet() const { return m_dialnormHasBeenSet; }
    inline void SetDialnorm(int value) { m_dialnormHasBeenSet = true; m_dialnorm = value; }
    inline Eac3Settings& WithDialnorm(int value) { SetDialnorm(value); return *this;}
    ///@}

    ///@{
    /**
     * Sets the Dolby dynamic range compression profile.
     */
    inline Eac3DrcLine GetDrcLine() const { return m_drcLine; }
    inline bool DrcLineHasBeenSet() const { return m_drcLineHasBeenSet; }
    inline void SetDrcLine(Eac3DrcLine value) { m_drcLineHasBeenSet = true; m_drcLine = value; }
    inline Eac3Settings& WithDrcLine(Eac3DrcLine value) { SetDrcLine(value); return *this;}
    ///@}

    ///@{
    /**
     * Sets the profile for heavy Dolby dynamic range compression, ensures that the
     * instantaneous signal peaks do not exceed specified levels.
     */
    inline Eac3DrcRf GetDrcRf() const { return m_drcRf; }
    inline bool DrcRfHasBeenSet() const { return m_drcRfHasBeenSet; }
    inline void SetDrcRf(Eac3DrcRf value) { m_drcRfHasBeenSet = true; m_drcRf = value; }
    inline Eac3Settings& WithDrcRf(Eac3DrcRf value) { SetDrcRf(value); return *this;}
    ///@}

    ///@{
    /**
     * When encoding 3/2 audio, setting to lfe enables the LFE channel
     */
    inline Eac3LfeControl GetLfeControl() const { return m_lfeControl; }
    inline bool LfeControlHasBeenSet() const { return m_lfeControlHasBeenSet; }
    inline void SetLfeControl(Eac3LfeControl value) { m_lfeControlHasBeenSet = true; m_lfeControl = value; }
    inline Eac3Settings& WithLfeControl(Eac3LfeControl value) { SetLfeControl(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to enabled, applies a 120Hz lowpass filter to the LFE channel prior to
     * encoding. Only valid with codingMode32 coding mode.
     */
    inline Eac3LfeFilter GetLfeFilter() const { return m_lfeFilter; }
    inline bool LfeFilterHasBeenSet() const { return m_lfeFilterHasBeenSet; }
    inline void SetLfeFilter(Eac3LfeFilter value) { m_lfeFilterHasBeenSet = true; m_lfeFilter = value; }
    inline Eac3Settings& WithLfeFilter(Eac3LfeFilter value) { SetLfeFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * Left only/Right only center mix level. Only used for 3/2 coding mode.
     */
    inline double GetLoRoCenterMixLevel() const { return m_loRoCenterMixLevel; }
    inline bool LoRoCenterMixLevelHasBeenSet() const { return m_loRoCenterMixLevelHasBeenSet; }
    inline void SetLoRoCenterMixLevel(double value) { m_loRoCenterMixLevelHasBeenSet = true; m_loRoCenterMixLevel = value; }
    inline Eac3Settings& WithLoRoCenterMixLevel(double value) { SetLoRoCenterMixLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Left only/Right only surround mix level. Only used for 3/2 coding mode.
     */
    inline double GetLoRoSurroundMixLevel() const { return m_loRoSurroundMixLevel; }
    inline bool LoRoSurroundMixLevelHasBeenSet() const { return m_loRoSurroundMixLevelHasBeenSet; }
    inline void SetLoRoSurroundMixLevel(double value) { m_loRoSurroundMixLevelHasBeenSet = true; m_loRoSurroundMixLevel = value; }
    inline Eac3Settings& WithLoRoSurroundMixLevel(double value) { SetLoRoSurroundMixLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Left total/Right total center mix level. Only used for 3/2 coding mode.
     */
    inline double GetLtRtCenterMixLevel() const { return m_ltRtCenterMixLevel; }
    inline bool LtRtCenterMixLevelHasBeenSet() const { return m_ltRtCenterMixLevelHasBeenSet; }
    inline void SetLtRtCenterMixLevel(double value) { m_ltRtCenterMixLevelHasBeenSet = true; m_ltRtCenterMixLevel = value; }
    inline Eac3Settings& WithLtRtCenterMixLevel(double value) { SetLtRtCenterMixLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Left total/Right total surround mix level. Only used for 3/2 coding mode.
     */
    inline double GetLtRtSurroundMixLevel() const { return m_ltRtSurroundMixLevel; }
    inline bool LtRtSurroundMixLevelHasBeenSet() const { return m_ltRtSurroundMixLevelHasBeenSet; }
    inline void SetLtRtSurroundMixLevel(double value) { m_ltRtSurroundMixLevelHasBeenSet = true; m_ltRtSurroundMixLevel = value; }
    inline Eac3Settings& WithLtRtSurroundMixLevel(double value) { SetLtRtSurroundMixLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to followInput, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline Eac3MetadataControl GetMetadataControl() const { return m_metadataControl; }
    inline bool MetadataControlHasBeenSet() const { return m_metadataControlHasBeenSet; }
    inline void SetMetadataControl(Eac3MetadataControl value) { m_metadataControlHasBeenSet = true; m_metadataControl = value; }
    inline Eac3Settings& WithMetadataControl(Eac3MetadataControl value) { SetMetadataControl(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to whenPossible, input DD+ audio will be passed through if it is
     * present on the input. This detection is dynamic over the life of the transcode.
     * Inputs that alternate between DD+ and non-DD+ content will have a consistent DD+
     * output as the system alternates between passthrough and encoding.
     */
    inline Eac3PassthroughControl GetPassthroughControl() const { return m_passthroughControl; }
    inline bool PassthroughControlHasBeenSet() const { return m_passthroughControlHasBeenSet; }
    inline void SetPassthroughControl(Eac3PassthroughControl value) { m_passthroughControlHasBeenSet = true; m_passthroughControl = value; }
    inline Eac3Settings& WithPassthroughControl(Eac3PassthroughControl value) { SetPassthroughControl(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to shift90Degrees, applies a 90-degree phase shift to the surround
     * channels. Only used for 3/2 coding mode.
     */
    inline Eac3PhaseControl GetPhaseControl() const { return m_phaseControl; }
    inline bool PhaseControlHasBeenSet() const { return m_phaseControlHasBeenSet; }
    inline void SetPhaseControl(Eac3PhaseControl value) { m_phaseControlHasBeenSet = true; m_phaseControl = value; }
    inline Eac3Settings& WithPhaseControl(Eac3PhaseControl value) { SetPhaseControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Stereo downmix preference. Only used for 3/2 coding mode.
     */
    inline Eac3StereoDownmix GetStereoDownmix() const { return m_stereoDownmix; }
    inline bool StereoDownmixHasBeenSet() const { return m_stereoDownmixHasBeenSet; }
    inline void SetStereoDownmix(Eac3StereoDownmix value) { m_stereoDownmixHasBeenSet = true; m_stereoDownmix = value; }
    inline Eac3Settings& WithStereoDownmix(Eac3StereoDownmix value) { SetStereoDownmix(value); return *this;}
    ///@}

    ///@{
    /**
     * When encoding 3/2 audio, sets whether an extra center back surround channel is
     * matrix encoded into the left and right surround channels.
     */
    inline Eac3SurroundExMode GetSurroundExMode() const { return m_surroundExMode; }
    inline bool SurroundExModeHasBeenSet() const { return m_surroundExModeHasBeenSet; }
    inline void SetSurroundExMode(Eac3SurroundExMode value) { m_surroundExModeHasBeenSet = true; m_surroundExMode = value; }
    inline Eac3Settings& WithSurroundExMode(Eac3SurroundExMode value) { SetSurroundExMode(value); return *this;}
    ///@}

    ///@{
    /**
     * When encoding 2/0 audio, sets whether Dolby Surround is matrix encoded into the
     * two channels.
     */
    inline Eac3SurroundMode GetSurroundMode() const { return m_surroundMode; }
    inline bool SurroundModeHasBeenSet() const { return m_surroundModeHasBeenSet; }
    inline void SetSurroundMode(Eac3SurroundMode value) { m_surroundModeHasBeenSet = true; m_surroundMode = value; }
    inline Eac3Settings& WithSurroundMode(Eac3SurroundMode value) { SetSurroundMode(value); return *this;}
    ///@}
  private:

    Eac3AttenuationControl m_attenuationControl{Eac3AttenuationControl::NOT_SET};
    bool m_attenuationControlHasBeenSet = false;

    double m_bitrate{0.0};
    bool m_bitrateHasBeenSet = false;

    Eac3BitstreamMode m_bitstreamMode{Eac3BitstreamMode::NOT_SET};
    bool m_bitstreamModeHasBeenSet = false;

    Eac3CodingMode m_codingMode{Eac3CodingMode::NOT_SET};
    bool m_codingModeHasBeenSet = false;

    Eac3DcFilter m_dcFilter{Eac3DcFilter::NOT_SET};
    bool m_dcFilterHasBeenSet = false;

    int m_dialnorm{0};
    bool m_dialnormHasBeenSet = false;

    Eac3DrcLine m_drcLine{Eac3DrcLine::NOT_SET};
    bool m_drcLineHasBeenSet = false;

    Eac3DrcRf m_drcRf{Eac3DrcRf::NOT_SET};
    bool m_drcRfHasBeenSet = false;

    Eac3LfeControl m_lfeControl{Eac3LfeControl::NOT_SET};
    bool m_lfeControlHasBeenSet = false;

    Eac3LfeFilter m_lfeFilter{Eac3LfeFilter::NOT_SET};
    bool m_lfeFilterHasBeenSet = false;

    double m_loRoCenterMixLevel{0.0};
    bool m_loRoCenterMixLevelHasBeenSet = false;

    double m_loRoSurroundMixLevel{0.0};
    bool m_loRoSurroundMixLevelHasBeenSet = false;

    double m_ltRtCenterMixLevel{0.0};
    bool m_ltRtCenterMixLevelHasBeenSet = false;

    double m_ltRtSurroundMixLevel{0.0};
    bool m_ltRtSurroundMixLevelHasBeenSet = false;

    Eac3MetadataControl m_metadataControl{Eac3MetadataControl::NOT_SET};
    bool m_metadataControlHasBeenSet = false;

    Eac3PassthroughControl m_passthroughControl{Eac3PassthroughControl::NOT_SET};
    bool m_passthroughControlHasBeenSet = false;

    Eac3PhaseControl m_phaseControl{Eac3PhaseControl::NOT_SET};
    bool m_phaseControlHasBeenSet = false;

    Eac3StereoDownmix m_stereoDownmix{Eac3StereoDownmix::NOT_SET};
    bool m_stereoDownmixHasBeenSet = false;

    Eac3SurroundExMode m_surroundExMode{Eac3SurroundExMode::NOT_SET};
    bool m_surroundExModeHasBeenSet = false;

    Eac3SurroundMode m_surroundMode{Eac3SurroundMode::NOT_SET};
    bool m_surroundModeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
