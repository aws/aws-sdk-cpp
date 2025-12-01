/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
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
 private:
  Aws::String m_orchestrationAIPromptId;
  bool m_orchestrationAIPromptIdHasBeenSet = false;

  Aws::String m_orchestrationAIGuardrailId;
  bool m_orchestrationAIGuardrailIdHasBeenSet = false;

  Aws::Vector<ToolConfiguration> m_toolConfigurations;
  bool m_toolConfigurationsHasBeenSet = false;

  Aws::String m_connectInstanceArn;
  bool m_connectInstanceArnHasBeenSet = false;

  Aws::String m_locale;
  bool m_localeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
