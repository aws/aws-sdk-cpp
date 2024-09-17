/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AacAudioDescriptionBroadcasterMix.h>
#include <aws/mediaconvert/model/AacCodecProfile.h>
#include <aws/mediaconvert/model/AacCodingMode.h>
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
    AWS_MEDIACONVERT_API AacSettings();
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
    inline const AacAudioDescriptionBroadcasterMix& GetAudioDescriptionBroadcasterMix() const{ return m_audioDescriptionBroadcasterMix; }
    inline bool AudioDescriptionBroadcasterMixHasBeenSet() const { return m_audioDescriptionBroadcasterMixHasBeenSet; }
    inline void SetAudioDescriptionBroadcasterMix(const AacAudioDescriptionBroadcasterMix& value) { m_audioDescriptionBroadcasterMixHasBeenSet = true; m_audioDescriptionBroadcasterMix = value; }
    inline void SetAudioDescriptionBroadcasterMix(AacAudioDescriptionBroadcasterMix&& value) { m_audioDescriptionBroadcasterMixHasBeenSet = true; m_audioDescriptionBroadcasterMix = std::move(value); }
    inline AacSettings& WithAudioDescriptionBroadcasterMix(const AacAudioDescriptionBroadcasterMix& value) { SetAudioDescriptionBroadcasterMix(value); return *this;}
    inline AacSettings& WithAudioDescriptionBroadcasterMix(AacAudioDescriptionBroadcasterMix&& value) { SetAudioDescriptionBroadcasterMix(std::move(value)); return *this;}
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
    inline int GetBitrate() const{ return m_bitrate; }
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
     * low bitrates.
     */
    inline const AacCodecProfile& GetCodecProfile() const{ return m_codecProfile; }
    inline bool CodecProfileHasBeenSet() const { return m_codecProfileHasBeenSet; }
    inline void SetCodecProfile(const AacCodecProfile& value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }
    inline void SetCodecProfile(AacCodecProfile&& value) { m_codecProfileHasBeenSet = true; m_codecProfile = std::move(value); }
    inline AacSettings& WithCodecProfile(const AacCodecProfile& value) { SetCodecProfile(value); return *this;}
    inline AacSettings& WithCodecProfile(AacCodecProfile&& value) { SetCodecProfile(std::move(value)); return *this;}
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
    inline const AacCodingMode& GetCodingMode() const{ return m_codingMode; }
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }
    inline void SetCodingMode(const AacCodingMode& value) { m_codingModeHasBeenSet = true; m_codingMode = value; }
    inline void SetCodingMode(AacCodingMode&& value) { m_codingModeHasBeenSet = true; m_codingMode = std::move(value); }
    inline AacSettings& WithCodingMode(const AacCodingMode& value) { SetCodingMode(value); return *this;}
    inline AacSettings& WithCodingMode(AacCodingMode&& value) { SetCodingMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the AAC rate control mode. For a constant bitrate: Choose CBR. Your AAC
     * output bitrate will be equal to the value that you choose for Bitrate. For a
     * variable bitrate: Choose VBR. Your AAC output bitrate will vary according to
     * your audio content and the value that you choose for Bitrate quality.
     */
    inline const AacRateControlMode& GetRateControlMode() const{ return m_rateControlMode; }
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }
    inline void SetRateControlMode(const AacRateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }
    inline void SetRateControlMode(AacRateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }
    inline AacSettings& WithRateControlMode(const AacRateControlMode& value) { SetRateControlMode(value); return *this;}
    inline AacSettings& WithRateControlMode(AacRateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Enables LATM/LOAS AAC output. Note that if you use LATM/LOAS AAC in an output,
     * you must choose "No container" for the output container.
     */
    inline const AacRawFormat& GetRawFormat() const{ return m_rawFormat; }
    inline bool RawFormatHasBeenSet() const { return m_rawFormatHasBeenSet; }
    inline void SetRawFormat(const AacRawFormat& value) { m_rawFormatHasBeenSet = true; m_rawFormat = value; }
    inline void SetRawFormat(AacRawFormat&& value) { m_rawFormatHasBeenSet = true; m_rawFormat = std::move(value); }
    inline AacSettings& WithRawFormat(const AacRawFormat& value) { SetRawFormat(value); return *this;}
    inline AacSettings& WithRawFormat(AacRawFormat&& value) { SetRawFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the AAC sample rate in samples per second (Hz). Valid sample rates
     * depend on the AAC profile and Coding mode that you select. For a list of
     * supported sample rates, see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/aac-support.html
     */
    inline int GetSampleRate() const{ return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline AacSettings& WithSampleRate(int value) { SetSampleRate(value); return *this;}
    ///@}

    ///@{
    /**
     * Use MPEG-2 AAC instead of MPEG-4 AAC audio for raw or MPEG-2 Transport Stream
     * containers.
     */
    inline const AacSpecification& GetSpecification() const{ return m_specification; }
    inline bool SpecificationHasBeenSet() const { return m_specificationHasBeenSet; }
    inline void SetSpecification(const AacSpecification& value) { m_specificationHasBeenSet = true; m_specification = value; }
    inline void SetSpecification(AacSpecification&& value) { m_specificationHasBeenSet = true; m_specification = std::move(value); }
    inline AacSettings& WithSpecification(const AacSpecification& value) { SetSpecification(value); return *this;}
    inline AacSettings& WithSpecification(AacSpecification&& value) { SetSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the quality of your variable bitrate (VBR) AAC audio. For a list of
     * approximate VBR bitrates, see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/aac-support.html#aac_vbr
     */
    inline const AacVbrQuality& GetVbrQuality() const{ return m_vbrQuality; }
    inline bool VbrQualityHasBeenSet() const { return m_vbrQualityHasBeenSet; }
    inline void SetVbrQuality(const AacVbrQuality& value) { m_vbrQualityHasBeenSet = true; m_vbrQuality = value; }
    inline void SetVbrQuality(AacVbrQuality&& value) { m_vbrQualityHasBeenSet = true; m_vbrQuality = std::move(value); }
    inline AacSettings& WithVbrQuality(const AacVbrQuality& value) { SetVbrQuality(value); return *this;}
    inline AacSettings& WithVbrQuality(AacVbrQuality&& value) { SetVbrQuality(std::move(value)); return *this;}
    ///@}
  private:

    AacAudioDescriptionBroadcasterMix m_audioDescriptionBroadcasterMix;
    bool m_audioDescriptionBroadcasterMixHasBeenSet = false;

    int m_bitrate;
    bool m_bitrateHasBeenSet = false;

    AacCodecProfile m_codecProfile;
    bool m_codecProfileHasBeenSet = false;

    AacCodingMode m_codingMode;
    bool m_codingModeHasBeenSet = false;

    AacRateControlMode m_rateControlMode;
    bool m_rateControlModeHasBeenSet = false;

    AacRawFormat m_rawFormat;
    bool m_rawFormatHasBeenSet = false;

    int m_sampleRate;
    bool m_sampleRateHasBeenSet = false;

    AacSpecification m_specification;
    bool m_specificationHasBeenSet = false;

    AacVbrQuality m_vbrQuality;
    bool m_vbrQualityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
