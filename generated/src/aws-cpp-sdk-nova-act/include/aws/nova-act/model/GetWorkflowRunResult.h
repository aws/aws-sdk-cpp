/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/WorkflowRunStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {
class GetWorkflowRunResult {
 public:
  AWS_NOVAACT_API GetWorkflowRunResult() = default;
  AWS_NOVAACT_API GetWorkflowRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NOVAACT_API GetWorkflowRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow run.</p>
   */
  inline const Aws::String& GetWorkflowRunArn() const { return m_workflowRunArn; }
  template <typename WorkflowRunArnT = Aws::String>
  void SetWorkflowRunArn(WorkflowRunArnT&& value) {
    m_workflowRunArnHasBeenSet = true;
    m_workflowRunArn = std::forward<WorkflowRunArnT>(value);
  }
  template <typename WorkflowRunArnT = Aws::String>
  GetWorkflowRunResult& WithWorkflowRunArn(WorkflowRunArnT&& value) {
    SetWorkflowRunArn(std::forward<WorkflowRunArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the workflow run.</p>
   */
  inline const Aws::String& GetWorkflowRunId() const { return m_workflowRunId; }
  template <typename WorkflowRunIdT = Aws::String>
  void SetWorkflowRunId(WorkflowRunIdT&& value) {
    m_workflowRunIdHasBeenSet = true;
    m_workflowRunId = std::forward<WorkflowRunIdT>(value);
  }
  template <typename WorkflowRunIdT = Aws::String>
  GetWorkflowRunResult& WithWorkflowRunId(WorkflowRunIdT&& value) {
    SetWorkflowRunId(std::forward<WorkflowRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current execution status of the workflow run.</p>
   */
  inline WorkflowRunStatus GetStatus() const { return m_status; }
  inline void SetStatus(WorkflowRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetWorkflowRunResult& WithStatus(WorkflowRunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow run started execution.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  GetWorkflowRunResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow run completed execution, if applicable.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  GetWorkflowRunResult& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the AI model being used for this workflow run.</p>
   */
  inline const Aws::String& GetModelId() const { return m_modelId; }
  template <typename ModelIdT = Aws::String>
  void SetModelId(ModelIdT&& value) {
    m_modelIdHasBeenSet = true;
    m_modelId = std::forward<ModelIdT>(value);
  }
  template <typename ModelIdT = Aws::String>
  GetWorkflowRunResult& WithModelId(ModelIdT&& value) {
    SetModelId(std::forward<ModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudWatch log group name for this workflow run's logs.</p>
   */
  inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
  template <typename LogGroupNameT = Aws::String>
  void SetLogGroupName(LogGroupNameT&& value) {
    m_logGroupNameHasBeenSet = true;
    m_logGroupName = std::forward<LogGroupNameT>(value);
  }
  template <typename LogGroupNameT = Aws::String>
  GetWorkflowRunResult& WithLogGroupName(LogGroupNameT&& value) {
    SetLogGroupName(std::forward<LogGroupNameT>(value));
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
  GetWorkflowRunResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowRunArn;
  bool m_workflowRunArnHasBeenSet = false;

  Aws::String m_workflowRunId;
  bool m_workflowRunIdHasBeenSet = false;

  WorkflowRunStatus m_status{WorkflowRunStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_startedAt{};
  bool m_startedAtHasBeenSet = false;

  Aws::Utils::DateTime m_endedAt{};
  bool m_endedAtHasBeenSet = false;

  Aws::String m_modelId;
  bool m_modelIdHasBeenSet = false;

  Aws::String m_logGroupName;
  bool m_logGroupNameHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
