/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/AssociationConfiguration.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The configuration for the <code>MANUAL_SEARCH</code> AI Agent
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ManualSearchAIAgentConfiguration">AWS
   * API Reference</a></p>
   */
  class ManualSearchAIAgentConfiguration
  {
  public:
    AWS_QCONNECT_API ManualSearchAIAgentConfiguration() = default;
    AWS_QCONNECT_API ManualSearchAIAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ManualSearchAIAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AI Prompt identifier for the Answer Generation prompt used by the
     * MANUAL_SEARCH AI Agent.</p>
     */
    inline const Aws::String& GetAnswerGenerationAIPromptId() const { return m_answerGenerationAIPromptId; }
    inline bool AnswerGenerationAIPromptIdHasBeenSet() const { return m_answerGenerationAIPromptIdHasBeenSet; }
    template<typename AnswerGenerationAIPromptIdT = Aws::String>
    void SetAnswerGenerationAIPromptId(AnswerGenerationAIPromptIdT&& value) { m_answerGenerationAIPromptIdHasBeenSet = true; m_answerGenerationAIPromptId = std::forward<AnswerGenerationAIPromptIdT>(value); }
    template<typename AnswerGenerationAIPromptIdT = Aws::String>
    ManualSearchAIAgentConfiguration& WithAnswerGenerationAIPromptId(AnswerGenerationAIPromptIdT&& value) { SetAnswerGenerationAIPromptId(std::forward<AnswerGenerationAIPromptIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AI Guardrail identifier for the Answer Generation guardrail used by the
     * MANUAL_SEARCH AI Agent.</p>
     */
    inline const Aws::String& GetAnswerGenerationAIGuardrailId() const { return m_answerGenerationAIGuardrailId; }
    inline bool AnswerGenerationAIGuardrailIdHasBeenSet() const { return m_answerGenerationAIGuardrailIdHasBeenSet; }
    template<typename AnswerGenerationAIGuardrailIdT = Aws::String>
    void SetAnswerGenerationAIGuardrailId(AnswerGenerationAIGuardrailIdT&& value) { m_answerGenerationAIGuardrailIdHasBeenSet = true; m_answerGenerationAIGuardrailId = std::forward<AnswerGenerationAIGuardrailIdT>(value); }
    template<typename AnswerGenerationAIGuardrailIdT = Aws::String>
    ManualSearchAIAgentConfiguration& WithAnswerGenerationAIGuardrailId(AnswerGenerationAIGuardrailIdT&& value) { SetAnswerGenerationAIGuardrailId(std::forward<AnswerGenerationAIGuardrailIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association configurations for overriding behavior on this AI Agent.</p>
     */
    inline const Aws::Vector<AssociationConfiguration>& GetAssociationConfigurations() const { return m_associationConfigurations; }
    inline bool AssociationConfigurationsHasBeenSet() const { return m_associationConfigurationsHasBeenSet; }
    template<typename AssociationConfigurationsT = Aws::Vector<AssociationConfiguration>>
    void SetAssociationConfigurations(AssociationConfigurationsT&& value) { m_associationConfigurationsHasBeenSet = true; m_associationConfigurations = std::forward<AssociationConfigurationsT>(value); }
    template<typename AssociationConfigurationsT = Aws::Vector<AssociationConfiguration>>
    ManualSearchAIAgentConfiguration& WithAssociationConfigurations(AssociationConfigurationsT&& value) { SetAssociationConfigurations(std::forward<AssociationConfigurationsT>(value)); return *this;}
    template<typename AssociationConfigurationsT = AssociationConfiguration>
    ManualSearchAIAgentConfiguration& AddAssociationConfigurations(AssociationConfigurationsT&& value) { m_associationConfigurationsHasBeenSet = true; m_associationConfigurations.emplace_back(std::forward<AssociationConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The locale to which specifies the language and region settings that determine
     * the response language for <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_amazon-q-connect_QueryAssistant.html">QueryAssistant</a>.</p>
     *  <p>For more information on supported locales, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/supported-languages.html#qic-notes-languages">Language
     * support for Amazon Q in Connect</a>.</p> 
     */
    inline const Aws::String& GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    template<typename LocaleT = Aws::String>
    void SetLocale(LocaleT&& value) { m_localeHasBeenSet = true; m_locale = std::forward<LocaleT>(value); }
    template<typename LocaleT = Aws::String>
    ManualSearchAIAgentConfiguration& WithLocale(LocaleT&& value) { SetLocale(std::forward<LocaleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_answerGenerationAIPromptId;
    bool m_answerGenerationAIPromptIdHasBeenSet = false;

    Aws::String m_answerGenerationAIGuardrailId;
    bool m_answerGenerationAIGuardrailIdHasBeenSet = false;

    Aws::Vector<AssociationConfiguration> m_associationConfigurations;
    bool m_associationConfigurationsHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
