/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class DeleteFirewallRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API DeleteFirewallRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteFirewall"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The descriptive name of the firewall. You can't change the name of a firewall
   * after you create it.</p> <p>You must specify the ARN or the name, and you can
   * specify both. </p>
   */
  inline const Aws::String& GetFirewallName() const { return m_firewallName; }
  inline bool FirewallNameHasBeenSet() const { return m_firewallNameHasBeenSet; }
  template <typename FirewallNameT = Aws::String>
  void SetFirewallName(FirewallNameT&& value) {
    m_firewallNameHasBeenSet = true;
    m_firewallName = std::forward<FirewallNameT>(value);
  }
  template <typename FirewallNameT = Aws::String>
  DeleteFirewallRequest& WithFirewallName(FirewallNameT&& value) {
    SetFirewallName(std::forward<FirewallNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the firewall.</p> <p>You must specify the
   * ARN or the name, and you can specify both. </p>
   */
  inline const Aws::String& GetFirewallArn() const { return m_firewallArn; }
  inline bool FirewallArnHasBeenSet() const { return m_firewallArnHasBeenSet; }
  template <typename FirewallArnT = Aws::String>
  void SetFirewallArn(FirewallArnT&& value) {
    m_firewallArnHasBeenSet = true;
    m_firewallArn = std::forward<FirewallArnT>(value);
  }
  template <typename FirewallArnT = Aws::String>
  DeleteFirewallRequest& WithFirewallArn(FirewallArnT&& value) {
    SetFirewallArn(std::forward<FirewallArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to delete the NAT gateways that Network Firewall created
   * for a proxy mode firewall when you delete the firewall. You can choose from the
   * following values:</p> <ul> <li> <p> <code>FALSE</code> - Network Firewall
   * detaches the NAT gateways from the firewall and keeps them. This is the
   * default.</p> </li> <li> <p> <code>TRUE</code> - Network Firewall also deletes
   * the NAT gateways. The firewall status stays <code>DELETING</code> until they're
   * deleted. You need permission to call the Amazon EC2
   * <code>DeleteNatGateway</code> action.</p> </li> </ul> <p>You can't specify
   * <code>TRUE</code> for a firewall that isn't a proxy mode firewall.</p>
   */
  inline bool GetDeleteAssociatedNatGateways() const { return m_deleteAssociatedNatGateways; }
  inline bool DeleteAssociatedNatGatewaysHasBeenSet() const { return m_deleteAssociatedNatGatewaysHasBeenSet; }
  inline void SetDeleteAssociatedNatGateways(bool value) {
    m_deleteAssociatedNatGatewaysHasBeenSet = true;
    m_deleteAssociatedNatGateways = value;
  }
  inline DeleteFirewallRequest& WithDeleteAssociatedNatGateways(bool value) {
    SetDeleteAssociatedNatGateways(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_firewallName;

  Aws::String m_firewallArn;

  bool m_deleteAssociatedNatGateways{false};
  bool m_firewallNameHasBeenSet = false;
  bool m_firewallArnHasBeenSet = false;
  bool m_deleteAssociatedNatGatewaysHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
