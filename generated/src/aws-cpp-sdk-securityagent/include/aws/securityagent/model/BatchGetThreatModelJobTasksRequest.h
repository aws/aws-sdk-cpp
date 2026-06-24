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
 * <p>Input for retrieving multiple tasks associated with a threat model
 * job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetThreatModelJobTasksInput">AWS
 * API Reference</a></p>
 */
class BatchGetThreatModelJobTasksRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API BatchGetThreatModelJobTasksRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetThreatModelJobTasks"; }

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
  BatchGetThreatModelJobTasksRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of task identifiers to retrieve.</p>
   */
  inline const Aws::Vector<Aws::String>& GetThreatModelJobTaskIds() const { return m_threatModelJobTaskIds; }
  inline bool ThreatModelJobTaskIdsHasBeenSet() const { return m_threatModelJobTaskIdsHasBeenSet; }
  template <typename ThreatModelJobTaskIdsT = Aws::Vector<Aws::String>>
  void SetThreatModelJobTaskIds(ThreatModelJobTaskIdsT&& value) {
    m_threatModelJobTaskIdsHasBeenSet = true;
    m_threatModelJobTaskIds = std::forward<ThreatModelJobTaskIdsT>(value);
  }
  template <typename ThreatModelJobTaskIdsT = Aws::Vector<Aws::String>>
  BatchGetThreatModelJobTasksRequest& WithThreatModelJobTaskIds(ThreatModelJobTaskIdsT&& value) {
    SetThreatModelJobTaskIds(std::forward<ThreatModelJobTaskIdsT>(value));
    return *this;
  }
  template <typename ThreatModelJobTaskIdsT = Aws::String>
  BatchGetThreatModelJobTasksRequest& AddThreatModelJobTaskIds(ThreatModelJobTaskIdsT&& value) {
    m_threatModelJobTaskIdsHasBeenSet = true;
    m_threatModelJobTaskIds.emplace_back(std::forward<ThreatModelJobTaskIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::Vector<Aws::String> m_threatModelJobTaskIds;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_threatModelJobTaskIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
