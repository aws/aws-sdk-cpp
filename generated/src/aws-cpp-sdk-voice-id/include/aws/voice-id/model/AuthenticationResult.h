/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/AuthenticationConfiguration.h>
#include <aws/voice-id/model/AuthenticationDecision.h>
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
   * <p>The authentication result produced by Voice ID, processed against the current
   * session state and streamed audio of the speaker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/AuthenticationResult">AWS
   * API Reference</a></p>
   */
  class AuthenticationResult
  {
  public:
    AWS_VOICEID_API AuthenticationResult();
    AWS_VOICEID_API AuthenticationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API AuthenticationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A timestamp of when audio aggregation ended for this authentication
     * result.</p>
     */
    inline const Aws::Utils::DateTime& GetAudioAggregationEndedAt() const{ return m_audioAggregationEndedAt; }
    inline bool AudioAggregationEndedAtHasBeenSet() const { return m_audioAggregationEndedAtHasBeenSet; }
    inline void SetAudioAggregationEndedAt(const Aws::Utils::DateTime& value) { m_audioAggregationEndedAtHasBeenSet = true; m_audioAggregationEndedAt = value; }
    inline void SetAudioAggregationEndedAt(Aws::Utils::DateTime&& value) { m_audioAggregationEndedAtHasBeenSet = true; m_audioAggregationEndedAt = std::move(value); }
    inline AuthenticationResult& WithAudioAggregationEndedAt(const Aws::Utils::DateTime& value) { SetAudioAggregationEndedAt(value); return *this;}
    inline AuthenticationResult& WithAudioAggregationEndedAt(Aws::Utils::DateTime&& value) { SetAudioAggregationEndedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when audio aggregation started for this authentication
     * result.</p>
     */
    inline const Aws::Utils::DateTime& GetAudioAggregationStartedAt() const{ return m_audioAggregationStartedAt; }
    inline bool AudioAggregationStartedAtHasBeenSet() const { return m_audioAggregationStartedAtHasBeenSet; }
    inline void SetAudioAggregationStartedAt(const Aws::Utils::DateTime& value) { m_audioAggregationStartedAtHasBeenSet = true; m_audioAggregationStartedAt = value; }
    inline void SetAudioAggregationStartedAt(Aws::Utils::DateTime&& value) { m_audioAggregationStartedAtHasBeenSet = true; m_audioAggregationStartedAt = std::move(value); }
    inline AuthenticationResult& WithAudioAggregationStartedAt(const Aws::Utils::DateTime& value) { SetAudioAggregationStartedAt(value); return *this;}
    inline AuthenticationResult& WithAudioAggregationStartedAt(Aws::Utils::DateTime&& value) { SetAudioAggregationStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for this authentication result. Because there can be
     * multiple authentications for a given session, this field helps to identify if
     * the returned result is from a previous streaming activity or a new result. Note
     * that in absence of any new streaming activity, <code>AcceptanceThreshold</code>
     * changes, or <code>SpeakerId</code> changes, Voice ID always returns cached
     * Authentication Result for this API.</p>
     */
    inline const Aws::String& GetAuthenticationResultId() const{ return m_authenticationResultId; }
    inline bool AuthenticationResultIdHasBeenSet() const { return m_authenticationResultIdHasBeenSet; }
    inline void SetAuthenticationResultId(const Aws::String& value) { m_authenticationResultIdHasBeenSet = true; m_authenticationResultId = value; }
    inline void SetAuthenticationResultId(Aws::String&& value) { m_authenticationResultIdHasBeenSet = true; m_authenticationResultId = std::move(value); }
    inline void SetAuthenticationResultId(const char* value) { m_authenticationResultIdHasBeenSet = true; m_authenticationResultId.assign(value); }
    inline AuthenticationResult& WithAuthenticationResultId(const Aws::String& value) { SetAuthenticationResultId(value); return *this;}
    inline AuthenticationResult& WithAuthenticationResultId(Aws::String&& value) { SetAuthenticationResultId(std::move(value)); return *this;}
    inline AuthenticationResult& WithAuthenticationResultId(const char* value) { SetAuthenticationResultId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AuthenticationConfiguration</code> used to generate this
     * authentication result.</p>
     */
    inline const AuthenticationConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const AuthenticationConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(AuthenticationConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline AuthenticationResult& WithConfiguration(const AuthenticationConfiguration& value) { SetConfiguration(value); return *this;}
    inline AuthenticationResult& WithConfiguration(AuthenticationConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client-provided identifier for the speaker whose authentication result is
     * produced. Only present if a <code>SpeakerId</code> is provided for the
     * session.</p>
     */
    inline const Aws::String& GetCustomerSpeakerId() const{ return m_customerSpeakerId; }
    inline bool CustomerSpeakerIdHasBeenSet() const { return m_customerSpeakerIdHasBeenSet; }
    inline void SetCustomerSpeakerId(const Aws::String& value) { m_customerSpeakerIdHasBeenSet = true; m_customerSpeakerId = value; }
    inline void SetCustomerSpeakerId(Aws::String&& value) { m_customerSpeakerIdHasBeenSet = true; m_customerSpeakerId = std::move(value); }
    inline void SetCustomerSpeakerId(const char* value) { m_customerSpeakerIdHasBeenSet = true; m_customerSpeakerId.assign(value); }
    inline AuthenticationResult& WithCustomerSpeakerId(const Aws::String& value) { SetCustomerSpeakerId(value); return *this;}
    inline AuthenticationResult& WithCustomerSpeakerId(Aws::String&& value) { SetCustomerSpeakerId(std::move(value)); return *this;}
    inline AuthenticationResult& WithCustomerSpeakerId(const char* value) { SetCustomerSpeakerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication decision produced by Voice ID, processed against the
     * current session state and streamed audio of the speaker.</p>
     */
    inline const AuthenticationDecision& GetDecision() const{ return m_decision; }
    inline bool DecisionHasBeenSet() const { return m_decisionHasBeenSet; }
    inline void SetDecision(const AuthenticationDecision& value) { m_decisionHasBeenSet = true; m_decision = value; }
    inline void SetDecision(AuthenticationDecision&& value) { m_decisionHasBeenSet = true; m_decision = std::move(value); }
    inline AuthenticationResult& WithDecision(const AuthenticationDecision& value) { SetDecision(value); return *this;}
    inline AuthenticationResult& WithDecision(AuthenticationDecision&& value) { SetDecision(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service-generated identifier for the speaker whose authentication result
     * is produced.</p>
     */
    inline const Aws::String& GetGeneratedSpeakerId() const{ return m_generatedSpeakerId; }
    inline bool GeneratedSpeakerIdHasBeenSet() const { return m_generatedSpeakerIdHasBeenSet; }
    inline void SetGeneratedSpeakerId(const Aws::String& value) { m_generatedSpeakerIdHasBeenSet = true; m_generatedSpeakerId = value; }
    inline void SetGeneratedSpeakerId(Aws::String&& value) { m_generatedSpeakerIdHasBeenSet = true; m_generatedSpeakerId = std::move(value); }
    inline void SetGeneratedSpeakerId(const char* value) { m_generatedSpeakerIdHasBeenSet = true; m_generatedSpeakerId.assign(value); }
    inline AuthenticationResult& WithGeneratedSpeakerId(const Aws::String& value) { SetGeneratedSpeakerId(value); return *this;}
    inline AuthenticationResult& WithGeneratedSpeakerId(Aws::String&& value) { SetGeneratedSpeakerId(std::move(value)); return *this;}
    inline AuthenticationResult& WithGeneratedSpeakerId(const char* value) { SetGeneratedSpeakerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication score for the speaker whose authentication result is
     * produced. This value is only present if the authentication decision is either
     * <code>ACCEPT</code> or <code>REJECT</code>.</p>
     */
    inline int GetScore() const{ return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(int value) { m_scoreHasBeenSet = true; m_score = value; }
    inline AuthenticationResult& WithScore(int value) { SetScore(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_audioAggregationEndedAt;
    bool m_audioAggregationEndedAtHasBeenSet = false;

    Aws::Utils::DateTime m_audioAggregationStartedAt;
    bool m_audioAggregationStartedAtHasBeenSet = false;

    Aws::String m_authenticationResultId;
    bool m_authenticationResultIdHasBeenSet = false;

    AuthenticationConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_customerSpeakerId;
    bool m_customerSpeakerIdHasBeenSet = false;

    AuthenticationDecision m_decision;
    bool m_decisionHasBeenSet = false;

    Aws::String m_generatedSpeakerId;
    bool m_generatedSpeakerIdHasBeenSet = false;

    int m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
