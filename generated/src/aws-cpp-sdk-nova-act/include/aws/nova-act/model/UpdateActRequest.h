/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaActRequest.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/ActError.h>
#include <aws/nova-act/model/ActStatus.h>

#include <utility>

namespace Aws {
namespace NovaAct {
namespace Model {

/**
 */
class UpdateActRequest : public NovaActRequest {
 public:
  AWS_NOVAACT_API UpdateActRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAct"; }

  AWS_NOVAACT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workflow definition containing the act.</p>
   */
  inline const Aws::String& GetWorkflowDefinitionName() const { return m_workflowDefinitionName; }
  inline bool WorkflowDefinitionNameHasBeenSet() const { return m_workflowDefinitionNameHasBeenSet; }
  template <typename WorkflowDefinitionNameT = Aws::String>
  void SetWorkflowDefinitionName(WorkflowDefinitionNameT&& value) {
    m_workflowDefinitionNameHasBeenSet = true;
    m_workflowDefinitionName = std::forward<WorkflowDefinitionNameT>(value);
  }
  template <typename WorkflowDefinitionNameT = Aws::String>
  UpdateActRequest& WithWorkflowDefinitionName(WorkflowDefinitionNameT&& value) {
    SetWorkflowDefinitionName(std::forward<WorkflowDefinitionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the workflow run containing the act.</p>
   */
  inline const Aws::String& GetWorkflowRunId() const { return m_workflowRunId; }
  inline bool WorkflowRunIdHasBeenSet() const { return m_workflowRunIdHasBeenSet; }
  template <typename WorkflowRunIdT = Aws::String>
  void SetWorkflowRunId(WorkflowRunIdT&& value) {
    m_workflowRunIdHasBeenSet = true;
    m_workflowRunId = std::forward<WorkflowRunIdT>(value);
  }
  template <typename WorkflowRunIdT = Aws::String>
  UpdateActRequest& WithWorkflowRunId(WorkflowRunIdT&& value) {
    SetWorkflowRunId(std::forward<WorkflowRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the session containing the act.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  UpdateActRequest& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the act to update.</p>
   */
  inline const Aws::String& GetActId() const { return m_actId; }
  inline bool ActIdHasBeenSet() const { return m_actIdHasBeenSet; }
  template <typename ActIdT = Aws::String>
  void SetActId(ActIdT&& value) {
    m_actIdHasBeenSet = true;
    m_actId = std::forward<ActIdT>(value);
  }
  template <typename ActIdT = Aws::String>
  UpdateActRequest& WithActId(ActIdT&& value) {
    SetActId(std::forward<ActIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new status to set for the act.</p>
   */
  inline ActStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ActStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateActRequest& WithStatus(ActStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error information to associate with the act, if applicable.</p>
   */
  inline const ActError& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = ActError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = ActError>
  UpdateActRequest& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowDefinitionName;
  bool m_workflowDefinitionNameHasBeenSet = false;

  Aws::String m_workflowRunId;
  bool m_workflowRunIdHasBeenSet = false;

  Aws::String m_sessionId;
  bool m_sessionIdHasBeenSet = false;

  Aws::String m_actId;
  bool m_actIdHasBeenSet = false;

  ActStatus m_status{ActStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  ActError m_error;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
