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
 * <p>Input for batch retrieving agent spaces</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetAgentSpacesInput">AWS
 * API Reference</a></p>
 */
class BatchGetAgentSpacesRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API BatchGetAgentSpacesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetAgentSpaces"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>List of agent space IDs to retrieve</p>
   */
  inline const Aws::Vector<Aws::String>& GetAgentSpaceIds() const { return m_agentSpaceIds; }
  inline bool AgentSpaceIdsHasBeenSet() const { return m_agentSpaceIdsHasBeenSet; }
  template <typename AgentSpaceIdsT = Aws::Vector<Aws::String>>
  void SetAgentSpaceIds(AgentSpaceIdsT&& value) {
    m_agentSpaceIdsHasBeenSet = true;
    m_agentSpaceIds = std::forward<AgentSpaceIdsT>(value);
  }
  template <typename AgentSpaceIdsT = Aws::Vector<Aws::String>>
  BatchGetAgentSpacesRequest& WithAgentSpaceIds(AgentSpaceIdsT&& value) {
    SetAgentSpaceIds(std::forward<AgentSpaceIdsT>(value));
    return *this;
  }
  template <typename AgentSpaceIdsT = Aws::String>
  BatchGetAgentSpacesRequest& AddAgentSpaceIds(AgentSpaceIdsT&& value) {
    m_agentSpaceIdsHasBeenSet = true;
    m_agentSpaceIds.emplace_back(std::forward<AgentSpaceIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_agentSpaceIds;
  bool m_agentSpaceIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
