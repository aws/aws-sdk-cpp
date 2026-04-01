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
 * <p>Input for BatchGetFindings operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetFindingsInput">AWS
 * API Reference</a></p>
 */
class BatchGetFindingsRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API BatchGetFindingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetFindings"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>List of finding IDs to retrieve</p>
   */
  inline const Aws::Vector<Aws::String>& GetFindingIds() const { return m_findingIds; }
  inline bool FindingIdsHasBeenSet() const { return m_findingIdsHasBeenSet; }
  template <typename FindingIdsT = Aws::Vector<Aws::String>>
  void SetFindingIds(FindingIdsT&& value) {
    m_findingIdsHasBeenSet = true;
    m_findingIds = std::forward<FindingIdsT>(value);
  }
  template <typename FindingIdsT = Aws::Vector<Aws::String>>
  BatchGetFindingsRequest& WithFindingIds(FindingIdsT&& value) {
    SetFindingIds(std::forward<FindingIdsT>(value));
    return *this;
  }
  template <typename FindingIdsT = Aws::String>
  BatchGetFindingsRequest& AddFindingIds(FindingIdsT&& value) {
    m_findingIdsHasBeenSet = true;
    m_findingIds.emplace_back(std::forward<FindingIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ID of the agent space where the findings exist</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  BatchGetFindingsRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_findingIds;

  Aws::String m_agentSpaceId;
  bool m_findingIdsHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
