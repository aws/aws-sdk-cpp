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
    AWS_QCONNECT_API ManualSearchAIAgentConfiguration();
    AWS_QCONNECT_API ManualSearchAIAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ManualSearchAIAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AI Guardrail identifier for the Answer Generation guardrail used by the
     * MANUAL_SEARCH AI Agent.</p>
     */
    inline const Aws::String& GetAnswerGenerationAIGuardrailId() const{ return m_answerGenerationAIGuardrailId; }
    inline bool AnswerGenerationAIGuardrailIdHasBeenSet() const { return m_answerGenerationAIGuardrailIdHasBeenSet; }
    inline void SetAnswerGenerationAIGuardrailId(const Aws::String& value) { m_answerGenerationAIGuardrailIdHasBeenSet = true; m_answerGenerationAIGuardrailId = value; }
    inline void SetAnswerGenerationAIGuardrailId(Aws::String&& value) { m_answerGenerationAIGuardrailIdHasBeenSet = true; m_answerGenerationAIGuardrailId = std::move(value); }
    inline void SetAnswerGenerationAIGuardrailId(const char* value) { m_answerGenerationAIGuardrailIdHasBeenSet = true; m_answerGenerationAIGuardrailId.assign(value); }
    inline ManualSearchAIAgentConfiguration& WithAnswerGenerationAIGuardrailId(const Aws::String& value) { SetAnswerGenerationAIGuardrailId(value); return *this;}
    inline ManualSearchAIAgentConfiguration& WithAnswerGenerationAIGuardrailId(Aws::String&& value) { SetAnswerGenerationAIGuardrailId(std::move(value)); return *this;}
    inline ManualSearchAIAgentConfiguration& WithAnswerGenerationAIGuardrailId(const char* value) { SetAnswerGenerationAIGuardrailId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AI Prompt identifier for the Answer Generation prompt used by the
     * MANUAL_SEARCH AI Agent.</p>
     */
    inline const Aws::String& GetAnswerGenerationAIPromptId() const{ return m_answerGenerationAIPromptId; }
    inline bool AnswerGenerationAIPromptIdHasBeenSet() const { return m_answerGenerationAIPromptIdHasBeenSet; }
    inline void SetAnswerGenerationAIPromptId(const Aws::String& value) { m_answerGenerationAIPromptIdHasBeenSet = true; m_answerGenerationAIPromptId = value; }
    inline void SetAnswerGenerationAIPromptId(Aws::String&& value) { m_answerGenerationAIPromptIdHasBeenSet = true; m_answerGenerationAIPromptId = std::move(value); }
    inline void SetAnswerGenerationAIPromptId(const char* value) { m_answerGenerationAIPromptIdHasBeenSet = true; m_answerGenerationAIPromptId.assign(value); }
    inline ManualSearchAIAgentConfiguration& WithAnswerGenerationAIPromptId(const Aws::String& value) { SetAnswerGenerationAIPromptId(value); return *this;}
    inline ManualSearchAIAgentConfiguration& WithAnswerGenerationAIPromptId(Aws::String&& value) { SetAnswerGenerationAIPromptId(std::move(value)); return *this;}
    inline ManualSearchAIAgentConfiguration& WithAnswerGenerationAIPromptId(const char* value) { SetAnswerGenerationAIPromptId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association configurations for overriding behavior on this AI Agent.</p>
     */
    inline const Aws::Vector<AssociationConfiguration>& GetAssociationConfigurations() const{ return m_associationConfigurations; }
    inline bool AssociationConfigurationsHasBeenSet() const { return m_associationConfigurationsHasBeenSet; }
    inline void SetAssociationConfigurations(const Aws::Vector<AssociationConfiguration>& value) { m_associationConfigurationsHasBeenSet = true; m_associationConfigurations = value; }
    inline void SetAssociationConfigurations(Aws::Vector<AssociationConfiguration>&& value) { m_associationConfigurationsHasBeenSet = true; m_associationConfigurations = std::move(value); }
    inline ManualSearchAIAgentConfiguration& WithAssociationConfigurations(const Aws::Vector<AssociationConfiguration>& value) { SetAssociationConfigurations(value); return *this;}
    inline ManualSearchAIAgentConfiguration& WithAssociationConfigurations(Aws::Vector<AssociationConfiguration>&& value) { SetAssociationConfigurations(std::move(value)); return *this;}
    inline ManualSearchAIAgentConfiguration& AddAssociationConfigurations(const AssociationConfiguration& value) { m_associationConfigurationsHasBeenSet = true; m_associationConfigurations.push_back(value); return *this; }
    inline ManualSearchAIAgentConfiguration& AddAssociationConfigurations(AssociationConfiguration&& value) { m_associationConfigurationsHasBeenSet = true; m_associationConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The locale to which specifies the language and region settings that determine
     * the response language for <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_amazon-q-connect_QueryAssistant.html">QueryAssistant</a>.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }
    inline ManualSearchAIAgentConfiguration& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}
    inline ManualSearchAIAgentConfiguration& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}
    inline ManualSearchAIAgentConfiguration& WithLocale(const char* value) { SetLocale(value); return *this;}
    ///@}
  private:

    Aws::String m_answerGenerationAIGuardrailId;
    bool m_answerGenerationAIGuardrailIdHasBeenSet = false;

    Aws::String m_answerGenerationAIPromptId;
    bool m_answerGenerationAIPromptIdHasBeenSet = false;

    Aws::Vector<AssociationConfiguration> m_associationConfigurations;
    bool m_associationConfigurationsHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
