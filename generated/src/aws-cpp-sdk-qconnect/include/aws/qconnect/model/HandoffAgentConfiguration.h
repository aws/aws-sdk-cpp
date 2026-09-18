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
 * transfers control of the conversation to the collaborator agent.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/HandoffAgentConfiguration">AWS
 * API Reference</a></p>
 */
class HandoffAgentConfiguration {
 public:
  AWS_QCONNECT_API HandoffAgentConfiguration() = default;
  AWS_QCONNECT_API HandoffAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API HandoffAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The collaborator agent to hand off to.</p>
   */
  inline const AgentTarget& GetAgentTarget() const { return m_agentTarget; }
  inline bool AgentTargetHasBeenSet() const { return m_agentTargetHasBeenSet; }
  template <typename AgentTargetT = AgentTarget>
  void SetAgentTarget(AgentTargetT&& value) {
    m_agentTargetHasBeenSet = true;
    m_agentTarget = std::forward<AgentTargetT>(value);
  }
  template <typename AgentTargetT = AgentTarget>
  HandoffAgentConfiguration& WithAgentTarget(AgentTargetT&& value) {
    SetAgentTarget(std::forward<AgentTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instruction that tells the Orchestration AI Agent when and how to hand
   * off to this collaborator agent.</p>
   */
  inline const MultiAgentInstruction& GetInstruction() const { return m_instruction; }
  inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
  template <typename InstructionT = MultiAgentInstruction>
  void SetInstruction(InstructionT&& value) {
    m_instructionHasBeenSet = true;
    m_instruction = std::forward<InstructionT>(value);
  }
  template <typename InstructionT = MultiAgentInstruction>
  HandoffAgentConfiguration& WithInstruction(InstructionT&& value) {
    SetInstruction(std::forward<InstructionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the caller's audio is streamed directly to the collaborator
   * agent and the collaborator's audio response is played back during the handoff.
   * This applies only to voice handoffs.</p>
   */
  inline bool GetAudioStreamingEnabled() const { return m_audioStreamingEnabled; }
  inline bool AudioStreamingEnabledHasBeenSet() const { return m_audioStreamingEnabledHasBeenSet; }
  inline void SetAudioStreamingEnabled(bool value) {
    m_audioStreamingEnabledHasBeenSet = true;
    m_audioStreamingEnabled = value;
  }
  inline HandoffAgentConfiguration& WithAudioStreamingEnabled(bool value) {
    SetAudioStreamingEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the conversation is handed off to this collaborator agent
   * immediately on the first turn, without any orchestration reasoning. At most one
   * handoff in an AI Agent's configuration can set this to <code>true</code>.</p>
   */
  inline bool GetImmediateHandoff() const { return m_immediateHandoff; }
  inline bool ImmediateHandoffHasBeenSet() const { return m_immediateHandoffHasBeenSet; }
  inline void SetImmediateHandoff(bool value) {
    m_immediateHandoffHasBeenSet = true;
    m_immediateHandoff = value;
  }
  inline HandoffAgentConfiguration& WithImmediateHandoff(bool value) {
    SetImmediateHandoff(value);
    return *this;
  }
  ///@}
 private:
  AgentTarget m_agentTarget;

  MultiAgentInstruction m_instruction;

  bool m_audioStreamingEnabled{false};

  bool m_immediateHandoff{false};
  bool m_agentTargetHasBeenSet = false;
  bool m_instructionHasBeenSet = false;
  bool m_audioStreamingEnabledHasBeenSet = false;
  bool m_immediateHandoffHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
