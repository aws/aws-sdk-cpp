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
 * <p>Input for retrieving multiple threats.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetThreatsInput">AWS
 * API Reference</a></p>
 */
class BatchGetThreatsRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API BatchGetThreatsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetThreats"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The list of threat identifiers to retrieve.</p>
   */
  inline const Aws::Vector<Aws::String>& GetThreatIds() const { return m_threatIds; }
  inline bool ThreatIdsHasBeenSet() const { return m_threatIdsHasBeenSet; }
  template <typename ThreatIdsT = Aws::Vector<Aws::String>>
  void SetThreatIds(ThreatIdsT&& value) {
    m_threatIdsHasBeenSet = true;
    m_threatIds = std::forward<ThreatIdsT>(value);
  }
  template <typename ThreatIdsT = Aws::Vector<Aws::String>>
  BatchGetThreatsRequest& WithThreatIds(ThreatIdsT&& value) {
    SetThreatIds(std::forward<ThreatIdsT>(value));
    return *this;
  }
  template <typename ThreatIdsT = Aws::String>
  BatchGetThreatsRequest& AddThreatIds(ThreatIdsT&& value) {
    m_threatIdsHasBeenSet = true;
    m_threatIds.emplace_back(std::forward<ThreatIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agent space.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  BatchGetThreatsRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_threatIds;

  Aws::String m_agentSpaceId;
  bool m_threatIdsHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
