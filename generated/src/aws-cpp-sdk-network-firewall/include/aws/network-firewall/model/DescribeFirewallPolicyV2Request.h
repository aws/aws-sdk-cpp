/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/RuleOutputFormat.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class DescribeFirewallPolicyV2Request : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API DescribeFirewallPolicyV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeFirewallPolicyV2"; }

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
  DescribeFirewallPolicyV2Request& WithFirewallPolicyV2Arn(FirewallPolicyV2ArnT&& value) {
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
  DescribeFirewallPolicyV2Request& WithFirewallPolicyV2Name(FirewallPolicyV2NameT&& value) {
    SetFirewallPolicyV2Name(std::forward<FirewallPolicyV2NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format in which to return the rules of any firewall engine rule groups
   * that are embedded in the policy. Specify <code>FIREWALL_RULES</code> for
   * structured <code>FirewallRule</code> objects or <code>RULES_STRING</code> for a
   * Suricata-compatible firewall-mode rule string. If you don't specify a format,
   * Network Firewall returns each embedded rule group in the format you provided it
   * in. Referenced rule groups aren't affected.</p>
   */
  inline RuleOutputFormat GetRuleOutputFormat() const { return m_ruleOutputFormat; }
  inline bool RuleOutputFormatHasBeenSet() const { return m_ruleOutputFormatHasBeenSet; }
  inline void SetRuleOutputFormat(RuleOutputFormat value) {
    m_ruleOutputFormatHasBeenSet = true;
    m_ruleOutputFormat = value;
  }
  inline DescribeFirewallPolicyV2Request& WithRuleOutputFormat(RuleOutputFormat value) {
    SetRuleOutputFormat(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_firewallPolicyV2Arn;

  Aws::String m_firewallPolicyV2Name;

  RuleOutputFormat m_ruleOutputFormat{RuleOutputFormat::NOT_SET};
  bool m_firewallPolicyV2ArnHasBeenSet = false;
  bool m_firewallPolicyV2NameHasBeenSet = false;
  bool m_ruleOutputFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
