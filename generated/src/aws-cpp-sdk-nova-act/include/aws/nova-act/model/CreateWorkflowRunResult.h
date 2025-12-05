/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
class CreateWorkflowRunResult {
 public:
  AWS_NOVAACT_API CreateWorkflowRunResult() = default;
  AWS_NOVAACT_API CreateWorkflowRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NOVAACT_API CreateWorkflowRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier for the created workflow run.</p>
   */
  inline const Aws::String& GetWorkflowRunId() const { return m_workflowRunId; }
  template <typename WorkflowRunIdT = Aws::String>
  void SetWorkflowRunId(WorkflowRunIdT&& value) {
    m_workflowRunIdHasBeenSet = true;
    m_workflowRunId = std::forward<WorkflowRunIdT>(value);
  }
  template <typename WorkflowRunIdT = Aws::String>
  CreateWorkflowRunResult& WithWorkflowRunId(WorkflowRunIdT&& value) {
    SetWorkflowRunId(std::forward<WorkflowRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The initial status of the workflow run after creation.</p>
   */
  inline WorkflowRunStatus GetStatus() const { return m_status; }
  inline void SetStatus(WorkflowRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateWorkflowRunResult& WithStatus(WorkflowRunStatus value) {
    SetStatus(value);
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
  CreateWorkflowRunResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowRunId;

  WorkflowRunStatus m_status{WorkflowRunStatus::NOT_SET};

  Aws::String m_requestId;
  bool m_workflowRunIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
