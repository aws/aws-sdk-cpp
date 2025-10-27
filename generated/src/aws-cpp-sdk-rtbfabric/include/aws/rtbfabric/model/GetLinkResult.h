/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/LinkAttributes.h>
#include <aws/rtbfabric/model/LinkDirection.h>
#include <aws/rtbfabric/model/LinkLogSettings.h>
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
class GetLinkResult {
 public:
  AWS_RTBFABRIC_API GetLinkResult() = default;
  AWS_RTBFABRIC_API GetLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RTBFABRIC_API GetLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  GetLinkResult& WithGatewayId(GatewayIdT&& value) {
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
  GetLinkResult& WithPeerGatewayId(PeerGatewayIdT&& value) {
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
  inline GetLinkResult& WithStatus(LinkStatus value) {
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
  GetLinkResult& WithCreatedAt(CreatedAtT&& value) {
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
  GetLinkResult& WithUpdatedAt(UpdatedAtT&& value) {
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
  inline GetLinkResult& WithDirection(LinkDirection value) {
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
  GetLinkResult& WithFlowModules(FlowModulesT&& value) {
    SetFlowModules(std::forward<FlowModulesT>(value));
    return *this;
  }
  template <typename FlowModulesT = ModuleConfiguration>
  GetLinkResult& AddFlowModules(FlowModulesT&& value) {
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
  GetLinkResult& WithPendingFlowModules(PendingFlowModulesT&& value) {
    SetPendingFlowModules(std::forward<PendingFlowModulesT>(value));
    return *this;
  }
  template <typename PendingFlowModulesT = ModuleConfiguration>
  GetLinkResult& AddPendingFlowModules(PendingFlowModulesT&& value) {
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
  GetLinkResult& WithAttributes(AttributesT&& value) {
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
  GetLinkResult& WithLinkId(LinkIdT&& value) {
    SetLinkId(std::forward<LinkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of the key-value pairs for the tag or tags assigned to the specified
   * resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetLinkResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetLinkResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Settings for the application logs.</p>
   */
  inline const LinkLogSettings& GetLogSettings() const { return m_logSettings; }
  template <typename LogSettingsT = LinkLogSettings>
  void SetLogSettings(LogSettingsT&& value) {
    m_logSettingsHasBeenSet = true;
    m_logSettings = std::forward<LogSettingsT>(value);
  }
  template <typename LogSettingsT = LinkLogSettings>
  GetLinkResult& WithLogSettings(LogSettingsT&& value) {
    SetLogSettings(std::forward<LogSettingsT>(value));
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
  GetLinkResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayId;
  bool m_gatewayIdHasBeenSet = false;

  Aws::String m_peerGatewayId;
  bool m_peerGatewayIdHasBeenSet = false;

  LinkStatus m_status{LinkStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  LinkDirection m_direction{LinkDirection::NOT_SET};
  bool m_directionHasBeenSet = false;

  Aws::Vector<ModuleConfiguration> m_flowModules;
  bool m_flowModulesHasBeenSet = false;

  Aws::Vector<ModuleConfiguration> m_pendingFlowModules;
  bool m_pendingFlowModulesHasBeenSet = false;

  LinkAttributes m_attributes;
  bool m_attributesHasBeenSet = false;

  Aws::String m_linkId;
  bool m_linkIdHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;

  LinkLogSettings m_logSettings;
  bool m_logSettingsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
