/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaActRequest.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

#include <utility>

namespace Aws {
namespace NovaAct {
namespace Model {

/**
 */
class GetWorkflowDefinitionRequest : public NovaActRequest {
 public:
  AWS_NOVAACT_API GetWorkflowDefinitionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetWorkflowDefinition"; }

  AWS_NOVAACT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workflow definition to retrieve.</p>
   */
  inline const Aws::String& GetWorkflowDefinitionName() const { return m_workflowDefinitionName; }
  inline bool WorkflowDefinitionNameHasBeenSet() const { return m_workflowDefinitionNameHasBeenSet; }
  template <typename WorkflowDefinitionNameT = Aws::String>
  void SetWorkflowDefinitionName(WorkflowDefinitionNameT&& value) {
    m_workflowDefinitionNameHasBeenSet = true;
    m_workflowDefinitionName = std::forward<WorkflowDefinitionNameT>(value);
  }
  template <typename WorkflowDefinitionNameT = Aws::String>
  GetWorkflowDefinitionRequest& WithWorkflowDefinitionName(WorkflowDefinitionNameT&& value) {
    SetWorkflowDefinitionName(std::forward<WorkflowDefinitionNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowDefinitionName;
  bool m_workflowDefinitionNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
