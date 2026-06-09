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
 * <p>Input for BatchGetCodeReviewJobs operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetCodeReviewJobsInput">AWS
 * API Reference</a></p>
 */
class BatchGetCodeReviewJobsRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API BatchGetCodeReviewJobsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetCodeReviewJobs"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The list of code review job identifiers to retrieve.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCodeReviewJobIds() const { return m_codeReviewJobIds; }
  inline bool CodeReviewJobIdsHasBeenSet() const { return m_codeReviewJobIdsHasBeenSet; }
  template <typename CodeReviewJobIdsT = Aws::Vector<Aws::String>>
  void SetCodeReviewJobIds(CodeReviewJobIdsT&& value) {
    m_codeReviewJobIdsHasBeenSet = true;
    m_codeReviewJobIds = std::forward<CodeReviewJobIdsT>(value);
  }
  template <typename CodeReviewJobIdsT = Aws::Vector<Aws::String>>
  BatchGetCodeReviewJobsRequest& WithCodeReviewJobIds(CodeReviewJobIdsT&& value) {
    SetCodeReviewJobIds(std::forward<CodeReviewJobIdsT>(value));
    return *this;
  }
  template <typename CodeReviewJobIdsT = Aws::String>
  BatchGetCodeReviewJobsRequest& AddCodeReviewJobIds(CodeReviewJobIdsT&& value) {
    m_codeReviewJobIdsHasBeenSet = true;
    m_codeReviewJobIds.emplace_back(std::forward<CodeReviewJobIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agent space that contains the code review
   * jobs.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  BatchGetCodeReviewJobsRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_codeReviewJobIds;

  Aws::String m_agentSpaceId;
  bool m_codeReviewJobIdsHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
