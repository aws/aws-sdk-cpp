/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/DevOpsAgentConnectionStatus.h>

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
 * <p>The current DevOps Agent integration state for a service. Read operations
 * return this state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/DevOpsAgentConfigurationView">AWS
 * API Reference</a></p>
 */
class DevOpsAgentConfigurationView {
 public:
  AWS_RESILIENCEHUBV2_API DevOpsAgentConfigurationView() = default;
  AWS_RESILIENCEHUBV2_API DevOpsAgentConfigurationView(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API DevOpsAgentConfigurationView& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the linked DevOps Agent Agent Space.</p>
   */
  inline const Aws::String& GetAgentSpaceArn() const { return m_agentSpaceArn; }
  inline bool AgentSpaceArnHasBeenSet() const { return m_agentSpaceArnHasBeenSet; }
  template <typename AgentSpaceArnT = Aws::String>
  void SetAgentSpaceArn(AgentSpaceArnT&& value) {
    m_agentSpaceArnHasBeenSet = true;
    m_agentSpaceArn = std::forward<AgentSpaceArnT>(value);
  }
  template <typename AgentSpaceArnT = Aws::String>
  DevOpsAgentConfigurationView& WithAgentSpaceArn(AgentSpaceArnT&& value) {
    SetAgentSpaceArn(std::forward<AgentSpaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the linked DevOps Agent Agent Space.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  DevOpsAgentConfigurationView& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Region of the linked DevOps Agent Agent Space.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  DevOpsAgentConfigurationView& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection status of the DevOps Agent integration for this service. Valid
   * values:</p> <ul> <li> <p>CONNECTING - The service is being connected to the
   * Agent Space.</p> </li> <li> <p>CONNECTED - The service is connected to the Agent
   * Space.</p> </li> <li> <p>DISCONNECTED - The service is not connected to an Agent
   * Space.</p> </li> <li> <p>FAILED - The connection attempt failed. See
   * statusReason for details.</p> </li> </ul>
   */
  inline DevOpsAgentConnectionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DevOpsAgentConnectionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DevOpsAgentConfigurationView& WithStatus(DevOpsAgentConnectionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the DevOps Agent Operator App for the linked Agent Space. This URL
   * is present when the connection status is CONNECTED.</p>
   */
  inline const Aws::String& GetOperatorAppUrl() const { return m_operatorAppUrl; }
  inline bool OperatorAppUrlHasBeenSet() const { return m_operatorAppUrlHasBeenSet; }
  template <typename OperatorAppUrlT = Aws::String>
  void SetOperatorAppUrl(OperatorAppUrlT&& value) {
    m_operatorAppUrlHasBeenSet = true;
    m_operatorAppUrl = std::forward<OperatorAppUrlT>(value);
  }
  template <typename OperatorAppUrlT = Aws::String>
  DevOpsAgentConfigurationView& WithOperatorAppUrl(OperatorAppUrlT&& value) {
    SetOperatorAppUrl(std::forward<OperatorAppUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the service successfully connected to the DevOps Agent
   * Agent Space.</p>
   */
  inline const Aws::Utils::DateTime& GetConnectedAt() const { return m_connectedAt; }
  inline bool ConnectedAtHasBeenSet() const { return m_connectedAtHasBeenSet; }
  template <typename ConnectedAtT = Aws::Utils::DateTime>
  void SetConnectedAt(ConnectedAtT&& value) {
    m_connectedAtHasBeenSet = true;
    m_connectedAt = std::forward<ConnectedAtT>(value);
  }
  template <typename ConnectedAtT = Aws::Utils::DateTime>
  DevOpsAgentConfigurationView& WithConnectedAt(ConnectedAtT&& value) {
    SetConnectedAt(std::forward<ConnectedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable explanation of the current connection status. This field
   * explains the status when the connection fails.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  DevOpsAgentConfigurationView& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceArn;

  Aws::String m_agentSpaceId;

  Aws::String m_region;

  DevOpsAgentConnectionStatus m_status{DevOpsAgentConnectionStatus::NOT_SET};

  Aws::String m_operatorAppUrl;

  Aws::Utils::DateTime m_connectedAt{};

  Aws::String m_statusReason;
  bool m_agentSpaceArnHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_operatorAppUrlHasBeenSet = false;
  bool m_connectedAtHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
