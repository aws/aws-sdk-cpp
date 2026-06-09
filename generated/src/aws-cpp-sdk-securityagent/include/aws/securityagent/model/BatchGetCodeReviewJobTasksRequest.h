/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 * <p>Input for retrieving multiple tasks associated with a code review
 * job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetCodeReviewJobTasksInput">AWS
 * API Reference</a></p>
 */
class BatchGetCodeReviewJobTasksRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API BatchGetCodeReviewJobTasksRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetCodeReviewJobTasks"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the agent space that contains the tasks.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  BatchGetCodeReviewJobTasksRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of task identifiers to retrieve.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCodeReviewJobTaskIds() const { return m_codeReviewJobTaskIds; }
  inline bool CodeReviewJobTaskIdsHasBeenSet() const { return m_codeReviewJobTaskIdsHasBeenSet; }
  template <typename CodeReviewJobTaskIdsT = Aws::Vector<Aws::String>>
  void SetCodeReviewJobTaskIds(CodeReviewJobTaskIdsT&& value) {
    m_codeReviewJobTaskIdsHasBeenSet = true;
    m_codeReviewJobTaskIds = std::forward<CodeReviewJobTaskIdsT>(value);
  }
  template <typename CodeReviewJobTaskIdsT = Aws::Vector<Aws::String>>
  BatchGetCodeReviewJobTasksRequest& WithCodeReviewJobTaskIds(CodeReviewJobTaskIdsT&& value) {
    SetCodeReviewJobTaskIds(std::forward<CodeReviewJobTaskIdsT>(value));
    return *this;
  }
  template <typename CodeReviewJobTaskIdsT = Aws::String>
  BatchGetCodeReviewJobTasksRequest& AddCodeReviewJobTaskIds(CodeReviewJobTaskIdsT&& value) {
    m_codeReviewJobTaskIdsHasBeenSet = true;
    m_codeReviewJobTaskIds.emplace_back(std::forward<CodeReviewJobTaskIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::Vector<Aws::String> m_codeReviewJobTaskIds;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_codeReviewJobTaskIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
