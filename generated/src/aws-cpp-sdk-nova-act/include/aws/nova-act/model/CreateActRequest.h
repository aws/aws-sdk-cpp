/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nova-act/NovaActRequest.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/ToolSpec.h>

#include <utility>

namespace Aws {
namespace NovaAct {
namespace Model {

/**
 */
class CreateActRequest : public NovaActRequest {
 public:
  AWS_NOVAACT_API CreateActRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAct"; }

  AWS_NOVAACT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workflow definition containing the session.</p>
   */
  inline const Aws::String& GetWorkflowDefinitionName() const { return m_workflowDefinitionName; }
  inline bool WorkflowDefinitionNameHasBeenSet() const { return m_workflowDefinitionNameHasBeenSet; }
  template <typename WorkflowDefinitionNameT = Aws::String>
  void SetWorkflowDefinitionName(WorkflowDefinitionNameT&& value) {
    m_workflowDefinitionNameHasBeenSet = true;
    m_workflowDefinitionName = std::forward<WorkflowDefinitionNameT>(value);
  }
  template <typename WorkflowDefinitionNameT = Aws::String>
  CreateActRequest& WithWorkflowDefinitionName(WorkflowDefinitionNameT&& value) {
    SetWorkflowDefinitionName(std::forward<WorkflowDefinitionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the workflow run containing the session.</p>
   */
  inline const Aws::String& GetWorkflowRunId() const { return m_workflowRunId; }
  inline bool WorkflowRunIdHasBeenSet() const { return m_workflowRunIdHasBeenSet; }
  template <typename WorkflowRunIdT = Aws::String>
  void SetWorkflowRunId(WorkflowRunIdT&& value) {
    m_workflowRunIdHasBeenSet = true;
    m_workflowRunId = std::forward<WorkflowRunIdT>(value);
  }
  template <typename WorkflowRunIdT = Aws::String>
  CreateActRequest& WithWorkflowRunId(WorkflowRunIdT&& value) {
    SetWorkflowRunId(std::forward<WorkflowRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the session to create the act in.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  CreateActRequest& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task description that defines what the act should accomplish.</p>
   */
  inline const Aws::String& GetTask() const { return m_task; }
  inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
  template <typename TaskT = Aws::String>
  void SetTask(TaskT&& value) {
    m_taskHasBeenSet = true;
    m_task = std::forward<TaskT>(value);
  }
  template <typename TaskT = Aws::String>
  CreateActRequest& WithTask(TaskT&& value) {
    SetTask(std::forward<TaskT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of tool specifications that the act can invoke to complete its
   * task.</p>
   */
  inline const Aws::Vector<ToolSpec>& GetToolSpecs() const { return m_toolSpecs; }
  inline bool ToolSpecsHasBeenSet() const { return m_toolSpecsHasBeenSet; }
  template <typename ToolSpecsT = Aws::Vector<ToolSpec>>
  void SetToolSpecs(ToolSpecsT&& value) {
    m_toolSpecsHasBeenSet = true;
    m_toolSpecs = std::forward<ToolSpecsT>(value);
  }
  template <typename ToolSpecsT = Aws::Vector<ToolSpec>>
  CreateActRequest& WithToolSpecs(ToolSpecsT&& value) {
    SetToolSpecs(std::forward<ToolSpecsT>(value));
    return *this;
  }
  template <typename ToolSpecsT = ToolSpec>
  CreateActRequest& AddToolSpecs(ToolSpecsT&& value) {
    m_toolSpecsHasBeenSet = true;
    m_toolSpecs.emplace_back(std::forward<ToolSpecsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateActRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowDefinitionName;

  Aws::String m_workflowRunId;

  Aws::String m_sessionId;

  Aws::String m_task;

  Aws::Vector<ToolSpec> m_toolSpecs;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_workflowDefinitionNameHasBeenSet = false;
  bool m_workflowRunIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_taskHasBeenSet = false;
  bool m_toolSpecsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
