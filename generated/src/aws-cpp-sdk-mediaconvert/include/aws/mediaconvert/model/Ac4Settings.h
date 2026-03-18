/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Ac4BitstreamMode.h>
#include <aws/mediaconvert/model/Ac4CodingMode.h>
#include <aws/mediaconvert/model/Ac4DynamicRangeCompressionDrcProfile.h>
#include <aws/mediaconvert/model/Ac4StereoDownmix.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConvert {
namespace Model {

/**
 * Required when you set Codec to the value AC4.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Ac4Settings">AWS
 * API Reference</a></p>
 */
class Ac4Settings {
 public:
  AWS_MEDIACONVERT_API Ac4Settings() = default;
  AWS_MEDIACONVERT_API Ac4Settings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Ac4Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Specify the average bitrate in bits per second. Leave blank to use the default
   * bitrate for the coding mode you select according to ETSI TS 103 190. Valid
   * bitrates for coding mode 2.0 (stereo): 48000, 64000, 96000, 128000, 144000,
   * 192000, 256000, 288000, 320000, 384000, 448000, 512000, or 768000. Valid
   * bitrates for coding mode 5.1 (3/2 with LFE): 96000, 128000, 144000, 192000,
   * 256000, 288000, 320000, 384000, 448000, 512000, or 768000. Valid bitrates for
   * coding mode 5.1.4 (immersive): 192000, 256000, 288000, 320000, 384000, 448000,
   * 512000, or 768000.
   */
  inline int GetBitrate() const { return m_bitrate; }
  inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
  inline void SetBitrate(int value) {
    m_bitrateHasBeenSet = true;
    m_bitrate = value;
  }
  inline Ac4Settings& WithBitrate(int value) {
    SetBitrate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the bitstream mode for the AC-4 stream that the encoder emits. For more
   * information about the AC-4 bitstream mode, see ETSI TS 103 190. Maps to
   * dlb_paec_ac4_bed_classifier in the encoder implementation. - COMPLETE_MAIN:
   * Complete Main (standard mix) - EMERGENCY: Stereo Emergency content
   */
  inline Ac4BitstreamMode GetBitstreamMode() const { return m_bitstreamMode; }
  inline bool BitstreamModeHasBeenSet() const { return m_bitstreamModeHasBeenSet; }
  inline void SetBitstreamMode(Ac4BitstreamMode value) {
    m_bitstreamModeHasBeenSet = true;
    m_bitstreamMode = value;
  }
  inline Ac4Settings& WithBitstreamMode(Ac4BitstreamMode value) {
    SetBitstreamMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Dolby AC-4 coding mode. Determines number of channels. Maps to
   * dlb_paec_ac4_bed_channel_config in the encoder implementation. -
   * CODING_MODE_2_0: 2.0 (stereo) - maps to DLB_PAEC_AC4_BED_CHANNEL_CONFIG_20   -
   * CODING_MODE_3_2_LFE: 5.1 surround - maps to DLB_PAEC_AC4_BED_CHANNEL_CONFIG_51 -
   * CODING_MODE_5_1_4: 5.1.4 immersive - maps to DLB_PAEC_AC4_BED_CHANNEL_CONFIG_514
   */
  inline Ac4CodingMode GetCodingMode() const { return m_codingMode; }
  inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }
  inline void SetCodingMode(Ac4CodingMode value) {
    m_codingModeHasBeenSet = true;
    m_codingMode = value;
  }
  inline Ac4Settings& WithCodingMode(Ac4CodingMode value) {
    SetCodingMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Choose the Dolby AC-4 dynamic range control (DRC) profile that MediaConvert uses
   * when encoding the metadata in the Dolby AC-4 stream for the specified decoder
   * mode. For information about the Dolby AC-4 DRC profiles, see the Dolby AC-4
   * specification.
   */
  inline Ac4DynamicRangeCompressionDrcProfile GetDynamicRangeCompressionFlatPanelTv() const { return m_dynamicRangeCompressionFlatPanelTv; }
  inline bool DynamicRangeCompressionFlatPanelTvHasBeenSet() const { return m_dynamicRangeCompressionFlatPanelTvHasBeenSet; }
  inline void SetDynamicRangeCompressionFlatPanelTv(Ac4DynamicRangeCompressionDrcProfile value) {
    m_dynamicRangeCompressionFlatPanelTvHasBeenSet = true;
    m_dynamicRangeCompressionFlatPanelTv = value;
  }
  inline Ac4Settings& WithDynamicRangeCompressionFlatPanelTv(Ac4DynamicRangeCompressionDrcProfile value) {
    SetDynamicRangeCompressionFlatPanelTv(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Choose the Dolby AC-4 dynamic range control (DRC) profile that MediaConvert uses
   * when encoding the metadata in the Dolby AC-4 stream for the specified decoder
   * mode. For information about the Dolby AC-4 DRC profiles, see the Dolby AC-4
   * specification.
   */
  inline Ac4DynamicRangeCompressionDrcProfile GetDynamicRangeCompressionHomeTheater() const { return m_dynamicRangeCompressionHomeTheater; }
  inline bool DynamicRangeCompressionHomeTheaterHasBeenSet() const { return m_dynamicRangeCompressionHomeTheaterHasBeenSet; }
  inline void SetDynamicRangeCompressionHomeTheater(Ac4DynamicRangeCompressionDrcProfile value) {
    m_dynamicRangeCompressionHomeTheaterHasBeenSet = true;
    m_dynamicRangeCompressionHomeTheater = value;
  }
  inline Ac4Settings& WithDynamicRangeCompressionHomeTheater(Ac4DynamicRangeCompressionDrcProfile value) {
    SetDynamicRangeCompressionHomeTheater(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Choose the Dolby AC-4 dynamic range control (DRC) profile that MediaConvert uses
   * when encoding the metadata in the Dolby AC-4 stream for the specified decoder
   * mode. For information about the Dolby AC-4 DRC profiles, see the Dolby AC-4
   * specification.
   */
  inline Ac4DynamicRangeCompressionDrcProfile GetDynamicRangeCompressionPortableHeadphones() const {
    return m_dynamicRangeCompressionPortableHeadphones;
  }
  inline bool DynamicRangeCompressionPortableHeadphonesHasBeenSet() const { return m_dynamicRangeCompressionPortableHeadphonesHasBeenSet; }
  inline void SetDynamicRangeCompressionPortableHeadphones(Ac4DynamicRangeCompressionDrcProfile value) {
    m_dynamicRangeCompressionPortableHeadphonesHasBeenSet = true;
    m_dynamicRangeCompressionPortableHeadphones = value;
  }
  inline Ac4Settings& WithDynamicRangeCompressionPortableHeadphones(Ac4DynamicRangeCompressionDrcProfile value) {
    SetDynamicRangeCompressionPortableHeadphones(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Choose the Dolby AC-4 dynamic range control (DRC) profile that MediaConvert uses
   * when encoding the metadata in the Dolby AC-4 stream for the specified decoder
   * mode. For information about the Dolby AC-4 DRC profiles, see the Dolby AC-4
   * specification.
   */
  inline Ac4DynamicRangeCompressionDrcProfile GetDynamicRangeCompressionPortableSpeakers() const {
    return m_dynamicRangeCompressionPortableSpeakers;
  }
  inline bool DynamicRangeCompressionPortableSpeakersHasBeenSet() const { return m_dynamicRangeCompressionPortableSpeakersHasBeenSet; }
  inline void SetDynamicRangeCompressionPortableSpeakers(Ac4DynamicRangeCompressionDrcProfile value) {
    m_dynamicRangeCompressionPortableSpeakersHasBeenSet = true;
    m_dynamicRangeCompressionPortableSpeakers = value;
  }
  inline Ac4Settings& WithDynamicRangeCompressionPortableSpeakers(Ac4DynamicRangeCompressionDrcProfile value) {
    SetDynamicRangeCompressionPortableSpeakers(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify a value for the following Dolby AC-4 setting: Left only/Right only
   * center mix. MediaConvert uses this value for downmixing. How the service uses
   * this value depends on the value that you choose for Stereo downmix. Valid
   * values: 3.0, 1.5, 0.0, -1.5, -3.0, -4.5, -6.0, and -infinity. The value
   * -infinity mutes the channel. This setting applies only if you keep the default
   * value of 3/2 - L, R, C, Ls, Rs for the setting Coding mode. If you choose a
   * different value for Coding mode, the service ignores Left only/Right only
   * center.
   */
  inline double GetLoRoCenterMixLevel() const { return m_loRoCenterMixLevel; }
  inline bool LoRoCenterMixLevelHasBeenSet() const { return m_loRoCenterMixLevelHasBeenSet; }
  inline void SetLoRoCenterMixLevel(double value) {
    m_loRoCenterMixLevelHasBeenSet = true;
    m_loRoCenterMixLevel = value;
  }
  inline Ac4Settings& WithLoRoCenterMixLevel(double value) {
    SetLoRoCenterMixLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify a value for the following Dolby AC-4 setting: Left only/Right only
   * surround mix. MediaConvert uses this value for downmixing. How the service uses
   * this value depends on the value that you choose for Stereo downmix. Valid
   * values: -1.5, -3.0, -4.5, -6.0, and -infinity. The value -infinity mutes the
   * channel. This setting applies only if you keep the default value of 3/2 - L, R,
   * C, Ls, Rs for the setting Coding mode. If you choose a different value for
   * Coding mode, the service ignores Left only/Right only surround.
   */
  inline double GetLoRoSurroundMixLevel() const { return m_loRoSurroundMixLevel; }
  inline bool LoRoSurroundMixLevelHasBeenSet() const { return m_loRoSurroundMixLevelHasBeenSet; }
  inline void SetLoRoSurroundMixLevel(double value) {
    m_loRoSurroundMixLevelHasBeenSet = true;
    m_loRoSurroundMixLevel = value;
  }
  inline Ac4Settings& WithLoRoSurroundMixLevel(double value) {
    SetLoRoSurroundMixLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify a value for the following Dolby AC-4 setting: Left total/Right total
   * center mix. MediaConvert uses this value for downmixing. How the service uses
   * this value depends on the value that you choose for Stereo downmix. Valid
   * values: 3.0, 1.5, 0.0, -1.5, -3.0, -4.5, -6.0, and -infinity. The value
   * -infinity mutes the channel. This setting applies only if you keep the default
   * value of 3/2 - L, R, C, Ls, Rs for the setting Coding mode. If you choose a
   * different value for Coding mode, the service ignores Left total/Right total
   * center.
   */
  inline double GetLtRtCenterMixLevel() const { return m_ltRtCenterMixLevel; }
  inline bool LtRtCenterMixLevelHasBeenSet() const { return m_ltRtCenterMixLevelHasBeenSet; }
  inline void SetLtRtCenterMixLevel(double value) {
    m_ltRtCenterMixLevelHasBeenSet = true;
    m_ltRtCenterMixLevel = value;
  }
  inline Ac4Settings& WithLtRtCenterMixLevel(double value) {
    SetLtRtCenterMixLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify a value for the following Dolby AC-4 setting: Left total/Right total
   * surround mix. MediaConvert uses this value for downmixing. How the service uses
   * this value depends on the value that you choose for Stereo downmix. Valid
   * values: -1.5, -3.0, -4.5, -6.0, and -infinity. The value -infinity mutes the
   * channel. This setting applies only if you keep the default value of 3/2 - L, R,
   * C, Ls, Rs for the setting Coding mode. If you choose a different value for
   * Coding mode, the service ignores Left total/Right total surround.
   */
  inline double GetLtRtSurroundMixLevel() const { return m_ltRtSurroundMixLevel; }
  inline bool LtRtSurroundMixLevelHasBeenSet() const { return m_ltRtSurroundMixLevelHasBeenSet; }
  inline void SetLtRtSurroundMixLevel(double value) {
    m_ltRtSurroundMixLevelHasBeenSet = true;
    m_ltRtSurroundMixLevel = value;
  }
  inline Ac4Settings& WithLtRtSurroundMixLevel(double value) {
    SetLtRtSurroundMixLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * This value is always 48000. It represents the sample rate in Hz.
   */
  inline int GetSampleRate() const { return m_sampleRate; }
  inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
  inline void SetSampleRate(int value) {
    m_sampleRateHasBeenSet = true;
    m_sampleRate = value;
  }
  inline Ac4Settings& WithSampleRate(int value) {
    SetSampleRate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Choose the preferred stereo downmix method. This setting tells the decoder how
   * to downmix multi-channel audio to stereo during playback.
   */
  inline Ac4StereoDownmix GetStereoDownmix() const { return m_stereoDownmix; }
  inline bool StereoDownmixHasBeenSet() const { return m_stereoDownmixHasBeenSet; }
  inline void SetStereoDownmix(Ac4StereoDownmix value) {
    m_stereoDownmixHasBeenSet = true;
    m_stereoDownmix = value;
  }
  inline Ac4Settings& WithStereoDownmix(Ac4StereoDownmix value) {
    SetStereoDownmix(value);
    return *this;
  }
  ///@}
 private:
  int m_bitrate{0};

  Ac4BitstreamMode m_bitstreamMode{Ac4BitstreamMode::NOT_SET};

  Ac4CodingMode m_codingMode{Ac4CodingMode::NOT_SET};

  Ac4DynamicRangeCompressionDrcProfile m_dynamicRangeCompressionFlatPanelTv{Ac4DynamicRangeCompressionDrcProfile::NOT_SET};

  Ac4DynamicRangeCompressionDrcProfile m_dynamicRangeCompressionHomeTheater{Ac4DynamicRangeCompressionDrcProfile::NOT_SET};

  Ac4DynamicRangeCompressionDrcProfile m_dynamicRangeCompressionPortableHeadphones{Ac4DynamicRangeCompressionDrcProfile::NOT_SET};

  Ac4DynamicRangeCompressionDrcProfile m_dynamicRangeCompressionPortableSpeakers{Ac4DynamicRangeCompressionDrcProfile::NOT_SET};

  double m_loRoCenterMixLevel{0.0};

  double m_loRoSurroundMixLevel{0.0};

  double m_ltRtCenterMixLevel{0.0};

  double m_ltRtSurroundMixLevel{0.0};

  int m_sampleRate{0};

  Ac4StereoDownmix m_stereoDownmix{Ac4StereoDownmix::NOT_SET};
  bool m_bitrateHasBeenSet = false;
  bool m_bitstreamModeHasBeenSet = false;
  bool m_codingModeHasBeenSet = false;
  bool m_dynamicRangeCompressionFlatPanelTvHasBeenSet = false;
  bool m_dynamicRangeCompressionHomeTheaterHasBeenSet = false;
  bool m_dynamicRangeCompressionPortableHeadphonesHasBeenSet = false;
  bool m_dynamicRangeCompressionPortableSpeakersHasBeenSet = false;
  bool m_loRoCenterMixLevelHasBeenSet = false;
  bool m_loRoSurroundMixLevelHasBeenSet = false;
  bool m_ltRtCenterMixLevelHasBeenSet = false;
  bool m_ltRtSurroundMixLevelHasBeenSet = false;
  bool m_sampleRateHasBeenSet = false;
  bool m_stereoDownmixHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
