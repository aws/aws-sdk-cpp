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
class DeleteFirewallPolicyV2Request : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API DeleteFirewallPolicyV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteFirewallPolicyV2"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Next Generation policy.</p> <p>You must
   * specify the ARN or the name, and you can specify both. </p>
   */
  inline const Aws::String& GetFirewallPolicyV2Arn() const { return m_firewallPolicyV2Arn; }
  inline bool FirewallPolicyV2ArnHasBeenSet() const { return m_firewallPolicyV2ArnHasBeenSet; }
  template <typename FirewallPolicyV2ArnT = Aws::String>
  void SetFirewallPolicyV2Arn(FirewallPolicyV2ArnT&& value) {
    m_firewallPolicyV2ArnHasBeenSet = true;
    m_firewallPolicyV2Arn = std::forward<FirewallPolicyV2ArnT>(value);
  }
  template <typename FirewallPolicyV2ArnT = Aws::String>
  DeleteFirewallPolicyV2Request& WithFirewallPolicyV2Arn(FirewallPolicyV2ArnT&& value) {
    SetFirewallPolicyV2Arn(std::forward<FirewallPolicyV2ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive name of the Next Generation policy. You can't change the name
   * of a firewall policy after you create it.</p> <p>You must specify the ARN or the
   * name, and you can specify both. </p>
   */
  inline const Aws::String& GetFirewallPolicyV2Name() const { return m_firewallPolicyV2Name; }
  inline bool FirewallPolicyV2NameHasBeenSet() const { return m_firewallPolicyV2NameHasBeenSet; }
  template <typename FirewallPolicyV2NameT = Aws::String>
  void SetFirewallPolicyV2Name(FirewallPolicyV2NameT&& value) {
    m_firewallPolicyV2NameHasBeenSet = true;
    m_firewallPolicyV2Name = std::forward<FirewallPolicyV2NameT>(value);
  }
  template <typename FirewallPolicyV2NameT = Aws::String>
  DeleteFirewallPolicyV2Request& WithFirewallPolicyV2Name(FirewallPolicyV2NameT&& value) {
    SetFirewallPolicyV2Name(std::forward<FirewallPolicyV2NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_firewallPolicyV2Arn;

  Aws::String m_firewallPolicyV2Name;
  bool m_firewallPolicyV2ArnHasBeenSet = false;
  bool m_firewallPolicyV2NameHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
