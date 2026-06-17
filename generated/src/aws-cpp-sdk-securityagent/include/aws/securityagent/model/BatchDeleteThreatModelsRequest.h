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
 * <p>Input for deleting multiple threat models.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchDeleteThreatModelsInput">AWS
 * API Reference</a></p>
 */
class BatchDeleteThreatModelsRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API BatchDeleteThreatModelsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteThreatModels"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The list of threat model identifiers to delete.</p>
   */
  inline const Aws::Vector<Aws::String>& GetThreatModelIds() const { return m_threatModelIds; }
  inline bool ThreatModelIdsHasBeenSet() const { return m_threatModelIdsHasBeenSet; }
  template <typename ThreatModelIdsT = Aws::Vector<Aws::String>>
  void SetThreatModelIds(ThreatModelIdsT&& value) {
    m_threatModelIdsHasBeenSet = true;
    m_threatModelIds = std::forward<ThreatModelIdsT>(value);
  }
  template <typename ThreatModelIdsT = Aws::Vector<Aws::String>>
  BatchDeleteThreatModelsRequest& WithThreatModelIds(ThreatModelIdsT&& value) {
    SetThreatModelIds(std::forward<ThreatModelIdsT>(value));
    return *this;
  }
  template <typename ThreatModelIdsT = Aws::String>
  BatchDeleteThreatModelsRequest& AddThreatModelIds(ThreatModelIdsT&& value) {
    m_threatModelIdsHasBeenSet = true;
    m_threatModelIds.emplace_back(std::forward<ThreatModelIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agent space that contains the threat models to
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
  BatchDeleteThreatModelsRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_threatModelIds;

  Aws::String m_agentSpaceId;
  bool m_threatModelIdsHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
