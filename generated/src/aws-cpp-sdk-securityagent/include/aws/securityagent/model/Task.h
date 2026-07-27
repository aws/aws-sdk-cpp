/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/Category.h>
#include <aws/securityagent/model/Endpoint.h>
#include <aws/securityagent/model/LogLocation.h>
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
 * <p>Represents an individual security test task within a pentest job. Each task
 * targets a specific risk type or endpoint and executes
 * independently.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/Task">AWS
 * API Reference</a></p>
 */
class Task {
 public:
  AWS_SECURITYAGENT_API Task() = default;
  AWS_SECURITYAGENT_API Task(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Task& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the task.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  Task& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the pentest associated with the task.</p>
   */
  inline const Aws::String& GetPentestId() const { return m_pentestId; }
  inline bool PentestIdHasBeenSet() const { return m_pentestIdHasBeenSet; }
  template <typename PentestIdT = Aws::String>
  void SetPentestId(PentestIdT&& value) {
    m_pentestIdHasBeenSet = true;
    m_pentestId = std::forward<PentestIdT>(value);
  }
  template <typename PentestIdT = Aws::String>
  Task& WithPentestId(PentestIdT&& value) {
    SetPentestId(std::forward<PentestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the pentest job that contains the task.</p>
   */
  inline const Aws::String& GetPentestJobId() const { return m_pentestJobId; }
  inline bool PentestJobIdHasBeenSet() const { return m_pentestJobIdHasBeenSet; }
  template <typename PentestJobIdT = Aws::String>
  void SetPentestJobId(PentestJobIdT&& value) {
    m_pentestJobIdHasBeenSet = true;
    m_pentestJobId = std::forward<PentestJobIdT>(value);
  }
  template <typename PentestJobIdT = Aws::String>
  Task& WithPentestJobId(PentestJobIdT&& value) {
    SetPentestJobId(std::forward<PentestJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agent space.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  Task& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the task.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  Task& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the task.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  Task& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of categories assigned to the task.</p>
   */
  inline const Aws::Vector<Category>& GetCategories() const { return m_categories; }
  inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
  template <typename CategoriesT = Aws::Vector<Category>>
  void SetCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories = std::forward<CategoriesT>(value);
  }
  template <typename CategoriesT = Aws::Vector<Category>>
  Task& WithCategories(CategoriesT&& value) {
    SetCategories(std::forward<CategoriesT>(value));
    return *this;
  }
  template <typename CategoriesT = Category>
  Task& AddCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories.emplace_back(std::forward<CategoriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of security risk the task is testing for.</p>
   */
  inline RiskType GetRiskType() const { return m_riskType; }
  inline bool RiskTypeHasBeenSet() const { return m_riskTypeHasBeenSet; }
  inline void SetRiskType(RiskType value) {
    m_riskTypeHasBeenSet = true;
    m_riskType = value;
  }
  inline Task& WithRiskType(RiskType value) {
    SetRiskType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target endpoint being tested by the task.</p>
   */
  inline const Endpoint& GetTargetEndpoint() const { return m_targetEndpoint; }
  inline bool TargetEndpointHasBeenSet() const { return m_targetEndpointHasBeenSet; }
  template <typename TargetEndpointT = Endpoint>
  void SetTargetEndpoint(TargetEndpointT&& value) {
    m_targetEndpointHasBeenSet = true;
    m_targetEndpoint = std::forward<TargetEndpointT>(value);
  }
  template <typename TargetEndpointT = Endpoint>
  Task& WithTargetEndpoint(TargetEndpointT&& value) {
    SetTargetEndpoint(std::forward<TargetEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current execution status of the task.</p>
   */
  inline TaskExecutionStatus GetExecutionStatus() const { return m_executionStatus; }
  inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
  inline void SetExecutionStatus(TaskExecutionStatus value) {
    m_executionStatusHasBeenSet = true;
    m_executionStatus = value;
  }
  inline Task& WithExecutionStatus(TaskExecutionStatus value) {
    SetExecutionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location of the task execution logs.</p>
   */
  inline const LogLocation& GetLogsLocation() const { return m_logsLocation; }
  inline bool LogsLocationHasBeenSet() const { return m_logsLocationHasBeenSet; }
  template <typename LogsLocationT = LogLocation>
  void SetLogsLocation(LogsLocationT&& value) {
    m_logsLocationHasBeenSet = true;
    m_logsLocation = std::forward<LogsLocationT>(value);
  }
  template <typename LogsLocationT = LogLocation>
  Task& WithLogsLocation(LogsLocationT&& value) {
    SetLogsLocation(std::forward<LogsLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of active work hours consumed by the task during execution.</p>
   */
  inline double GetTaskHours() const { return m_taskHours; }
  inline bool TaskHoursHasBeenSet() const { return m_taskHoursHasBeenSet; }
  inline void SetTaskHours(double value) {
    m_taskHoursHasBeenSet = true;
    m_taskHours = value;
  }
  inline Task& WithTaskHours(double value) {
    SetTaskHours(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the task was created, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Task& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the task was last updated, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Task& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_taskId;

  Aws::String m_pentestId;

  Aws::String m_pentestJobId;

  Aws::String m_agentSpaceId;

  Aws::String m_title;

  Aws::String m_description;

  Aws::Vector<Category> m_categories;

  RiskType m_riskType{RiskType::NOT_SET};

  Endpoint m_targetEndpoint;

  TaskExecutionStatus m_executionStatus{TaskExecutionStatus::NOT_SET};

  LogLocation m_logsLocation;

  double m_taskHours{0.0};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_taskIdHasBeenSet = false;
  bool m_pentestIdHasBeenSet = false;
  bool m_pentestJobIdHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_categoriesHasBeenSet = false;
  bool m_riskTypeHasBeenSet = false;
  bool m_targetEndpointHasBeenSet = false;
  bool m_executionStatusHasBeenSet = false;
  bool m_logsLocationHasBeenSet = false;
  bool m_taskHoursHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
