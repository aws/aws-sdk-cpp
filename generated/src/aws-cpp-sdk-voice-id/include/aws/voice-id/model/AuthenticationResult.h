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
    AWS_VOICEID_API AuthenticationResult() = default;
    AWS_VOICEID_API AuthenticationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API AuthenticationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A timestamp of when audio aggregation ended for this authentication
     * result.</p>
     */
    inline const Aws::Utils::DateTime& GetAudioAggregationEndedAt() const { return m_audioAggregationEndedAt; }
    inline bool AudioAggregationEndedAtHasBeenSet() const { return m_audioAggregationEndedAtHasBeenSet; }
    template<typename AudioAggregationEndedAtT = Aws::Utils::DateTime>
    void SetAudioAggregationEndedAt(AudioAggregationEndedAtT&& value) { m_audioAggregationEndedAtHasBeenSet = true; m_audioAggregationEndedAt = std::forward<AudioAggregationEndedAtT>(value); }
    template<typename AudioAggregationEndedAtT = Aws::Utils::DateTime>
    AuthenticationResult& WithAudioAggregationEndedAt(AudioAggregationEndedAtT&& value) { SetAudioAggregationEndedAt(std::forward<AudioAggregationEndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when audio aggregation started for this authentication
     * result.</p>
     */
    inline const Aws::Utils::DateTime& GetAudioAggregationStartedAt() const { return m_audioAggregationStartedAt; }
    inline bool AudioAggregationStartedAtHasBeenSet() const { return m_audioAggregationStartedAtHasBeenSet; }
    template<typename AudioAggregationStartedAtT = Aws::Utils::DateTime>
    void SetAudioAggregationStartedAt(AudioAggregationStartedAtT&& value) { m_audioAggregationStartedAtHasBeenSet = true; m_audioAggregationStartedAt = std::forward<AudioAggregationStartedAtT>(value); }
    template<typename AudioAggregationStartedAtT = Aws::Utils::DateTime>
    AuthenticationResult& WithAudioAggregationStartedAt(AudioAggregationStartedAtT&& value) { SetAudioAggregationStartedAt(std::forward<AudioAggregationStartedAtT>(value)); return *this;}
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
    inline const Aws::String& GetAuthenticationResultId() const { return m_authenticationResultId; }
    inline bool AuthenticationResultIdHasBeenSet() const { return m_authenticationResultIdHasBeenSet; }
    template<typename AuthenticationResultIdT = Aws::String>
    void SetAuthenticationResultId(AuthenticationResultIdT&& value) { m_authenticationResultIdHasBeenSet = true; m_authenticationResultId = std::forward<AuthenticationResultIdT>(value); }
    template<typename AuthenticationResultIdT = Aws::String>
    AuthenticationResult& WithAuthenticationResultId(AuthenticationResultIdT&& value) { SetAuthenticationResultId(std::forward<AuthenticationResultIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>AuthenticationConfiguration</code> used to generate this
     * authentication result.</p>
     */
    inline const AuthenticationConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = AuthenticationConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = AuthenticationConfiguration>
    AuthenticationResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client-provided identifier for the speaker whose authentication result is
     * produced. Only present if a <code>SpeakerId</code> is provided for the
     * session.</p>
     */
    inline const Aws::String& GetCustomerSpeakerId() const { return m_customerSpeakerId; }
    inline bool CustomerSpeakerIdHasBeenSet() const { return m_customerSpeakerIdHasBeenSet; }
    template<typename CustomerSpeakerIdT = Aws::String>
    void SetCustomerSpeakerId(CustomerSpeakerIdT&& value) { m_customerSpeakerIdHasBeenSet = true; m_customerSpeakerId = std::forward<CustomerSpeakerIdT>(value); }
    template<typename CustomerSpeakerIdT = Aws::String>
    AuthenticationResult& WithCustomerSpeakerId(CustomerSpeakerIdT&& value) { SetCustomerSpeakerId(std::forward<CustomerSpeakerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication decision produced by Voice ID, processed against the
     * current session state and streamed audio of the speaker.</p>
     */
    inline AuthenticationDecision GetDecision() const { return m_decision; }
    inline bool DecisionHasBeenSet() const { return m_decisionHasBeenSet; }
    inline void SetDecision(AuthenticationDecision value) { m_decisionHasBeenSet = true; m_decision = value; }
    inline AuthenticationResult& WithDecision(AuthenticationDecision value) { SetDecision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service-generated identifier for the speaker whose authentication result
     * is produced.</p>
     */
    inline const Aws::String& GetGeneratedSpeakerId() const { return m_generatedSpeakerId; }
    inline bool GeneratedSpeakerIdHasBeenSet() const { return m_generatedSpeakerIdHasBeenSet; }
    template<typename GeneratedSpeakerIdT = Aws::String>
    void SetGeneratedSpeakerId(GeneratedSpeakerIdT&& value) { m_generatedSpeakerIdHasBeenSet = true; m_generatedSpeakerId = std::forward<GeneratedSpeakerIdT>(value); }
    template<typename GeneratedSpeakerIdT = Aws::String>
    AuthenticationResult& WithGeneratedSpeakerId(GeneratedSpeakerIdT&& value) { SetGeneratedSpeakerId(std::forward<GeneratedSpeakerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication score for the speaker whose authentication result is
     * produced. This value is only present if the authentication decision is either
     * <code>ACCEPT</code> or <code>REJECT</code>.</p>
     */
    inline int GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(int value) { m_scoreHasBeenSet = true; m_score = value; }
    inline AuthenticationResult& WithScore(int value) { SetScore(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_audioAggregationEndedAt{};
    bool m_audioAggregationEndedAtHasBeenSet = false;

    Aws::Utils::DateTime m_audioAggregationStartedAt{};
    bool m_audioAggregationStartedAtHasBeenSet = false;

    Aws::String m_authenticationResultId;
    bool m_authenticationResultIdHasBeenSet = false;

    AuthenticationConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_customerSpeakerId;
    bool m_customerSpeakerIdHasBeenSet = false;

    AuthenticationDecision m_decision{AuthenticationDecision::NOT_SET};
    bool m_decisionHasBeenSet = false;

    Aws::String m_generatedSpeakerId;
    bool m_generatedSpeakerIdHasBeenSet = false;

    int m_score{0};
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
