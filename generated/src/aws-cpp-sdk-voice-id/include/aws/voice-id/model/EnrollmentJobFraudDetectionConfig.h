/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/FraudDetectionAction.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>The configuration defining the action to take when a speaker is flagged by
   * the fraud detection system during a batch speaker enrollment job, and the risk
   * threshold to use for identification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/EnrollmentJobFraudDetectionConfig">AWS
   * API Reference</a></p>
   */
  class EnrollmentJobFraudDetectionConfig
  {
  public:
    AWS_VOICEID_API EnrollmentJobFraudDetectionConfig();
    AWS_VOICEID_API EnrollmentJobFraudDetectionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API EnrollmentJobFraudDetectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action to take when the given speaker is flagged by the fraud detection
     * system. The default value is <code>FAIL</code>, which fails the speaker
     * enrollment. Changing this value to <code>IGNORE</code> results in the speaker
     * being enrolled even if they are flagged by the fraud detection system.</p>
     */
    inline const FraudDetectionAction& GetFraudDetectionAction() const{ return m_fraudDetectionAction; }

    /**
     * <p>The action to take when the given speaker is flagged by the fraud detection
     * system. The default value is <code>FAIL</code>, which fails the speaker
     * enrollment. Changing this value to <code>IGNORE</code> results in the speaker
     * being enrolled even if they are flagged by the fraud detection system.</p>
     */
    inline bool FraudDetectionActionHasBeenSet() const { return m_fraudDetectionActionHasBeenSet; }

    /**
     * <p>The action to take when the given speaker is flagged by the fraud detection
     * system. The default value is <code>FAIL</code>, which fails the speaker
     * enrollment. Changing this value to <code>IGNORE</code> results in the speaker
     * being enrolled even if they are flagged by the fraud detection system.</p>
     */
    inline void SetFraudDetectionAction(const FraudDetectionAction& value) { m_fraudDetectionActionHasBeenSet = true; m_fraudDetectionAction = value; }

    /**
     * <p>The action to take when the given speaker is flagged by the fraud detection
     * system. The default value is <code>FAIL</code>, which fails the speaker
     * enrollment. Changing this value to <code>IGNORE</code> results in the speaker
     * being enrolled even if they are flagged by the fraud detection system.</p>
     */
    inline void SetFraudDetectionAction(FraudDetectionAction&& value) { m_fraudDetectionActionHasBeenSet = true; m_fraudDetectionAction = std::move(value); }

    /**
     * <p>The action to take when the given speaker is flagged by the fraud detection
     * system. The default value is <code>FAIL</code>, which fails the speaker
     * enrollment. Changing this value to <code>IGNORE</code> results in the speaker
     * being enrolled even if they are flagged by the fraud detection system.</p>
     */
    inline EnrollmentJobFraudDetectionConfig& WithFraudDetectionAction(const FraudDetectionAction& value) { SetFraudDetectionAction(value); return *this;}

    /**
     * <p>The action to take when the given speaker is flagged by the fraud detection
     * system. The default value is <code>FAIL</code>, which fails the speaker
     * enrollment. Changing this value to <code>IGNORE</code> results in the speaker
     * being enrolled even if they are flagged by the fraud detection system.</p>
     */
    inline EnrollmentJobFraudDetectionConfig& WithFraudDetectionAction(FraudDetectionAction&& value) { SetFraudDetectionAction(std::move(value)); return *this;}


    /**
     * <p>Threshold value for determining whether the speaker is a high risk to be
     * fraudulent. If the detected risk score calculated by Voice ID is greater than or
     * equal to the threshold, the speaker is considered a fraudster.</p>
     */
    inline int GetRiskThreshold() const{ return m_riskThreshold; }

    /**
     * <p>Threshold value for determining whether the speaker is a high risk to be
     * fraudulent. If the detected risk score calculated by Voice ID is greater than or
     * equal to the threshold, the speaker is considered a fraudster.</p>
     */
    inline bool RiskThresholdHasBeenSet() const { return m_riskThresholdHasBeenSet; }

    /**
     * <p>Threshold value for determining whether the speaker is a high risk to be
     * fraudulent. If the detected risk score calculated by Voice ID is greater than or
     * equal to the threshold, the speaker is considered a fraudster.</p>
     */
    inline void SetRiskThreshold(int value) { m_riskThresholdHasBeenSet = true; m_riskThreshold = value; }

    /**
     * <p>Threshold value for determining whether the speaker is a high risk to be
     * fraudulent. If the detected risk score calculated by Voice ID is greater than or
     * equal to the threshold, the speaker is considered a fraudster.</p>
     */
    inline EnrollmentJobFraudDetectionConfig& WithRiskThreshold(int value) { SetRiskThreshold(value); return *this;}

  private:

    FraudDetectionAction m_fraudDetectionAction;
    bool m_fraudDetectionActionHasBeenSet = false;

    int m_riskThreshold;
    bool m_riskThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
