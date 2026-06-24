/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/FindingStatus.h>
#include <aws/securityagent/model/RiskLevel.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 * <p>Input for updating an existing security finding.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/UpdateFindingInput">AWS
 * API Reference</a></p>
 */
class UpdateFindingRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API UpdateFindingRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateFinding"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the finding to update.</p>
   */
  inline const Aws::String& GetFindingId() const { return m_findingId; }
  inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
  template <typename FindingIdT = Aws::String>
  void SetFindingId(FindingIdT&& value) {
    m_findingIdHasBeenSet = true;
    m_findingId = std::forward<FindingIdT>(value);
  }
  template <typename FindingIdT = Aws::String>
  UpdateFindingRequest& WithFindingId(FindingIdT&& value) {
    SetFindingId(std::forward<FindingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agent space that contains the finding.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  UpdateFindingRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated name for the finding.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateFindingRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description for the finding.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateFindingRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated risk type for the finding.</p>
   */
  inline const Aws::String& GetRiskType() const { return m_riskType; }
  inline bool RiskTypeHasBeenSet() const { return m_riskTypeHasBeenSet; }
  template <typename RiskTypeT = Aws::String>
  void SetRiskType(RiskTypeT&& value) {
    m_riskTypeHasBeenSet = true;
    m_riskType = std::forward<RiskTypeT>(value);
  }
  template <typename RiskTypeT = Aws::String>
  UpdateFindingRequest& WithRiskType(RiskTypeT&& value) {
    SetRiskType(std::forward<RiskTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated risk level for the finding.</p>
   */
  inline RiskLevel GetRiskLevel() const { return m_riskLevel; }
  inline bool RiskLevelHasBeenSet() const { return m_riskLevelHasBeenSet; }
  inline void SetRiskLevel(RiskLevel value) {
    m_riskLevelHasBeenSet = true;
    m_riskLevel = value;
  }
  inline UpdateFindingRequest& WithRiskLevel(RiskLevel value) {
    SetRiskLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated numerical risk score for the finding.</p>
   */
  inline const Aws::String& GetRiskScore() const { return m_riskScore; }
  inline bool RiskScoreHasBeenSet() const { return m_riskScoreHasBeenSet; }
  template <typename RiskScoreT = Aws::String>
  void SetRiskScore(RiskScoreT&& value) {
    m_riskScoreHasBeenSet = true;
    m_riskScore = std::forward<RiskScoreT>(value);
  }
  template <typename RiskScoreT = Aws::String>
  UpdateFindingRequest& WithRiskScore(RiskScoreT&& value) {
    SetRiskScore(std::forward<RiskScoreT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated attack script for the finding.</p>
   */
  inline const Aws::String& GetAttackScript() const { return m_attackScript; }
  inline bool AttackScriptHasBeenSet() const { return m_attackScriptHasBeenSet; }
  template <typename AttackScriptT = Aws::String>
  void SetAttackScript(AttackScriptT&& value) {
    m_attackScriptHasBeenSet = true;
    m_attackScript = std::forward<AttackScriptT>(value);
  }
  template <typename AttackScriptT = Aws::String>
  UpdateFindingRequest& WithAttackScript(AttackScriptT&& value) {
    SetAttackScript(std::forward<AttackScriptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated reasoning for the finding.</p>
   */
  inline const Aws::String& GetReasoning() const { return m_reasoning; }
  inline bool ReasoningHasBeenSet() const { return m_reasoningHasBeenSet; }
  template <typename ReasoningT = Aws::String>
  void SetReasoning(ReasoningT&& value) {
    m_reasoningHasBeenSet = true;
    m_reasoning = std::forward<ReasoningT>(value);
  }
  template <typename ReasoningT = Aws::String>
  UpdateFindingRequest& WithReasoning(ReasoningT&& value) {
    SetReasoning(std::forward<ReasoningT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated status for the finding.</p>
   */
  inline FindingStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FindingStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateFindingRequest& WithStatus(FindingStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A customer-provided note on the finding.</p>
   */
  inline const Aws::String& GetCustomerNote() const { return m_customerNote; }
  inline bool CustomerNoteHasBeenSet() const { return m_customerNoteHasBeenSet; }
  template <typename CustomerNoteT = Aws::String>
  void SetCustomerNote(CustomerNoteT&& value) {
    m_customerNoteHasBeenSet = true;
    m_customerNote = std::forward<CustomerNoteT>(value);
  }
  template <typename CustomerNoteT = Aws::String>
  UpdateFindingRequest& WithCustomerNote(CustomerNoteT&& value) {
    SetCustomerNote(std::forward<CustomerNoteT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingId;

  Aws::String m_agentSpaceId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_riskType;

  RiskLevel m_riskLevel{RiskLevel::NOT_SET};

  Aws::String m_riskScore;

  Aws::String m_attackScript;

  Aws::String m_reasoning;

  FindingStatus m_status{FindingStatus::NOT_SET};

  Aws::String m_customerNote;
  bool m_findingIdHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_riskTypeHasBeenSet = false;
  bool m_riskLevelHasBeenSet = false;
  bool m_riskScoreHasBeenSet = false;
  bool m_attackScriptHasBeenSet = false;
  bool m_reasoningHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_customerNoteHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
