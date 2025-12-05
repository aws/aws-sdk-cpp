/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/LinkAttributes.h>
#include <aws/rtbfabric/model/LinkDirection.h>
#include <aws/rtbfabric/model/LinkStatus.h>
#include <aws/rtbfabric/model/ModuleConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {
class AcceptLinkResult {
 public:
  AWS_RTBFABRIC_API AcceptLinkResult() = default;
  AWS_RTBFABRIC_API AcceptLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RTBFABRIC_API AcceptLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the gateway.</p>
   */
  inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
  template <typename GatewayIdT = Aws::String>
  void SetGatewayId(GatewayIdT&& value) {
    m_gatewayIdHasBeenSet = true;
    m_gatewayId = std::forward<GatewayIdT>(value);
  }
  template <typename GatewayIdT = Aws::String>
  AcceptLinkResult& WithGatewayId(GatewayIdT&& value) {
    SetGatewayId(std::forward<GatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the peer gateway.</p>
   */
  inline const Aws::String& GetPeerGatewayId() const { return m_peerGatewayId; }
  template <typename PeerGatewayIdT = Aws::String>
  void SetPeerGatewayId(PeerGatewayIdT&& value) {
    m_peerGatewayIdHasBeenSet = true;
    m_peerGatewayId = std::forward<PeerGatewayIdT>(value);
  }
  template <typename PeerGatewayIdT = Aws::String>
  AcceptLinkResult& WithPeerGatewayId(PeerGatewayIdT&& value) {
    SetPeerGatewayId(std::forward<PeerGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the link.</p>
   */
  inline LinkStatus GetStatus() const { return m_status; }
  inline void SetStatus(LinkStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AcceptLinkResult& WithStatus(LinkStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the link was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AcceptLinkResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the link was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AcceptLinkResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The direction of the link.</p>
   */
  inline LinkDirection GetDirection() const { return m_direction; }
  inline void SetDirection(LinkDirection value) {
    m_directionHasBeenSet = true;
    m_direction = value;
  }
  inline AcceptLinkResult& WithDirection(LinkDirection value) {
    SetDirection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of flow modules.</p>
   */
  inline const Aws::Vector<ModuleConfiguration>& GetFlowModules() const { return m_flowModules; }
  template <typename FlowModulesT = Aws::Vector<ModuleConfiguration>>
  void SetFlowModules(FlowModulesT&& value) {
    m_flowModulesHasBeenSet = true;
    m_flowModules = std::forward<FlowModulesT>(value);
  }
  template <typename FlowModulesT = Aws::Vector<ModuleConfiguration>>
  AcceptLinkResult& WithFlowModules(FlowModulesT&& value) {
    SetFlowModules(std::forward<FlowModulesT>(value));
    return *this;
  }
  template <typename FlowModulesT = ModuleConfiguration>
  AcceptLinkResult& AddFlowModules(FlowModulesT&& value) {
    m_flowModulesHasBeenSet = true;
    m_flowModules.emplace_back(std::forward<FlowModulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of pending flow modules.</p>
   */
  inline const Aws::Vector<ModuleConfiguration>& GetPendingFlowModules() const { return m_pendingFlowModules; }
  template <typename PendingFlowModulesT = Aws::Vector<ModuleConfiguration>>
  void SetPendingFlowModules(PendingFlowModulesT&& value) {
    m_pendingFlowModulesHasBeenSet = true;
    m_pendingFlowModules = std::forward<PendingFlowModulesT>(value);
  }
  template <typename PendingFlowModulesT = Aws::Vector<ModuleConfiguration>>
  AcceptLinkResult& WithPendingFlowModules(PendingFlowModulesT&& value) {
    SetPendingFlowModules(std::forward<PendingFlowModulesT>(value));
    return *this;
  }
  template <typename PendingFlowModulesT = ModuleConfiguration>
  AcceptLinkResult& AddPendingFlowModules(PendingFlowModulesT&& value) {
    m_pendingFlowModulesHasBeenSet = true;
    m_pendingFlowModules.emplace_back(std::forward<PendingFlowModulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Attributes of the link.</p>
   */
  inline const LinkAttributes& GetAttributes() const { return m_attributes; }
  template <typename AttributesT = LinkAttributes>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = LinkAttributes>
  AcceptLinkResult& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the link.</p>
   */
  inline const Aws::String& GetLinkId() const { return m_linkId; }
  template <typename LinkIdT = Aws::String>
  void SetLinkId(LinkIdT&& value) {
    m_linkIdHasBeenSet = true;
    m_linkId = std::forward<LinkIdT>(value);
  }
  template <typename LinkIdT = Aws::String>
  AcceptLinkResult& WithLinkId(LinkIdT&& value) {
    SetLinkId(std::forward<LinkIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  AcceptLinkResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayId;

  Aws::String m_peerGatewayId;

  LinkStatus m_status{LinkStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  LinkDirection m_direction{LinkDirection::NOT_SET};

  Aws::Vector<ModuleConfiguration> m_flowModules;

  Aws::Vector<ModuleConfiguration> m_pendingFlowModules;

  LinkAttributes m_attributes;

  Aws::String m_linkId;

  Aws::String m_requestId;
  bool m_gatewayIdHasBeenSet = false;
  bool m_peerGatewayIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_directionHasBeenSet = false;
  bool m_flowModulesHasBeenSet = false;
  bool m_pendingFlowModulesHasBeenSet = false;
  bool m_attributesHasBeenSet = false;
  bool m_linkIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
