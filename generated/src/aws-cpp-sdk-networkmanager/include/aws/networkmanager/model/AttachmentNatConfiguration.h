/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/NatGatewaySupportState.h>
#include <aws/networkmanager/model/NatRule.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {

/**
 * <p>Describes the NAT configuration of a core network attachment.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AttachmentNatConfiguration">AWS
 * API Reference</a></p>
 */
class AttachmentNatConfiguration {
 public:
  AWS_NETWORKMANAGER_API AttachmentNatConfiguration() = default;
  AWS_NETWORKMANAGER_API AttachmentNatConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API AttachmentNatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the attachment.</p>
   */
  inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
  inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
  template <typename AttachmentIdT = Aws::String>
  void SetAttachmentId(AttachmentIdT&& value) {
    m_attachmentIdHasBeenSet = true;
    m_attachmentId = std::forward<AttachmentIdT>(value);
  }
  template <typename AttachmentIdT = Aws::String>
  AttachmentNatConfiguration& WithAttachmentId(AttachmentIdT&& value) {
    SetAttachmentId(std::forward<AttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of NAT gateway support on the attachment.</p>
   */
  inline NatGatewaySupportState GetNatGatewaySupport() const { return m_natGatewaySupport; }
  inline bool NatGatewaySupportHasBeenSet() const { return m_natGatewaySupportHasBeenSet; }
  inline void SetNatGatewaySupport(NatGatewaySupportState value) {
    m_natGatewaySupportHasBeenSet = true;
    m_natGatewaySupport = value;
  }
  inline AttachmentNatConfiguration& WithNatGatewaySupport(NatGatewaySupportState value) {
    SetNatGatewaySupport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the core network installs system routes for the NAT CIDR
   * blocks of the attachment's NAT rules.</p>
   */
  inline bool GetNatSystemRouteSupport() const { return m_natSystemRouteSupport; }
  inline bool NatSystemRouteSupportHasBeenSet() const { return m_natSystemRouteSupportHasBeenSet; }
  inline void SetNatSystemRouteSupport(bool value) {
    m_natSystemRouteSupportHasBeenSet = true;
    m_natSystemRouteSupport = value;
  }
  inline AttachmentNatConfiguration& WithNatSystemRouteSupport(bool value) {
    SetNatSystemRouteSupport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The NAT rules of the attachment.</p>
   */
  inline const Aws::Vector<NatRule>& GetNatGatewayRules() const { return m_natGatewayRules; }
  inline bool NatGatewayRulesHasBeenSet() const { return m_natGatewayRulesHasBeenSet; }
  template <typename NatGatewayRulesT = Aws::Vector<NatRule>>
  void SetNatGatewayRules(NatGatewayRulesT&& value) {
    m_natGatewayRulesHasBeenSet = true;
    m_natGatewayRules = std::forward<NatGatewayRulesT>(value);
  }
  template <typename NatGatewayRulesT = Aws::Vector<NatRule>>
  AttachmentNatConfiguration& WithNatGatewayRules(NatGatewayRulesT&& value) {
    SetNatGatewayRules(std::forward<NatGatewayRulesT>(value));
    return *this;
  }
  template <typename NatGatewayRulesT = NatRule>
  AttachmentNatConfiguration& AddNatGatewayRules(NatGatewayRulesT&& value) {
    m_natGatewayRulesHasBeenSet = true;
    m_natGatewayRules.emplace_back(std::forward<NatGatewayRulesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attachmentId;

  NatGatewaySupportState m_natGatewaySupport{NatGatewaySupportState::NOT_SET};

  bool m_natSystemRouteSupport{false};

  Aws::Vector<NatRule> m_natGatewayRules;
  bool m_attachmentIdHasBeenSet = false;
  bool m_natGatewaySupportHasBeenSet = false;
  bool m_natSystemRouteSupportHasBeenSet = false;
  bool m_natGatewayRulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
