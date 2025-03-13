/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/voice-id/model/FraudDetectionConfiguration.h>
#include <aws/voice-id/model/FraudDetectionDecision.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/voice-id/model/FraudRiskDetails.h>
#include <aws/voice-id/model/FraudDetectionReason.h>
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
   * <p>The fraud detection result produced by Voice ID, processed against the
   * current session state and streamed audio of the speaker.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/FraudDetectionResult">AWS
   * API Reference</a></p>
   */
  class FraudDetectionResult
  {
  public:
    AWS_VOICEID_API FraudDetectionResult() = default;
    AWS_VOICEID_API FraudDetectionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API FraudDetectionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A timestamp of when audio aggregation ended for this fraud detection
     * result.</p>
     */
    inline const Aws::Utils::DateTime& GetAudioAggregationEndedAt() const { return m_audioAggregationEndedAt; }
    inline bool AudioAggregationEndedAtHasBeenSet() const { return m_audioAggregationEndedAtHasBeenSet; }
    template<typename AudioAggregationEndedAtT = Aws::Utils::DateTime>
    void SetAudioAggregationEndedAt(AudioAggregationEndedAtT&& value) { m_audioAggregationEndedAtHasBeenSet = true; m_audioAggregationEndedAt = std::forward<AudioAggregationEndedAtT>(value); }
    template<typename AudioAggregationEndedAtT = Aws::Utils::DateTime>
    FraudDetectionResult& WithAudioAggregationEndedAt(AudioAggregationEndedAtT&& value) { SetAudioAggregationEndedAt(std::forward<AudioAggregationEndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when audio aggregation started for this fraud detection
     * result.</p>
     */
    inline const Aws::Utils::DateTime& GetAudioAggregationStartedAt() const { return m_audioAggregationStartedAt; }
    inline bool AudioAggregationStartedAtHasBeenSet() const { return m_audioAggregationStartedAtHasBeenSet; }
    template<typename AudioAggregationStartedAtT = Aws::Utils::DateTime>
    void SetAudioAggregationStartedAt(AudioAggregationStartedAtT&& value) { m_audioAggregationStartedAtHasBeenSet = true; m_audioAggregationStartedAt = std::forward<AudioAggregationStartedAtT>(value); }
    template<typename AudioAggregationStartedAtT = Aws::Utils::DateTime>
    FraudDetectionResult& WithAudioAggregationStartedAt(AudioAggregationStartedAtT&& value) { SetAudioAggregationStartedAt(std::forward<AudioAggregationStartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>FraudDetectionConfiguration</code> used to generate this fraud
     * detection result.</p>
     */
    inline const FraudDetectionConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = FraudDetectionConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = FraudDetectionConfiguration>
    FraudDetectionResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fraud detection decision produced by Voice ID, processed against the
     * current session state and streamed audio of the speaker.</p>
     */
    inline FraudDetectionDecision GetDecision() const { return m_decision; }
    inline bool DecisionHasBeenSet() const { return m_decisionHasBeenSet; }
    inline void SetDecision(FraudDetectionDecision value) { m_decisionHasBeenSet = true; m_decision = value; }
    inline FraudDetectionResult& WithDecision(FraudDetectionDecision value) { SetDecision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for this fraud detection result. Given there can be
     * multiple fraud detections for a given session, this field helps in identifying
     * if the returned result is from previous streaming activity or a new result. Note
     * that in the absence of any new streaming activity or risk threshold changes,
     * Voice ID always returns cached Fraud Detection result for this API.</p>
     */
    inline const Aws::String& GetFraudDetectionResultId() const { return m_fraudDetectionResultId; }
    inline bool FraudDetectionResultIdHasBeenSet() const { return m_fraudDetectionResultIdHasBeenSet; }
    template<typename FraudDetectionResultIdT = Aws::String>
    void SetFraudDetectionResultId(FraudDetectionResultIdT&& value) { m_fraudDetectionResultIdHasBeenSet = true; m_fraudDetectionResultId = std::forward<FraudDetectionResultIdT>(value); }
    template<typename FraudDetectionResultIdT = Aws::String>
    FraudDetectionResult& WithFraudDetectionResultId(FraudDetectionResultIdT&& value) { SetFraudDetectionResultId(std::forward<FraudDetectionResultIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason speaker was flagged by the fraud detection system. This is only be
     * populated if fraud detection Decision is <code>HIGH_RISK</code>, and the
     * following possible values: <code>KNOWN_FRAUDSTER</code> and
     * <code>VOICE_SPOOFING</code>.</p>
     */
    inline const Aws::Vector<FraudDetectionReason>& GetReasons() const { return m_reasons; }
    inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }
    template<typename ReasonsT = Aws::Vector<FraudDetectionReason>>
    void SetReasons(ReasonsT&& value) { m_reasonsHasBeenSet = true; m_reasons = std::forward<ReasonsT>(value); }
    template<typename ReasonsT = Aws::Vector<FraudDetectionReason>>
    FraudDetectionResult& WithReasons(ReasonsT&& value) { SetReasons(std::forward<ReasonsT>(value)); return *this;}
    inline FraudDetectionResult& AddReasons(FraudDetectionReason value) { m_reasonsHasBeenSet = true; m_reasons.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details about each risk analyzed for this speaker. Currently, this contains
     * KnownFraudsterRisk and VoiceSpoofingRisk details.</p>
     */
    inline const FraudRiskDetails& GetRiskDetails() const { return m_riskDetails; }
    inline bool RiskDetailsHasBeenSet() const { return m_riskDetailsHasBeenSet; }
    template<typename RiskDetailsT = FraudRiskDetails>
    void SetRiskDetails(RiskDetailsT&& value) { m_riskDetailsHasBeenSet = true; m_riskDetails = std::forward<RiskDetailsT>(value); }
    template<typename RiskDetailsT = FraudRiskDetails>
    FraudDetectionResult& WithRiskDetails(RiskDetailsT&& value) { SetRiskDetails(std::forward<RiskDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_audioAggregationEndedAt{};
    bool m_audioAggregationEndedAtHasBeenSet = false;

    Aws::Utils::DateTime m_audioAggregationStartedAt{};
    bool m_audioAggregationStartedAtHasBeenSet = false;

    FraudDetectionConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    FraudDetectionDecision m_decision{FraudDetectionDecision::NOT_SET};
    bool m_decisionHasBeenSet = false;

    Aws::String m_fraudDetectionResultId;
    bool m_fraudDetectionResultIdHasBeenSet = false;

    Aws::Vector<FraudDetectionReason> m_reasons;
    bool m_reasonsHasBeenSet = false;

    FraudRiskDetails m_riskDetails;
    bool m_riskDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
