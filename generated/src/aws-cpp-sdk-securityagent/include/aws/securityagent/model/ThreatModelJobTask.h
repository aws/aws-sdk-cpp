/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/LogLocation.h>
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
 * <p>Represents an individual task within a threat model job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ThreatModelJobTask">AWS
 * API Reference</a></p>
 */
class ThreatModelJobTask {
 public:
  AWS_SECURITYAGENT_API ThreatModelJobTask() = default;
  AWS_SECURITYAGENT_API ThreatModelJobTask(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ThreatModelJobTask& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ThreatModelJobTask& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the threat model associated with the task.</p>
   */
  inline const Aws::String& GetThreatModelId() const { return m_threatModelId; }
  inline bool ThreatModelIdHasBeenSet() const { return m_threatModelIdHasBeenSet; }
  template <typename ThreatModelIdT = Aws::String>
  void SetThreatModelId(ThreatModelIdT&& value) {
    m_threatModelIdHasBeenSet = true;
    m_threatModelId = std::forward<ThreatModelIdT>(value);
  }
  template <typename ThreatModelIdT = Aws::String>
  ThreatModelJobTask& WithThreatModelId(ThreatModelIdT&& value) {
    SetThreatModelId(std::forward<ThreatModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the threat model job that contains the task.</p>
   */
  inline const Aws::String& GetThreatModelJobId() const { return m_threatModelJobId; }
  inline bool ThreatModelJobIdHasBeenSet() const { return m_threatModelJobIdHasBeenSet; }
  template <typename ThreatModelJobIdT = Aws::String>
  void SetThreatModelJobId(ThreatModelJobIdT&& value) {
    m_threatModelJobIdHasBeenSet = true;
    m_threatModelJobId = std::forward<ThreatModelJobIdT>(value);
  }
  template <typename ThreatModelJobIdT = Aws::String>
  ThreatModelJobTask& WithThreatModelJobId(ThreatModelJobIdT&& value) {
    SetThreatModelJobId(std::forward<ThreatModelJobIdT>(value));
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
  ThreatModelJobTask& WithAgentSpaceId(AgentSpaceIdT&& value) {
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
  ThreatModelJobTask& WithTitle(TitleT&& value) {
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
  ThreatModelJobTask& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
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
  inline ThreatModelJobTask& WithExecutionStatus(TaskExecutionStatus value) {
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
  ThreatModelJobTask& WithLogsLocation(LogsLocationT&& value) {
    SetLogsLocation(std::forward<LogsLocationT>(value));
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
  ThreatModelJobTask& WithCreatedAt(CreatedAtT&& value) {
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
  ThreatModelJobTask& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_taskId;

  Aws::String m_threatModelId;

  Aws::String m_threatModelJobId;

  Aws::String m_agentSpaceId;

  Aws::String m_title;

  Aws::String m_description;

  TaskExecutionStatus m_executionStatus{TaskExecutionStatus::NOT_SET};

  LogLocation m_logsLocation;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_taskIdHasBeenSet = false;
  bool m_threatModelIdHasBeenSet = false;
  bool m_threatModelJobIdHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_executionStatusHasBeenSet = false;
  bool m_logsLocationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
