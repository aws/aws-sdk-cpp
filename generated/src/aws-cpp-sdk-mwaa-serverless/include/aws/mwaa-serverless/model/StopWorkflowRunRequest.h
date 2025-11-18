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
class StopWorkflowRunRequest : public MWAAServerlessRequest {
 public:
  AWS_MWAASERVERLESS_API StopWorkflowRunRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StopWorkflowRun"; }

  AWS_MWAASERVERLESS_API Aws::String SerializePayload() const override;

  AWS_MWAASERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow that contains the run you want
   * to stop.</p>
   */
  inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
  inline bool WorkflowArnHasBeenSet() const { return m_workflowArnHasBeenSet; }
  template <typename WorkflowArnT = Aws::String>
  void SetWorkflowArn(WorkflowArnT&& value) {
    m_workflowArnHasBeenSet = true;
    m_workflowArn = std::forward<WorkflowArnT>(value);
  }
  template <typename WorkflowArnT = Aws::String>
  StopWorkflowRunRequest& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the workflow run to stop.</p>
   */
  inline const Aws::String& GetRunId() const { return m_runId; }
  inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
  template <typename RunIdT = Aws::String>
  void SetRunId(RunIdT&& value) {
    m_runIdHasBeenSet = true;
    m_runId = std::forward<RunIdT>(value);
  }
  template <typename RunIdT = Aws::String>
  StopWorkflowRunRequest& WithRunId(RunIdT&& value) {
    SetRunId(std::forward<RunIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowArn;
  bool m_workflowArnHasBeenSet = false;

  Aws::String m_runId;
  bool m_runIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
