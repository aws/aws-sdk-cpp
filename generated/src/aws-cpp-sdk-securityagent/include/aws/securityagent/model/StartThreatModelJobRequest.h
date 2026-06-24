/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 * <p>Input for starting a threat model job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/StartThreatModelJobInput">AWS
 * API Reference</a></p>
 */
class StartThreatModelJobRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API StartThreatModelJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartThreatModelJob"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

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
  StartThreatModelJobRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the threat model to start a job for.</p>
   */
  inline const Aws::String& GetThreatModelId() const { return m_threatModelId; }
  inline bool ThreatModelIdHasBeenSet() const { return m_threatModelIdHasBeenSet; }
  template <typename ThreatModelIdT = Aws::String>
  void SetThreatModelId(ThreatModelIdT&& value) {
    m_threatModelIdHasBeenSet = true;
    m_threatModelId = std::forward<ThreatModelIdT>(value);
  }
  template <typename ThreatModelIdT = Aws::String>
  StartThreatModelJobRequest& WithThreatModelId(ThreatModelIdT&& value) {
    SetThreatModelId(std::forward<ThreatModelIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_threatModelId;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_threatModelIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
