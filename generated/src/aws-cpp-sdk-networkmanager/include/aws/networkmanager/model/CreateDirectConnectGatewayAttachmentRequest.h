/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/NatGatewaySupportValue.h>
#include <aws/networkmanager/model/NatRuleRequest.h>
#include <aws/networkmanager/model/Tag.h>

#include <utility>

namespace Aws {
namespace NetworkManager {
namespace Model {

/**
 */
class CreateDirectConnectGatewayAttachmentRequest : public NetworkManagerRequest {
 public:
  AWS_NETWORKMANAGER_API CreateDirectConnectGatewayAttachmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDirectConnectGatewayAttachment"; }

  AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Cloud WAN core network that the Direct Connect gateway
   * attachment should be attached to.</p>
   */
  inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
  inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
  template <typename CoreNetworkIdT = Aws::String>
  void SetCoreNetworkId(CoreNetworkIdT&& value) {
    m_coreNetworkIdHasBeenSet = true;
    m_coreNetworkId = std::forward<CoreNetworkIdT>(value);
  }
  template <typename CoreNetworkIdT = Aws::String>
  CreateDirectConnectGatewayAttachmentRequest& WithCoreNetworkId(CoreNetworkIdT&& value) {
    SetCoreNetworkId(std::forward<CoreNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Direct Connect gateway attachment.</p>
   */
  inline const Aws::String& GetDirectConnectGatewayArn() const { return m_directConnectGatewayArn; }
  inline bool DirectConnectGatewayArnHasBeenSet() const { return m_directConnectGatewayArnHasBeenSet; }
  template <typename DirectConnectGatewayArnT = Aws::String>
  void SetDirectConnectGatewayArn(DirectConnectGatewayArnT&& value) {
    m_directConnectGatewayArnHasBeenSet = true;
    m_directConnectGatewayArn = std::forward<DirectConnectGatewayArnT>(value);
  }
  template <typename DirectConnectGatewayArnT = Aws::String>
  CreateDirectConnectGatewayAttachmentRequest& WithDirectConnectGatewayArn(DirectConnectGatewayArnT&& value) {
    SetDirectConnectGatewayArn(std::forward<DirectConnectGatewayArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The routing policy label to apply to the Direct Connect Gateway attachment
   * for traffic routing decisions.</p>
   */
  inline const Aws::String& GetRoutingPolicyLabel() const { return m_routingPolicyLabel; }
  inline bool RoutingPolicyLabelHasBeenSet() const { return m_routingPolicyLabelHasBeenSet; }
  template <typename RoutingPolicyLabelT = Aws::String>
  void SetRoutingPolicyLabel(RoutingPolicyLabelT&& value) {
    m_routingPolicyLabelHasBeenSet = true;
    m_routingPolicyLabel = std::forward<RoutingPolicyLabelT>(value);
  }
  template <typename RoutingPolicyLabelT = Aws::String>
  CreateDirectConnectGatewayAttachmentRequest& WithRoutingPolicyLabel(RoutingPolicyLabelT&& value) {
    SetRoutingPolicyLabel(std::forward<RoutingPolicyLabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more core network edge locations that the Direct Connect gateway
   * attachment is associated with. </p>
   */
  inline const Aws::Vector<Aws::String>& GetEdgeLocations() const { return m_edgeLocations; }
  inline bool EdgeLocationsHasBeenSet() const { return m_edgeLocationsHasBeenSet; }
  template <typename EdgeLocationsT = Aws::Vector<Aws::String>>
  void SetEdgeLocations(EdgeLocationsT&& value) {
    m_edgeLocationsHasBeenSet = true;
    m_edgeLocations = std::forward<EdgeLocationsT>(value);
  }
  template <typename EdgeLocationsT = Aws::Vector<Aws::String>>
  CreateDirectConnectGatewayAttachmentRequest& WithEdgeLocations(EdgeLocationsT&& value) {
    SetEdgeLocations(std::forward<EdgeLocationsT>(value));
    return *this;
  }
  template <typename EdgeLocationsT = Aws::String>
  CreateDirectConnectGatewayAttachmentRequest& AddEdgeLocations(EdgeLocationsT&& value) {
    m_edgeLocationsHasBeenSet = true;
    m_edgeLocations.emplace_back(std::forward<EdgeLocationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to enable NAT gateway support on the Direct Connect gateway
   * attachment. To enable NAT gateway support, you must also specify at least one
   * NAT rule. If you don't specify a value, NAT gateway support is disabled. Only
   * the core network owner can configure NAT on an attachment.</p>
   */
  inline NatGatewaySupportValue GetNatGatewaySupport() const { return m_natGatewaySupport; }
  inline bool NatGatewaySupportHasBeenSet() const { return m_natGatewaySupportHasBeenSet; }
  inline void SetNatGatewaySupport(NatGatewaySupportValue value) {
    m_natGatewaySupportHasBeenSet = true;
    m_natGatewaySupport = value;
  }
  inline CreateDirectConnectGatewayAttachmentRequest& WithNatGatewaySupport(NatGatewaySupportValue value) {
    SetNatGatewaySupport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the core network installs system routes for the NAT CIDR
   * blocks of the attachment's NAT rules. System routes have a route type of
   * <code>SYSTEM</code>. NAT is applied to traffic whether or not this option is
   * enabled. The default is <code>true</code>.</p>
   */
  inline bool GetNatSystemRouteSupport() const { return m_natSystemRouteSupport; }
  inline bool NatSystemRouteSupportHasBeenSet() const { return m_natSystemRouteSupportHasBeenSet; }
  inline void SetNatSystemRouteSupport(bool value) {
    m_natSystemRouteSupportHasBeenSet = true;
    m_natSystemRouteSupport = value;
  }
  inline CreateDirectConnectGatewayAttachmentRequest& WithNatSystemRouteSupport(bool value) {
    SetNatSystemRouteSupport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The NAT rules for the Direct Connect gateway attachment, up to 50 rules.</p>
   */
  inline const Aws::Vector<NatRuleRequest>& GetNatGatewayRules() const { return m_natGatewayRules; }
  inline bool NatGatewayRulesHasBeenSet() const { return m_natGatewayRulesHasBeenSet; }
  template <typename NatGatewayRulesT = Aws::Vector<NatRuleRequest>>
  void SetNatGatewayRules(NatGatewayRulesT&& value) {
    m_natGatewayRulesHasBeenSet = true;
    m_natGatewayRules = std::forward<NatGatewayRulesT>(value);
  }
  template <typename NatGatewayRulesT = Aws::Vector<NatRuleRequest>>
  CreateDirectConnectGatewayAttachmentRequest& WithNatGatewayRules(NatGatewayRulesT&& value) {
    SetNatGatewayRules(std::forward<NatGatewayRulesT>(value));
    return *this;
  }
  template <typename NatGatewayRulesT = NatRuleRequest>
  CreateDirectConnectGatewayAttachmentRequest& AddNatGatewayRules(NatGatewayRulesT&& value) {
    m_natGatewayRulesHasBeenSet = true;
    m_natGatewayRules.emplace_back(std::forward<NatGatewayRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key value tags to apply to the Direct Connect gateway attachment during
   * creation.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateDirectConnectGatewayAttachmentRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateDirectConnectGatewayAttachmentRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>client token</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateDirectConnectGatewayAttachmentRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_coreNetworkId;

  Aws::String m_directConnectGatewayArn;

  Aws::String m_routingPolicyLabel;

  Aws::Vector<Aws::String> m_edgeLocations;

  NatGatewaySupportValue m_natGatewaySupport{NatGatewaySupportValue::NOT_SET};

  bool m_natSystemRouteSupport{false};

  Aws::Vector<NatRuleRequest> m_natGatewayRules;

  Aws::Vector<Tag> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_coreNetworkIdHasBeenSet = false;
  bool m_directConnectGatewayArnHasBeenSet = false;
  bool m_routingPolicyLabelHasBeenSet = false;
  bool m_edgeLocationsHasBeenSet = false;
  bool m_natGatewaySupportHasBeenSet = false;
  bool m_natSystemRouteSupportHasBeenSet = false;
  bool m_natGatewayRulesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
