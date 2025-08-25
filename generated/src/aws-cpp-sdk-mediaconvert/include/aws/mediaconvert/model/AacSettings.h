/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AacAudioDescriptionBroadcasterMix.h>
#include <aws/mediaconvert/model/AacCodecProfile.h>
#include <aws/mediaconvert/model/AacCodingMode.h>
#include <aws/mediaconvert/model/AacLoudnessMeasurementMode.h>
#include <aws/mediaconvert/model/AacRateControlMode.h>
#include <aws/mediaconvert/model/AacRawFormat.h>
#include <aws/mediaconvert/model/AacSpecification.h>
#include <aws/mediaconvert/model/AacVbrQuality.h>
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
   * Required when you set Codec to the value AAC. The service accepts one of two
   * mutually exclusive groups of AAC settings--VBR and CBR. To select one of these
   * modes, set the value of Bitrate control mode to "VBR" or "CBR". In VBR mode, you
   * control the audio quality with the setting VBR quality. In CBR mode, you use the
   * setting Bitrate. Defaults and valid values depend on the rate control
   * mode.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AacSettings">AWS
   * API Reference</a></p>
   */
  class AacSettings
  {
  public:
    AWS_MEDIACONVERT_API AacSettings() = default;
    AWS_MEDIACONVERT_API AacSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AacSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Choose BROADCASTER_MIXED_AD when the input contains pre-mixed main audio + audio
     * description (AD) as a stereo pair. The value for AudioType will be set to 3,
     * which signals to downstream systems that this stream contains "broadcaster mixed
     * AD". Note that the input received by the encoder must contain pre-mixed audio;
     * the encoder does not perform the mixing. When you choose BROADCASTER_MIXED_AD,
     * the encoder ignores any values you provide in AudioType and
     * FollowInputAudioType. Choose NORMAL when the input does not contain pre-mixed
     * audio + audio description (AD). In this case, the encoder will use any values
     * you provide for AudioType and FollowInputAudioType.
     */
    inline AacAudioDescriptionBroadcasterMix GetAudioDescriptionBroadcasterMix() const { return m_audioDescriptionBroadcasterMix; }
    inline bool AudioDescriptionBroadcasterMixHasBeenSet() const { return m_audioDescriptionBroadcasterMixHasBeenSet; }
    inline void SetAudioDescriptionBroadcasterMix(AacAudioDescriptionBroadcasterMix value) { m_audioDescriptionBroadcasterMixHasBeenSet = true; m_audioDescriptionBroadcasterMix = value; }
    inline AacSettings& WithAudioDescriptionBroadcasterMix(AacAudioDescriptionBroadcasterMix value) { SetAudioDescriptionBroadcasterMix(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the average bitrate in bits per second. The set of valid values for this
     * setting is: 6000, 8000, 10000, 12000, 14000, 16000, 20000, 24000, 28000, 32000,
     * 40000, 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000,
     * 224000, 256000, 288000, 320000, 384000, 448000, 512000, 576000, 640000, 768000,
     * 896000, 1024000. The value you set is also constrained by the values that you
     * choose for Profile, Bitrate control mode, and Sample rate. Default values depend
     * on Bitrate control mode and Profile.
     */
    inline int GetBitrate() const { return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline AacSettings& WithBitrate(int value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the AAC profile. For the widest player compatibility and where higher
     * bitrates are acceptable: Keep the default profile, LC (AAC-LC) For improved
     * audio performance at lower bitrates: Choose HEV1 or HEV2. HEV1 (AAC-HE v1) adds
     * spectral band replication to improve speech audio at low bitrates. HEV2 (AAC-HE
     * v2) adds parametric stereo, which optimizes for encoding stereo audio at very
     * low bitrates. For improved audio quality at lower bitrates, adaptive audio
     * bitrate switching, and loudness control: Choose XHE.
     */
    inline AacCodecProfile GetCodecProfile() const { return m_codecProfile; }
    inline bool CodecProfileHasBeenSet() const { return m_codecProfileHasBeenSet; }
    inline void SetCodecProfile(AacCodecProfile value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }
    inline AacSettings& WithCodecProfile(AacCodecProfile value) { SetCodecProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * The Coding mode that you specify determines the number of audio channels and the
     * audio channel layout metadata in your AAC output. Valid coding modes depend on
     * the Rate control mode and Profile that you select. The following list shows the
     * number of audio channels and channel layout for each coding mode. * 1.0 Audio
     * Description (Receiver Mix): One channel, C. Includes audio description data from
     * your stereo input. For more information see ETSI TS 101 154 Annex E. * 1.0 Mono:
     * One channel, C. * 2.0 Stereo: Two channels, L, R. * 5.1 Surround: Six channels,
     * C, L, R, Ls, Rs, LFE.
     */
    inline AacCodingMode GetCodingMode() const { return m_codingMode; }
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }
    inline void SetCodingMode(AacCodingMode value) { m_codingModeHasBeenSet = true; m_codingMode = value; }
    inline AacSettings& WithCodingMode(AacCodingMode value) { SetCodingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose the loudness measurement mode for your audio content. For music or
     * advertisements: We recommend that you keep the default value, Program. For
     * speech or other content: We recommend that you choose Anchor. When you do,
     * MediaConvert optimizes the loudness of your output for clarify by applying
     * speech gates.
     */
    inline AacLoudnessMeasurementMode GetLoudnessMeasurementMode() const { return m_loudnessMeasurementMode; }
    inline bool LoudnessMeasurementModeHasBeenSet() const { return m_loudnessMeasurementModeHasBeenSet; }
    inline void SetLoudnessMeasurementMode(AacLoudnessMeasurementMode value) { m_loudnessMeasurementModeHasBeenSet = true; m_loudnessMeasurementMode = value; }
    inline AacSettings& WithLoudnessMeasurementMode(AacLoudnessMeasurementMode value) { SetLoudnessMeasurementMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the RAP (Random Access Point) interval for your xHE-AAC audio output. A
     * RAP allows a decoder to decode audio data mid-stream, without the need to
     * reference previous audio frames, and perform adaptive audio bitrate switching.
     * To specify the RAP interval: Enter an integer from 2000 to 30000, in
     * milliseconds. Smaller values allow for better seeking and more frequent stream
     * switching, while large values improve compression efficiency. To have
     * MediaConvert automatically determine the RAP interval: Leave blank.
     */
    inline int GetRapInterval() const { return m_rapInterval; }
    inline bool RapIntervalHasBeenSet() const { return m_rapIntervalHasBeenSet; }
    inline void SetRapInterval(int value) { m_rapIntervalHasBeenSet = true; m_rapInterval = value; }
    inline AacSettings& WithRapInterval(int value) { SetRapInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the AAC rate control mode. For a constant bitrate: Choose CBR. Your AAC
     * output bitrate will be equal to the value that you choose for Bitrate. For a
     * variable bitrate: Choose VBR. Your AAC output bitrate will vary according to
     * your audio content and the value that you choose for Bitrate quality.
     */
    inline AacRateControlMode GetRateControlMode() const { return m_rateControlMode; }
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }
    inline void SetRateControlMode(AacRateControlMode value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }
    inline AacSettings& WithRateControlMode(AacRateControlMode value) { SetRateControlMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Enables LATM/LOAS AAC output. Note that if you use LATM/LOAS AAC in an output,
     * you must choose "No container" for the output container.
     */
    inline AacRawFormat GetRawFormat() const { return m_rawFormat; }
    inline bool RawFormatHasBeenSet() const { return m_rawFormatHasBeenSet; }
    inline void SetRawFormat(AacRawFormat value) { m_rawFormatHasBeenSet = true; m_rawFormat = value; }
    inline AacSettings& WithRawFormat(AacRawFormat value) { SetRawFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the AAC sample rate in samples per second (Hz). Valid sample rates
     * depend on the AAC profile and Coding mode that you select. For a list of
     * supported sample rates, see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/aac-support.html
     */
    inline int GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline AacSettings& WithSampleRate(int value) { SetSampleRate(value); return *this;}
    ///@}

    ///@{
    /**
     * Use MPEG-2 AAC instead of MPEG-4 AAC audio for raw or MPEG-2 Transport Stream
     * containers.
     */
    inline AacSpecification GetSpecification() const { return m_specification; }
    inline bool SpecificationHasBeenSet() const { return m_specificationHasBeenSet; }
    inline void SetSpecification(AacSpecification value) { m_specificationHasBeenSet = true; m_specification = value; }
    inline AacSettings& WithSpecification(AacSpecification value) { SetSpecification(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the xHE-AAC loudness target. Enter an integer from 6 to 16, representing
     * "loudness units". For more information, see the following specification:
     * Supplementary information for R 128 EBU Tech 3342-2023.
     */
    inline int GetTargetLoudnessRange() const { return m_targetLoudnessRange; }
    inline bool TargetLoudnessRangeHasBeenSet() const { return m_targetLoudnessRangeHasBeenSet; }
    inline void SetTargetLoudnessRange(int value) { m_targetLoudnessRangeHasBeenSet = true; m_targetLoudnessRange = value; }
    inline AacSettings& WithTargetLoudnessRange(int value) { SetTargetLoudnessRange(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the quality of your variable bitrate (VBR) AAC audio. For a list of
     * approximate VBR bitrates, see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/aac-support.html#aac_vbr
     */
    inline AacVbrQuality GetVbrQuality() const { return m_vbrQuality; }
    inline bool VbrQualityHasBeenSet() const { return m_vbrQualityHasBeenSet; }
    inline void SetVbrQuality(AacVbrQuality value) { m_vbrQualityHasBeenSet = true; m_vbrQuality = value; }
    inline AacSettings& WithVbrQuality(AacVbrQuality value) { SetVbrQuality(value); return *this;}
    ///@}
  private:

    AacAudioDescriptionBroadcasterMix m_audioDescriptionBroadcasterMix{AacAudioDescriptionBroadcasterMix::NOT_SET};
    bool m_audioDescriptionBroadcasterMixHasBeenSet = false;

    int m_bitrate{0};
    bool m_bitrateHasBeenSet = false;

    AacCodecProfile m_codecProfile{AacCodecProfile::NOT_SET};
    bool m_codecProfileHasBeenSet = false;

    AacCodingMode m_codingMode{AacCodingMode::NOT_SET};
    bool m_codingModeHasBeenSet = false;

    AacLoudnessMeasurementMode m_loudnessMeasurementMode{AacLoudnessMeasurementMode::NOT_SET};
    bool m_loudnessMeasurementModeHasBeenSet = false;

    int m_rapInterval{0};
    bool m_rapIntervalHasBeenSet = false;

    AacRateControlMode m_rateControlMode{AacRateControlMode::NOT_SET};
    bool m_rateControlModeHasBeenSet = false;

    AacRawFormat m_rawFormat{AacRawFormat::NOT_SET};
    bool m_rawFormatHasBeenSet = false;

    int m_sampleRate{0};
    bool m_sampleRateHasBeenSet = false;

    AacSpecification m_specification{AacSpecification::NOT_SET};
    bool m_specificationHasBeenSet = false;

    int m_targetLoudnessRange{0};
    bool m_targetLoudnessRangeHasBeenSet = false;

    AacVbrQuality m_vbrQuality{AacVbrQuality::NOT_SET};
    bool m_vbrQualityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
