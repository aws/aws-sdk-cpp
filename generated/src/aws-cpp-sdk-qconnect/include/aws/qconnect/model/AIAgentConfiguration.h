/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AnswerRecommendationAIAgentConfiguration.h>
#include <aws/qconnect/model/CaseSummarizationAIAgentConfiguration.h>
#include <aws/qconnect/model/EmailGenerativeAnswerAIAgentConfiguration.h>
#include <aws/qconnect/model/EmailOverviewAIAgentConfiguration.h>
#include <aws/qconnect/model/EmailResponseAIAgentConfiguration.h>
#include <aws/qconnect/model/ManualSearchAIAgentConfiguration.h>
#include <aws/qconnect/model/NoteTakingAIAgentConfiguration.h>
#include <aws/qconnect/model/OrchestrationAIAgentConfiguration.h>
#include <aws/qconnect/model/SelfServiceAIAgentConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>A typed union that specifies the configuration based on the type of AI
 * Agent.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIAgentConfiguration">AWS
 * API Reference</a></p>
 */
class AIAgentConfiguration {
 public:
  AWS_QCONNECT_API AIAgentConfiguration() = default;
  AWS_QCONNECT_API AIAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API AIAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for AI Agents of type <code>MANUAL_SEARCH</code>.</p>
   */
  inline const ManualSearchAIAgentConfiguration& GetManualSearchAIAgentConfiguration() const { return m_manualSearchAIAgentConfiguration; }
  inline bool ManualSearchAIAgentConfigurationHasBeenSet() const { return m_manualSearchAIAgentConfigurationHasBeenSet; }
  template <typename ManualSearchAIAgentConfigurationT = ManualSearchAIAgentConfiguration>
  void SetManualSearchAIAgentConfiguration(ManualSearchAIAgentConfigurationT&& value) {
    m_manualSearchAIAgentConfigurationHasBeenSet = true;
    m_manualSearchAIAgentConfiguration = std::forward<ManualSearchAIAgentConfigurationT>(value);
  }
  template <typename ManualSearchAIAgentConfigurationT = ManualSearchAIAgentConfiguration>
  AIAgentConfiguration& WithManualSearchAIAgentConfiguration(ManualSearchAIAgentConfigurationT&& value) {
    SetManualSearchAIAgentConfiguration(std::forward<ManualSearchAIAgentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for AI Agents of type
   * <code>ANSWER_RECOMMENDATION</code>.</p>
   */
  inline const AnswerRecommendationAIAgentConfiguration& GetAnswerRecommendationAIAgentConfiguration() const {
    return m_answerRecommendationAIAgentConfiguration;
  }
  inline bool AnswerRecommendationAIAgentConfigurationHasBeenSet() const { return m_answerRecommendationAIAgentConfigurationHasBeenSet; }
  template <typename AnswerRecommendationAIAgentConfigurationT = AnswerRecommendationAIAgentConfiguration>
  void SetAnswerRecommendationAIAgentConfiguration(AnswerRecommendationAIAgentConfigurationT&& value) {
    m_answerRecommendationAIAgentConfigurationHasBeenSet = true;
    m_answerRecommendationAIAgentConfiguration = std::forward<AnswerRecommendationAIAgentConfigurationT>(value);
  }
  template <typename AnswerRecommendationAIAgentConfigurationT = AnswerRecommendationAIAgentConfiguration>
  AIAgentConfiguration& WithAnswerRecommendationAIAgentConfiguration(AnswerRecommendationAIAgentConfigurationT&& value) {
    SetAnswerRecommendationAIAgentConfiguration(std::forward<AnswerRecommendationAIAgentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for AI Agents of type SELF_SERVICE.</p>
   */
  inline const SelfServiceAIAgentConfiguration& GetSelfServiceAIAgentConfiguration() const { return m_selfServiceAIAgentConfiguration; }
  inline bool SelfServiceAIAgentConfigurationHasBeenSet() const { return m_selfServiceAIAgentConfigurationHasBeenSet; }
  template <typename SelfServiceAIAgentConfigurationT = SelfServiceAIAgentConfiguration>
  void SetSelfServiceAIAgentConfiguration(SelfServiceAIAgentConfigurationT&& value) {
    m_selfServiceAIAgentConfigurationHasBeenSet = true;
    m_selfServiceAIAgentConfiguration = std::forward<SelfServiceAIAgentConfigurationT>(value);
  }
  template <typename SelfServiceAIAgentConfigurationT = SelfServiceAIAgentConfiguration>
  AIAgentConfiguration& WithSelfServiceAIAgentConfiguration(SelfServiceAIAgentConfigurationT&& value) {
    SetSelfServiceAIAgentConfiguration(std::forward<SelfServiceAIAgentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for the EMAIL_RESPONSE AI agent that generates professional
   * email responses using knowledge base content.</p>
   */
  inline const EmailResponseAIAgentConfiguration& GetEmailResponseAIAgentConfiguration() const {
    return m_emailResponseAIAgentConfiguration;
  }
  inline bool EmailResponseAIAgentConfigurationHasBeenSet() const { return m_emailResponseAIAgentConfigurationHasBeenSet; }
  template <typename EmailResponseAIAgentConfigurationT = EmailResponseAIAgentConfiguration>
  void SetEmailResponseAIAgentConfiguration(EmailResponseAIAgentConfigurationT&& value) {
    m_emailResponseAIAgentConfigurationHasBeenSet = true;
    m_emailResponseAIAgentConfiguration = std::forward<EmailResponseAIAgentConfigurationT>(value);
  }
  template <typename EmailResponseAIAgentConfigurationT = EmailResponseAIAgentConfiguration>
  AIAgentConfiguration& WithEmailResponseAIAgentConfiguration(EmailResponseAIAgentConfigurationT&& value) {
    SetEmailResponseAIAgentConfiguration(std::forward<EmailResponseAIAgentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for the EMAIL_OVERVIEW AI agent that generates structured
   * overview of email conversations.</p>
   */
  inline const EmailOverviewAIAgentConfiguration& GetEmailOverviewAIAgentConfiguration() const {
    return m_emailOverviewAIAgentConfiguration;
  }
  inline bool EmailOverviewAIAgentConfigurationHasBeenSet() const { return m_emailOverviewAIAgentConfigurationHasBeenSet; }
  template <typename EmailOverviewAIAgentConfigurationT = EmailOverviewAIAgentConfiguration>
  void SetEmailOverviewAIAgentConfiguration(EmailOverviewAIAgentConfigurationT&& value) {
    m_emailOverviewAIAgentConfigurationHasBeenSet = true;
    m_emailOverviewAIAgentConfiguration = std::forward<EmailOverviewAIAgentConfigurationT>(value);
  }
  template <typename EmailOverviewAIAgentConfigurationT = EmailOverviewAIAgentConfiguration>
  AIAgentConfiguration& WithEmailOverviewAIAgentConfiguration(EmailOverviewAIAgentConfigurationT&& value) {
    SetEmailOverviewAIAgentConfiguration(std::forward<EmailOverviewAIAgentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for the EMAIL_GENERATIVE_ANSWER AI agent that provides
   * comprehensive knowledge-based answers for customer queries.</p>
   */
  inline const EmailGenerativeAnswerAIAgentConfiguration& GetEmailGenerativeAnswerAIAgentConfiguration() const {
    return m_emailGenerativeAnswerAIAgentConfiguration;
  }
  inline bool EmailGenerativeAnswerAIAgentConfigurationHasBeenSet() const { return m_emailGenerativeAnswerAIAgentConfigurationHasBeenSet; }
  template <typename EmailGenerativeAnswerAIAgentConfigurationT = EmailGenerativeAnswerAIAgentConfiguration>
  void SetEmailGenerativeAnswerAIAgentConfiguration(EmailGenerativeAnswerAIAgentConfigurationT&& value) {
    m_emailGenerativeAnswerAIAgentConfigurationHasBeenSet = true;
    m_emailGenerativeAnswerAIAgentConfiguration = std::forward<EmailGenerativeAnswerAIAgentConfigurationT>(value);
  }
  template <typename EmailGenerativeAnswerAIAgentConfigurationT = EmailGenerativeAnswerAIAgentConfiguration>
  AIAgentConfiguration& WithEmailGenerativeAnswerAIAgentConfiguration(EmailGenerativeAnswerAIAgentConfigurationT&& value) {
    SetEmailGenerativeAnswerAIAgentConfiguration(std::forward<EmailGenerativeAnswerAIAgentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for AI Agents of type <code>ORCHESTRATION</code>.</p>
   */
  inline const OrchestrationAIAgentConfiguration& GetOrchestrationAIAgentConfiguration() const {
    return m_orchestrationAIAgentConfiguration;
  }
  inline bool OrchestrationAIAgentConfigurationHasBeenSet() const { return m_orchestrationAIAgentConfigurationHasBeenSet; }
  template <typename OrchestrationAIAgentConfigurationT = OrchestrationAIAgentConfiguration>
  void SetOrchestrationAIAgentConfiguration(OrchestrationAIAgentConfigurationT&& value) {
    m_orchestrationAIAgentConfigurationHasBeenSet = true;
    m_orchestrationAIAgentConfiguration = std::forward<OrchestrationAIAgentConfigurationT>(value);
  }
  template <typename OrchestrationAIAgentConfigurationT = OrchestrationAIAgentConfiguration>
  AIAgentConfiguration& WithOrchestrationAIAgentConfiguration(OrchestrationAIAgentConfigurationT&& value) {
    SetOrchestrationAIAgentConfiguration(std::forward<OrchestrationAIAgentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for AI Agents of type <code>NOTE_TAKING</code>.</p>
   */
  inline const NoteTakingAIAgentConfiguration& GetNoteTakingAIAgentConfiguration() const { return m_noteTakingAIAgentConfiguration; }
  inline bool NoteTakingAIAgentConfigurationHasBeenSet() const { return m_noteTakingAIAgentConfigurationHasBeenSet; }
  template <typename NoteTakingAIAgentConfigurationT = NoteTakingAIAgentConfiguration>
  void SetNoteTakingAIAgentConfiguration(NoteTakingAIAgentConfigurationT&& value) {
    m_noteTakingAIAgentConfigurationHasBeenSet = true;
    m_noteTakingAIAgentConfiguration = std::forward<NoteTakingAIAgentConfigurationT>(value);
  }
  template <typename NoteTakingAIAgentConfigurationT = NoteTakingAIAgentConfiguration>
  AIAgentConfiguration& WithNoteTakingAIAgentConfiguration(NoteTakingAIAgentConfigurationT&& value) {
    SetNoteTakingAIAgentConfiguration(std::forward<NoteTakingAIAgentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for AI Agents of type <code>CASE_SUMMARIZATION</code>.</p>
   */
  inline const CaseSummarizationAIAgentConfiguration& GetCaseSummarizationAIAgentConfiguration() const {
    return m_caseSummarizationAIAgentConfiguration;
  }
  inline bool CaseSummarizationAIAgentConfigurationHasBeenSet() const { return m_caseSummarizationAIAgentConfigurationHasBeenSet; }
  template <typename CaseSummarizationAIAgentConfigurationT = CaseSummarizationAIAgentConfiguration>
  void SetCaseSummarizationAIAgentConfiguration(CaseSummarizationAIAgentConfigurationT&& value) {
    m_caseSummarizationAIAgentConfigurationHasBeenSet = true;
    m_caseSummarizationAIAgentConfiguration = std::forward<CaseSummarizationAIAgentConfigurationT>(value);
  }
  template <typename CaseSummarizationAIAgentConfigurationT = CaseSummarizationAIAgentConfiguration>
  AIAgentConfiguration& WithCaseSummarizationAIAgentConfiguration(CaseSummarizationAIAgentConfigurationT&& value) {
    SetCaseSummarizationAIAgentConfiguration(std::forward<CaseSummarizationAIAgentConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  ManualSearchAIAgentConfiguration m_manualSearchAIAgentConfiguration;
  bool m_manualSearchAIAgentConfigurationHasBeenSet = false;

  AnswerRecommendationAIAgentConfiguration m_answerRecommendationAIAgentConfiguration;
  bool m_answerRecommendationAIAgentConfigurationHasBeenSet = false;

  SelfServiceAIAgentConfiguration m_selfServiceAIAgentConfiguration;
  bool m_selfServiceAIAgentConfigurationHasBeenSet = false;

  EmailResponseAIAgentConfiguration m_emailResponseAIAgentConfiguration;
  bool m_emailResponseAIAgentConfigurationHasBeenSet = false;

  EmailOverviewAIAgentConfiguration m_emailOverviewAIAgentConfiguration;
  bool m_emailOverviewAIAgentConfigurationHasBeenSet = false;

  EmailGenerativeAnswerAIAgentConfiguration m_emailGenerativeAnswerAIAgentConfiguration;
  bool m_emailGenerativeAnswerAIAgentConfigurationHasBeenSet = false;

  OrchestrationAIAgentConfiguration m_orchestrationAIAgentConfiguration;
  bool m_orchestrationAIAgentConfigurationHasBeenSet = false;

  NoteTakingAIAgentConfiguration m_noteTakingAIAgentConfiguration;
  bool m_noteTakingAIAgentConfigurationHasBeenSet = false;

  CaseSummarizationAIAgentConfiguration m_caseSummarizationAIAgentConfiguration;
  bool m_caseSummarizationAIAgentConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
