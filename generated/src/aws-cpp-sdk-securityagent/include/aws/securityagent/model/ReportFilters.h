/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ConfidenceLevel.h>
#include <aws/securityagent/model/FindingStatus.h>
#include <aws/securityagent/model/RiskLevel.h>
#include <aws/securityagent/model/RiskType.h>
#include <aws/securityagent/model/TaskExecutionStatus.h>

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
 * <p>The report-generation filters applied when a pentest or code review report is
 * exported.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ReportFilters">AWS
 * API Reference</a></p>
 */
class ReportFilters {
 public:
  AWS_SECURITYAGENT_API ReportFilters() = default;
  AWS_SECURITYAGENT_API ReportFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ReportFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The severity levels to include in the report.</p>
   */
  inline const Aws::Vector<RiskLevel>& GetRiskLevels() const { return m_riskLevels; }
  inline bool RiskLevelsHasBeenSet() const { return m_riskLevelsHasBeenSet; }
  template <typename RiskLevelsT = Aws::Vector<RiskLevel>>
  void SetRiskLevels(RiskLevelsT&& value) {
    m_riskLevelsHasBeenSet = true;
    m_riskLevels = std::forward<RiskLevelsT>(value);
  }
  template <typename RiskLevelsT = Aws::Vector<RiskLevel>>
  ReportFilters& WithRiskLevels(RiskLevelsT&& value) {
    SetRiskLevels(std::forward<RiskLevelsT>(value));
    return *this;
  }
  inline ReportFilters& AddRiskLevels(RiskLevel value) {
    m_riskLevelsHasBeenSet = true;
    m_riskLevels.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence levels to include in the report.</p>
   */
  inline const Aws::Vector<ConfidenceLevel>& GetConfidenceLevels() const { return m_confidenceLevels; }
  inline bool ConfidenceLevelsHasBeenSet() const { return m_confidenceLevelsHasBeenSet; }
  template <typename ConfidenceLevelsT = Aws::Vector<ConfidenceLevel>>
  void SetConfidenceLevels(ConfidenceLevelsT&& value) {
    m_confidenceLevelsHasBeenSet = true;
    m_confidenceLevels = std::forward<ConfidenceLevelsT>(value);
  }
  template <typename ConfidenceLevelsT = Aws::Vector<ConfidenceLevel>>
  ReportFilters& WithConfidenceLevels(ConfidenceLevelsT&& value) {
    SetConfidenceLevels(std::forward<ConfidenceLevelsT>(value));
    return *this;
  }
  inline ReportFilters& AddConfidenceLevels(ConfidenceLevel value) {
    m_confidenceLevelsHasBeenSet = true;
    m_confidenceLevels.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The finding statuses to include in the report.</p>
   */
  inline const Aws::Vector<FindingStatus>& GetStatuses() const { return m_statuses; }
  inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
  template <typename StatusesT = Aws::Vector<FindingStatus>>
  void SetStatuses(StatusesT&& value) {
    m_statusesHasBeenSet = true;
    m_statuses = std::forward<StatusesT>(value);
  }
  template <typename StatusesT = Aws::Vector<FindingStatus>>
  ReportFilters& WithStatuses(StatusesT&& value) {
    SetStatuses(std::forward<StatusesT>(value));
    return *this;
  }
  inline ReportFilters& AddStatuses(FindingStatus value) {
    m_statusesHasBeenSet = true;
    m_statuses.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The risk types to include in the report.</p>
   */
  inline const Aws::Vector<RiskType>& GetRiskTypes() const { return m_riskTypes; }
  inline bool RiskTypesHasBeenSet() const { return m_riskTypesHasBeenSet; }
  template <typename RiskTypesT = Aws::Vector<RiskType>>
  void SetRiskTypes(RiskTypesT&& value) {
    m_riskTypesHasBeenSet = true;
    m_riskTypes = std::forward<RiskTypesT>(value);
  }
  template <typename RiskTypesT = Aws::Vector<RiskType>>
  ReportFilters& WithRiskTypes(RiskTypesT&& value) {
    SetRiskTypes(std::forward<RiskTypesT>(value));
    return *this;
  }
  inline ReportFilters& AddRiskTypes(RiskType value) {
    m_riskTypesHasBeenSet = true;
    m_riskTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The finding types to include in the report.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFindingTypes() const { return m_findingTypes; }
  inline bool FindingTypesHasBeenSet() const { return m_findingTypesHasBeenSet; }
  template <typename FindingTypesT = Aws::Vector<Aws::String>>
  void SetFindingTypes(FindingTypesT&& value) {
    m_findingTypesHasBeenSet = true;
    m_findingTypes = std::forward<FindingTypesT>(value);
  }
  template <typename FindingTypesT = Aws::Vector<Aws::String>>
  ReportFilters& WithFindingTypes(FindingTypesT&& value) {
    SetFindingTypes(std::forward<FindingTypesT>(value));
    return *this;
  }
  template <typename FindingTypesT = Aws::String>
  ReportFilters& AddFindingTypes(FindingTypesT&& value) {
    m_findingTypesHasBeenSet = true;
    m_findingTypes.emplace_back(std::forward<FindingTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task execution statuses to include in the report's task table.</p>
   */
  inline const Aws::Vector<TaskExecutionStatus>& GetTaskStatuses() const { return m_taskStatuses; }
  inline bool TaskStatusesHasBeenSet() const { return m_taskStatusesHasBeenSet; }
  template <typename TaskStatusesT = Aws::Vector<TaskExecutionStatus>>
  void SetTaskStatuses(TaskStatusesT&& value) {
    m_taskStatusesHasBeenSet = true;
    m_taskStatuses = std::forward<TaskStatusesT>(value);
  }
  template <typename TaskStatusesT = Aws::Vector<TaskExecutionStatus>>
  ReportFilters& WithTaskStatuses(TaskStatusesT&& value) {
    SetTaskStatuses(std::forward<TaskStatusesT>(value));
    return *this;
  }
  inline ReportFilters& AddTaskStatuses(TaskExecutionStatus value) {
    m_taskStatusesHasBeenSet = true;
    m_taskStatuses.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to include reviewer annotation notes under each finding.</p>
   */
  inline bool GetAnnotationNotes() const { return m_annotationNotes; }
  inline bool AnnotationNotesHasBeenSet() const { return m_annotationNotesHasBeenSet; }
  inline void SetAnnotationNotes(bool value) {
    m_annotationNotesHasBeenSet = true;
    m_annotationNotes = value;
  }
  inline ReportFilters& WithAnnotationNotes(bool value) {
    SetAnnotationNotes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to include the compliance-ready report additions.</p>
   */
  inline bool GetComplianceReport() const { return m_complianceReport; }
  inline bool ComplianceReportHasBeenSet() const { return m_complianceReportHasBeenSet; }
  inline void SetComplianceReport(bool value) {
    m_complianceReportHasBeenSet = true;
    m_complianceReport = value;
  }
  inline ReportFilters& WithComplianceReport(bool value) {
    SetComplianceReport(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RiskLevel> m_riskLevels;

  Aws::Vector<ConfidenceLevel> m_confidenceLevels;

  Aws::Vector<FindingStatus> m_statuses;

  Aws::Vector<RiskType> m_riskTypes;

  Aws::Vector<Aws::String> m_findingTypes;

  Aws::Vector<TaskExecutionStatus> m_taskStatuses;

  bool m_annotationNotes{false};

  bool m_complianceReport{false};
  bool m_riskLevelsHasBeenSet = false;
  bool m_confidenceLevelsHasBeenSet = false;
  bool m_statusesHasBeenSet = false;
  bool m_riskTypesHasBeenSet = false;
  bool m_findingTypesHasBeenSet = false;
  bool m_taskStatusesHasBeenSet = false;
  bool m_annotationNotesHasBeenSet = false;
  bool m_complianceReportHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
