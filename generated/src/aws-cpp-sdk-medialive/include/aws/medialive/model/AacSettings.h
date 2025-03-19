/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AacCodingMode.h>
#include <aws/medialive/model/AacInputType.h>
#include <aws/medialive/model/AacProfile.h>
#include <aws/medialive/model/AacRateControlMode.h>
#include <aws/medialive/model/AacRawFormat.h>
#include <aws/medialive/model/AacSpec.h>
#include <aws/medialive/model/AacVbrQuality.h>
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
   * Aac Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AacSettings">AWS
   * API Reference</a></p>
   */
  class AacSettings
  {
  public:
    AWS_MEDIALIVE_API AacSettings() = default;
    AWS_MEDIALIVE_API AacSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AacSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Average bitrate in bits/second. Valid values depend on rate control mode and
     * profile.
     */
    inline double GetBitrate() const { return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(double value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline AacSettings& WithBitrate(double value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Mono, Stereo, or 5.1 channel layout. Valid values depend on rate control mode
     * and profile. The adReceiverMix setting receives a stereo description plus
     * control track and emits a mono AAC encode of the description track, with control
     * data emitted in the PES header as per ETSI TS 101 154 Annex E.
     */
    inline AacCodingMode GetCodingMode() const { return m_codingMode; }
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }
    inline void SetCodingMode(AacCodingMode value) { m_codingModeHasBeenSet = true; m_codingMode = value; }
    inline AacSettings& WithCodingMode(AacCodingMode value) { SetCodingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Set to "broadcasterMixedAd" when input contains pre-mixed main audio + AD
     * (narration) as a stereo pair.  The Audio Type field (audioType) will be set to
     * 3, which signals to downstream systems that this stream contains "broadcaster
     * mixed AD". Note that the input received by the encoder must contain pre-mixed
     * audio; the encoder does not perform the mixing. The values in audioTypeControl
     * and audioType (in AudioDescription) are ignored when set to
     * broadcasterMixedAd.

Leave set to "normal" when input does not contain pre-mixed
     * audio + AD.
     */
    inline AacInputType GetInputType() const { return m_inputType; }
    inline bool InputTypeHasBeenSet() const { return m_inputTypeHasBeenSet; }
    inline void SetInputType(AacInputType value) { m_inputTypeHasBeenSet = true; m_inputType = value; }
    inline AacSettings& WithInputType(AacInputType value) { SetInputType(value); return *this;}
    ///@}

    ///@{
    /**
     * AAC Profile.
     */
    inline AacProfile GetProfile() const { return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    inline void SetProfile(AacProfile value) { m_profileHasBeenSet = true; m_profile = value; }
    inline AacSettings& WithProfile(AacProfile value) { SetProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * Rate Control Mode.
     */
    inline AacRateControlMode GetRateControlMode() const { return m_rateControlMode; }
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }
    inline void SetRateControlMode(AacRateControlMode value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }
    inline AacSettings& WithRateControlMode(AacRateControlMode value) { SetRateControlMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Sets LATM / LOAS AAC output for raw containers.
     */
    inline AacRawFormat GetRawFormat() const { return m_rawFormat; }
    inline bool RawFormatHasBeenSet() const { return m_rawFormatHasBeenSet; }
    inline void SetRawFormat(AacRawFormat value) { m_rawFormatHasBeenSet = true; m_rawFormat = value; }
    inline AacSettings& WithRawFormat(AacRawFormat value) { SetRawFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * Sample rate in Hz. Valid values depend on rate control mode and profile.
     */
    inline double GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(double value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline AacSettings& WithSampleRate(double value) { SetSampleRate(value); return *this;}
    ///@}

    ///@{
    /**
     * Use MPEG-2 AAC audio instead of MPEG-4 AAC audio for raw or MPEG-2 Transport
     * Stream containers.
     */
    inline AacSpec GetSpec() const { return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    inline void SetSpec(AacSpec value) { m_specHasBeenSet = true; m_spec = value; }
    inline AacSettings& WithSpec(AacSpec value) { SetSpec(value); return *this;}
    ///@}

    ///@{
    /**
     * VBR Quality Level - Only used if rateControlMode is VBR.
     */
    inline AacVbrQuality GetVbrQuality() const { return m_vbrQuality; }
    inline bool VbrQualityHasBeenSet() const { return m_vbrQualityHasBeenSet; }
    inline void SetVbrQuality(AacVbrQuality value) { m_vbrQualityHasBeenSet = true; m_vbrQuality = value; }
    inline AacSettings& WithVbrQuality(AacVbrQuality value) { SetVbrQuality(value); return *this;}
    ///@}
  private:

    double m_bitrate{0.0};
    bool m_bitrateHasBeenSet = false;

    AacCodingMode m_codingMode{AacCodingMode::NOT_SET};
    bool m_codingModeHasBeenSet = false;

    AacInputType m_inputType{AacInputType::NOT_SET};
    bool m_inputTypeHasBeenSet = false;

    AacProfile m_profile{AacProfile::NOT_SET};
    bool m_profileHasBeenSet = false;

    AacRateControlMode m_rateControlMode{AacRateControlMode::NOT_SET};
    bool m_rateControlModeHasBeenSet = false;

    AacRawFormat m_rawFormat{AacRawFormat::NOT_SET};
    bool m_rawFormatHasBeenSet = false;

    double m_sampleRate{0.0};
    bool m_sampleRateHasBeenSet = false;

    AacSpec m_spec{AacSpec::NOT_SET};
    bool m_specHasBeenSet = false;

    AacVbrQuality m_vbrQuality{AacVbrQuality::NOT_SET};
    bool m_vbrQualityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
