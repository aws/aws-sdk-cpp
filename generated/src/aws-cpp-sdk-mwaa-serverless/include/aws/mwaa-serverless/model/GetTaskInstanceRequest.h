/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerlessRequest.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

#include <utility>

namespace Aws {
namespace MWAAServerless {
namespace Model {

/**
 */
class GetTaskInstanceRequest : public MWAAServerlessRequest {
 public:
  AWS_MWAASERVERLESS_API GetTaskInstanceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetTaskInstance"; }

  AWS_MWAASERVERLESS_API Aws::String SerializePayload() const override;

  AWS_MWAASERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow that contains the task
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
  GetTaskInstanceRequest& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the task instance to retrieve.</p>
   */
  inline const Aws::String& GetTaskInstanceId() const { return m_taskInstanceId; }
  inline bool TaskInstanceIdHasBeenSet() const { return m_taskInstanceIdHasBeenSet; }
  template <typename TaskInstanceIdT = Aws::String>
  void SetTaskInstanceId(TaskInstanceIdT&& value) {
    m_taskInstanceIdHasBeenSet = true;
    m_taskInstanceId = std::forward<TaskInstanceIdT>(value);
  }
  template <typename TaskInstanceIdT = Aws::String>
  GetTaskInstanceRequest& WithTaskInstanceId(TaskInstanceIdT&& value) {
    SetTaskInstanceId(std::forward<TaskInstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the workflow run that contains the task
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
  GetTaskInstanceRequest& WithRunId(RunIdT&& value) {
    SetRunId(std::forward<RunIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowArn;

  Aws::String m_taskInstanceId;

  Aws::String m_runId;
  bool m_workflowArnHasBeenSet = false;
  bool m_taskInstanceIdHasBeenSet = false;
  bool m_runIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
