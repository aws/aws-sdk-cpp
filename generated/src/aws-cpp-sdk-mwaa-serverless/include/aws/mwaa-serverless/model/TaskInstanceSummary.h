/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/TaskInstanceStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {

/**
 * <p>Summary information about a task instance within a workflow run, including
 * its status and execution details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/TaskInstanceSummary">AWS
 * API Reference</a></p>
 */
class TaskInstanceSummary {
 public:
  AWS_MWAASERVERLESS_API TaskInstanceSummary() = default;
  AWS_MWAASERVERLESS_API TaskInstanceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API TaskInstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow that contains this task
   * instance.</p>
   */
  inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
  inline bool WorkflowArnHasBeenSet() const { return m_workflowArnHasBeenSet; }
  template <typename WorkflowArnT = Aws::String>
  void SetWorkflowArn(WorkflowArnT&& value) {
    m_workflowArnHasBeenSet = true;
    m_workflowArn = std::forward<WorkflowArnT>(value);
  }
  template <typename WorkflowArnT = Aws::String>
  TaskInstanceSummary& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the workflow that contains this task instance.</p>
   */
  inline const Aws::String& GetWorkflowVersion() const { return m_workflowVersion; }
  inline bool WorkflowVersionHasBeenSet() const { return m_workflowVersionHasBeenSet; }
  template <typename WorkflowVersionT = Aws::String>
  void SetWorkflowVersion(WorkflowVersionT&& value) {
    m_workflowVersionHasBeenSet = true;
    m_workflowVersion = std::forward<WorkflowVersionT>(value);
  }
  template <typename WorkflowVersionT = Aws::String>
  TaskInstanceSummary& WithWorkflowVersion(WorkflowVersionT&& value) {
    SetWorkflowVersion(std::forward<WorkflowVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the workflow run that contains this task
   * instance.</p>
   */
  inline const Aws::String& GetRunId() const { return m_runId; }
  inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
  template <typename RunIdT = Aws::String>
  void SetRunId(RunIdT&& value) {
    m_runIdHasBeenSet = true;
    m_runId = std::forward<RunIdT>(value);
  }
  template <typename RunIdT = Aws::String>
  TaskInstanceSummary& WithRunId(RunIdT&& value) {
    SetRunId(std::forward<RunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of this task instance.</p>
   */
  inline const Aws::String& GetTaskInstanceId() const { return m_taskInstanceId; }
  inline bool TaskInstanceIdHasBeenSet() const { return m_taskInstanceIdHasBeenSet; }
  template <typename TaskInstanceIdT = Aws::String>
  void SetTaskInstanceId(TaskInstanceIdT&& value) {
    m_taskInstanceIdHasBeenSet = true;
    m_taskInstanceId = std::forward<TaskInstanceIdT>(value);
  }
  template <typename TaskInstanceIdT = Aws::String>
  TaskInstanceSummary& WithTaskInstanceId(TaskInstanceIdT&& value) {
    SetTaskInstanceId(std::forward<TaskInstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the task instance.</p>
   */
  inline TaskInstanceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TaskInstanceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline TaskInstanceSummary& WithStatus(TaskInstanceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration of the task instance execution in seconds. This value is null if
   * the task is not complete.</p>
   */
  inline int GetDurationInSeconds() const { return m_durationInSeconds; }
  inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
  inline void SetDurationInSeconds(int value) {
    m_durationInSecondsHasBeenSet = true;
    m_durationInSeconds = value;
  }
  inline TaskInstanceSummary& WithDurationInSeconds(int value) {
    SetDurationInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Apache Airflow operator used for this task instance.</p>
   */
  inline const Aws::String& GetOperatorName() const { return m_operatorName; }
  inline bool OperatorNameHasBeenSet() const { return m_operatorNameHasBeenSet; }
  template <typename OperatorNameT = Aws::String>
  void SetOperatorName(OperatorNameT&& value) {
    m_operatorNameHasBeenSet = true;
    m_operatorName = std::forward<OperatorNameT>(value);
  }
  template <typename OperatorNameT = Aws::String>
  TaskInstanceSummary& WithOperatorName(OperatorNameT&& value) {
    SetOperatorName(std::forward<OperatorNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowArn;
  bool m_workflowArnHasBeenSet = false;

  Aws::String m_workflowVersion;
  bool m_workflowVersionHasBeenSet = false;

  Aws::String m_runId;
  bool m_runIdHasBeenSet = false;

  Aws::String m_taskInstanceId;
  bool m_taskInstanceIdHasBeenSet = false;

  TaskInstanceStatus m_status{TaskInstanceStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  int m_durationInSeconds{0};
  bool m_durationInSecondsHasBeenSet = false;

  Aws::String m_operatorName;
  bool m_operatorNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
