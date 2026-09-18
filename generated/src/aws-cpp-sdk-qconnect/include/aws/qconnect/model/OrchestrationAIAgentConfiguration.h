/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/MultiAgentConfiguration.h>
#include <aws/qconnect/model/ToolConfiguration.h>

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
 * <p>The configuration for AI Agents of type
 * <code>ORCHESTRATION</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/OrchestrationAIAgentConfiguration">AWS
 * API Reference</a></p>
 */
class OrchestrationAIAgentConfiguration {
 public:
  AWS_QCONNECT_API OrchestrationAIAgentConfiguration() = default;
  AWS_QCONNECT_API OrchestrationAIAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API OrchestrationAIAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AI Prompt identifier used by the Orchestration AI Agent.</p>
   */
  inline const Aws::String& GetOrchestrationAIPromptId() const { return m_orchestrationAIPromptId; }
  inline bool OrchestrationAIPromptIdHasBeenSet() const { return m_orchestrationAIPromptIdHasBeenSet; }
  template <typename OrchestrationAIPromptIdT = Aws::String>
  void SetOrchestrationAIPromptId(OrchestrationAIPromptIdT&& value) {
    m_orchestrationAIPromptIdHasBeenSet = true;
    m_orchestrationAIPromptId = std::forward<OrchestrationAIPromptIdT>(value);
  }
  template <typename OrchestrationAIPromptIdT = Aws::String>
  OrchestrationAIAgentConfiguration& WithOrchestrationAIPromptId(OrchestrationAIPromptIdT&& value) {
    SetOrchestrationAIPromptId(std::forward<OrchestrationAIPromptIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AI Guardrail identifier used by the Orchestration AI Agent.</p>
   */
  inline const Aws::String& GetOrchestrationAIGuardrailId() const { return m_orchestrationAIGuardrailId; }
  inline bool OrchestrationAIGuardrailIdHasBeenSet() const { return m_orchestrationAIGuardrailIdHasBeenSet; }
  template <typename OrchestrationAIGuardrailIdT = Aws::String>
  void SetOrchestrationAIGuardrailId(OrchestrationAIGuardrailIdT&& value) {
    m_orchestrationAIGuardrailIdHasBeenSet = true;
    m_orchestrationAIGuardrailId = std::forward<OrchestrationAIGuardrailIdT>(value);
  }
  template <typename OrchestrationAIGuardrailIdT = Aws::String>
  OrchestrationAIAgentConfiguration& WithOrchestrationAIGuardrailId(OrchestrationAIGuardrailIdT&& value) {
    SetOrchestrationAIGuardrailId(std::forward<OrchestrationAIGuardrailIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tool configurations used by the Orchestration AI Agent.</p>
   */
  inline const Aws::Vector<ToolConfiguration>& GetToolConfigurations() const { return m_toolConfigurations; }
  inline bool ToolConfigurationsHasBeenSet() const { return m_toolConfigurationsHasBeenSet; }
  template <typename ToolConfigurationsT = Aws::Vector<ToolConfiguration>>
  void SetToolConfigurations(ToolConfigurationsT&& value) {
    m_toolConfigurationsHasBeenSet = true;
    m_toolConfigurations = std::forward<ToolConfigurationsT>(value);
  }
  template <typename ToolConfigurationsT = Aws::Vector<ToolConfiguration>>
  OrchestrationAIAgentConfiguration& WithToolConfigurations(ToolConfigurationsT&& value) {
    SetToolConfigurations(std::forward<ToolConfigurationsT>(value));
    return *this;
  }
  template <typename ToolConfigurationsT = ToolConfiguration>
  OrchestrationAIAgentConfiguration& AddToolConfigurations(ToolConfigurationsT&& value) {
    m_toolConfigurationsHasBeenSet = true;
    m_toolConfigurations.emplace_back(std::forward<ToolConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The collaborator agents that the Orchestration AI Agent can work with. Each
   * entry defines another agent that the orchestrator either delegates to or hands
   * the conversation off to.</p>
   */
  inline const Aws::Vector<MultiAgentConfiguration>& GetMultiAgentConfigurations() const { return m_multiAgentConfigurations; }
  inline bool MultiAgentConfigurationsHasBeenSet() const { return m_multiAgentConfigurationsHasBeenSet; }
  template <typename MultiAgentConfigurationsT = Aws::Vector<MultiAgentConfiguration>>
  void SetMultiAgentConfigurations(MultiAgentConfigurationsT&& value) {
    m_multiAgentConfigurationsHasBeenSet = true;
    m_multiAgentConfigurations = std::forward<MultiAgentConfigurationsT>(value);
  }
  template <typename MultiAgentConfigurationsT = Aws::Vector<MultiAgentConfiguration>>
  OrchestrationAIAgentConfiguration& WithMultiAgentConfigurations(MultiAgentConfigurationsT&& value) {
    SetMultiAgentConfigurations(std::forward<MultiAgentConfigurationsT>(value));
    return *this;
  }
  template <typename MultiAgentConfigurationsT = MultiAgentConfiguration>
  OrchestrationAIAgentConfiguration& AddMultiAgentConfigurations(MultiAgentConfigurationsT&& value) {
    m_multiAgentConfigurationsHasBeenSet = true;
    m_multiAgentConfigurations.emplace_back(std::forward<MultiAgentConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Connect instance used by the
   * Orchestration AI Agent.</p>
   */
  inline const Aws::String& GetConnectInstanceArn() const { return m_connectInstanceArn; }
  inline bool ConnectInstanceArnHasBeenSet() const { return m_connectInstanceArnHasBeenSet; }
  template <typename ConnectInstanceArnT = Aws::String>
  void SetConnectInstanceArn(ConnectInstanceArnT&& value) {
    m_connectInstanceArnHasBeenSet = true;
    m_connectInstanceArn = std::forward<ConnectInstanceArnT>(value);
  }
  template <typename ConnectInstanceArnT = Aws::String>
  OrchestrationAIAgentConfiguration& WithConnectInstanceArn(ConnectInstanceArnT&& value) {
    SetConnectInstanceArn(std::forward<ConnectInstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The locale setting for the Orchestration AI Agent.</p>
   */
  inline const Aws::String& GetLocale() const { return m_locale; }
  inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
  template <typename LocaleT = Aws::String>
  void SetLocale(LocaleT&& value) {
    m_localeHasBeenSet = true;
    m_locale = std::forward<LocaleT>(value);
  }
  template <typename LocaleT = Aws::String>
  OrchestrationAIAgentConfiguration& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON schemas that define the structure of the structured data input
   * accepted by the Orchestration AI Agent. The data in a <code>DATA</code> message
   * sent to the agent is validated against these schemas. You can specify at most
   * one schema.</p>
   */
  inline const Aws::Vector<Aws::Utils::Document>& GetInputSchemas() const { return m_inputSchemas; }
  inline bool InputSchemasHasBeenSet() const { return m_inputSchemasHasBeenSet; }
  template <typename InputSchemasT = Aws::Vector<Aws::Utils::Document>>
  void SetInputSchemas(InputSchemasT&& value) {
    m_inputSchemasHasBeenSet = true;
    m_inputSchemas = std::forward<InputSchemasT>(value);
  }
  template <typename InputSchemasT = Aws::Vector<Aws::Utils::Document>>
  OrchestrationAIAgentConfiguration& WithInputSchemas(InputSchemasT&& value) {
    SetInputSchemas(std::forward<InputSchemasT>(value));
    return *this;
  }
  template <typename InputSchemasT = Aws::Utils::Document>
  OrchestrationAIAgentConfiguration& AddInputSchemas(InputSchemasT&& value) {
    m_inputSchemasHasBeenSet = true;
    m_inputSchemas.emplace_back(std::forward<InputSchemasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON schemas that define the structure of the structured output generated
   * by the Orchestration AI Agent. You can specify at most one schema.</p>
   */
  inline const Aws::Vector<Aws::Utils::Document>& GetOutputSchemas() const { return m_outputSchemas; }
  inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
  template <typename OutputSchemasT = Aws::Vector<Aws::Utils::Document>>
  void SetOutputSchemas(OutputSchemasT&& value) {
    m_outputSchemasHasBeenSet = true;
    m_outputSchemas = std::forward<OutputSchemasT>(value);
  }
  template <typename OutputSchemasT = Aws::Vector<Aws::Utils::Document>>
  OrchestrationAIAgentConfiguration& WithOutputSchemas(OutputSchemasT&& value) {
    SetOutputSchemas(std::forward<OutputSchemasT>(value));
    return *this;
  }
  template <typename OutputSchemasT = Aws::Utils::Document>
  OrchestrationAIAgentConfiguration& AddOutputSchemas(OutputSchemasT&& value) {
    m_outputSchemasHasBeenSet = true;
    m_outputSchemas.emplace_back(std::forward<OutputSchemasT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_orchestrationAIPromptId;

  Aws::String m_orchestrationAIGuardrailId;

  Aws::Vector<ToolConfiguration> m_toolConfigurations;

  Aws::Vector<MultiAgentConfiguration> m_multiAgentConfigurations;

  Aws::String m_connectInstanceArn;

  Aws::String m_locale;

  Aws::Vector<Aws::Utils::Document> m_inputSchemas;

  Aws::Vector<Aws::Utils::Document> m_outputSchemas;
  bool m_orchestrationAIPromptIdHasBeenSet = false;
  bool m_orchestrationAIGuardrailIdHasBeenSet = false;
  bool m_toolConfigurationsHasBeenSet = false;
  bool m_multiAgentConfigurationsHasBeenSet = false;
  bool m_connectInstanceArnHasBeenSet = false;
  bool m_localeHasBeenSet = false;
  bool m_inputSchemasHasBeenSet = false;
  bool m_outputSchemasHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
