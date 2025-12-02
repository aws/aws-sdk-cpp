/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaActRequest.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/ClientInfo.h>

#include <utility>

namespace Aws {
namespace NovaAct {
namespace Model {

/**
 */
class CreateWorkflowRunRequest : public NovaActRequest {
 public:
  AWS_NOVAACT_API CreateWorkflowRunRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateWorkflowRun"; }

  AWS_NOVAACT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workflow definition to execute.</p>
   */
  inline const Aws::String& GetWorkflowDefinitionName() const { return m_workflowDefinitionName; }
  inline bool WorkflowDefinitionNameHasBeenSet() const { return m_workflowDefinitionNameHasBeenSet; }
  template <typename WorkflowDefinitionNameT = Aws::String>
  void SetWorkflowDefinitionName(WorkflowDefinitionNameT&& value) {
    m_workflowDefinitionNameHasBeenSet = true;
    m_workflowDefinitionName = std::forward<WorkflowDefinitionNameT>(value);
  }
  template <typename WorkflowDefinitionNameT = Aws::String>
  CreateWorkflowRunRequest& WithWorkflowDefinitionName(WorkflowDefinitionNameT&& value) {
    SetWorkflowDefinitionName(std::forward<WorkflowDefinitionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the AI model to use for workflow execution.</p>
   */
  inline const Aws::String& GetModelId() const { return m_modelId; }
  inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
  template <typename ModelIdT = Aws::String>
  void SetModelId(ModelIdT&& value) {
    m_modelIdHasBeenSet = true;
    m_modelId = std::forward<ModelIdT>(value);
  }
  template <typename ModelIdT = Aws::String>
  CreateWorkflowRunRequest& WithModelId(ModelIdT&& value) {
    SetModelId(std::forward<ModelIdT>(value));
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
  CreateWorkflowRunRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudWatch log group name for storing workflow execution logs.</p>
   */
  inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
  inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
  template <typename LogGroupNameT = Aws::String>
  void SetLogGroupName(LogGroupNameT&& value) {
    m_logGroupNameHasBeenSet = true;
    m_logGroupName = std::forward<LogGroupNameT>(value);
  }
  template <typename LogGroupNameT = Aws::String>
  CreateWorkflowRunRequest& WithLogGroupName(LogGroupNameT&& value) {
    SetLogGroupName(std::forward<LogGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the client making the request, including compatibility
   * version and SDK version.</p>
   */
  inline const ClientInfo& GetClientInfo() const { return m_clientInfo; }
  inline bool ClientInfoHasBeenSet() const { return m_clientInfoHasBeenSet; }
  template <typename ClientInfoT = ClientInfo>
  void SetClientInfo(ClientInfoT&& value) {
    m_clientInfoHasBeenSet = true;
    m_clientInfo = std::forward<ClientInfoT>(value);
  }
  template <typename ClientInfoT = ClientInfo>
  CreateWorkflowRunRequest& WithClientInfo(ClientInfoT&& value) {
    SetClientInfo(std::forward<ClientInfoT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowDefinitionName;
  bool m_workflowDefinitionNameHasBeenSet = false;

  Aws::String m_modelId;
  bool m_modelIdHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  Aws::String m_logGroupName;
  bool m_logGroupNameHasBeenSet = false;

  ClientInfo m_clientInfo;
  bool m_clientInfoHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
