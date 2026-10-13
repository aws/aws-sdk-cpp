/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>The AWS DevOps Agent (DevOps Agent) integration configuration that you supply
 * when creating or updating a service. Connecting a service to a DevOps Agent
 * Agent Space lets DevOps Agent investigate the service's resilience test runs and
 * attach its analysis to the results. Include this block with an Agent Space
 * Amazon Resource Name (ARN) to connect or reconnect the service to an Agent
 * Space. Include it without an Agent Space ARN to disconnect the service. Omit it
 * to leave the existing linkage unchanged.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/DevOpsAgentConfiguration">AWS
 * API Reference</a></p>
 */
class DevOpsAgentConfiguration {
 public:
  AWS_RESILIENCEHUBV2_API DevOpsAgentConfiguration() = default;
  AWS_RESILIENCEHUBV2_API DevOpsAgentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API DevOpsAgentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the DevOps Agent Agent Space to link to this service.</p>
   */
  inline const Aws::String& GetAgentSpaceArn() const { return m_agentSpaceArn; }
  inline bool AgentSpaceArnHasBeenSet() const { return m_agentSpaceArnHasBeenSet; }
  template <typename AgentSpaceArnT = Aws::String>
  void SetAgentSpaceArn(AgentSpaceArnT&& value) {
    m_agentSpaceArnHasBeenSet = true;
    m_agentSpaceArn = std::forward<AgentSpaceArnT>(value);
  }
  template <typename AgentSpaceArnT = Aws::String>
  DevOpsAgentConfiguration& WithAgentSpaceArn(AgentSpaceArnT&& value) {
    SetAgentSpaceArn(std::forward<AgentSpaceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceArn;
  bool m_agentSpaceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
