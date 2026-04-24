/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AssociationConfiguration.h>

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
 * <p>Configuration settings for the EMAIL_GENERATIVE_ANSWER AI agent including
 * prompts, locale, and knowledge base associations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/EmailGenerativeAnswerAIAgentConfiguration">AWS
 * API Reference</a></p>
 */
class EmailGenerativeAnswerAIAgentConfiguration {
 public:
  AWS_QCONNECT_API EmailGenerativeAnswerAIAgentConfiguration() = default;
  AWS_QCONNECT_API EmailGenerativeAnswerAIAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API EmailGenerativeAnswerAIAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the System AI prompt used for generating comprehensive
   * knowledge-based answers from email queries.</p>
   */
  inline const Aws::String& GetEmailGenerativeAnswerAIPromptId() const { return m_emailGenerativeAnswerAIPromptId; }
  inline bool EmailGenerativeAnswerAIPromptIdHasBeenSet() const { return m_emailGenerativeAnswerAIPromptIdHasBeenSet; }
  template <typename EmailGenerativeAnswerAIPromptIdT = Aws::String>
  void SetEmailGenerativeAnswerAIPromptId(EmailGenerativeAnswerAIPromptIdT&& value) {
    m_emailGenerativeAnswerAIPromptIdHasBeenSet = true;
    m_emailGenerativeAnswerAIPromptId = std::forward<EmailGenerativeAnswerAIPromptIdT>(value);
  }
  template <typename EmailGenerativeAnswerAIPromptIdT = Aws::String>
  EmailGenerativeAnswerAIAgentConfiguration& WithEmailGenerativeAnswerAIPromptId(EmailGenerativeAnswerAIPromptIdT&& value) {
    SetEmailGenerativeAnswerAIPromptId(std::forward<EmailGenerativeAnswerAIPromptIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the System AI prompt used for reformulating email queries to
   * optimize knowledge base search results.</p>
   */
  inline const Aws::String& GetEmailQueryReformulationAIPromptId() const { return m_emailQueryReformulationAIPromptId; }
  inline bool EmailQueryReformulationAIPromptIdHasBeenSet() const { return m_emailQueryReformulationAIPromptIdHasBeenSet; }
  template <typename EmailQueryReformulationAIPromptIdT = Aws::String>
  void SetEmailQueryReformulationAIPromptId(EmailQueryReformulationAIPromptIdT&& value) {
    m_emailQueryReformulationAIPromptIdHasBeenSet = true;
    m_emailQueryReformulationAIPromptId = std::forward<EmailQueryReformulationAIPromptIdT>(value);
  }
  template <typename EmailQueryReformulationAIPromptIdT = Aws::String>
  EmailGenerativeAnswerAIAgentConfiguration& WithEmailQueryReformulationAIPromptId(EmailQueryReformulationAIPromptIdT&& value) {
    SetEmailQueryReformulationAIPromptId(std::forward<EmailQueryReformulationAIPromptIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The locale setting for language-specific email processing and response
   * generation (for example, en_US, es_ES).</p>
   */
  inline const Aws::String& GetLocale() const { return m_locale; }
  inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
  template <typename LocaleT = Aws::String>
  void SetLocale(LocaleT&& value) {
    m_localeHasBeenSet = true;
    m_locale = std::forward<LocaleT>(value);
  }
  template <typename LocaleT = Aws::String>
  EmailGenerativeAnswerAIAgentConfiguration& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration settings for knowledge base associations used by the email
   * generative answer agent.</p>
   */
  inline const Aws::Vector<AssociationConfiguration>& GetAssociationConfigurations() const { return m_associationConfigurations; }
  inline bool AssociationConfigurationsHasBeenSet() const { return m_associationConfigurationsHasBeenSet; }
  template <typename AssociationConfigurationsT = Aws::Vector<AssociationConfiguration>>
  void SetAssociationConfigurations(AssociationConfigurationsT&& value) {
    m_associationConfigurationsHasBeenSet = true;
    m_associationConfigurations = std::forward<AssociationConfigurationsT>(value);
  }
  template <typename AssociationConfigurationsT = Aws::Vector<AssociationConfiguration>>
  EmailGenerativeAnswerAIAgentConfiguration& WithAssociationConfigurations(AssociationConfigurationsT&& value) {
    SetAssociationConfigurations(std::forward<AssociationConfigurationsT>(value));
    return *this;
  }
  template <typename AssociationConfigurationsT = AssociationConfiguration>
  EmailGenerativeAnswerAIAgentConfiguration& AddAssociationConfigurations(AssociationConfigurationsT&& value) {
    m_associationConfigurationsHasBeenSet = true;
    m_associationConfigurations.emplace_back(std::forward<AssociationConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_emailGenerativeAnswerAIPromptId;

  Aws::String m_emailQueryReformulationAIPromptId;

  Aws::String m_locale;

  Aws::Vector<AssociationConfiguration> m_associationConfigurations;
  bool m_emailGenerativeAnswerAIPromptIdHasBeenSet = false;
  bool m_emailQueryReformulationAIPromptIdHasBeenSet = false;
  bool m_localeHasBeenSet = false;
  bool m_associationConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
