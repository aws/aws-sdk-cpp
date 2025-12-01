/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

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
 * <p>An entry in the orchestrator configuration list.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/OrchestratorConfigurationEntry">AWS
 * API Reference</a></p>
 */
class OrchestratorConfigurationEntry {
 public:
  AWS_QCONNECT_API OrchestratorConfigurationEntry() = default;
  AWS_QCONNECT_API OrchestratorConfigurationEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API OrchestratorConfigurationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the AI Agent in the orchestrator configuration.</p>
   */
  inline const Aws::String& GetAiAgentId() const { return m_aiAgentId; }
  inline bool AiAgentIdHasBeenSet() const { return m_aiAgentIdHasBeenSet; }
  template <typename AiAgentIdT = Aws::String>
  void SetAiAgentId(AiAgentIdT&& value) {
    m_aiAgentIdHasBeenSet = true;
    m_aiAgentId = std::forward<AiAgentIdT>(value);
  }
  template <typename AiAgentIdT = Aws::String>
  OrchestratorConfigurationEntry& WithAiAgentId(AiAgentIdT&& value) {
    SetAiAgentId(std::forward<AiAgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The use case for the orchestrator configuration. (for example
   * Connect.SelfService, Connect.AgentAssistance)</p>
   */
  inline const Aws::String& GetOrchestratorUseCase() const { return m_orchestratorUseCase; }
  inline bool OrchestratorUseCaseHasBeenSet() const { return m_orchestratorUseCaseHasBeenSet; }
  template <typename OrchestratorUseCaseT = Aws::String>
  void SetOrchestratorUseCase(OrchestratorUseCaseT&& value) {
    m_orchestratorUseCaseHasBeenSet = true;
    m_orchestratorUseCase = std::forward<OrchestratorUseCaseT>(value);
  }
  template <typename OrchestratorUseCaseT = Aws::String>
  OrchestratorConfigurationEntry& WithOrchestratorUseCase(OrchestratorUseCaseT&& value) {
    SetOrchestratorUseCase(std::forward<OrchestratorUseCaseT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aiAgentId;
  bool m_aiAgentIdHasBeenSet = false;

  Aws::String m_orchestratorUseCase;
  bool m_orchestratorUseCaseHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
