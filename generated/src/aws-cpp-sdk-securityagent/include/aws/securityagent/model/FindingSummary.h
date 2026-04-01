/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
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
 * <p>Summary information for a security finding</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/FindingSummary">AWS
 * API Reference</a></p>
 */
class FindingSummary {
 public:
  AWS_SECURITYAGENT_API FindingSummary() = default;
  AWS_SECURITYAGENT_API FindingSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API FindingSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  FindingSummary& WithFindingId(FindingIdT&& value) {
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
  FindingSummary& WithAgentSpaceId(AgentSpaceIdT&& value) {
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
  FindingSummary& WithPentestId(PentestIdT&& value) {
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
  FindingSummary& WithPentestJobId(PentestJobIdT&& value) {
    SetPentestJobId(std::forward<PentestJobIdT>(value));
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
  FindingSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
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
  inline FindingSummary& WithStatus(FindingStatus value) {
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
  FindingSummary& WithRiskType(RiskTypeT&& value) {
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
  inline FindingSummary& WithRiskLevel(RiskLevel value) {
    SetRiskLevel(value);
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
  inline FindingSummary& WithConfidence(ConfidenceLevel value) {
    SetConfidence(value);
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
  FindingSummary& WithCreatedAt(CreatedAtT&& value) {
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
  FindingSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingId;

  Aws::String m_agentSpaceId;

  Aws::String m_pentestId;

  Aws::String m_pentestJobId;

  Aws::String m_name;

  FindingStatus m_status{FindingStatus::NOT_SET};

  Aws::String m_riskType;

  RiskLevel m_riskLevel{RiskLevel::NOT_SET};

  ConfidenceLevel m_confidence{ConfidenceLevel::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_findingIdHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_pentestIdHasBeenSet = false;
  bool m_pentestJobIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_riskTypeHasBeenSet = false;
  bool m_riskLevelHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
