/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/TaskInstanceStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {
class GetTaskInstanceResult {
 public:
  AWS_MWAASERVERLESS_API GetTaskInstanceResult() = default;
  AWS_MWAASERVERLESS_API GetTaskInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MWAASERVERLESS_API GetTaskInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow that contains this task
   * instance.</p>
   */
  inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
  template <typename WorkflowArnT = Aws::String>
  void SetWorkflowArn(WorkflowArnT&& value) {
    m_workflowArnHasBeenSet = true;
    m_workflowArn = std::forward<WorkflowArnT>(value);
  }
  template <typename WorkflowArnT = Aws::String>
  GetTaskInstanceResult& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the workflow run that contains this task
   * instance.</p>
   */
  inline const Aws::String& GetRunId() const { return m_runId; }
  template <typename RunIdT = Aws::String>
  void SetRunId(RunIdT&& value) {
    m_runIdHasBeenSet = true;
    m_runId = std::forward<RunIdT>(value);
  }
  template <typename RunIdT = Aws::String>
  GetTaskInstanceResult& WithRunId(RunIdT&& value) {
    SetRunId(std::forward<RunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of this task instance.</p>
   */
  inline const Aws::String& GetTaskInstanceId() const { return m_taskInstanceId; }
  template <typename TaskInstanceIdT = Aws::String>
  void SetTaskInstanceId(TaskInstanceIdT&& value) {
    m_taskInstanceIdHasBeenSet = true;
    m_taskInstanceId = std::forward<TaskInstanceIdT>(value);
  }
  template <typename TaskInstanceIdT = Aws::String>
  GetTaskInstanceResult& WithTaskInstanceId(TaskInstanceIdT&& value) {
    SetTaskInstanceId(std::forward<TaskInstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the workflow that contains this task instance.</p>
   */
  inline const Aws::String& GetWorkflowVersion() const { return m_workflowVersion; }
  template <typename WorkflowVersionT = Aws::String>
  void SetWorkflowVersion(WorkflowVersionT&& value) {
    m_workflowVersionHasBeenSet = true;
    m_workflowVersion = std::forward<WorkflowVersionT>(value);
  }
  template <typename WorkflowVersionT = Aws::String>
  GetTaskInstanceResult& WithWorkflowVersion(WorkflowVersionT&& value) {
    SetWorkflowVersion(std::forward<WorkflowVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the task instance.</p>
   */
  inline TaskInstanceStatus GetStatus() const { return m_status; }
  inline void SetStatus(TaskInstanceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetTaskInstanceResult& WithStatus(TaskInstanceStatus value) {
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
  inline void SetDurationInSeconds(int value) {
    m_durationInSecondsHasBeenSet = true;
    m_durationInSeconds = value;
  }
  inline GetTaskInstanceResult& WithDurationInSeconds(int value) {
    SetDurationInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Apache Airflow operator used for this task instance.</p>
   */
  inline const Aws::String& GetOperatorName() const { return m_operatorName; }
  template <typename OperatorNameT = Aws::String>
  void SetOperatorName(OperatorNameT&& value) {
    m_operatorNameHasBeenSet = true;
    m_operatorName = std::forward<OperatorNameT>(value);
  }
  template <typename OperatorNameT = Aws::String>
  GetTaskInstanceResult& WithOperatorName(OperatorNameT&& value) {
    SetOperatorName(std::forward<OperatorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the task instance was last modified, in ISO 8601 date-time
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  void SetModifiedAt(ModifiedAtT&& value) {
    m_modifiedAtHasBeenSet = true;
    m_modifiedAt = std::forward<ModifiedAtT>(value);
  }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  GetTaskInstanceResult& WithModifiedAt(ModifiedAtT&& value) {
    SetModifiedAt(std::forward<ModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the task instance completed execution, in ISO 8601
   * date-time format. This value is null if the task is not complete.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  GetTaskInstanceResult& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the task instance started execution, in ISO 8601 date-time
   * format. This value is null if the task has not started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  GetTaskInstanceResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attempt number for this task instance.</p>
   */
  inline int GetAttemptNumber() const { return m_attemptNumber; }
  inline void SetAttemptNumber(int value) {
    m_attemptNumberHasBeenSet = true;
    m_attemptNumber = value;
  }
  inline GetTaskInstanceResult& WithAttemptNumber(int value) {
    SetAttemptNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message if the task instance failed. This value is null if the task
   * completed successfully.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  GetTaskInstanceResult& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the task definition within the workflow.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  GetTaskInstanceResult& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudWatch log stream name for this task instance execution.</p>
   */
  inline const Aws::String& GetLogStream() const { return m_logStream; }
  template <typename LogStreamT = Aws::String>
  void SetLogStream(LogStreamT&& value) {
    m_logStreamHasBeenSet = true;
    m_logStream = std::forward<LogStreamT>(value);
  }
  template <typename LogStreamT = Aws::String>
  GetTaskInstanceResult& WithLogStream(LogStreamT&& value) {
    SetLogStream(std::forward<LogStreamT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Cross-communication data exchanged between tasks in the workflow
   * execution.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetXcom() const { return m_xcom; }
  template <typename XcomT = Aws::Map<Aws::String, Aws::String>>
  void SetXcom(XcomT&& value) {
    m_xcomHasBeenSet = true;
    m_xcom = std::forward<XcomT>(value);
  }
  template <typename XcomT = Aws::Map<Aws::String, Aws::String>>
  GetTaskInstanceResult& WithXcom(XcomT&& value) {
    SetXcom(std::forward<XcomT>(value));
    return *this;
  }
  template <typename XcomKeyT = Aws::String, typename XcomValueT = Aws::String>
  GetTaskInstanceResult& AddXcom(XcomKeyT&& key, XcomValueT&& value) {
    m_xcomHasBeenSet = true;
    m_xcom.emplace(std::forward<XcomKeyT>(key), std::forward<XcomValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetTaskInstanceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowArn;
  bool m_workflowArnHasBeenSet = false;

  Aws::String m_runId;
  bool m_runIdHasBeenSet = false;

  Aws::String m_taskInstanceId;
  bool m_taskInstanceIdHasBeenSet = false;

  Aws::String m_workflowVersion;
  bool m_workflowVersionHasBeenSet = false;

  TaskInstanceStatus m_status{TaskInstanceStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  int m_durationInSeconds{0};
  bool m_durationInSecondsHasBeenSet = false;

  Aws::String m_operatorName;
  bool m_operatorNameHasBeenSet = false;

  Aws::Utils::DateTime m_modifiedAt{};
  bool m_modifiedAtHasBeenSet = false;

  Aws::Utils::DateTime m_endedAt{};
  bool m_endedAtHasBeenSet = false;

  Aws::Utils::DateTime m_startedAt{};
  bool m_startedAtHasBeenSet = false;

  int m_attemptNumber{0};
  bool m_attemptNumberHasBeenSet = false;

  Aws::String m_errorMessage;
  bool m_errorMessageHasBeenSet = false;

  Aws::String m_taskId;
  bool m_taskIdHasBeenSet = false;

  Aws::String m_logStream;
  bool m_logStreamHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_xcom;
  bool m_xcomHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
