/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Eac3AtmosBitstreamMode.h>
#include <aws/mediaconvert/model/Eac3AtmosCodingMode.h>
#include <aws/mediaconvert/model/Eac3AtmosDialogueIntelligence.h>
#include <aws/mediaconvert/model/Eac3AtmosDownmixControl.h>
#include <aws/mediaconvert/model/Eac3AtmosDynamicRangeCompressionLine.h>
#include <aws/mediaconvert/model/Eac3AtmosDynamicRangeCompressionRf.h>
#include <aws/mediaconvert/model/Eac3AtmosDynamicRangeControl.h>
#include <aws/mediaconvert/model/Eac3AtmosMeteringMode.h>
#include <aws/mediaconvert/model/Eac3AtmosStereoDownmix.h>
#include <aws/mediaconvert/model/Eac3AtmosSurroundExMode.h>
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
   * Required when you set Codec to the value EAC3_ATMOS.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Eac3AtmosSettings">AWS
   * API Reference</a></p>
   */
  class Eac3AtmosSettings
  {
  public:
    AWS_MEDIACONVERT_API Eac3AtmosSettings() = default;
    AWS_MEDIACONVERT_API Eac3AtmosSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Eac3AtmosSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the average bitrate for this output in bits per second. Valid values:
     * 384k, 448k, 576k, 640k, 768k, 1024k Default value: 448k Note that MediaConvert
     * supports 384k only with channel-based immersive (CBI) 7.1.4 and 5.1.4 inputs.
     * For CBI 9.1.6 and other input types, MediaConvert automatically increases your
     * output bitrate to 448k.
     */
    inline int GetBitrate() const { return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline Eac3AtmosSettings& WithBitrate(int value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the bitstream mode for the E-AC-3 stream that the encoder emits. For
     * more information about the EAC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline Eac3AtmosBitstreamMode GetBitstreamMode() const { return m_bitstreamMode; }
    inline bool BitstreamModeHasBeenSet() const { return m_bitstreamModeHasBeenSet; }
    inline void SetBitstreamMode(Eac3AtmosBitstreamMode value) { m_bitstreamModeHasBeenSet = true; m_bitstreamMode = value; }
    inline Eac3AtmosSettings& WithBitstreamMode(Eac3AtmosBitstreamMode value) { SetBitstreamMode(value); return *this;}
    ///@}

    ///@{
    /**
     * The coding mode for Dolby Digital Plus JOC (Atmos).
     */
    inline Eac3AtmosCodingMode GetCodingMode() const { return m_codingMode; }
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }
    inline void SetCodingMode(Eac3AtmosCodingMode value) { m_codingModeHasBeenSet = true; m_codingMode = value; }
    inline Eac3AtmosSettings& WithCodingMode(Eac3AtmosCodingMode value) { SetCodingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Enable Dolby Dialogue Intelligence to adjust loudness based on dialogue
     * analysis.
     */
    inline Eac3AtmosDialogueIntelligence GetDialogueIntelligence() const { return m_dialogueIntelligence; }
    inline bool DialogueIntelligenceHasBeenSet() const { return m_dialogueIntelligenceHasBeenSet; }
    inline void SetDialogueIntelligence(Eac3AtmosDialogueIntelligence value) { m_dialogueIntelligenceHasBeenSet = true; m_dialogueIntelligence = value; }
    inline Eac3AtmosSettings& WithDialogueIntelligence(Eac3AtmosDialogueIntelligence value) { SetDialogueIntelligence(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether MediaConvert should use any downmix metadata from your input
     * file. Keep the default value, Custom to provide downmix values in your job
     * settings. Choose Follow source to use the metadata from your input. Related
     * settings--Use these settings to specify your downmix values: Left only/Right
     * only surround, Left total/Right total surround, Left total/Right total center,
     * Left only/Right only center, and Stereo downmix. When you keep Custom for
     * Downmix control and you don't specify values for the related settings,
     * MediaConvert uses default values for those settings.
     */
    inline Eac3AtmosDownmixControl GetDownmixControl() const { return m_downmixControl; }
    inline bool DownmixControlHasBeenSet() const { return m_downmixControlHasBeenSet; }
    inline void SetDownmixControl(Eac3AtmosDownmixControl value) { m_downmixControlHasBeenSet = true; m_downmixControl = value; }
    inline Eac3AtmosSettings& WithDownmixControl(Eac3AtmosDownmixControl value) { SetDownmixControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose the Dolby dynamic range control (DRC) profile that MediaConvert uses when
     * encoding the metadata in the Dolby stream for the line operating mode. Default
     * value: Film light Related setting: To have MediaConvert use the value you
     * specify here, keep the default value, Custom for the setting Dynamic range
     * control. Otherwise, MediaConvert ignores Dynamic range compression line. For
     * information about the Dolby DRC operating modes and profiles, see the Dynamic
     * Range Control chapter of the Dolby Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline Eac3AtmosDynamicRangeCompressionLine GetDynamicRangeCompressionLine() const { return m_dynamicRangeCompressionLine; }
    inline bool DynamicRangeCompressionLineHasBeenSet() const { return m_dynamicRangeCompressionLineHasBeenSet; }
    inline void SetDynamicRangeCompressionLine(Eac3AtmosDynamicRangeCompressionLine value) { m_dynamicRangeCompressionLineHasBeenSet = true; m_dynamicRangeCompressionLine = value; }
    inline Eac3AtmosSettings& WithDynamicRangeCompressionLine(Eac3AtmosDynamicRangeCompressionLine value) { SetDynamicRangeCompressionLine(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose the Dolby dynamic range control (DRC) profile that MediaConvert uses when
     * encoding the metadata in the Dolby stream for the RF operating mode. Default
     * value: Film light Related setting: To have MediaConvert use the value you
     * specify here, keep the default value, Custom for the setting Dynamic range
     * control. Otherwise, MediaConvert ignores Dynamic range compression RF. For
     * information about the Dolby DRC operating modes and profiles, see the Dynamic
     * Range Control chapter of the Dolby Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline Eac3AtmosDynamicRangeCompressionRf GetDynamicRangeCompressionRf() const { return m_dynamicRangeCompressionRf; }
    inline bool DynamicRangeCompressionRfHasBeenSet() const { return m_dynamicRangeCompressionRfHasBeenSet; }
    inline void SetDynamicRangeCompressionRf(Eac3AtmosDynamicRangeCompressionRf value) { m_dynamicRangeCompressionRfHasBeenSet = true; m_dynamicRangeCompressionRf = value; }
    inline Eac3AtmosSettings& WithDynamicRangeCompressionRf(Eac3AtmosDynamicRangeCompressionRf value) { SetDynamicRangeCompressionRf(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether MediaConvert should use any dynamic range control metadata from
     * your input file. Keep the default value, Custom, to provide dynamic range
     * control values in your job settings. Choose Follow source to use the metadata
     * from your input. Related settings--Use these settings to specify your dynamic
     * range control values: Dynamic range compression line and Dynamic range
     * compression RF. When you keep the value Custom for Dynamic range control and you
     * don't specify values for the related settings, MediaConvert uses default values
     * for those settings.
     */
    inline Eac3AtmosDynamicRangeControl GetDynamicRangeControl() const { return m_dynamicRangeControl; }
    inline bool DynamicRangeControlHasBeenSet() const { return m_dynamicRangeControlHasBeenSet; }
    inline void SetDynamicRangeControl(Eac3AtmosDynamicRangeControl value) { m_dynamicRangeControlHasBeenSet = true; m_dynamicRangeControl = value; }
    inline Eac3AtmosSettings& WithDynamicRangeControl(Eac3AtmosDynamicRangeControl value) { SetDynamicRangeControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a value for the following Dolby Atmos setting: Left only/Right only
     * center mix (Lo/Ro center). MediaConvert uses this value for downmixing. Default
     * value: -3 dB. Valid values: 3.0, 1.5, 0.0, -1.5, -3.0, -4.5, and -6.0. Related
     * setting: How the service uses this value depends on the value that you choose
     * for Stereo downmix. Related setting: To have MediaConvert use this value, keep
     * the default value, Custom for the setting Downmix control. Otherwise,
     * MediaConvert ignores Left only/Right only center.
     */
    inline double GetLoRoCenterMixLevel() const { return m_loRoCenterMixLevel; }
    inline bool LoRoCenterMixLevelHasBeenSet() const { return m_loRoCenterMixLevelHasBeenSet; }
    inline void SetLoRoCenterMixLevel(double value) { m_loRoCenterMixLevelHasBeenSet = true; m_loRoCenterMixLevel = value; }
    inline Eac3AtmosSettings& WithLoRoCenterMixLevel(double value) { SetLoRoCenterMixLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a value for the following Dolby Atmos setting: Left only/Right only.
     * MediaConvert uses this value for downmixing. Default value: -3 dB. Valid values:
     * -1.5, -3.0, -4.5, -6.0, and -60. The value -60 mutes the channel. Related
     * setting: How the service uses this value depends on the value that you choose
     * for Stereo downmix. Related setting: To have MediaConvert use this value, keep
     * the default value, Custom for the setting Downmix control. Otherwise,
     * MediaConvert ignores Left only/Right only surround.
     */
    inline double GetLoRoSurroundMixLevel() const { return m_loRoSurroundMixLevel; }
    inline bool LoRoSurroundMixLevelHasBeenSet() const { return m_loRoSurroundMixLevelHasBeenSet; }
    inline void SetLoRoSurroundMixLevel(double value) { m_loRoSurroundMixLevelHasBeenSet = true; m_loRoSurroundMixLevel = value; }
    inline Eac3AtmosSettings& WithLoRoSurroundMixLevel(double value) { SetLoRoSurroundMixLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a value for the following Dolby Atmos setting: Left total/Right total
     * center mix (Lt/Rt center). MediaConvert uses this value for downmixing. Default
     * value: -3 dB Valid values: 3.0, 1.5, 0.0, -1.5, -3.0, -4.5, and -6.0. Related
     * setting: How the service uses this value depends on the value that you choose
     * for Stereo downmix. Related setting: To have MediaConvert use this value, keep
     * the default value, Custom for the setting Downmix control. Otherwise,
     * MediaConvert ignores Left total/Right total center.
     */
    inline double GetLtRtCenterMixLevel() const { return m_ltRtCenterMixLevel; }
    inline bool LtRtCenterMixLevelHasBeenSet() const { return m_ltRtCenterMixLevelHasBeenSet; }
    inline void SetLtRtCenterMixLevel(double value) { m_ltRtCenterMixLevelHasBeenSet = true; m_ltRtCenterMixLevel = value; }
    inline Eac3AtmosSettings& WithLtRtCenterMixLevel(double value) { SetLtRtCenterMixLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a value for the following Dolby Atmos setting: Left total/Right total
     * surround mix (Lt/Rt surround). MediaConvert uses this value for downmixing.
     * Default value: -3 dB Valid values: -1.5, -3.0, -4.5, -6.0, and -60. The value
     * -60 mutes the channel. Related setting: How the service uses this value depends
     * on the value that you choose for Stereo downmix. Related setting: To have
     * MediaConvert use this value, keep the default value, Custom for the setting
     * Downmix control. Otherwise, the service ignores Left total/Right total surround.
     */
    inline double GetLtRtSurroundMixLevel() const { return m_ltRtSurroundMixLevel; }
    inline bool LtRtSurroundMixLevelHasBeenSet() const { return m_ltRtSurroundMixLevelHasBeenSet; }
    inline void SetLtRtSurroundMixLevel(double value) { m_ltRtSurroundMixLevelHasBeenSet = true; m_ltRtSurroundMixLevel = value; }
    inline Eac3AtmosSettings& WithLtRtSurroundMixLevel(double value) { SetLtRtSurroundMixLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose how the service meters the loudness of your audio.
     */
    inline Eac3AtmosMeteringMode GetMeteringMode() const { return m_meteringMode; }
    inline bool MeteringModeHasBeenSet() const { return m_meteringModeHasBeenSet; }
    inline void SetMeteringMode(Eac3AtmosMeteringMode value) { m_meteringModeHasBeenSet = true; m_meteringMode = value; }
    inline Eac3AtmosSettings& WithMeteringMode(Eac3AtmosMeteringMode value) { SetMeteringMode(value); return *this;}
    ///@}

    ///@{
    /**
     * This value is always 48000. It represents the sample rate in Hz.
     */
    inline int GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline Eac3AtmosSettings& WithSampleRate(int value) { SetSampleRate(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the percentage of audio content, from 0% to 100%, that must be speech in
     * order for the encoder to use the measured speech loudness as the overall program
     * loudness. Default value: 15%
     */
    inline int GetSpeechThreshold() const { return m_speechThreshold; }
    inline bool SpeechThresholdHasBeenSet() const { return m_speechThresholdHasBeenSet; }
    inline void SetSpeechThreshold(int value) { m_speechThresholdHasBeenSet = true; m_speechThreshold = value; }
    inline Eac3AtmosSettings& WithSpeechThreshold(int value) { SetSpeechThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose how the service does stereo downmixing. Default value: Not indicated
     * Related setting: To have MediaConvert use this value, keep the default value,
     * Custom for the setting Downmix control. Otherwise, MediaConvert ignores Stereo
     * downmix.
     */
    inline Eac3AtmosStereoDownmix GetStereoDownmix() const { return m_stereoDownmix; }
    inline bool StereoDownmixHasBeenSet() const { return m_stereoDownmixHasBeenSet; }
    inline void SetStereoDownmix(Eac3AtmosStereoDownmix value) { m_stereoDownmixHasBeenSet = true; m_stereoDownmix = value; }
    inline Eac3AtmosSettings& WithStereoDownmix(Eac3AtmosStereoDownmix value) { SetStereoDownmix(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether your input audio has an additional center rear surround channel
     * matrix encoded into your left and right surround channels.
     */
    inline Eac3AtmosSurroundExMode GetSurroundExMode() const { return m_surroundExMode; }
    inline bool SurroundExModeHasBeenSet() const { return m_surroundExModeHasBeenSet; }
    inline void SetSurroundExMode(Eac3AtmosSurroundExMode value) { m_surroundExModeHasBeenSet = true; m_surroundExMode = value; }
    inline Eac3AtmosSettings& WithSurroundExMode(Eac3AtmosSurroundExMode value) { SetSurroundExMode(value); return *this;}
    ///@}
  private:

    int m_bitrate{0};
    bool m_bitrateHasBeenSet = false;

    Eac3AtmosBitstreamMode m_bitstreamMode{Eac3AtmosBitstreamMode::NOT_SET};
    bool m_bitstreamModeHasBeenSet = false;

    Eac3AtmosCodingMode m_codingMode{Eac3AtmosCodingMode::NOT_SET};
    bool m_codingModeHasBeenSet = false;

    Eac3AtmosDialogueIntelligence m_dialogueIntelligence{Eac3AtmosDialogueIntelligence::NOT_SET};
    bool m_dialogueIntelligenceHasBeenSet = false;

    Eac3AtmosDownmixControl m_downmixControl{Eac3AtmosDownmixControl::NOT_SET};
    bool m_downmixControlHasBeenSet = false;

    Eac3AtmosDynamicRangeCompressionLine m_dynamicRangeCompressionLine{Eac3AtmosDynamicRangeCompressionLine::NOT_SET};
    bool m_dynamicRangeCompressionLineHasBeenSet = false;

    Eac3AtmosDynamicRangeCompressionRf m_dynamicRangeCompressionRf{Eac3AtmosDynamicRangeCompressionRf::NOT_SET};
    bool m_dynamicRangeCompressionRfHasBeenSet = false;

    Eac3AtmosDynamicRangeControl m_dynamicRangeControl{Eac3AtmosDynamicRangeControl::NOT_SET};
    bool m_dynamicRangeControlHasBeenSet = false;

    double m_loRoCenterMixLevel{0.0};
    bool m_loRoCenterMixLevelHasBeenSet = false;

    double m_loRoSurroundMixLevel{0.0};
    bool m_loRoSurroundMixLevelHasBeenSet = false;

    double m_ltRtCenterMixLevel{0.0};
    bool m_ltRtCenterMixLevelHasBeenSet = false;

    double m_ltRtSurroundMixLevel{0.0};
    bool m_ltRtSurroundMixLevelHasBeenSet = false;

    Eac3AtmosMeteringMode m_meteringMode{Eac3AtmosMeteringMode::NOT_SET};
    bool m_meteringModeHasBeenSet = false;

    int m_sampleRate{0};
    bool m_sampleRateHasBeenSet = false;

    int m_speechThreshold{0};
    bool m_speechThresholdHasBeenSet = false;

    Eac3AtmosStereoDownmix m_stereoDownmix{Eac3AtmosStereoDownmix::NOT_SET};
    bool m_stereoDownmixHasBeenSet = false;

    Eac3AtmosSurroundExMode m_surroundExMode{Eac3AtmosSurroundExMode::NOT_SET};
    bool m_surroundExModeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
