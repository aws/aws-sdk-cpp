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
   * <p>The configuration for the <code>ANSWER_RECOMMENDATION</code> AI Agent
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AnswerRecommendationAIAgentConfiguration">AWS
   * API Reference</a></p>
   */
  class AnswerRecommendationAIAgentConfiguration
  {
  public:
    AWS_QCONNECT_API AnswerRecommendationAIAgentConfiguration();
    AWS_QCONNECT_API AnswerRecommendationAIAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AnswerRecommendationAIAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AI Guardrail identifier for the Answer Generation Guardrail used by the
     * <code>ANSWER_RECOMMENDATION</code> AI Agent.</p>
     */
    inline const Aws::String& GetAnswerGenerationAIGuardrailId() const{ return m_answerGenerationAIGuardrailId; }
    inline bool AnswerGenerationAIGuardrailIdHasBeenSet() const { return m_answerGenerationAIGuardrailIdHasBeenSet; }
    inline void SetAnswerGenerationAIGuardrailId(const Aws::String& value) { m_answerGenerationAIGuardrailIdHasBeenSet = true; m_answerGenerationAIGuardrailId = value; }
    inline void SetAnswerGenerationAIGuardrailId(Aws::String&& value) { m_answerGenerationAIGuardrailIdHasBeenSet = true; m_answerGenerationAIGuardrailId = std::move(value); }
    inline void SetAnswerGenerationAIGuardrailId(const char* value) { m_answerGenerationAIGuardrailIdHasBeenSet = true; m_answerGenerationAIGuardrailId.assign(value); }
    inline AnswerRecommendationAIAgentConfiguration& WithAnswerGenerationAIGuardrailId(const Aws::String& value) { SetAnswerGenerationAIGuardrailId(value); return *this;}
    inline AnswerRecommendationAIAgentConfiguration& WithAnswerGenerationAIGuardrailId(Aws::String&& value) { SetAnswerGenerationAIGuardrailId(std::move(value)); return *this;}
    inline AnswerRecommendationAIAgentConfiguration& WithAnswerGenerationAIGuardrailId(const char* value) { SetAnswerGenerationAIGuardrailId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AI Prompt identifier for the Answer Generation prompt used by the
     * <code>ANSWER_RECOMMENDATION</code> AI Agent.</p>
     */
    inline const Aws::String& GetAnswerGenerationAIPromptId() const{ return m_answerGenerationAIPromptId; }
    inline bool AnswerGenerationAIPromptIdHasBeenSet() const { return m_answerGenerationAIPromptIdHasBeenSet; }
    inline void SetAnswerGenerationAIPromptId(const Aws::String& value) { m_answerGenerationAIPromptIdHasBeenSet = true; m_answerGenerationAIPromptId = value; }
    inline void SetAnswerGenerationAIPromptId(Aws::String&& value) { m_answerGenerationAIPromptIdHasBeenSet = true; m_answerGenerationAIPromptId = std::move(value); }
    inline void SetAnswerGenerationAIPromptId(const char* value) { m_answerGenerationAIPromptIdHasBeenSet = true; m_answerGenerationAIPromptId.assign(value); }
    inline AnswerRecommendationAIAgentConfiguration& WithAnswerGenerationAIPromptId(const Aws::String& value) { SetAnswerGenerationAIPromptId(value); return *this;}
    inline AnswerRecommendationAIAgentConfiguration& WithAnswerGenerationAIPromptId(Aws::String&& value) { SetAnswerGenerationAIPromptId(std::move(value)); return *this;}
    inline AnswerRecommendationAIAgentConfiguration& WithAnswerGenerationAIPromptId(const char* value) { SetAnswerGenerationAIPromptId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association configurations for overriding behavior on this AI Agent.</p>
     */
    inline const Aws::Vector<AssociationConfiguration>& GetAssociationConfigurations() const{ return m_associationConfigurations; }
    inline bool AssociationConfigurationsHasBeenSet() const { return m_associationConfigurationsHasBeenSet; }
    inline void SetAssociationConfigurations(const Aws::Vector<AssociationConfiguration>& value) { m_associationConfigurationsHasBeenSet = true; m_associationConfigurations = value; }
    inline void SetAssociationConfigurations(Aws::Vector<AssociationConfiguration>&& value) { m_associationConfigurationsHasBeenSet = true; m_associationConfigurations = std::move(value); }
    inline AnswerRecommendationAIAgentConfiguration& WithAssociationConfigurations(const Aws::Vector<AssociationConfiguration>& value) { SetAssociationConfigurations(value); return *this;}
    inline AnswerRecommendationAIAgentConfiguration& WithAssociationConfigurations(Aws::Vector<AssociationConfiguration>&& value) { SetAssociationConfigurations(std::move(value)); return *this;}
    inline AnswerRecommendationAIAgentConfiguration& AddAssociationConfigurations(const AssociationConfiguration& value) { m_associationConfigurationsHasBeenSet = true; m_associationConfigurations.push_back(value); return *this; }
    inline AnswerRecommendationAIAgentConfiguration& AddAssociationConfigurations(AssociationConfiguration&& value) { m_associationConfigurationsHasBeenSet = true; m_associationConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The AI Prompt identifier for the Intent Labeling prompt used by the
     * <code>ANSWER_RECOMMENDATION</code> AI Agent.</p>
     */
    inline const Aws::String& GetIntentLabelingGenerationAIPromptId() const{ return m_intentLabelingGenerationAIPromptId; }
    inline bool IntentLabelingGenerationAIPromptIdHasBeenSet() const { return m_intentLabelingGenerationAIPromptIdHasBeenSet; }
    inline void SetIntentLabelingGenerationAIPromptId(const Aws::String& value) { m_intentLabelingGenerationAIPromptIdHasBeenSet = true; m_intentLabelingGenerationAIPromptId = value; }
    inline void SetIntentLabelingGenerationAIPromptId(Aws::String&& value) { m_intentLabelingGenerationAIPromptIdHasBeenSet = true; m_intentLabelingGenerationAIPromptId = std::move(value); }
    inline void SetIntentLabelingGenerationAIPromptId(const char* value) { m_intentLabelingGenerationAIPromptIdHasBeenSet = true; m_intentLabelingGenerationAIPromptId.assign(value); }
    inline AnswerRecommendationAIAgentConfiguration& WithIntentLabelingGenerationAIPromptId(const Aws::String& value) { SetIntentLabelingGenerationAIPromptId(value); return *this;}
    inline AnswerRecommendationAIAgentConfiguration& WithIntentLabelingGenerationAIPromptId(Aws::String&& value) { SetIntentLabelingGenerationAIPromptId(std::move(value)); return *this;}
    inline AnswerRecommendationAIAgentConfiguration& WithIntentLabelingGenerationAIPromptId(const char* value) { SetIntentLabelingGenerationAIPromptId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale to which specifies the language and region settings that determine
     * the response language for <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_amazon-q-connect_QueryAssistant.html">QueryAssistant</a>.</p>
     *  <p>Changing this locale to anything other than <code>en_US</code> will
     * turn off recommendations triggered by contact transcripts for agent assistance,
     * as this feature is not supported in multiple languages.</p> 
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }
    inline AnswerRecommendationAIAgentConfiguration& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}
    inline AnswerRecommendationAIAgentConfiguration& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}
    inline AnswerRecommendationAIAgentConfiguration& WithLocale(const char* value) { SetLocale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AI Prompt identifier for the Query Reformulation prompt used by the
     * <code>ANSWER_RECOMMENDATION</code> AI Agent.</p>
     */
    inline const Aws::String& GetQueryReformulationAIPromptId() const{ return m_queryReformulationAIPromptId; }
    inline bool QueryReformulationAIPromptIdHasBeenSet() const { return m_queryReformulationAIPromptIdHasBeenSet; }
    inline void SetQueryReformulationAIPromptId(const Aws::String& value) { m_queryReformulationAIPromptIdHasBeenSet = true; m_queryReformulationAIPromptId = value; }
    inline void SetQueryReformulationAIPromptId(Aws::String&& value) { m_queryReformulationAIPromptIdHasBeenSet = true; m_queryReformulationAIPromptId = std::move(value); }
    inline void SetQueryReformulationAIPromptId(const char* value) { m_queryReformulationAIPromptIdHasBeenSet = true; m_queryReformulationAIPromptId.assign(value); }
    inline AnswerRecommendationAIAgentConfiguration& WithQueryReformulationAIPromptId(const Aws::String& value) { SetQueryReformulationAIPromptId(value); return *this;}
    inline AnswerRecommendationAIAgentConfiguration& WithQueryReformulationAIPromptId(Aws::String&& value) { SetQueryReformulationAIPromptId(std::move(value)); return *this;}
    inline AnswerRecommendationAIAgentConfiguration& WithQueryReformulationAIPromptId(const char* value) { SetQueryReformulationAIPromptId(value); return *this;}
    ///@}
  private:

    Aws::String m_answerGenerationAIGuardrailId;
    bool m_answerGenerationAIGuardrailIdHasBeenSet = false;

    Aws::String m_answerGenerationAIPromptId;
    bool m_answerGenerationAIPromptIdHasBeenSet = false;

    Aws::Vector<AssociationConfiguration> m_associationConfigurations;
    bool m_associationConfigurationsHasBeenSet = false;

    Aws::String m_intentLabelingGenerationAIPromptId;
    bool m_intentLabelingGenerationAIPromptIdHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    Aws::String m_queryReformulationAIPromptId;
    bool m_queryReformulationAIPromptIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
