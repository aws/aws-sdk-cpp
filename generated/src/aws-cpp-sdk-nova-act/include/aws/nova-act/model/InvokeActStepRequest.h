/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nova-act/NovaActRequest.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/CallResult.h>

#include <utility>

namespace Aws {
namespace NovaAct {
namespace Model {

/**
 */
class InvokeActStepRequest : public NovaActRequest {
 public:
  AWS_NOVAACT_API InvokeActStepRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InvokeActStep"; }

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
  InvokeActStepRequest& WithWorkflowDefinitionName(WorkflowDefinitionNameT&& value) {
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
  InvokeActStepRequest& WithWorkflowRunId(WorkflowRunIdT&& value) {
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
  InvokeActStepRequest& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the act to invoke the next step for.</p>
   */
  inline const Aws::String& GetActId() const { return m_actId; }
  inline bool ActIdHasBeenSet() const { return m_actIdHasBeenSet; }
  template <typename ActIdT = Aws::String>
  void SetActId(ActIdT&& value) {
    m_actIdHasBeenSet = true;
    m_actId = std::forward<ActIdT>(value);
  }
  template <typename ActIdT = Aws::String>
  InvokeActStepRequest& WithActId(ActIdT&& value) {
    SetActId(std::forward<ActIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The results from previous tool calls that the act requested.</p>
   */
  inline const Aws::Vector<CallResult>& GetCallResults() const { return m_callResults; }
  inline bool CallResultsHasBeenSet() const { return m_callResultsHasBeenSet; }
  template <typename CallResultsT = Aws::Vector<CallResult>>
  void SetCallResults(CallResultsT&& value) {
    m_callResultsHasBeenSet = true;
    m_callResults = std::forward<CallResultsT>(value);
  }
  template <typename CallResultsT = Aws::Vector<CallResult>>
  InvokeActStepRequest& WithCallResults(CallResultsT&& value) {
    SetCallResults(std::forward<CallResultsT>(value));
    return *this;
  }
  template <typename CallResultsT = CallResult>
  InvokeActStepRequest& AddCallResults(CallResultsT&& value) {
    m_callResultsHasBeenSet = true;
    m_callResults.emplace_back(std::forward<CallResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the previous step, used for tracking execution flow.</p>
   */
  inline const Aws::String& GetPreviousStepId() const { return m_previousStepId; }
  inline bool PreviousStepIdHasBeenSet() const { return m_previousStepIdHasBeenSet; }
  template <typename PreviousStepIdT = Aws::String>
  void SetPreviousStepId(PreviousStepIdT&& value) {
    m_previousStepIdHasBeenSet = true;
    m_previousStepId = std::forward<PreviousStepIdT>(value);
  }
  template <typename PreviousStepIdT = Aws::String>
  InvokeActStepRequest& WithPreviousStepId(PreviousStepIdT&& value) {
    SetPreviousStepId(std::forward<PreviousStepIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowDefinitionName;

  Aws::String m_workflowRunId;

  Aws::String m_sessionId;

  Aws::String m_actId;

  Aws::Vector<CallResult> m_callResults;

  Aws::String m_previousStepId;
  bool m_workflowDefinitionNameHasBeenSet = false;
  bool m_workflowRunIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_actIdHasBeenSet = false;
  bool m_callResultsHasBeenSet = false;
  bool m_previousStepIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
