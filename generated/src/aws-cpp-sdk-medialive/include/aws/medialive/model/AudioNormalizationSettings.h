/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AudioNormalizationAlgorithm.h>
#include <aws/medialive/model/AudioNormalizationAlgorithmControl.h>
#include <aws/medialive/model/AudioNormalizationPeakCalculation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * Audio Normalization Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioNormalizationSettings">AWS
 * API Reference</a></p>
 */
class AudioNormalizationSettings {
 public:
  AWS_MEDIALIVE_API AudioNormalizationSettings() = default;
  AWS_MEDIALIVE_API AudioNormalizationSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API AudioNormalizationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Choose one of the following audio normalization algorithms:

ITU-R BS.1770-1:
   * Ungated loudness. A measurement of ungated average loudness for an entire piece
   * of content,
suitable for measurement of short-form content under ATSC
   * recommendation A/85. Supports up to 5.1 audio channels.

ITU-R BS.1770-2: Gated
   * loudness. A measurement of gated average loudness compliant with the
   * requirements of
EBU-R128. Supports up to 5.1 audio channels.

ITU-R BS.1770-3:
   * Modified peak. The same loudness measurement algorithm as 1770-2, with an
   * updated true peak
measurement.

ITU-R BS.1770-4: Higher channel count. Allows
   * for more audio channels than the other algorithms, including
configurations such
   * as 7.1.
   */
  inline AudioNormalizationAlgorithm GetAlgorithm() const { return m_algorithm; }
  inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
  inline void SetAlgorithm(AudioNormalizationAlgorithm value) {
    m_algorithmHasBeenSet = true;
    m_algorithm = value;
  }
  inline AudioNormalizationSettings& WithAlgorithm(AudioNormalizationAlgorithm value) {
    SetAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * When set to correctAudio the output audio is corrected using the chosen
   * algorithm. If set to measureOnly, the audio will be measured but not adjusted.
   */
  inline AudioNormalizationAlgorithmControl GetAlgorithmControl() const { return m_algorithmControl; }
  inline bool AlgorithmControlHasBeenSet() const { return m_algorithmControlHasBeenSet; }
  inline void SetAlgorithmControl(AudioNormalizationAlgorithmControl value) {
    m_algorithmControlHasBeenSet = true;
    m_algorithmControl = value;
  }
  inline AudioNormalizationSettings& WithAlgorithmControl(AudioNormalizationAlgorithmControl value) {
    SetAlgorithmControl(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Target LKFS(loudness) to adjust volume to. If no value is entered, a default
   * value will be used according to the chosen algorithm.  The CALM Act recommends a
   * target of -24 LKFS. The EBU R-128 specification recommends a target of -23 LKFS.
   */
  inline double GetTargetLkfs() const { return m_targetLkfs; }
  inline bool TargetLkfsHasBeenSet() const { return m_targetLkfsHasBeenSet; }
  inline void SetTargetLkfs(double value) {
    m_targetLkfsHasBeenSet = true;
    m_targetLkfs = value;
  }
  inline AudioNormalizationSettings& WithTargetLkfs(double value) {
    SetTargetLkfs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * If set to TRUE_PEAK, calculate the TruePeak for each output's audio track
   * loudness.
   */
  inline AudioNormalizationPeakCalculation GetPeakCalculation() const { return m_peakCalculation; }
  inline bool PeakCalculationHasBeenSet() const { return m_peakCalculationHasBeenSet; }
  inline void SetPeakCalculation(AudioNormalizationPeakCalculation value) {
    m_peakCalculationHasBeenSet = true;
    m_peakCalculation = value;
  }
  inline AudioNormalizationSettings& WithPeakCalculation(AudioNormalizationPeakCalculation value) {
    SetPeakCalculation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Peak limiter threshold in decibels relative to true peak (dBTP) if TRUE_PEAK is
   * enabled.
If TRUE_PEAK is not enabled a full scale (dbFS) value is used.
The peak
   * inter-audio sample loudness in your output will be limited to the value that you
   * specify,
without affecting the overall target LKFS. Leave blank to use the
   * default value 0.
   */
  inline double GetPeakLimiterThreshold() const { return m_peakLimiterThreshold; }
  inline bool PeakLimiterThresholdHasBeenSet() const { return m_peakLimiterThresholdHasBeenSet; }
  inline void SetPeakLimiterThreshold(double value) {
    m_peakLimiterThresholdHasBeenSet = true;
    m_peakLimiterThreshold = value;
  }
  inline AudioNormalizationSettings& WithPeakLimiterThreshold(double value) {
    SetPeakLimiterThreshold(value);
    return *this;
  }
  ///@}
 private:
  AudioNormalizationAlgorithm m_algorithm{AudioNormalizationAlgorithm::NOT_SET};

  AudioNormalizationAlgorithmControl m_algorithmControl{AudioNormalizationAlgorithmControl::NOT_SET};

  double m_targetLkfs{0.0};

  AudioNormalizationPeakCalculation m_peakCalculation{AudioNormalizationPeakCalculation::NOT_SET};

  double m_peakLimiterThreshold{0.0};
  bool m_algorithmHasBeenSet = false;
  bool m_algorithmControlHasBeenSet = false;
  bool m_targetLkfsHasBeenSet = false;
  bool m_peakCalculationHasBeenSet = false;
  bool m_peakLimiterThresholdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
