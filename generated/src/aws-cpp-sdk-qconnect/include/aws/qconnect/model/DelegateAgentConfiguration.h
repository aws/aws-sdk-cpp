/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AgentTarget.h>
#include <aws/qconnect/model/MultiAgentInstruction.h>

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
 * <p>A collaborator agent configuration in which the Orchestration AI Agent
 * invokes the collaborator, resuming when the collaborator returns.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DelegateAgentConfiguration">AWS
 * API Reference</a></p>
 */
class DelegateAgentConfiguration {
 public:
  AWS_QCONNECT_API DelegateAgentConfiguration() = default;
  AWS_QCONNECT_API DelegateAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API DelegateAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The collaborator agent to delegate to.</p>
   */
  inline const AgentTarget& GetAgentTarget() const { return m_agentTarget; }
  inline bool AgentTargetHasBeenSet() const { return m_agentTargetHasBeenSet; }
  template <typename AgentTargetT = AgentTarget>
  void SetAgentTarget(AgentTargetT&& value) {
    m_agentTargetHasBeenSet = true;
    m_agentTarget = std::forward<AgentTargetT>(value);
  }
  template <typename AgentTargetT = AgentTarget>
  DelegateAgentConfiguration& WithAgentTarget(AgentTargetT&& value) {
    SetAgentTarget(std::forward<AgentTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instruction that tells the Orchestration AI Agent when and how to
   * delegate to this collaborator agent.</p>
   */
  inline const MultiAgentInstruction& GetInstruction() const { return m_instruction; }
  inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
  template <typename InstructionT = MultiAgentInstruction>
  void SetInstruction(InstructionT&& value) {
    m_instructionHasBeenSet = true;
    m_instruction = std::forward<InstructionT>(value);
  }
  template <typename InstructionT = MultiAgentInstruction>
  DelegateAgentConfiguration& WithInstruction(InstructionT&& value) {
    SetInstruction(std::forward<InstructionT>(value));
    return *this;
  }
  ///@}
 private:
  AgentTarget m_agentTarget;

  MultiAgentInstruction m_instruction;
  bool m_agentTargetHasBeenSet = false;
  bool m_instructionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
