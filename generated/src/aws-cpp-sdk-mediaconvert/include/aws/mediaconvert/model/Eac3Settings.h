/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Eac3AttenuationControl.h>
#include <aws/mediaconvert/model/Eac3BitstreamMode.h>
#include <aws/mediaconvert/model/Eac3CodingMode.h>
#include <aws/mediaconvert/model/Eac3DcFilter.h>
#include <aws/mediaconvert/model/Eac3DynamicRangeCompressionLine.h>
#include <aws/mediaconvert/model/Eac3DynamicRangeCompressionRf.h>
#include <aws/mediaconvert/model/Eac3LfeControl.h>
#include <aws/mediaconvert/model/Eac3LfeFilter.h>
#include <aws/mediaconvert/model/Eac3MetadataControl.h>
#include <aws/mediaconvert/model/Eac3PassthroughControl.h>
#include <aws/mediaconvert/model/Eac3PhaseControl.h>
#include <aws/mediaconvert/model/Eac3StereoDownmix.h>
#include <aws/mediaconvert/model/Eac3SurroundExMode.h>
#include <aws/mediaconvert/model/Eac3SurroundMode.h>
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
   * Required when you set Codec to the value EAC3.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Eac3Settings">AWS
   * API Reference</a></p>
   */
  class Eac3Settings
  {
  public:
    AWS_MEDIACONVERT_API Eac3Settings() = default;
    AWS_MEDIACONVERT_API Eac3Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Eac3Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If set to ATTENUATE_3_DB, applies a 3 dB attenuation to the surround channels.
     * Only used for 3/2 coding mode.
     */
    inline Eac3AttenuationControl GetAttenuationControl() const { return m_attenuationControl; }
    inline bool AttenuationControlHasBeenSet() const { return m_attenuationControlHasBeenSet; }
    inline void SetAttenuationControl(Eac3AttenuationControl value) { m_attenuationControlHasBeenSet = true; m_attenuationControl = value; }
    inline Eac3Settings& WithAttenuationControl(Eac3AttenuationControl value) { SetAttenuationControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the average bitrate in bits per second. The bitrate that you specify
     * must be a multiple of 8000 within the allowed minimum and maximum values. Leave
     * blank to use the default bitrate for the coding mode you select according ETSI
     * TS 102 366. Valid bitrates for coding mode 1/0: Default: 96000. Minimum: 32000.
     * Maximum: 3024000. Valid bitrates for coding mode 2/0: Default: 192000. Minimum:
     * 96000. Maximum: 3024000. Valid bitrates for coding mode 3/2: Default: 384000.
     * Minimum: 192000. Maximum: 3024000.
     */
    inline int GetBitrate() const { return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline Eac3Settings& WithBitrate(int value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the bitstream mode for the E-AC-3 stream that the encoder emits. For
     * more information about the EAC3 bitstream mode, see ATSC A/52-2012 (Annex E).
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
     * Activates a DC highpass filter for all input channels.
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
     * Choose the Dolby Digital dynamic range control (DRC) profile that MediaConvert
     * uses when encoding the metadata in the Dolby Digital stream for the line
     * operating mode. Related setting: When you use this setting, MediaConvert ignores
     * any value you provide for Dynamic range compression profile. For information
     * about the Dolby Digital DRC operating modes and profiles, see the Dynamic Range
     * Control chapter of the Dolby Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline Eac3DynamicRangeCompressionLine GetDynamicRangeCompressionLine() const { return m_dynamicRangeCompressionLine; }
    inline bool DynamicRangeCompressionLineHasBeenSet() const { return m_dynamicRangeCompressionLineHasBeenSet; }
    inline void SetDynamicRangeCompressionLine(Eac3DynamicRangeCompressionLine value) { m_dynamicRangeCompressionLineHasBeenSet = true; m_dynamicRangeCompressionLine = value; }
    inline Eac3Settings& WithDynamicRangeCompressionLine(Eac3DynamicRangeCompressionLine value) { SetDynamicRangeCompressionLine(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose the Dolby Digital dynamic range control (DRC) profile that MediaConvert
     * uses when encoding the metadata in the Dolby Digital stream for the RF operating
     * mode. Related setting: When you use this setting, MediaConvert ignores any value
     * you provide for Dynamic range compression profile. For information about the
     * Dolby Digital DRC operating modes and profiles, see the Dynamic Range Control
     * chapter of the Dolby Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline Eac3DynamicRangeCompressionRf GetDynamicRangeCompressionRf() const { return m_dynamicRangeCompressionRf; }
    inline bool DynamicRangeCompressionRfHasBeenSet() const { return m_dynamicRangeCompressionRfHasBeenSet; }
    inline void SetDynamicRangeCompressionRf(Eac3DynamicRangeCompressionRf value) { m_dynamicRangeCompressionRfHasBeenSet = true; m_dynamicRangeCompressionRf = value; }
    inline Eac3Settings& WithDynamicRangeCompressionRf(Eac3DynamicRangeCompressionRf value) { SetDynamicRangeCompressionRf(value); return *this;}
    ///@}

    ///@{
    /**
     * When encoding 3/2 audio, controls whether the LFE channel is enabled
     */
    inline Eac3LfeControl GetLfeControl() const { return m_lfeControl; }
    inline bool LfeControlHasBeenSet() const { return m_lfeControlHasBeenSet; }
    inline void SetLfeControl(Eac3LfeControl value) { m_lfeControlHasBeenSet = true; m_lfeControl = value; }
    inline Eac3Settings& WithLfeControl(Eac3LfeControl value) { SetLfeControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Applies a 120Hz lowpass filter to the LFE channel prior to encoding. Only valid
     * with 3_2_LFE coding mode.
     */
    inline Eac3LfeFilter GetLfeFilter() const { return m_lfeFilter; }
    inline bool LfeFilterHasBeenSet() const { return m_lfeFilterHasBeenSet; }
    inline void SetLfeFilter(Eac3LfeFilter value) { m_lfeFilterHasBeenSet = true; m_lfeFilter = value; }
    inline Eac3Settings& WithLfeFilter(Eac3LfeFilter value) { SetLfeFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a value for the following Dolby Digital Plus setting: Left only/Right
     * only center mix. MediaConvert uses this value for downmixing. How the service
     * uses this value depends on the value that you choose for Stereo downmix. Valid
     * values: 3.0, 1.5, 0.0, -1.5, -3.0, -4.5, -6.0, and -60. The value -60 mutes the
     * channel. This setting applies only if you keep the default value of 3/2 - L, R,
     * C, Ls, Rs for the setting Coding mode. If you choose a different value for
     * Coding mode, the service ignores Left only/Right only center.
     */
    inline double GetLoRoCenterMixLevel() const { return m_loRoCenterMixLevel; }
    inline bool LoRoCenterMixLevelHasBeenSet() const { return m_loRoCenterMixLevelHasBeenSet; }
    inline void SetLoRoCenterMixLevel(double value) { m_loRoCenterMixLevelHasBeenSet = true; m_loRoCenterMixLevel = value; }
    inline Eac3Settings& WithLoRoCenterMixLevel(double value) { SetLoRoCenterMixLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a value for the following Dolby Digital Plus setting: Left only/Right
     * only. MediaConvert uses this value for downmixing. How the service uses this
     * value depends on the value that you choose for Stereo downmix. Valid values:
     * -1.5, -3.0, -4.5, -6.0, and -60. The value -60 mutes the channel. This setting
     * applies only if you keep the default value of 3/2 - L, R, C, Ls, Rs for the
     * setting Coding mode. If you choose a different value for Coding mode, the
     * service ignores Left only/Right only surround.
     */
    inline double GetLoRoSurroundMixLevel() const { return m_loRoSurroundMixLevel; }
    inline bool LoRoSurroundMixLevelHasBeenSet() const { return m_loRoSurroundMixLevelHasBeenSet; }
    inline void SetLoRoSurroundMixLevel(double value) { m_loRoSurroundMixLevelHasBeenSet = true; m_loRoSurroundMixLevel = value; }
    inline Eac3Settings& WithLoRoSurroundMixLevel(double value) { SetLoRoSurroundMixLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a value for the following Dolby Digital Plus setting: Left total/Right
     * total center mix. MediaConvert uses this value for downmixing. How the service
     * uses this value depends on the value that you choose for Stereo downmix. Valid
     * values: 3.0, 1.5, 0.0, -1.5, -3.0, -4.5, -6.0, and -60. The value -60 mutes the
     * channel. This setting applies only if you keep the default value of 3/2 - L, R,
     * C, Ls, Rs for the setting Coding mode. If you choose a different value for
     * Coding mode, the service ignores Left total/Right total center.
     */
    inline double GetLtRtCenterMixLevel() const { return m_ltRtCenterMixLevel; }
    inline bool LtRtCenterMixLevelHasBeenSet() const { return m_ltRtCenterMixLevelHasBeenSet; }
    inline void SetLtRtCenterMixLevel(double value) { m_ltRtCenterMixLevelHasBeenSet = true; m_ltRtCenterMixLevel = value; }
    inline Eac3Settings& WithLtRtCenterMixLevel(double value) { SetLtRtCenterMixLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a value for the following Dolby Digital Plus setting: Left total/Right
     * total surround mix. MediaConvert uses this value for downmixing. How the service
     * uses this value depends on the value that you choose for Stereo downmix. Valid
     * values: -1.5, -3.0, -4.5, -6.0, and -60. The value -60 mutes the channel. This
     * setting applies only if you keep the default value of 3/2 - L, R, C, Ls, Rs for
     * the setting Coding mode. If you choose a different value for Coding mode, the
     * service ignores Left total/Right total surround.
     */
    inline double GetLtRtSurroundMixLevel() const { return m_ltRtSurroundMixLevel; }
    inline bool LtRtSurroundMixLevelHasBeenSet() const { return m_ltRtSurroundMixLevelHasBeenSet; }
    inline void SetLtRtSurroundMixLevel(double value) { m_ltRtSurroundMixLevelHasBeenSet = true; m_ltRtSurroundMixLevel = value; }
    inline Eac3Settings& WithLtRtSurroundMixLevel(double value) { SetLtRtSurroundMixLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to FOLLOW_INPUT, encoder metadata will be sourced from the DD, DD+, or
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
     * When set to WHEN_POSSIBLE, input DD+ audio will be passed through if it is
     * present on the input. this detection is dynamic over the life of the transcode.
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
     * Controls the amount of phase-shift applied to the surround channels. Only used
     * for 3/2 coding mode.
     */
    inline Eac3PhaseControl GetPhaseControl() const { return m_phaseControl; }
    inline bool PhaseControlHasBeenSet() const { return m_phaseControlHasBeenSet; }
    inline void SetPhaseControl(Eac3PhaseControl value) { m_phaseControlHasBeenSet = true; m_phaseControl = value; }
    inline Eac3Settings& WithPhaseControl(Eac3PhaseControl value) { SetPhaseControl(value); return *this;}
    ///@}

    ///@{
    /**
     * This value is always 48000. It represents the sample rate in Hz.
     */
    inline int GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline Eac3Settings& WithSampleRate(int value) { SetSampleRate(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose how the service does stereo downmixing. This setting only applies if you
     * keep the default value of 3/2 - L, R, C, Ls, Rs for the setting Coding mode. If
     * you choose a different value for Coding mode, the service ignores Stereo
     * downmix.
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

    int m_bitrate{0};
    bool m_bitrateHasBeenSet = false;

    Eac3BitstreamMode m_bitstreamMode{Eac3BitstreamMode::NOT_SET};
    bool m_bitstreamModeHasBeenSet = false;

    Eac3CodingMode m_codingMode{Eac3CodingMode::NOT_SET};
    bool m_codingModeHasBeenSet = false;

    Eac3DcFilter m_dcFilter{Eac3DcFilter::NOT_SET};
    bool m_dcFilterHasBeenSet = false;

    int m_dialnorm{0};
    bool m_dialnormHasBeenSet = false;

    Eac3DynamicRangeCompressionLine m_dynamicRangeCompressionLine{Eac3DynamicRangeCompressionLine::NOT_SET};
    bool m_dynamicRangeCompressionLineHasBeenSet = false;

    Eac3DynamicRangeCompressionRf m_dynamicRangeCompressionRf{Eac3DynamicRangeCompressionRf::NOT_SET};
    bool m_dynamicRangeCompressionRfHasBeenSet = false;

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

    int m_sampleRate{0};
    bool m_sampleRateHasBeenSet = false;

    Eac3StereoDownmix m_stereoDownmix{Eac3StereoDownmix::NOT_SET};
    bool m_stereoDownmixHasBeenSet = false;

    Eac3SurroundExMode m_surroundExMode{Eac3SurroundExMode::NOT_SET};
    bool m_surroundExModeHasBeenSet = false;

    Eac3SurroundMode m_surroundMode{Eac3SurroundMode::NOT_SET};
    bool m_surroundModeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
