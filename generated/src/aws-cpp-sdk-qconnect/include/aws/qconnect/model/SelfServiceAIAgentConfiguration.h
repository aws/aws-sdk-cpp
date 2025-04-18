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
   * <p>The configuration for AI Agents of type SELF_SERVICE.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SelfServiceAIAgentConfiguration">AWS
   * API Reference</a></p>
   */
  class SelfServiceAIAgentConfiguration
  {
  public:
    AWS_QCONNECT_API SelfServiceAIAgentConfiguration() = default;
    AWS_QCONNECT_API SelfServiceAIAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API SelfServiceAIAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AI Prompt identifier for the Self Service Pre-Processing prompt used by
     * the SELF_SERVICE AI Agent</p>
     */
    inline const Aws::String& GetSelfServicePreProcessingAIPromptId() const { return m_selfServicePreProcessingAIPromptId; }
    inline bool SelfServicePreProcessingAIPromptIdHasBeenSet() const { return m_selfServicePreProcessingAIPromptIdHasBeenSet; }
    template<typename SelfServicePreProcessingAIPromptIdT = Aws::String>
    void SetSelfServicePreProcessingAIPromptId(SelfServicePreProcessingAIPromptIdT&& value) { m_selfServicePreProcessingAIPromptIdHasBeenSet = true; m_selfServicePreProcessingAIPromptId = std::forward<SelfServicePreProcessingAIPromptIdT>(value); }
    template<typename SelfServicePreProcessingAIPromptIdT = Aws::String>
    SelfServiceAIAgentConfiguration& WithSelfServicePreProcessingAIPromptId(SelfServicePreProcessingAIPromptIdT&& value) { SetSelfServicePreProcessingAIPromptId(std::forward<SelfServicePreProcessingAIPromptIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AI Prompt identifier for the Self Service Answer Generation prompt used
     * by the SELF_SERVICE AI Agent</p>
     */
    inline const Aws::String& GetSelfServiceAnswerGenerationAIPromptId() const { return m_selfServiceAnswerGenerationAIPromptId; }
    inline bool SelfServiceAnswerGenerationAIPromptIdHasBeenSet() const { return m_selfServiceAnswerGenerationAIPromptIdHasBeenSet; }
    template<typename SelfServiceAnswerGenerationAIPromptIdT = Aws::String>
    void SetSelfServiceAnswerGenerationAIPromptId(SelfServiceAnswerGenerationAIPromptIdT&& value) { m_selfServiceAnswerGenerationAIPromptIdHasBeenSet = true; m_selfServiceAnswerGenerationAIPromptId = std::forward<SelfServiceAnswerGenerationAIPromptIdT>(value); }
    template<typename SelfServiceAnswerGenerationAIPromptIdT = Aws::String>
    SelfServiceAIAgentConfiguration& WithSelfServiceAnswerGenerationAIPromptId(SelfServiceAnswerGenerationAIPromptIdT&& value) { SetSelfServiceAnswerGenerationAIPromptId(std::forward<SelfServiceAnswerGenerationAIPromptIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AI Guardrail identifier used by the SELF_SERVICE AI Agent.</p>
     */
    inline const Aws::String& GetSelfServiceAIGuardrailId() const { return m_selfServiceAIGuardrailId; }
    inline bool SelfServiceAIGuardrailIdHasBeenSet() const { return m_selfServiceAIGuardrailIdHasBeenSet; }
    template<typename SelfServiceAIGuardrailIdT = Aws::String>
    void SetSelfServiceAIGuardrailId(SelfServiceAIGuardrailIdT&& value) { m_selfServiceAIGuardrailIdHasBeenSet = true; m_selfServiceAIGuardrailId = std::forward<SelfServiceAIGuardrailIdT>(value); }
    template<typename SelfServiceAIGuardrailIdT = Aws::String>
    SelfServiceAIAgentConfiguration& WithSelfServiceAIGuardrailId(SelfServiceAIGuardrailIdT&& value) { SetSelfServiceAIGuardrailId(std::forward<SelfServiceAIGuardrailIdT>(value)); return *this;}
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
    SelfServiceAIAgentConfiguration& WithAssociationConfigurations(AssociationConfigurationsT&& value) { SetAssociationConfigurations(std::forward<AssociationConfigurationsT>(value)); return *this;}
    template<typename AssociationConfigurationsT = AssociationConfiguration>
    SelfServiceAIAgentConfiguration& AddAssociationConfigurations(AssociationConfigurationsT&& value) { m_associationConfigurationsHasBeenSet = true; m_associationConfigurations.emplace_back(std::forward<AssociationConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_selfServicePreProcessingAIPromptId;
    bool m_selfServicePreProcessingAIPromptIdHasBeenSet = false;

    Aws::String m_selfServiceAnswerGenerationAIPromptId;
    bool m_selfServiceAnswerGenerationAIPromptIdHasBeenSet = false;

    Aws::String m_selfServiceAIGuardrailId;
    bool m_selfServiceAIGuardrailIdHasBeenSet = false;

    Aws::Vector<AssociationConfiguration> m_associationConfigurations;
    bool m_associationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
