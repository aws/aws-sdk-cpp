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
 * <p>The input for the BatchDisassociateFindingIssue operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchDisassociateFindingIssueInput">AWS
 * API Reference</a></p>
 */
class BatchDisassociateFindingIssueRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API BatchDisassociateFindingIssueRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchDisassociateFindingIssue"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the agent space where the job exists.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  BatchDisassociateFindingIssueRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the penetration test job. This parameter is mutually
   * exclusive with <code>codeReviewJobId</code>.</p>
   */
  inline const Aws::String& GetPentestJobId() const { return m_pentestJobId; }
  inline bool PentestJobIdHasBeenSet() const { return m_pentestJobIdHasBeenSet; }
  template <typename PentestJobIdT = Aws::String>
  void SetPentestJobId(PentestJobIdT&& value) {
    m_pentestJobIdHasBeenSet = true;
    m_pentestJobId = std::forward<PentestJobIdT>(value);
  }
  template <typename PentestJobIdT = Aws::String>
  BatchDisassociateFindingIssueRequest& WithPentestJobId(PentestJobIdT&& value) {
    SetPentestJobId(std::forward<PentestJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the code review job. This parameter is mutually exclusive
   * with <code>pentestJobId</code>.</p>
   */
  inline const Aws::String& GetCodeReviewJobId() const { return m_codeReviewJobId; }
  inline bool CodeReviewJobIdHasBeenSet() const { return m_codeReviewJobIdHasBeenSet; }
  template <typename CodeReviewJobIdT = Aws::String>
  void SetCodeReviewJobId(CodeReviewJobIdT&& value) {
    m_codeReviewJobIdHasBeenSet = true;
    m_codeReviewJobId = std::forward<CodeReviewJobIdT>(value);
  }
  template <typename CodeReviewJobIdT = Aws::String>
  BatchDisassociateFindingIssueRequest& WithCodeReviewJobId(CodeReviewJobIdT&& value) {
    SetCodeReviewJobId(std::forward<CodeReviewJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifiers of the findings to disassociate from their issues. Each must
   * belong to the specified job.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFindingIds() const { return m_findingIds; }
  inline bool FindingIdsHasBeenSet() const { return m_findingIdsHasBeenSet; }
  template <typename FindingIdsT = Aws::Vector<Aws::String>>
  void SetFindingIds(FindingIdsT&& value) {
    m_findingIdsHasBeenSet = true;
    m_findingIds = std::forward<FindingIdsT>(value);
  }
  template <typename FindingIdsT = Aws::Vector<Aws::String>>
  BatchDisassociateFindingIssueRequest& WithFindingIds(FindingIdsT&& value) {
    SetFindingIds(std::forward<FindingIdsT>(value));
    return *this;
  }
  template <typename FindingIdsT = Aws::String>
  BatchDisassociateFindingIssueRequest& AddFindingIds(FindingIdsT&& value) {
    m_findingIdsHasBeenSet = true;
    m_findingIds.emplace_back(std::forward<FindingIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_pentestJobId;

  Aws::String m_codeReviewJobId;

  Aws::Vector<Aws::String> m_findingIds;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_pentestJobIdHasBeenSet = false;
  bool m_codeReviewJobIdHasBeenSet = false;
  bool m_findingIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
