/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/RunType.h>
#include <aws/mwaa-serverless/model/WorkflowRunStatus.h>

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
 * <p>Detailed information about a workflow run execution, including timing,
 * status, error information, and associated task instances. This structure
 * provides comprehensive visibility into the workflow execution lifecycle within
 * the Amazon Managed Workflows for Apache Airflow Serverless serverless
 * environment. The service tracks execution across distributed ECS worker tasks
 * and provides detailed timing information, error diagnostics, and task instance
 * relationships to support effective monitoring and troubleshooting of complex
 * workflow executions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/WorkflowRunDetail">AWS
 * API Reference</a></p>
 */
class WorkflowRunDetail {
 public:
  AWS_MWAASERVERLESS_API WorkflowRunDetail() = default;
  AWS_MWAASERVERLESS_API WorkflowRunDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API WorkflowRunDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow that contains this run.</p>
   */
  inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
  inline bool WorkflowArnHasBeenSet() const { return m_workflowArnHasBeenSet; }
  template <typename WorkflowArnT = Aws::String>
  void SetWorkflowArn(WorkflowArnT&& value) {
    m_workflowArnHasBeenSet = true;
    m_workflowArn = std::forward<WorkflowArnT>(value);
  }
  template <typename WorkflowArnT = Aws::String>
  WorkflowRunDetail& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the workflow used for this run.</p>
   */
  inline const Aws::String& GetWorkflowVersion() const { return m_workflowVersion; }
  inline bool WorkflowVersionHasBeenSet() const { return m_workflowVersionHasBeenSet; }
  template <typename WorkflowVersionT = Aws::String>
  void SetWorkflowVersion(WorkflowVersionT&& value) {
    m_workflowVersionHasBeenSet = true;
    m_workflowVersion = std::forward<WorkflowVersionT>(value);
  }
  template <typename WorkflowVersionT = Aws::String>
  WorkflowRunDetail& WithWorkflowVersion(WorkflowVersionT&& value) {
    SetWorkflowVersion(std::forward<WorkflowVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of this workflow run.</p>
   */
  inline const Aws::String& GetRunId() const { return m_runId; }
  inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
  template <typename RunIdT = Aws::String>
  void SetRunId(RunIdT&& value) {
    m_runIdHasBeenSet = true;
    m_runId = std::forward<RunIdT>(value);
  }
  template <typename RunIdT = Aws::String>
  WorkflowRunDetail& WithRunId(RunIdT&& value) {
    SetRunId(std::forward<RunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of workflow run.</p>
   */
  inline RunType GetRunType() const { return m_runType; }
  inline bool RunTypeHasBeenSet() const { return m_runTypeHasBeenSet; }
  inline void SetRunType(RunType value) {
    m_runTypeHasBeenSet = true;
    m_runType = value;
  }
  inline WorkflowRunDetail& WithRunType(RunType value) {
    SetRunType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow run started execution, in ISO 8601 date-time
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedOn() const { return m_startedOn; }
  inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }
  template <typename StartedOnT = Aws::Utils::DateTime>
  void SetStartedOn(StartedOnT&& value) {
    m_startedOnHasBeenSet = true;
    m_startedOn = std::forward<StartedOnT>(value);
  }
  template <typename StartedOnT = Aws::Utils::DateTime>
  WorkflowRunDetail& WithStartedOn(StartedOnT&& value) {
    SetStartedOn(std::forward<StartedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow run was created, in ISO 8601 date-time
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  WorkflowRunDetail& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow run completed execution, in ISO 8601
   * date-time format. This value is null if the run is not complete.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedOn() const { return m_completedOn; }
  inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }
  template <typename CompletedOnT = Aws::Utils::DateTime>
  void SetCompletedOn(CompletedOnT&& value) {
    m_completedOnHasBeenSet = true;
    m_completedOn = std::forward<CompletedOnT>(value);
  }
  template <typename CompletedOnT = Aws::Utils::DateTime>
  WorkflowRunDetail& WithCompletedOn(CompletedOnT&& value) {
    SetCompletedOn(std::forward<CompletedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow run was last modified, in ISO 8601 date-time
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
  inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  void SetModifiedAt(ModifiedAtT&& value) {
    m_modifiedAtHasBeenSet = true;
    m_modifiedAt = std::forward<ModifiedAtT>(value);
  }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  WorkflowRunDetail& WithModifiedAt(ModifiedAtT&& value) {
    SetModifiedAt(std::forward<ModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total duration of the workflow run execution in seconds. This value is
   * null if the run is not complete.</p>
   */
  inline int GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  inline void SetDuration(int value) {
    m_durationHasBeenSet = true;
    m_duration = value;
  }
  inline WorkflowRunDetail& WithDuration(int value) {
    SetDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message if the workflow run failed. This value is null if the run
   * completed successfully.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  WorkflowRunDetail& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of task instance IDs that are part of this workflow run.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTaskInstances() const { return m_taskInstances; }
  inline bool TaskInstancesHasBeenSet() const { return m_taskInstancesHasBeenSet; }
  template <typename TaskInstancesT = Aws::Vector<Aws::String>>
  void SetTaskInstances(TaskInstancesT&& value) {
    m_taskInstancesHasBeenSet = true;
    m_taskInstances = std::forward<TaskInstancesT>(value);
  }
  template <typename TaskInstancesT = Aws::Vector<Aws::String>>
  WorkflowRunDetail& WithTaskInstances(TaskInstancesT&& value) {
    SetTaskInstances(std::forward<TaskInstancesT>(value));
    return *this;
  }
  template <typename TaskInstancesT = Aws::String>
  WorkflowRunDetail& AddTaskInstances(TaskInstancesT&& value) {
    m_taskInstancesHasBeenSet = true;
    m_taskInstances.emplace_back(std::forward<TaskInstancesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current execution state of the workflow run.</p>
   */
  inline WorkflowRunStatus GetRunState() const { return m_runState; }
  inline bool RunStateHasBeenSet() const { return m_runStateHasBeenSet; }
  inline void SetRunState(WorkflowRunStatus value) {
    m_runStateHasBeenSet = true;
    m_runState = value;
  }
  inline WorkflowRunDetail& WithRunState(WorkflowRunStatus value) {
    SetRunState(value);
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

  RunType m_runType{RunType::NOT_SET};
  bool m_runTypeHasBeenSet = false;

  Aws::Utils::DateTime m_startedOn{};
  bool m_startedOnHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_completedOn{};
  bool m_completedOnHasBeenSet = false;

  Aws::Utils::DateTime m_modifiedAt{};
  bool m_modifiedAtHasBeenSet = false;

  int m_duration{0};
  bool m_durationHasBeenSet = false;

  Aws::String m_errorMessage;
  bool m_errorMessageHasBeenSet = false;

  Aws::Vector<Aws::String> m_taskInstances;
  bool m_taskInstancesHasBeenSet = false;

  WorkflowRunStatus m_runState{WorkflowRunStatus::NOT_SET};
  bool m_runStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
