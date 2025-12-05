/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AIAgentConfigurationData.h>
#include <aws/qconnect/model/AIAgentType.h>
#include <aws/qconnect/model/OrchestratorConfigurationEntry.h>

#include <utility>

namespace Aws {
namespace QConnect {
namespace Model {

/**
 */
class UpdateAssistantAIAgentRequest : public QConnectRequest {
 public:
  AWS_QCONNECT_API UpdateAssistantAIAgentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAssistantAIAgent"; }

  AWS_QCONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
   * the ARN. URLs cannot contain the ARN.</p>
   */
  inline const Aws::String& GetAssistantId() const { return m_assistantId; }
  inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
  template <typename AssistantIdT = Aws::String>
  void SetAssistantId(AssistantIdT&& value) {
    m_assistantIdHasBeenSet = true;
    m_assistantId = std::forward<AssistantIdT>(value);
  }
  template <typename AssistantIdT = Aws::String>
  UpdateAssistantAIAgentRequest& WithAssistantId(AssistantIdT&& value) {
    SetAssistantId(std::forward<AssistantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the AI Agent being updated for use by default on the Amazon Q in
   * Connect Assistant.</p>
   */
  inline AIAgentType GetAiAgentType() const { return m_aiAgentType; }
  inline bool AiAgentTypeHasBeenSet() const { return m_aiAgentTypeHasBeenSet; }
  inline void SetAiAgentType(AIAgentType value) {
    m_aiAgentTypeHasBeenSet = true;
    m_aiAgentType = value;
  }
  inline UpdateAssistantAIAgentRequest& WithAiAgentType(AIAgentType value) {
    SetAiAgentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the AI Agent being updated for use by default on the
   * Amazon Q in Connect Assistant.</p>
   */
  inline const AIAgentConfigurationData& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = AIAgentConfigurationData>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = AIAgentConfigurationData>
  UpdateAssistantAIAgentRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated list of orchestrator configurations for the assistant AI
   * Agent.</p>
   */
  inline const Aws::Vector<OrchestratorConfigurationEntry>& GetOrchestratorConfigurationList() const {
    return m_orchestratorConfigurationList;
  }
  inline bool OrchestratorConfigurationListHasBeenSet() const { return m_orchestratorConfigurationListHasBeenSet; }
  template <typename OrchestratorConfigurationListT = Aws::Vector<OrchestratorConfigurationEntry>>
  void SetOrchestratorConfigurationList(OrchestratorConfigurationListT&& value) {
    m_orchestratorConfigurationListHasBeenSet = true;
    m_orchestratorConfigurationList = std::forward<OrchestratorConfigurationListT>(value);
  }
  template <typename OrchestratorConfigurationListT = Aws::Vector<OrchestratorConfigurationEntry>>
  UpdateAssistantAIAgentRequest& WithOrchestratorConfigurationList(OrchestratorConfigurationListT&& value) {
    SetOrchestratorConfigurationList(std::forward<OrchestratorConfigurationListT>(value));
    return *this;
  }
  template <typename OrchestratorConfigurationListT = OrchestratorConfigurationEntry>
  UpdateAssistantAIAgentRequest& AddOrchestratorConfigurationList(OrchestratorConfigurationListT&& value) {
    m_orchestratorConfigurationListHasBeenSet = true;
    m_orchestratorConfigurationList.emplace_back(std::forward<OrchestratorConfigurationListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assistantId;

  AIAgentType m_aiAgentType{AIAgentType::NOT_SET};

  AIAgentConfigurationData m_configuration;

  Aws::Vector<OrchestratorConfigurationEntry> m_orchestratorConfigurationList;
  bool m_assistantIdHasBeenSet = false;
  bool m_aiAgentTypeHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_orchestratorConfigurationListHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
