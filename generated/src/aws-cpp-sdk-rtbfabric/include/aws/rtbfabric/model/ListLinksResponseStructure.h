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
#include <aws/rtbfabric/model/LinkStatus.h>
#include <aws/rtbfabric/model/ModuleConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>Describes a link.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/ListLinksResponseStructure">AWS
 * API Reference</a></p>
 */
class ListLinksResponseStructure {
 public:
  AWS_RTBFABRIC_API ListLinksResponseStructure() = default;
  AWS_RTBFABRIC_API ListLinksResponseStructure(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API ListLinksResponseStructure& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the gateway.</p>
   */
  inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
  inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
  template <typename GatewayIdT = Aws::String>
  void SetGatewayId(GatewayIdT&& value) {
    m_gatewayIdHasBeenSet = true;
    m_gatewayId = std::forward<GatewayIdT>(value);
  }
  template <typename GatewayIdT = Aws::String>
  ListLinksResponseStructure& WithGatewayId(GatewayIdT&& value) {
    SetGatewayId(std::forward<GatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the peer gateway.</p>
   */
  inline const Aws::String& GetPeerGatewayId() const { return m_peerGatewayId; }
  inline bool PeerGatewayIdHasBeenSet() const { return m_peerGatewayIdHasBeenSet; }
  template <typename PeerGatewayIdT = Aws::String>
  void SetPeerGatewayId(PeerGatewayIdT&& value) {
    m_peerGatewayIdHasBeenSet = true;
    m_peerGatewayId = std::forward<PeerGatewayIdT>(value);
  }
  template <typename PeerGatewayIdT = Aws::String>
  ListLinksResponseStructure& WithPeerGatewayId(PeerGatewayIdT&& value) {
    SetPeerGatewayId(std::forward<PeerGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the link.</p>
   */
  inline LinkStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(LinkStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListLinksResponseStructure& WithStatus(LinkStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the link was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ListLinksResponseStructure& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the link was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ListLinksResponseStructure& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The direction of the link.</p>
   */
  inline LinkDirection GetDirection() const { return m_direction; }
  inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
  inline void SetDirection(LinkDirection value) {
    m_directionHasBeenSet = true;
    m_direction = value;
  }
  inline ListLinksResponseStructure& WithDirection(LinkDirection value) {
    SetDirection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the configuration of flow modules.</p>
   */
  inline const Aws::Vector<ModuleConfiguration>& GetFlowModules() const { return m_flowModules; }
  inline bool FlowModulesHasBeenSet() const { return m_flowModulesHasBeenSet; }
  template <typename FlowModulesT = Aws::Vector<ModuleConfiguration>>
  void SetFlowModules(FlowModulesT&& value) {
    m_flowModulesHasBeenSet = true;
    m_flowModules = std::forward<FlowModulesT>(value);
  }
  template <typename FlowModulesT = Aws::Vector<ModuleConfiguration>>
  ListLinksResponseStructure& WithFlowModules(FlowModulesT&& value) {
    SetFlowModules(std::forward<FlowModulesT>(value));
    return *this;
  }
  template <typename FlowModulesT = ModuleConfiguration>
  ListLinksResponseStructure& AddFlowModules(FlowModulesT&& value) {
    m_flowModulesHasBeenSet = true;
    m_flowModules.emplace_back(std::forward<FlowModulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the configuration of pending flow modules.</p>
   */
  inline const Aws::Vector<ModuleConfiguration>& GetPendingFlowModules() const { return m_pendingFlowModules; }
  inline bool PendingFlowModulesHasBeenSet() const { return m_pendingFlowModulesHasBeenSet; }
  template <typename PendingFlowModulesT = Aws::Vector<ModuleConfiguration>>
  void SetPendingFlowModules(PendingFlowModulesT&& value) {
    m_pendingFlowModulesHasBeenSet = true;
    m_pendingFlowModules = std::forward<PendingFlowModulesT>(value);
  }
  template <typename PendingFlowModulesT = Aws::Vector<ModuleConfiguration>>
  ListLinksResponseStructure& WithPendingFlowModules(PendingFlowModulesT&& value) {
    SetPendingFlowModules(std::forward<PendingFlowModulesT>(value));
    return *this;
  }
  template <typename PendingFlowModulesT = ModuleConfiguration>
  ListLinksResponseStructure& AddPendingFlowModules(PendingFlowModulesT&& value) {
    m_pendingFlowModulesHasBeenSet = true;
    m_pendingFlowModules.emplace_back(std::forward<PendingFlowModulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes attributes of a link.</p>
   */
  inline const LinkAttributes& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = LinkAttributes>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = LinkAttributes>
  ListLinksResponseStructure& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the link.</p>
   */
  inline const Aws::String& GetLinkId() const { return m_linkId; }
  inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }
  template <typename LinkIdT = Aws::String>
  void SetLinkId(LinkIdT&& value) {
    m_linkIdHasBeenSet = true;
    m_linkId = std::forward<LinkIdT>(value);
  }
  template <typename LinkIdT = Aws::String>
  ListLinksResponseStructure& WithLinkId(LinkIdT&& value) {
    SetLinkId(std::forward<LinkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of the key-value pairs of the tag or tags to assign to the
   * resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  ListLinksResponseStructure& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  ListLinksResponseStructure& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
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
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
