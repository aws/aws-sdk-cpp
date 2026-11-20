/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/FirewallType.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class UpdateFirewallDeleteProtectionRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API UpdateFirewallDeleteProtectionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateFirewallDeleteProtection"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>An optional token that you can use for optimistic locking. Network Firewall
   * returns a token to your requests that access the firewall. The token marks the
   * state of the firewall resource at the time of the request. </p> <p>To make an
   * unconditional change to the firewall, omit the token in your update request.
   * Without the token, Network Firewall performs your updates regardless of whether
   * the firewall has changed since you last retrieved it.</p> <p>To make a
   * conditional change to the firewall, provide the token in your update request.
   * Network Firewall uses the token to ensure that the firewall hasn't changed since
   * you last retrieved it. If it has changed, the operation fails with an
   * <code>InvalidTokenException</code>. If this happens, retrieve the firewall again
   * to get a current copy of it with a new token. Reapply your changes as needed,
   * then try the operation again using the new token. </p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  UpdateFirewallDeleteProtectionRequest& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
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
  UpdateFirewallDeleteProtectionRequest& WithFirewallArn(FirewallArnT&& value) {
    SetFirewallArn(std::forward<FirewallArnT>(value));
    return *this;
  }
  ///@}

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
  UpdateFirewallDeleteProtectionRequest& WithFirewallName(FirewallNameT&& value) {
    SetFirewallName(std::forward<FirewallNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A flag indicating whether it is possible to delete the firewall. A setting of
   * <code>TRUE</code> indicates that the firewall is protected against deletion. Use
   * this setting to protect against accidentally deleting a firewall that is in use.
   * When you create a firewall, the operation initializes this flag to
   * <code>TRUE</code>.</p>
   */
  inline bool GetDeleteProtection() const { return m_deleteProtection; }
  inline bool DeleteProtectionHasBeenSet() const { return m_deleteProtectionHasBeenSet; }
  inline void SetDeleteProtection(bool value) {
    m_deleteProtectionHasBeenSet = true;
    m_deleteProtection = value;
  }
  inline UpdateFirewallDeleteProtectionRequest& WithDeleteProtection(bool value) {
    SetDeleteProtection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of firewall that the request targets. Network Firewall supports the
   * following firewall types:</p> <ul> <li> <p> <code>IGW_FIREWALL</code> - An
   * internet gateway firewall, which Amazon Web Services Network Security Manager
   * creates and manages for a VPC.</p> </li> <li> <p> <code>FIREWALL</code> - A
   * standard Network Firewall firewall.</p> </li> </ul> <p>If you specify the
   * firewall ARN, the type must match the resource type in the ARN. If you specify
   * only the firewall name, Network Firewall uses this value to identify the
   * firewall. If you don't specify a type, the default is <code>FIREWALL</code>.</p>
   */
  inline FirewallType GetFirewallType() const { return m_firewallType; }
  inline bool FirewallTypeHasBeenSet() const { return m_firewallTypeHasBeenSet; }
  inline void SetFirewallType(FirewallType value) {
    m_firewallTypeHasBeenSet = true;
    m_firewallType = value;
  }
  inline UpdateFirewallDeleteProtectionRequest& WithFirewallType(FirewallType value) {
    SetFirewallType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_updateToken;

  Aws::String m_firewallArn;

  Aws::String m_firewallName;

  bool m_deleteProtection{false};

  FirewallType m_firewallType{FirewallType::NOT_SET};
  bool m_updateTokenHasBeenSet = false;
  bool m_firewallArnHasBeenSet = false;
  bool m_firewallNameHasBeenSet = false;
  bool m_deleteProtectionHasBeenSet = false;
  bool m_firewallTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
