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

#include <utility>

namespace Aws {
namespace NetworkManager {
namespace Model {

/**
 */
class UpdateAttachmentNatConfigurationRequest : public NetworkManagerRequest {
 public:
  AWS_NETWORKMANAGER_API UpdateAttachmentNatConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAttachmentNatConfiguration"; }

  AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the attachment to update the NAT configuration for.</p>
   */
  inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
  inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
  template <typename AttachmentIdT = Aws::String>
  void SetAttachmentId(AttachmentIdT&& value) {
    m_attachmentIdHasBeenSet = true;
    m_attachmentId = std::forward<AttachmentIdT>(value);
  }
  template <typename AttachmentIdT = Aws::String>
  UpdateAttachmentNatConfigurationRequest& WithAttachmentId(AttachmentIdT&& value) {
    SetAttachmentId(std::forward<AttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to enable or disable NAT gateway support on the attachment.
   * When you disable NAT gateway support, the attachment keeps its NAT rules but
   * doesn't apply them. To enable NAT gateway support, the attachment must have at
   * least one NAT rule, either specified in this request or already configured on
   * the attachment. If you omit this parameter, NAT gateway support is
   * unchanged.</p>
   */
  inline NatGatewaySupportValue GetNatGatewaySupport() const { return m_natGatewaySupport; }
  inline bool NatGatewaySupportHasBeenSet() const { return m_natGatewaySupportHasBeenSet; }
  inline void SetNatGatewaySupport(NatGatewaySupportValue value) {
    m_natGatewaySupportHasBeenSet = true;
    m_natGatewaySupport = value;
  }
  inline UpdateAttachmentNatConfigurationRequest& WithNatGatewaySupport(NatGatewaySupportValue value) {
    SetNatGatewaySupport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the core network installs system routes for the NAT CIDR
   * blocks of the attachment's NAT rules. System routes have a route type of
   * <code>SYSTEM</code>. NAT is applied to traffic whether or not this option is
   * enabled. If you omit this parameter, the current value is unchanged.</p>
   */
  inline bool GetNatSystemRouteSupport() const { return m_natSystemRouteSupport; }
  inline bool NatSystemRouteSupportHasBeenSet() const { return m_natSystemRouteSupportHasBeenSet; }
  inline void SetNatSystemRouteSupport(bool value) {
    m_natSystemRouteSupportHasBeenSet = true;
    m_natSystemRouteSupport = value;
  }
  inline UpdateAttachmentNatConfigurationRequest& WithNatSystemRouteSupport(bool value) {
    SetNatSystemRouteSupport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The complete set of NAT rules for the attachment, up to 50 rules. The rules
   * that you specify replace the existing rules of the attachment, matched by rule
   * number. Existing rules that aren't included in the request are deleted. To
   * delete all NAT rules, specify an empty list. You can delete all NAT rules only
   * when NAT gateway support is disabled, or when you disable it in the same
   * request. If you omit this parameter, the existing rules are unchanged.</p>
   */
  inline const Aws::Vector<NatRuleRequest>& GetNatGatewayRules() const { return m_natGatewayRules; }
  inline bool NatGatewayRulesHasBeenSet() const { return m_natGatewayRulesHasBeenSet; }
  template <typename NatGatewayRulesT = Aws::Vector<NatRuleRequest>>
  void SetNatGatewayRules(NatGatewayRulesT&& value) {
    m_natGatewayRulesHasBeenSet = true;
    m_natGatewayRules = std::forward<NatGatewayRulesT>(value);
  }
  template <typename NatGatewayRulesT = Aws::Vector<NatRuleRequest>>
  UpdateAttachmentNatConfigurationRequest& WithNatGatewayRules(NatGatewayRulesT&& value) {
    SetNatGatewayRules(std::forward<NatGatewayRulesT>(value));
    return *this;
  }
  template <typename NatGatewayRulesT = NatRuleRequest>
  UpdateAttachmentNatConfigurationRequest& AddNatGatewayRules(NatGatewayRulesT&& value) {
    m_natGatewayRulesHasBeenSet = true;
    m_natGatewayRules.emplace_back(std::forward<NatGatewayRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client token associated with the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateAttachmentNatConfigurationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attachmentId;

  NatGatewaySupportValue m_natGatewaySupport{NatGatewaySupportValue::NOT_SET};

  bool m_natSystemRouteSupport{false};

  Aws::Vector<NatRuleRequest> m_natGatewayRules;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_attachmentIdHasBeenSet = false;
  bool m_natGatewaySupportHasBeenSet = false;
  bool m_natSystemRouteSupportHasBeenSet = false;
  bool m_natGatewayRulesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
