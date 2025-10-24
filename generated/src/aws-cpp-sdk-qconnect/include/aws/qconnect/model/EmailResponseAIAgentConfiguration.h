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
 * <p>Configuration settings for the EMAIL_RESPONSE AI agent including prompts,
 * locale, and knowledge base associations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/EmailResponseAIAgentConfiguration">AWS
 * API Reference</a></p>
 */
class EmailResponseAIAgentConfiguration {
 public:
  AWS_QCONNECT_API EmailResponseAIAgentConfiguration() = default;
  AWS_QCONNECT_API EmailResponseAIAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API EmailResponseAIAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the System AI prompt used for generating professional email
   * responses based on knowledge base content.</p>
   */
  inline const Aws::String& GetEmailResponseAIPromptId() const { return m_emailResponseAIPromptId; }
  inline bool EmailResponseAIPromptIdHasBeenSet() const { return m_emailResponseAIPromptIdHasBeenSet; }
  template <typename EmailResponseAIPromptIdT = Aws::String>
  void SetEmailResponseAIPromptId(EmailResponseAIPromptIdT&& value) {
    m_emailResponseAIPromptIdHasBeenSet = true;
    m_emailResponseAIPromptId = std::forward<EmailResponseAIPromptIdT>(value);
  }
  template <typename EmailResponseAIPromptIdT = Aws::String>
  EmailResponseAIAgentConfiguration& WithEmailResponseAIPromptId(EmailResponseAIPromptIdT&& value) {
    SetEmailResponseAIPromptId(std::forward<EmailResponseAIPromptIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the System AI prompt used for reformulating email queries to
   * optimize knowledge base search for response generation.</p>
   */
  inline const Aws::String& GetEmailQueryReformulationAIPromptId() const { return m_emailQueryReformulationAIPromptId; }
  inline bool EmailQueryReformulationAIPromptIdHasBeenSet() const { return m_emailQueryReformulationAIPromptIdHasBeenSet; }
  template <typename EmailQueryReformulationAIPromptIdT = Aws::String>
  void SetEmailQueryReformulationAIPromptId(EmailQueryReformulationAIPromptIdT&& value) {
    m_emailQueryReformulationAIPromptIdHasBeenSet = true;
    m_emailQueryReformulationAIPromptId = std::forward<EmailQueryReformulationAIPromptIdT>(value);
  }
  template <typename EmailQueryReformulationAIPromptIdT = Aws::String>
  EmailResponseAIAgentConfiguration& WithEmailQueryReformulationAIPromptId(EmailQueryReformulationAIPromptIdT&& value) {
    SetEmailQueryReformulationAIPromptId(std::forward<EmailQueryReformulationAIPromptIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The locale setting for language-specific email response generation (for
   * example, en_US, es_ES).</p>
   */
  inline const Aws::String& GetLocale() const { return m_locale; }
  inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
  template <typename LocaleT = Aws::String>
  void SetLocale(LocaleT&& value) {
    m_localeHasBeenSet = true;
    m_locale = std::forward<LocaleT>(value);
  }
  template <typename LocaleT = Aws::String>
  EmailResponseAIAgentConfiguration& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration settings for knowledge base associations used by the email
   * response agent.</p>
   */
  inline const Aws::Vector<AssociationConfiguration>& GetAssociationConfigurations() const { return m_associationConfigurations; }
  inline bool AssociationConfigurationsHasBeenSet() const { return m_associationConfigurationsHasBeenSet; }
  template <typename AssociationConfigurationsT = Aws::Vector<AssociationConfiguration>>
  void SetAssociationConfigurations(AssociationConfigurationsT&& value) {
    m_associationConfigurationsHasBeenSet = true;
    m_associationConfigurations = std::forward<AssociationConfigurationsT>(value);
  }
  template <typename AssociationConfigurationsT = Aws::Vector<AssociationConfiguration>>
  EmailResponseAIAgentConfiguration& WithAssociationConfigurations(AssociationConfigurationsT&& value) {
    SetAssociationConfigurations(std::forward<AssociationConfigurationsT>(value));
    return *this;
  }
  template <typename AssociationConfigurationsT = AssociationConfiguration>
  EmailResponseAIAgentConfiguration& AddAssociationConfigurations(AssociationConfigurationsT&& value) {
    m_associationConfigurationsHasBeenSet = true;
    m_associationConfigurations.emplace_back(std::forward<AssociationConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_emailResponseAIPromptId;
  bool m_emailResponseAIPromptIdHasBeenSet = false;

  Aws::String m_emailQueryReformulationAIPromptId;
  bool m_emailQueryReformulationAIPromptIdHasBeenSet = false;

  Aws::String m_locale;
  bool m_localeHasBeenSet = false;

  Aws::Vector<AssociationConfiguration> m_associationConfigurations;
  bool m_associationConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
