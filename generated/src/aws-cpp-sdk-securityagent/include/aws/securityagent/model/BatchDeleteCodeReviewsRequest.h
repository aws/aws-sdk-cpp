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
 * <p>Input for deleting multiple code reviews.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchDeleteCodeReviewsInput">AWS
 * API Reference</a></p>
 */
class BatchDeleteCodeReviewsRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API BatchDeleteCodeReviewsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteCodeReviews"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The list of code review identifiers to delete.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCodeReviewIds() const { return m_codeReviewIds; }
  inline bool CodeReviewIdsHasBeenSet() const { return m_codeReviewIdsHasBeenSet; }
  template <typename CodeReviewIdsT = Aws::Vector<Aws::String>>
  void SetCodeReviewIds(CodeReviewIdsT&& value) {
    m_codeReviewIdsHasBeenSet = true;
    m_codeReviewIds = std::forward<CodeReviewIdsT>(value);
  }
  template <typename CodeReviewIdsT = Aws::Vector<Aws::String>>
  BatchDeleteCodeReviewsRequest& WithCodeReviewIds(CodeReviewIdsT&& value) {
    SetCodeReviewIds(std::forward<CodeReviewIdsT>(value));
    return *this;
  }
  template <typename CodeReviewIdsT = Aws::String>
  BatchDeleteCodeReviewsRequest& AddCodeReviewIds(CodeReviewIdsT&& value) {
    m_codeReviewIdsHasBeenSet = true;
    m_codeReviewIds.emplace_back(std::forward<CodeReviewIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agent space that contains the code reviews to
   * delete.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  BatchDeleteCodeReviewsRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_codeReviewIds;

  Aws::String m_agentSpaceId;
  bool m_codeReviewIdsHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
