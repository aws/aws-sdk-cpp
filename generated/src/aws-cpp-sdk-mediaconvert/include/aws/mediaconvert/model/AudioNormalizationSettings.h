/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AudioNormalizationAlgorithm.h>
#include <aws/mediaconvert/model/AudioNormalizationAlgorithmControl.h>
#include <aws/mediaconvert/model/AudioNormalizationLoudnessLogging.h>
#include <aws/mediaconvert/model/AudioNormalizationPeakCalculation.h>
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
   * Advanced audio normalization settings. Ignore these settings unless you need to
   * comply with a loudness standard.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioNormalizationSettings">AWS
   * API Reference</a></p>
   */
  class AudioNormalizationSettings
  {
  public:
    AWS_MEDIACONVERT_API AudioNormalizationSettings() = default;
    AWS_MEDIACONVERT_API AudioNormalizationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AudioNormalizationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Choose one of the following audio normalization algorithms: ITU-R BS.1770-1:
     * Ungated loudness. A measurement of ungated average loudness for an entire piece
     * of content, suitable for measurement of short-form content under ATSC
     * recommendation A/85. Supports up to 5.1 audio channels. ITU-R BS.1770-2: Gated
     * loudness. A measurement of gated average loudness compliant with the
     * requirements of EBU-R128. Supports up to 5.1 audio channels. ITU-R BS.1770-3:
     * Modified peak. The same loudness measurement algorithm as 1770-2, with an
     * updated true peak measurement. ITU-R BS.1770-4: Higher channel count. Allows for
     * more audio channels than the other algorithms, including configurations such as
     * 7.1.
     */
    inline AudioNormalizationAlgorithm GetAlgorithm() const { return m_algorithm; }
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
    inline void SetAlgorithm(AudioNormalizationAlgorithm value) { m_algorithmHasBeenSet = true; m_algorithm = value; }
    inline AudioNormalizationSettings& WithAlgorithm(AudioNormalizationAlgorithm value) { SetAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * When enabled the output audio is corrected using the chosen algorithm. If
     * disabled, the audio will be measured but not adjusted.
     */
    inline AudioNormalizationAlgorithmControl GetAlgorithmControl() const { return m_algorithmControl; }
    inline bool AlgorithmControlHasBeenSet() const { return m_algorithmControlHasBeenSet; }
    inline void SetAlgorithmControl(AudioNormalizationAlgorithmControl value) { m_algorithmControlHasBeenSet = true; m_algorithmControl = value; }
    inline AudioNormalizationSettings& WithAlgorithmControl(AudioNormalizationAlgorithmControl value) { SetAlgorithmControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Content measuring above this level will be corrected to the target level.
     * Content measuring below this level will not be corrected.
     */
    inline int GetCorrectionGateLevel() const { return m_correctionGateLevel; }
    inline bool CorrectionGateLevelHasBeenSet() const { return m_correctionGateLevelHasBeenSet; }
    inline void SetCorrectionGateLevel(int value) { m_correctionGateLevelHasBeenSet = true; m_correctionGateLevel = value; }
    inline AudioNormalizationSettings& WithCorrectionGateLevel(int value) { SetCorrectionGateLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * If set to LOG, log each output's audio track loudness to a CSV file.
     */
    inline AudioNormalizationLoudnessLogging GetLoudnessLogging() const { return m_loudnessLogging; }
    inline bool LoudnessLoggingHasBeenSet() const { return m_loudnessLoggingHasBeenSet; }
    inline void SetLoudnessLogging(AudioNormalizationLoudnessLogging value) { m_loudnessLoggingHasBeenSet = true; m_loudnessLogging = value; }
    inline AudioNormalizationSettings& WithLoudnessLogging(AudioNormalizationLoudnessLogging value) { SetLoudnessLogging(value); return *this;}
    ///@}

    ///@{
    /**
     * If set to TRUE_PEAK, calculate and log the TruePeak for each output's audio
     * track loudness.
     */
    inline AudioNormalizationPeakCalculation GetPeakCalculation() const { return m_peakCalculation; }
    inline bool PeakCalculationHasBeenSet() const { return m_peakCalculationHasBeenSet; }
    inline void SetPeakCalculation(AudioNormalizationPeakCalculation value) { m_peakCalculationHasBeenSet = true; m_peakCalculation = value; }
    inline AudioNormalizationSettings& WithPeakCalculation(AudioNormalizationPeakCalculation value) { SetPeakCalculation(value); return *this;}
    ///@}

    ///@{
    /**
     * When you use Audio normalization, optionally use this setting to specify a
     * target loudness. If you don't specify a value here, the encoder chooses a value
     * for you, based on the algorithm that you choose for Algorithm. If you choose
     * algorithm 1770-1, the encoder will choose -24 LKFS; otherwise, the encoder will
     * choose -23 LKFS.
     */
    inline double GetTargetLkfs() const { return m_targetLkfs; }
    inline bool TargetLkfsHasBeenSet() const { return m_targetLkfsHasBeenSet; }
    inline void SetTargetLkfs(double value) { m_targetLkfsHasBeenSet = true; m_targetLkfs = value; }
    inline AudioNormalizationSettings& WithTargetLkfs(double value) { SetTargetLkfs(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the True-peak limiter threshold in decibels relative to full scale
     * (dBFS). The peak inter-audio sample loudness in your output will be limited to
     * the value that you specify, without affecting the overall target LKFS. Enter a
     * value from 0 to -8. Leave blank to use the default value 0.
     */
    inline double GetTruePeakLimiterThreshold() const { return m_truePeakLimiterThreshold; }
    inline bool TruePeakLimiterThresholdHasBeenSet() const { return m_truePeakLimiterThresholdHasBeenSet; }
    inline void SetTruePeakLimiterThreshold(double value) { m_truePeakLimiterThresholdHasBeenSet = true; m_truePeakLimiterThreshold = value; }
    inline AudioNormalizationSettings& WithTruePeakLimiterThreshold(double value) { SetTruePeakLimiterThreshold(value); return *this;}
    ///@}
  private:

    AudioNormalizationAlgorithm m_algorithm{AudioNormalizationAlgorithm::NOT_SET};
    bool m_algorithmHasBeenSet = false;

    AudioNormalizationAlgorithmControl m_algorithmControl{AudioNormalizationAlgorithmControl::NOT_SET};
    bool m_algorithmControlHasBeenSet = false;

    int m_correctionGateLevel{0};
    bool m_correctionGateLevelHasBeenSet = false;

    AudioNormalizationLoudnessLogging m_loudnessLogging{AudioNormalizationLoudnessLogging::NOT_SET};
    bool m_loudnessLoggingHasBeenSet = false;

    AudioNormalizationPeakCalculation m_peakCalculation{AudioNormalizationPeakCalculation::NOT_SET};
    bool m_peakCalculationHasBeenSet = false;

    double m_targetLkfs{0.0};
    bool m_targetLkfsHasBeenSet = false;

    double m_truePeakLimiterThreshold{0.0};
    bool m_truePeakLimiterThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
