/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The configuration for AI Agents of type SELF_SERVICE.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SelfServiceAIAgentConfiguration">AWS
   * API Reference</a></p>
   */
  class SelfServiceAIAgentConfiguration
  {
  public:
    AWS_QCONNECT_API SelfServiceAIAgentConfiguration();
    AWS_QCONNECT_API SelfServiceAIAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API SelfServiceAIAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The association configurations for overriding behavior on this AI Agent.</p>
     */
    inline const Aws::Vector<AssociationConfiguration>& GetAssociationConfigurations() const{ return m_associationConfigurations; }
    inline bool AssociationConfigurationsHasBeenSet() const { return m_associationConfigurationsHasBeenSet; }
    inline void SetAssociationConfigurations(const Aws::Vector<AssociationConfiguration>& value) { m_associationConfigurationsHasBeenSet = true; m_associationConfigurations = value; }
    inline void SetAssociationConfigurations(Aws::Vector<AssociationConfiguration>&& value) { m_associationConfigurationsHasBeenSet = true; m_associationConfigurations = std::move(value); }
    inline SelfServiceAIAgentConfiguration& WithAssociationConfigurations(const Aws::Vector<AssociationConfiguration>& value) { SetAssociationConfigurations(value); return *this;}
    inline SelfServiceAIAgentConfiguration& WithAssociationConfigurations(Aws::Vector<AssociationConfiguration>&& value) { SetAssociationConfigurations(std::move(value)); return *this;}
    inline SelfServiceAIAgentConfiguration& AddAssociationConfigurations(const AssociationConfiguration& value) { m_associationConfigurationsHasBeenSet = true; m_associationConfigurations.push_back(value); return *this; }
    inline SelfServiceAIAgentConfiguration& AddAssociationConfigurations(AssociationConfiguration&& value) { m_associationConfigurationsHasBeenSet = true; m_associationConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The AI Guardrail identifier used by the SELF_SERVICE AI Agent.</p>
     */
    inline const Aws::String& GetSelfServiceAIGuardrailId() const{ return m_selfServiceAIGuardrailId; }
    inline bool SelfServiceAIGuardrailIdHasBeenSet() const { return m_selfServiceAIGuardrailIdHasBeenSet; }
    inline void SetSelfServiceAIGuardrailId(const Aws::String& value) { m_selfServiceAIGuardrailIdHasBeenSet = true; m_selfServiceAIGuardrailId = value; }
    inline void SetSelfServiceAIGuardrailId(Aws::String&& value) { m_selfServiceAIGuardrailIdHasBeenSet = true; m_selfServiceAIGuardrailId = std::move(value); }
    inline void SetSelfServiceAIGuardrailId(const char* value) { m_selfServiceAIGuardrailIdHasBeenSet = true; m_selfServiceAIGuardrailId.assign(value); }
    inline SelfServiceAIAgentConfiguration& WithSelfServiceAIGuardrailId(const Aws::String& value) { SetSelfServiceAIGuardrailId(value); return *this;}
    inline SelfServiceAIAgentConfiguration& WithSelfServiceAIGuardrailId(Aws::String&& value) { SetSelfServiceAIGuardrailId(std::move(value)); return *this;}
    inline SelfServiceAIAgentConfiguration& WithSelfServiceAIGuardrailId(const char* value) { SetSelfServiceAIGuardrailId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AI Prompt identifier for the Self Service Answer Generation prompt used
     * by the SELF_SERVICE AI Agent</p>
     */
    inline const Aws::String& GetSelfServiceAnswerGenerationAIPromptId() const{ return m_selfServiceAnswerGenerationAIPromptId; }
    inline bool SelfServiceAnswerGenerationAIPromptIdHasBeenSet() const { return m_selfServiceAnswerGenerationAIPromptIdHasBeenSet; }
    inline void SetSelfServiceAnswerGenerationAIPromptId(const Aws::String& value) { m_selfServiceAnswerGenerationAIPromptIdHasBeenSet = true; m_selfServiceAnswerGenerationAIPromptId = value; }
    inline void SetSelfServiceAnswerGenerationAIPromptId(Aws::String&& value) { m_selfServiceAnswerGenerationAIPromptIdHasBeenSet = true; m_selfServiceAnswerGenerationAIPromptId = std::move(value); }
    inline void SetSelfServiceAnswerGenerationAIPromptId(const char* value) { m_selfServiceAnswerGenerationAIPromptIdHasBeenSet = true; m_selfServiceAnswerGenerationAIPromptId.assign(value); }
    inline SelfServiceAIAgentConfiguration& WithSelfServiceAnswerGenerationAIPromptId(const Aws::String& value) { SetSelfServiceAnswerGenerationAIPromptId(value); return *this;}
    inline SelfServiceAIAgentConfiguration& WithSelfServiceAnswerGenerationAIPromptId(Aws::String&& value) { SetSelfServiceAnswerGenerationAIPromptId(std::move(value)); return *this;}
    inline SelfServiceAIAgentConfiguration& WithSelfServiceAnswerGenerationAIPromptId(const char* value) { SetSelfServiceAnswerGenerationAIPromptId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AI Prompt identifier for the Self Service Pre-Processing prompt used by
     * the SELF_SERVICE AI Agent</p>
     */
    inline const Aws::String& GetSelfServicePreProcessingAIPromptId() const{ return m_selfServicePreProcessingAIPromptId; }
    inline bool SelfServicePreProcessingAIPromptIdHasBeenSet() const { return m_selfServicePreProcessingAIPromptIdHasBeenSet; }
    inline void SetSelfServicePreProcessingAIPromptId(const Aws::String& value) { m_selfServicePreProcessingAIPromptIdHasBeenSet = true; m_selfServicePreProcessingAIPromptId = value; }
    inline void SetSelfServicePreProcessingAIPromptId(Aws::String&& value) { m_selfServicePreProcessingAIPromptIdHasBeenSet = true; m_selfServicePreProcessingAIPromptId = std::move(value); }
    inline void SetSelfServicePreProcessingAIPromptId(const char* value) { m_selfServicePreProcessingAIPromptIdHasBeenSet = true; m_selfServicePreProcessingAIPromptId.assign(value); }
    inline SelfServiceAIAgentConfiguration& WithSelfServicePreProcessingAIPromptId(const Aws::String& value) { SetSelfServicePreProcessingAIPromptId(value); return *this;}
    inline SelfServiceAIAgentConfiguration& WithSelfServicePreProcessingAIPromptId(Aws::String&& value) { SetSelfServicePreProcessingAIPromptId(std::move(value)); return *this;}
    inline SelfServiceAIAgentConfiguration& WithSelfServicePreProcessingAIPromptId(const char* value) { SetSelfServicePreProcessingAIPromptId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssociationConfiguration> m_associationConfigurations;
    bool m_associationConfigurationsHasBeenSet = false;

    Aws::String m_selfServiceAIGuardrailId;
    bool m_selfServiceAIGuardrailIdHasBeenSet = false;

    Aws::String m_selfServiceAnswerGenerationAIPromptId;
    bool m_selfServiceAnswerGenerationAIPromptIdHasBeenSet = false;

    Aws::String m_selfServicePreProcessingAIPromptId;
    bool m_selfServicePreProcessingAIPromptIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
