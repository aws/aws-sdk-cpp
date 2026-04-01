/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/CodeRemediationTask.h>
#include <aws/securityagent/model/ConfidenceLevel.h>
#include <aws/securityagent/model/FindingStatus.h>
#include <aws/securityagent/model/RiskLevel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Represents a security vulnerability or issue discovered during
 * testing</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/Finding">AWS
 * API Reference</a></p>
 */
class Finding {
 public:
  AWS_SECURITYAGENT_API Finding() = default;
  AWS_SECURITYAGENT_API Finding(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier for the finding</p>
   */
  inline const Aws::String& GetFindingId() const { return m_findingId; }
  inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
  template <typename FindingIdT = Aws::String>
  void SetFindingId(FindingIdT&& value) {
    m_findingIdHasBeenSet = true;
    m_findingId = std::forward<FindingIdT>(value);
  }
  template <typename FindingIdT = Aws::String>
  Finding& WithFindingId(FindingIdT&& value) {
    SetFindingId(std::forward<FindingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifier of the agent space that created this finding</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  Finding& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifier of the parent pentest</p>
   */
  inline const Aws::String& GetPentestId() const { return m_pentestId; }
  inline bool PentestIdHasBeenSet() const { return m_pentestIdHasBeenSet; }
  template <typename PentestIdT = Aws::String>
  void SetPentestId(PentestIdT&& value) {
    m_pentestIdHasBeenSet = true;
    m_pentestId = std::forward<PentestIdT>(value);
  }
  template <typename PentestIdT = Aws::String>
  Finding& WithPentestId(PentestIdT&& value) {
    SetPentestId(std::forward<PentestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifier of the pentest job</p>
   */
  inline const Aws::String& GetPentestJobId() const { return m_pentestJobId; }
  inline bool PentestJobIdHasBeenSet() const { return m_pentestJobIdHasBeenSet; }
  template <typename PentestJobIdT = Aws::String>
  void SetPentestJobId(PentestJobIdT&& value) {
    m_pentestJobIdHasBeenSet = true;
    m_pentestJobId = std::forward<PentestJobIdT>(value);
  }
  template <typename PentestJobIdT = Aws::String>
  Finding& WithPentestJobId(PentestJobIdT&& value) {
    SetPentestJobId(std::forward<PentestJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifier of the associated task</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  Finding& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name or title of the finding</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Finding& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed description of the security vulnerability</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  Finding& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current status of the finding</p>
   */
  inline FindingStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FindingStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Finding& WithStatus(FindingStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of security risk identified</p>
   */
  inline const Aws::String& GetRiskType() const { return m_riskType; }
  inline bool RiskTypeHasBeenSet() const { return m_riskTypeHasBeenSet; }
  template <typename RiskTypeT = Aws::String>
  void SetRiskType(RiskTypeT&& value) {
    m_riskTypeHasBeenSet = true;
    m_riskType = std::forward<RiskTypeT>(value);
  }
  template <typename RiskTypeT = Aws::String>
  Finding& WithRiskType(RiskTypeT&& value) {
    SetRiskType(std::forward<RiskTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Severity level of the identified risk</p>
   */
  inline RiskLevel GetRiskLevel() const { return m_riskLevel; }
  inline bool RiskLevelHasBeenSet() const { return m_riskLevelHasBeenSet; }
  inline void SetRiskLevel(RiskLevel value) {
    m_riskLevelHasBeenSet = true;
    m_riskLevel = value;
  }
  inline Finding& WithRiskLevel(RiskLevel value) {
    SetRiskLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Risk score associated with the finding</p>
   */
  inline const Aws::String& GetRiskScore() const { return m_riskScore; }
  inline bool RiskScoreHasBeenSet() const { return m_riskScoreHasBeenSet; }
  template <typename RiskScoreT = Aws::String>
  void SetRiskScore(RiskScoreT&& value) {
    m_riskScoreHasBeenSet = true;
    m_riskScore = std::forward<RiskScoreT>(value);
  }
  template <typename RiskScoreT = Aws::String>
  Finding& WithRiskScore(RiskScoreT&& value) {
    SetRiskScore(std::forward<RiskScoreT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Justification for the assigned risk score</p>
   */
  inline const Aws::String& GetReasoning() const { return m_reasoning; }
  inline bool ReasoningHasBeenSet() const { return m_reasoningHasBeenSet; }
  template <typename ReasoningT = Aws::String>
  void SetReasoning(ReasoningT&& value) {
    m_reasoningHasBeenSet = true;
    m_reasoning = std::forward<ReasoningT>(value);
  }
  template <typename ReasoningT = Aws::String>
  Finding& WithReasoning(ReasoningT&& value) {
    SetReasoning(std::forward<ReasoningT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Confidence level of the finding</p>
   */
  inline ConfidenceLevel GetConfidence() const { return m_confidence; }
  inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
  inline void SetConfidence(ConfidenceLevel value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline Finding& WithConfidence(ConfidenceLevel value) {
    SetConfidence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Proof-of-concept code demonstrating the vulnerability</p>
   */
  inline const Aws::String& GetAttackScript() const { return m_attackScript; }
  inline bool AttackScriptHasBeenSet() const { return m_attackScriptHasBeenSet; }
  template <typename AttackScriptT = Aws::String>
  void SetAttackScript(AttackScriptT&& value) {
    m_attackScriptHasBeenSet = true;
    m_attackScript = std::forward<AttackScriptT>(value);
  }
  template <typename AttackScriptT = Aws::String>
  Finding& WithAttackScript(AttackScriptT&& value) {
    SetAttackScript(std::forward<AttackScriptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Code remediation task associated with this finding</p>
   */
  inline const CodeRemediationTask& GetCodeRemediationTask() const { return m_codeRemediationTask; }
  inline bool CodeRemediationTaskHasBeenSet() const { return m_codeRemediationTaskHasBeenSet; }
  template <typename CodeRemediationTaskT = CodeRemediationTask>
  void SetCodeRemediationTask(CodeRemediationTaskT&& value) {
    m_codeRemediationTaskHasBeenSet = true;
    m_codeRemediationTask = std::forward<CodeRemediationTaskT>(value);
  }
  template <typename CodeRemediationTaskT = CodeRemediationTask>
  Finding& WithCodeRemediationTask(CodeRemediationTaskT&& value) {
    SetCodeRemediationTask(std::forward<CodeRemediationTaskT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifier of the task or agent that last updated this finding</p>
   */
  inline const Aws::String& GetLastUpdatedBy() const { return m_lastUpdatedBy; }
  inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
  template <typename LastUpdatedByT = Aws::String>
  void SetLastUpdatedBy(LastUpdatedByT&& value) {
    m_lastUpdatedByHasBeenSet = true;
    m_lastUpdatedBy = std::forward<LastUpdatedByT>(value);
  }
  template <typename LastUpdatedByT = Aws::String>
  Finding& WithLastUpdatedBy(LastUpdatedByT&& value) {
    SetLastUpdatedBy(std::forward<LastUpdatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the finding was created</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Finding& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the finding was last updated</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Finding& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingId;

  Aws::String m_agentSpaceId;

  Aws::String m_pentestId;

  Aws::String m_pentestJobId;

  Aws::String m_taskId;

  Aws::String m_name;

  Aws::String m_description;

  FindingStatus m_status{FindingStatus::NOT_SET};

  Aws::String m_riskType;

  RiskLevel m_riskLevel{RiskLevel::NOT_SET};

  Aws::String m_riskScore;

  Aws::String m_reasoning;

  ConfidenceLevel m_confidence{ConfidenceLevel::NOT_SET};

  Aws::String m_attackScript;

  CodeRemediationTask m_codeRemediationTask;

  Aws::String m_lastUpdatedBy;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_findingIdHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_pentestIdHasBeenSet = false;
  bool m_pentestJobIdHasBeenSet = false;
  bool m_taskIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_riskTypeHasBeenSet = false;
  bool m_riskLevelHasBeenSet = false;
  bool m_riskScoreHasBeenSet = false;
  bool m_reasoningHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
  bool m_attackScriptHasBeenSet = false;
  bool m_codeRemediationTaskHasBeenSet = false;
  bool m_lastUpdatedByHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
