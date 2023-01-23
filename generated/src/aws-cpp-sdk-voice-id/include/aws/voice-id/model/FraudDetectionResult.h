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
    AWS_VOICEID_API FraudDetectionResult();
    AWS_VOICEID_API FraudDetectionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API FraudDetectionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A timestamp indicating when audio aggregation ended for this fraud detection
     * result.</p>
     */
    inline const Aws::Utils::DateTime& GetAudioAggregationEndedAt() const{ return m_audioAggregationEndedAt; }

    /**
     * <p>A timestamp indicating when audio aggregation ended for this fraud detection
     * result.</p>
     */
    inline bool AudioAggregationEndedAtHasBeenSet() const { return m_audioAggregationEndedAtHasBeenSet; }

    /**
     * <p>A timestamp indicating when audio aggregation ended for this fraud detection
     * result.</p>
     */
    inline void SetAudioAggregationEndedAt(const Aws::Utils::DateTime& value) { m_audioAggregationEndedAtHasBeenSet = true; m_audioAggregationEndedAt = value; }

    /**
     * <p>A timestamp indicating when audio aggregation ended for this fraud detection
     * result.</p>
     */
    inline void SetAudioAggregationEndedAt(Aws::Utils::DateTime&& value) { m_audioAggregationEndedAtHasBeenSet = true; m_audioAggregationEndedAt = std::move(value); }

    /**
     * <p>A timestamp indicating when audio aggregation ended for this fraud detection
     * result.</p>
     */
    inline FraudDetectionResult& WithAudioAggregationEndedAt(const Aws::Utils::DateTime& value) { SetAudioAggregationEndedAt(value); return *this;}

    /**
     * <p>A timestamp indicating when audio aggregation ended for this fraud detection
     * result.</p>
     */
    inline FraudDetectionResult& WithAudioAggregationEndedAt(Aws::Utils::DateTime&& value) { SetAudioAggregationEndedAt(std::move(value)); return *this;}


    /**
     * <p>A timestamp indicating when audio aggregation started for this fraud
     * detection result.</p>
     */
    inline const Aws::Utils::DateTime& GetAudioAggregationStartedAt() const{ return m_audioAggregationStartedAt; }

    /**
     * <p>A timestamp indicating when audio aggregation started for this fraud
     * detection result.</p>
     */
    inline bool AudioAggregationStartedAtHasBeenSet() const { return m_audioAggregationStartedAtHasBeenSet; }

    /**
     * <p>A timestamp indicating when audio aggregation started for this fraud
     * detection result.</p>
     */
    inline void SetAudioAggregationStartedAt(const Aws::Utils::DateTime& value) { m_audioAggregationStartedAtHasBeenSet = true; m_audioAggregationStartedAt = value; }

    /**
     * <p>A timestamp indicating when audio aggregation started for this fraud
     * detection result.</p>
     */
    inline void SetAudioAggregationStartedAt(Aws::Utils::DateTime&& value) { m_audioAggregationStartedAtHasBeenSet = true; m_audioAggregationStartedAt = std::move(value); }

    /**
     * <p>A timestamp indicating when audio aggregation started for this fraud
     * detection result.</p>
     */
    inline FraudDetectionResult& WithAudioAggregationStartedAt(const Aws::Utils::DateTime& value) { SetAudioAggregationStartedAt(value); return *this;}

    /**
     * <p>A timestamp indicating when audio aggregation started for this fraud
     * detection result.</p>
     */
    inline FraudDetectionResult& WithAudioAggregationStartedAt(Aws::Utils::DateTime&& value) { SetAudioAggregationStartedAt(std::move(value)); return *this;}


    /**
     * <p>The <code>FraudDetectionConfiguration</code> used to generate this fraud
     * detection result.</p>
     */
    inline const FraudDetectionConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The <code>FraudDetectionConfiguration</code> used to generate this fraud
     * detection result.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The <code>FraudDetectionConfiguration</code> used to generate this fraud
     * detection result.</p>
     */
    inline void SetConfiguration(const FraudDetectionConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The <code>FraudDetectionConfiguration</code> used to generate this fraud
     * detection result.</p>
     */
    inline void SetConfiguration(FraudDetectionConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The <code>FraudDetectionConfiguration</code> used to generate this fraud
     * detection result.</p>
     */
    inline FraudDetectionResult& WithConfiguration(const FraudDetectionConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The <code>FraudDetectionConfiguration</code> used to generate this fraud
     * detection result.</p>
     */
    inline FraudDetectionResult& WithConfiguration(FraudDetectionConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The fraud detection decision produced by Voice ID, processed against the
     * current session state and streamed audio of the speaker.</p>
     */
    inline const FraudDetectionDecision& GetDecision() const{ return m_decision; }

    /**
     * <p>The fraud detection decision produced by Voice ID, processed against the
     * current session state and streamed audio of the speaker.</p>
     */
    inline bool DecisionHasBeenSet() const { return m_decisionHasBeenSet; }

    /**
     * <p>The fraud detection decision produced by Voice ID, processed against the
     * current session state and streamed audio of the speaker.</p>
     */
    inline void SetDecision(const FraudDetectionDecision& value) { m_decisionHasBeenSet = true; m_decision = value; }

    /**
     * <p>The fraud detection decision produced by Voice ID, processed against the
     * current session state and streamed audio of the speaker.</p>
     */
    inline void SetDecision(FraudDetectionDecision&& value) { m_decisionHasBeenSet = true; m_decision = std::move(value); }

    /**
     * <p>The fraud detection decision produced by Voice ID, processed against the
     * current session state and streamed audio of the speaker.</p>
     */
    inline FraudDetectionResult& WithDecision(const FraudDetectionDecision& value) { SetDecision(value); return *this;}

    /**
     * <p>The fraud detection decision produced by Voice ID, processed against the
     * current session state and streamed audio of the speaker.</p>
     */
    inline FraudDetectionResult& WithDecision(FraudDetectionDecision&& value) { SetDecision(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for this fraud detection result. Given there can be
     * multiple fraud detections for a given session, this field helps in identifying
     * if the returned result is from previous streaming activity or a new result. Note
     * that in the absence of any new streaming activity or risk threshold changes,
     * Voice ID always returns cached Fraud Detection result for this API.</p>
     */
    inline const Aws::String& GetFraudDetectionResultId() const{ return m_fraudDetectionResultId; }

    /**
     * <p>The unique identifier for this fraud detection result. Given there can be
     * multiple fraud detections for a given session, this field helps in identifying
     * if the returned result is from previous streaming activity or a new result. Note
     * that in the absence of any new streaming activity or risk threshold changes,
     * Voice ID always returns cached Fraud Detection result for this API.</p>
     */
    inline bool FraudDetectionResultIdHasBeenSet() const { return m_fraudDetectionResultIdHasBeenSet; }

    /**
     * <p>The unique identifier for this fraud detection result. Given there can be
     * multiple fraud detections for a given session, this field helps in identifying
     * if the returned result is from previous streaming activity or a new result. Note
     * that in the absence of any new streaming activity or risk threshold changes,
     * Voice ID always returns cached Fraud Detection result for this API.</p>
     */
    inline void SetFraudDetectionResultId(const Aws::String& value) { m_fraudDetectionResultIdHasBeenSet = true; m_fraudDetectionResultId = value; }

    /**
     * <p>The unique identifier for this fraud detection result. Given there can be
     * multiple fraud detections for a given session, this field helps in identifying
     * if the returned result is from previous streaming activity or a new result. Note
     * that in the absence of any new streaming activity or risk threshold changes,
     * Voice ID always returns cached Fraud Detection result for this API.</p>
     */
    inline void SetFraudDetectionResultId(Aws::String&& value) { m_fraudDetectionResultIdHasBeenSet = true; m_fraudDetectionResultId = std::move(value); }

    /**
     * <p>The unique identifier for this fraud detection result. Given there can be
     * multiple fraud detections for a given session, this field helps in identifying
     * if the returned result is from previous streaming activity or a new result. Note
     * that in the absence of any new streaming activity or risk threshold changes,
     * Voice ID always returns cached Fraud Detection result for this API.</p>
     */
    inline void SetFraudDetectionResultId(const char* value) { m_fraudDetectionResultIdHasBeenSet = true; m_fraudDetectionResultId.assign(value); }

    /**
     * <p>The unique identifier for this fraud detection result. Given there can be
     * multiple fraud detections for a given session, this field helps in identifying
     * if the returned result is from previous streaming activity or a new result. Note
     * that in the absence of any new streaming activity or risk threshold changes,
     * Voice ID always returns cached Fraud Detection result for this API.</p>
     */
    inline FraudDetectionResult& WithFraudDetectionResultId(const Aws::String& value) { SetFraudDetectionResultId(value); return *this;}

    /**
     * <p>The unique identifier for this fraud detection result. Given there can be
     * multiple fraud detections for a given session, this field helps in identifying
     * if the returned result is from previous streaming activity or a new result. Note
     * that in the absence of any new streaming activity or risk threshold changes,
     * Voice ID always returns cached Fraud Detection result for this API.</p>
     */
    inline FraudDetectionResult& WithFraudDetectionResultId(Aws::String&& value) { SetFraudDetectionResultId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for this fraud detection result. Given there can be
     * multiple fraud detections for a given session, this field helps in identifying
     * if the returned result is from previous streaming activity or a new result. Note
     * that in the absence of any new streaming activity or risk threshold changes,
     * Voice ID always returns cached Fraud Detection result for this API.</p>
     */
    inline FraudDetectionResult& WithFraudDetectionResultId(const char* value) { SetFraudDetectionResultId(value); return *this;}


    /**
     * <p>The reason speaker was flagged by the fraud detection system. This is only be
     * populated if fraud detection Decision is <code>HIGH_RISK</code>, and the
     * following possible values: <code>KNOWN_FRAUDSTER</code> and
     * <code>VOICE_SPOOFING</code>.</p>
     */
    inline const Aws::Vector<FraudDetectionReason>& GetReasons() const{ return m_reasons; }

    /**
     * <p>The reason speaker was flagged by the fraud detection system. This is only be
     * populated if fraud detection Decision is <code>HIGH_RISK</code>, and the
     * following possible values: <code>KNOWN_FRAUDSTER</code> and
     * <code>VOICE_SPOOFING</code>.</p>
     */
    inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }

    /**
     * <p>The reason speaker was flagged by the fraud detection system. This is only be
     * populated if fraud detection Decision is <code>HIGH_RISK</code>, and the
     * following possible values: <code>KNOWN_FRAUDSTER</code> and
     * <code>VOICE_SPOOFING</code>.</p>
     */
    inline void SetReasons(const Aws::Vector<FraudDetectionReason>& value) { m_reasonsHasBeenSet = true; m_reasons = value; }

    /**
     * <p>The reason speaker was flagged by the fraud detection system. This is only be
     * populated if fraud detection Decision is <code>HIGH_RISK</code>, and the
     * following possible values: <code>KNOWN_FRAUDSTER</code> and
     * <code>VOICE_SPOOFING</code>.</p>
     */
    inline void SetReasons(Aws::Vector<FraudDetectionReason>&& value) { m_reasonsHasBeenSet = true; m_reasons = std::move(value); }

    /**
     * <p>The reason speaker was flagged by the fraud detection system. This is only be
     * populated if fraud detection Decision is <code>HIGH_RISK</code>, and the
     * following possible values: <code>KNOWN_FRAUDSTER</code> and
     * <code>VOICE_SPOOFING</code>.</p>
     */
    inline FraudDetectionResult& WithReasons(const Aws::Vector<FraudDetectionReason>& value) { SetReasons(value); return *this;}

    /**
     * <p>The reason speaker was flagged by the fraud detection system. This is only be
     * populated if fraud detection Decision is <code>HIGH_RISK</code>, and the
     * following possible values: <code>KNOWN_FRAUDSTER</code> and
     * <code>VOICE_SPOOFING</code>.</p>
     */
    inline FraudDetectionResult& WithReasons(Aws::Vector<FraudDetectionReason>&& value) { SetReasons(std::move(value)); return *this;}

    /**
     * <p>The reason speaker was flagged by the fraud detection system. This is only be
     * populated if fraud detection Decision is <code>HIGH_RISK</code>, and the
     * following possible values: <code>KNOWN_FRAUDSTER</code> and
     * <code>VOICE_SPOOFING</code>.</p>
     */
    inline FraudDetectionResult& AddReasons(const FraudDetectionReason& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(value); return *this; }

    /**
     * <p>The reason speaker was flagged by the fraud detection system. This is only be
     * populated if fraud detection Decision is <code>HIGH_RISK</code>, and the
     * following possible values: <code>KNOWN_FRAUDSTER</code> and
     * <code>VOICE_SPOOFING</code>.</p>
     */
    inline FraudDetectionResult& AddReasons(FraudDetectionReason&& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(std::move(value)); return *this; }


    /**
     * <p>Details about each risk analyzed for this speaker. Currently, this contains
     * KnownFraudsterRisk and VoiceSpoofingRisk details.</p>
     */
    inline const FraudRiskDetails& GetRiskDetails() const{ return m_riskDetails; }

    /**
     * <p>Details about each risk analyzed for this speaker. Currently, this contains
     * KnownFraudsterRisk and VoiceSpoofingRisk details.</p>
     */
    inline bool RiskDetailsHasBeenSet() const { return m_riskDetailsHasBeenSet; }

    /**
     * <p>Details about each risk analyzed for this speaker. Currently, this contains
     * KnownFraudsterRisk and VoiceSpoofingRisk details.</p>
     */
    inline void SetRiskDetails(const FraudRiskDetails& value) { m_riskDetailsHasBeenSet = true; m_riskDetails = value; }

    /**
     * <p>Details about each risk analyzed for this speaker. Currently, this contains
     * KnownFraudsterRisk and VoiceSpoofingRisk details.</p>
     */
    inline void SetRiskDetails(FraudRiskDetails&& value) { m_riskDetailsHasBeenSet = true; m_riskDetails = std::move(value); }

    /**
     * <p>Details about each risk analyzed for this speaker. Currently, this contains
     * KnownFraudsterRisk and VoiceSpoofingRisk details.</p>
     */
    inline FraudDetectionResult& WithRiskDetails(const FraudRiskDetails& value) { SetRiskDetails(value); return *this;}

    /**
     * <p>Details about each risk analyzed for this speaker. Currently, this contains
     * KnownFraudsterRisk and VoiceSpoofingRisk details.</p>
     */
    inline FraudDetectionResult& WithRiskDetails(FraudRiskDetails&& value) { SetRiskDetails(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_audioAggregationEndedAt;
    bool m_audioAggregationEndedAtHasBeenSet = false;

    Aws::Utils::DateTime m_audioAggregationStartedAt;
    bool m_audioAggregationStartedAtHasBeenSet = false;

    FraudDetectionConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    FraudDetectionDecision m_decision;
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
