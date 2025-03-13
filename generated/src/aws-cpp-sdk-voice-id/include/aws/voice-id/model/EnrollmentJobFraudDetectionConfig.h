/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/FraudDetectionAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The fraud detection configuration to be used during the batch speaker
   * enrollment job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/EnrollmentJobFraudDetectionConfig">AWS
   * API Reference</a></p>
   */
  class EnrollmentJobFraudDetectionConfig
  {
  public:
    AWS_VOICEID_API EnrollmentJobFraudDetectionConfig() = default;
    AWS_VOICEID_API EnrollmentJobFraudDetectionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API EnrollmentJobFraudDetectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to take when the given speaker is flagged by the fraud detection
     * system. The default value is <code>FAIL</code>, which fails the speaker
     * enrollment. Changing this value to <code>IGNORE</code> results in the speaker
     * being enrolled even if they are flagged by the fraud detection system.</p>
     */
    inline FraudDetectionAction GetFraudDetectionAction() const { return m_fraudDetectionAction; }
    inline bool FraudDetectionActionHasBeenSet() const { return m_fraudDetectionActionHasBeenSet; }
    inline void SetFraudDetectionAction(FraudDetectionAction value) { m_fraudDetectionActionHasBeenSet = true; m_fraudDetectionAction = value; }
    inline EnrollmentJobFraudDetectionConfig& WithFraudDetectionAction(FraudDetectionAction value) { SetFraudDetectionAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Threshold value for determining whether the speaker is a high risk to be
     * fraudulent. If the detected risk score calculated by Voice ID is greater than or
     * equal to the threshold, the speaker is considered a fraudster.</p>
     */
    inline int GetRiskThreshold() const { return m_riskThreshold; }
    inline bool RiskThresholdHasBeenSet() const { return m_riskThresholdHasBeenSet; }
    inline void SetRiskThreshold(int value) { m_riskThresholdHasBeenSet = true; m_riskThreshold = value; }
    inline EnrollmentJobFraudDetectionConfig& WithRiskThreshold(int value) { SetRiskThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of watchlists against which fraud detection is performed. </p>
     */
    inline const Aws::Vector<Aws::String>& GetWatchlistIds() const { return m_watchlistIds; }
    inline bool WatchlistIdsHasBeenSet() const { return m_watchlistIdsHasBeenSet; }
    template<typename WatchlistIdsT = Aws::Vector<Aws::String>>
    void SetWatchlistIds(WatchlistIdsT&& value) { m_watchlistIdsHasBeenSet = true; m_watchlistIds = std::forward<WatchlistIdsT>(value); }
    template<typename WatchlistIdsT = Aws::Vector<Aws::String>>
    EnrollmentJobFraudDetectionConfig& WithWatchlistIds(WatchlistIdsT&& value) { SetWatchlistIds(std::forward<WatchlistIdsT>(value)); return *this;}
    template<typename WatchlistIdsT = Aws::String>
    EnrollmentJobFraudDetectionConfig& AddWatchlistIds(WatchlistIdsT&& value) { m_watchlistIdsHasBeenSet = true; m_watchlistIds.emplace_back(std::forward<WatchlistIdsT>(value)); return *this; }
    ///@}
  private:

    FraudDetectionAction m_fraudDetectionAction{FraudDetectionAction::NOT_SET};
    bool m_fraudDetectionActionHasBeenSet = false;

    int m_riskThreshold{0};
    bool m_riskThresholdHasBeenSet = false;

    Aws::Vector<Aws::String> m_watchlistIds;
    bool m_watchlistIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
